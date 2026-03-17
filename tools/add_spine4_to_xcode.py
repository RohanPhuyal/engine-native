#!/usr/bin/env python3
"""Add all spine4 source files to cocos2d_libs.xcodeproj from a clean baseline."""

import re, os, hashlib

PBXPROJ = '/Users/rpanepal/Desktop/engine-native/build/cocos2d_libs.xcodeproj/project.pbxproj'
SPINE4_DIR = '/Users/rpanepal/Desktop/engine-native/cocos/editor-support/spine4'
COCOS_DIR = '/Users/rpanepal/Desktop/engine-native/cocos'

def gen_uuid(seed):
    h = hashlib.sha256(seed.encode()).hexdigest()
    return h[8:32].upper()

# All spine4 implementation cpp files
spine4_cpps = sorted([f for f in os.listdir(SPINE4_DIR) if f.endswith('.cpp')])
print(f'spine4 cpp files: {len(spine4_cpps)}')

# JSB files (paths relative to project root cocos/)
jsb_files = [
    ('jsb_cocos2dx_spine4_auto.cpp', '../cocos/scripting/js-bindings/auto/jsb_cocos2dx_spine4_auto.cpp', 'sourcecode.cpp.cpp'),
    ('jsb_cocos2dx_spine4_auto.hpp', '../cocos/scripting/js-bindings/auto/jsb_cocos2dx_spine4_auto.hpp', 'sourcecode.cpp.h'),
    ('jsb_spine4_manual.cpp',        '../cocos/scripting/js-bindings/manual/jsb_spine4_manual.cpp',        'sourcecode.cpp.cpp'),
    ('jsb_spine4_manual.hpp',        '../cocos/scripting/js-bindings/manual/jsb_spine4_manual.hpp',        'sourcecode.cpp.h'),
]
jsb_src_files = ['jsb_cocos2dx_spine4_auto.cpp', 'jsb_spine4_manual.cpp']  # compiled files

# All files needing PBXFileReference
all_files = [(f, f'../cocos/editor-support/spine4/{f}',
              'sourcecode.cpp.cpp' if f.endswith('.cpp') else 'sourcecode.cpp.h')
             for f in spine4_cpps] + jsb_files

# Generate deterministic UUIDs
fileref_uuid  = {name: gen_uuid(f'spine4v2_fileref_{name}') for name, _, _ in all_files}
build_mac_uuid = {name: gen_uuid(f'spine4v2_build_mac_{name}') for name, _, _ in all_files if name.endswith('.cpp')}
build_ios_uuid = {name: gen_uuid(f'spine4v2_build_ios_{name}') for name, _, _ in all_files if name.endswith('.cpp')}

content = open(PBXPROJ).read()

# Verify section markers exist
fr_end  = content.find('/* End PBXFileReference section */')
bf_end  = content.find('/* End PBXBuildFile section */')
sbp_s   = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e   = content.find('/* End PBXSourcesBuildPhase section */')
assert all(x >= 0 for x in [fr_end, bf_end, sbp_s, sbp_e]), 'Missing section markers'

# Collision check - all new UUIDs
new_uuids = set(fileref_uuid.values()) | set(build_mac_uuid.values()) | set(build_ios_uuid.values())
collisions = [u for u in new_uuids if re.search(r'(?<![0-9A-Fa-f])' + u + r'(?![0-9A-Fa-f])', content)]
if collisions:
    print(f'ERROR: UUID collisions: {collisions[:3]}'); exit(1)
print(f'UUID OK ({len(new_uuids)} new)')

# ---- 1. PBXFileReference section ----
new_fr = []
for name, path, ftype in all_files:
    uuid = fileref_uuid[name]
    new_fr.append(f'\t\t{uuid} /* {name} */ = {{isa = PBXFileReference; lastKnownFileType = {ftype}; name = {name}; path = "{path}"; sourceTree = SOURCE_ROOT; }};\n')
ins = content.rfind('\n', 0, fr_end) + 1
content = content[:ins] + ''.join(new_fr) + content[ins:]
print(f'Added {len(new_fr)} PBXFileReference entries')

# Recalculate
bf_end = content.find('/* End PBXBuildFile section */')
sbp_s  = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e  = content.find('/* End PBXSourcesBuildPhase section */')

