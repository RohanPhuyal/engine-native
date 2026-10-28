#!/usr/bin/env python3
import os
import subprocess
import shutil
import glob

IPHONEOS_DIR = "/Volumes/Untitled/cocos-custom/engine-native/external/ios/libs-iphoneos"
SIM_DIR = "/Volumes/Untitled/cocos-custom/engine-native/external/ios/libs-iphonesimulator"
WORK_DIR = "/tmp/transmogrify_work"
ARM64_TO_SIM = "/Users/rpanepal/.local/bin/arm64-to-sim"

def unpack_ar(ar_path, out_dir):
    os.makedirs(out_dir, exist_ok=True)
    with open(ar_path, "rb") as f:
        magic = f.read(8)
        assert magic == b"!<arch>\n", f"Not an ar archive: {magic}"
        idx = 0
        while True:
            hdr = f.read(60)
            if len(hdr) < 60:
                break
            name = hdr[:16].decode("latin1", "ignore").strip()
            size_str = hdr[48:58].decode("latin1", "ignore").strip()
            size = int(size_str)
            data = f.read(size)
            if size % 2 == 1:
                f.read(1)
            if "__.SYMDEF" in name or name == "/":
                continue
            if name.startswith("#1/"):
                nlen = int(name[3:])
                real_name = data[:nlen].decode("latin1", "ignore").rstrip("\x00")
                obj_data = data[nlen:]
            else:
                real_name = name
                obj_data = data
            if real_name.startswith("__.SYMDEF"):
                continue
            out_name = f"{idx:04d}_{real_name}"
            with open(os.path.join(out_dir, out_name), "wb") as out_f:
                out_f.write(obj_data)
            idx += 1
    return idx

os.makedirs(SIM_DIR, exist_ok=True)
libs = glob.glob(os.path.join(IPHONEOS_DIR, "*.a"))
print(f"Processing {len(libs)} libraries...")

for lib_path in libs:
    lib_name = os.path.basename(lib_path)
    print(f"\nProcessing {lib_name}...")
    
    res = subprocess.run(["lipo", "-info", lib_path], capture_output=True, text=True)
    has_arm64 = "arm64" in res.stdout
    has_x86_64 = "x86_64" in res.stdout
    
    if not has_arm64:
        print(f"  No arm64 slice, copying as-is.")
        shutil.copy2(lib_path, os.path.join(SIM_DIR, lib_name))
        continue
        
    temp_dir = os.path.join(WORK_DIR, lib_name)
    shutil.rmtree(temp_dir, ignore_errors=True)
    os.makedirs(temp_dir, exist_ok=True)
    
    arm64_thin = os.path.join(temp_dir, "arm64.a")
    subprocess.run(["lipo", "-thin", "arm64", lib_path, "-output", arm64_thin], check=True)
    
    obj_dir = os.path.join(temp_dir, "objs")
    count = unpack_ar(arm64_thin, obj_dir)
    print(f"  Extracted {count} objects.")
    
    obj_files = glob.glob(os.path.join(obj_dir, "*.o"))
    batch_size = 200
    for i in range(0, len(obj_files), batch_size):
        batch = obj_files[i:i + batch_size]
        subprocess.run([ARM64_TO_SIM] + batch, check=True)
        
    sim_arm64_a = os.path.join(temp_dir, "sim_arm64.a")
    subprocess.run(["libtool", "-static", "-o", sim_arm64_a] + obj_files, check=True)
    
    dest_path = os.path.join(SIM_DIR, lib_name)
    if has_x86_64:
        x86_thin = os.path.join(temp_dir, "x86_64.a")
        subprocess.run(["lipo", "-thin", "x86_64", lib_path, "-output", x86_thin], check=True)
        subprocess.run(["lipo", "-create", sim_arm64_a, x86_thin, "-output", dest_path], check=True)
        print(f"  Created fat simulator library (arm64 + x86_64): {dest_path}")
    else:
        shutil.copy2(sim_arm64_a, dest_path)
        print(f"  Created thin arm64 simulator library: {dest_path}")

print("\nAll libraries generated successfully!")