# ---- 2. PBXBuildFile section ----
new_bf = []
# All .cpp files get iOS + Mac build file entries
for name, path, ftype in all_files:
    if not name.endswith('.cpp'): continue
    fref = fileref_uuid[name]
    ios_u = build_ios_uuid[name]
    mac_u = build_mac_uuid[name]
    new_bf.append(f'\t\t{ios_u} /* {name} in Sources */ = {{isa = PBXBuildFile; fileRef = {fref} /* {name} */; }};\n')
    new_bf.append(f'\t\t{mac_u} /* {name} in Sources */ = {{isa = PBXBuildFile; fileRef = {fref} /* {name} */; }};\n')
ins = content.rfind('\n', 0, bf_end) + 1
content = content[:ins] + ''.join(new_bf) + content[ins:]
print(f'Added {len(new_bf)} PBXBuildFile entries')

# Recalculate
sbp_s = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e = content.find('/* End PBXSourcesBuildPhase section */')

# ---- 3. PBXSourcesBuildPhase ----
# Mac phase UUID: 1551A33B158F2AB200E66CFE  (comes first in section)
# iOS phase UUID: A07A4C251783777C0073F6A7 (comes second in section)

def get_phase_bounds(c, phase_uuid, section_start, section_end):
    """Find start and end char position of a build phase."""
    uuid_pos = c.find(phase_uuid, section_start, section_end)
    if uuid_pos == -1: return None, None
    # The phase starts at the opening { before 'files =' list
    # Find the 'files = (' and then ')'
    files_open = c.find('files = (', uuid_pos, section_end)
    paren_close = c.find(');', files_open, section_end)
    return files_open, paren_close

# Add to Mac phase - insert just before ');
# Find the spine3 jsb anchor in the Mac phase
mac_phase_uuid = '1551A33B158F2AB200E66CFE'
ios_phase_uuid = 'A07A4C251783777C0073F6A7'

mac_files_open, mac_paren_close = get_phase_bounds(content, mac_phase_uuid, sbp_s, sbp_e)
assert mac_files_open >= 0, 'Mac phase files not found'

# For Mac: spine3 anchor = jsb_spine_manual.cpp used by Mac target  
# The Mac jsb_spine_manual entry is 046B68A721A292D300B33469
mac_anchor = '046B68A721A292D300B33469 /* jsb_spine_manual.cpp in Sources */'
mac_anchor_pos = content.find(mac_anchor, mac_files_open, mac_paren_close)
if mac_anchor_pos == -1:
    # fallback: insert at start of files list
    mac_anchor_pos = content.find('\n', mac_files_open) + 0
    # Insert at the start of the list
    mac_ins = content.find('\n', mac_files_open) + 1
else:
    mac_ins = content.find('\n', mac_anchor_pos) + 1

new_mac = [f'\t\t\t\t{build_mac_uuid[n]} /* {n} in Sources */,\n' for n, _, t in all_files if n.endswith('.cpp')]
content = content[:mac_ins] + ''.join(new_mac) + content[mac_ins:]
print(f'Added {len(new_mac)} to Mac Sources phase')

# Recalculate section bounds 
sbp_s = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e = content.find('/* End PBXSourcesBuildPhase section */')
ios_files_open, ios_paren_close = get_phase_bounds(content, ios_phase_uuid, sbp_s, sbp_e)
assert ios_files_open >= 0, 'iOS phase files not found'

# For iOS: use spine3 jsb anchor = 046B68A621A292D300B33469 /* jsb_spine_manual.cpp in Sources */
ios_anchor = '046B68A621A292D300B33469 /* jsb_spine_manual.cpp in Sources */'
ios_anchor_pos = content.find(ios_anchor, ios_files_open, ios_paren_close)
if ios_anchor_pos == -1:
    ios_ins = content.find('\n', ios_files_open) + 1
else:
    ios_ins = content.find('\n', ios_anchor_pos) + 1

new_ios = [f'\t\t\t\t{build_ios_uuid[n]} /* {n} in Sources */,\n' for n, _, t in all_files if n.endswith('.cpp')]
content = content[:ios_ins] + ''.join(new_ios) + content[ios_ins:]
print(f'Added {len(new_ios)} to iOS Sources phase')

with open(PBXPROJ, 'w') as fh:
    fh.write(content)
print('Done!')


# All spine4 cpp files
spine4_cpps = sorted([f for f in os.listdir(SPINE4_DIR) if f.endswith('.cpp')])
print(f"Total spine4 cpp files: {len(spine4_cpps)}")

# Existing PBXFileReference UUIDs for spine4 cpp files (discovered from existing project)
existing_fileref = {
    'InheritTimeline.cpp':        'F6844B87A91644A69D82894B',
    'Log.cpp':                    '4E634ED8B7182B6F92CE45EE',
    'PhysicsConstraint.cpp':      '56B04422B50953D0FD21DF43',
    'PhysicsConstraintData.cpp':  'BFE042E39F29316D21F4EF95',
    'PhysicsConstraintTimeline.cpp': 'D272489E9B445319B9561DCC',
    'Sequence.cpp':               'A91841BD8AED82AE13E48089',
    'SequenceTimeline.cpp':       '3FCB45BF944CAE2F07430D38',
}

# Existing PBXBuildFile UUIDs for the 3 files that have iOS entries
existing_build_ios = {
    'InheritTimeline.cpp':   '78D14811A81F9ADC83775150',
    'Log.cpp':               'A24C4AB9A9D3EEB9DAB50484',
    'PhysicsConstraintData.cpp': '74AC4867A012E4679762F196',
}

# For all spine4 cpp files, determine fileref UUID
fileref_uuids = {}
for f in spine4_cpps:
    if f in existing_fileref:
        fileref_uuids[f] = existing_fileref[f]
    else:
        fileref_uuids[f] = gen_uuid(f'spine4_fileref_{f}')

# Generate PBXBuildFile UUIDs for iOS (phase 0) and Mac (phase 1)
build_ios_uuids = {}
for f in spine4_cpps:
    if f in existing_build_ios:
        build_ios_uuids[f] = existing_build_ios[f]
    else:
        build_ios_uuids[f] = gen_uuid(f'spine4_build_ios_{f}')

build_mac_uuids = {f: gen_uuid(f'spine4_build_mac_{f}') for f in spine4_cpps}

# Read the project file
content = open(PBXPROJ).read()

# Find section boundaries
fr_end = content.find('/* End PBXFileReference section */')
bf_end = content.find('/* End PBXBuildFile section */')
sbp_start = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_end   = content.find('/* End PBXSourcesBuildPhase section */')
assert all(x >= 0 for x in [fr_end, bf_end, sbp_start, sbp_end]), 'Missing section markers'

# Check for UUID collisions
all_new_uuids = (set(fileref_uuids.values()) - set(existing_fileref.values())) | \
                (set(build_ios_uuids.values()) - set(existing_build_ios.values())) | \
                set(build_mac_uuids.values())
collisions = [u for u in all_new_uuids if re.search(r'(?<![0-9A-Fa-f])' + u + r'(?![0-9A-Fa-f])', content)]
if collisions:
    print(f'ERROR: UUID collisions found: {collisions[:3]}')
    exit(1)
print(f'UUID check passed ({len(all_new_uuids)} new UUIDs)')

# ============== 1. Add missing PBXFileReference entries ==============
# Insert before /* End PBXFileReference section */
new_filerefs = []
for f in spine4_cpps:
    if f not in existing_fileref:
        uuid = fileref_uuids[f]
        path = f'../cocos/editor-support/spine4/{f}'
        entry = f'\t\t{uuid} /* {f} */ = {{isa = PBXFileReference; lastKnownFileType = sourcecode.cpp.cpp; name = {f}; path = "{path}"; sourceTree = SOURCE_ROOT; }};\n'
        new_filerefs.append(entry)

ins = content.rfind('\n', 0, fr_end) + 1
content = content[:ins] + ''.join(new_filerefs) + content[ins:]
print(f'Added {len(new_filerefs)} PBXFileReference entries')

# Recalculate after insertion
bf_end = content.find('/* End PBXBuildFile section */')
sbp_start = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_end   = content.find('/* End PBXSourcesBuildPhase section */')

# ============== 2. Add PBXBuildFile entries ==============
# Insert before /* End PBXBuildFile section */
new_buildfiles = []
for f in spine4_cpps:
    fref = fileref_uuids[f]
    ios_uuid = build_ios_uuids[f]
    if f not in existing_build_ios:
        entry = f'\t\t{ios_uuid} /* {f} in Sources */ = {{isa = PBXBuildFile; fileRef = {fref} /* {f} */; }};\n'
        new_buildfiles.append(entry)
    mac_uuid = build_mac_uuids[f]
    entry = f'\t\t{mac_uuid} /* {f} in Sources */ = {{isa = PBXBuildFile; fileRef = {fref} /* {f} */; }};\n'
    new_buildfiles.append(entry)

ins = content.rfind('\n', 0, bf_end) + 1
content = content[:ins] + ''.join(new_buildfiles) + content[ins:]
print(f'Added {len(new_buildfiles)} PBXBuildFile entries')

# Recalculate
sbp_start = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_end   = content.find('/* End PBXSourcesBuildPhase section */')

# ============== 3. Add to PBXSourcesBuildPhase ==============
# Find both Sources build phases within the section
sbp_section = content[sbp_start:sbp_end]
phases = list(re.finditer(r'/\* Sources \*/ = \{.*?\n\t\t\}', sbp_section, re.DOTALL))
print(f'Found {len(phases)} source phases')
if len(phases) != 2:
    print('ERROR: expected 2 source phases'); exit(1)

p0_abs_start = sbp_start + phases[0].start()
p0_abs_end   = sbp_start + phases[0].end()
p1_abs_start = sbp_start + phases[1].start()
p1_abs_end   = sbp_start + phases[1].end()

# iOS phase anchor
ios_anchor = '56A747448722336D40846DCE /* jsb_spine4_manual.cpp in Sources */'
ios_pos = content.find(ios_anchor, p0_abs_start, p0_abs_end)
if ios_pos == -1:
    ios_anchor = 'C4C9434ABB1A3934826D6B48 /* jsb_cocos2dx_spine4_auto.cpp in Sources */'
    ios_pos = content.find(ios_anchor, p0_abs_start, p0_abs_end)
assert ios_pos >= 0, 'iOS anchor not found'

ios_line_end = content.find('\n', ios_pos) + 1
new_ios_entries = [f'\t\t\t\t{build_ios_uuids[f]} /* {f} in Sources */,\n'
                   for f in spine4_cpps if build_ios_uuids[f] not in content]
content = content[:ios_line_end] + ''.join(new_ios_entries) + content[ios_line_end:]
print(f'Added {len(new_ios_entries)} to iOS Sources phase')

# Recalculate phase 1 after iOS insertion
sbp_start = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_end   = content.find('/* End PBXSourcesBuildPhase section */')
sbp_section = content[sbp_start:sbp_end]
phases = list(re.finditer(r'/\* Sources \*/ = \{.*?\n\t\t\}', sbp_section, re.DOTALL))
p1_abs_start = sbp_start + phases[1].start()
p1_abs_end   = sbp_start + phases[1].end()

# Mac phase anchor
mac_anchor = '8C2A4B62AD4E7C9A6F82C3AE /* jsb_spine4_manual.cpp in Sources */'
mac_pos = content.find(mac_anchor, p1_abs_start, p1_abs_end)
if mac_pos == -1:
    mac_anchor = '95B348D28170709507EAF595 /* jsb_cocos2dx_spine4_auto.cpp in Sources */'
    mac_pos = content.find(mac_anchor, p1_abs_start, p1_abs_end)
assert mac_pos >= 0, 'Mac anchor not found'

mac_line_end = content.find('\n', mac_pos) + 1
new_mac_entries = [f'\t\t\t\t{build_mac_uuids[f]} /* {f} in Sources */,\n' for f in spine4_cpps]
content = content[:mac_line_end] + ''.join(new_mac_entries) + content[mac_line_end:]
print(f'Added {len(new_mac_entries)} to Mac Sources phase')

# Write back
with open(PBXPROJ, 'w') as fh:
    fh.write(content)

print("\nDone! Summary:")
print(f"  - {len([f for f in spine4_cpps if f not in existing_fileref])} new PBXFileReference entries added")
print(f"  - {len(new_buildfiles)} new PBXBuildFile entries added")
print(f"  - {len(new_ios_entries)} entries added to iOS Sources phase")
print(f"  - {len(new_mac_entries)} entries added to Mac Sources phase")
print("  - File written to", PBXPROJ)
