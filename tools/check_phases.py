#!/usr/bin/env python3
import re, hashlib

def gen_uuid(seed):
    h = hashlib.sha256(seed.encode()).hexdigest()
    return h[8:32].upper()

content = open('build/cocos2d_libs.xcodeproj/project.pbxproj').read()
sbp_s = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e = content.find('/* End PBXSourcesBuildPhase section */')

mac_uuid = '1551A33B158F2AB200E66CFE'
ios_uuid = 'A07A4C251783777C0073F6A7'
mac_pos = content.find(mac_uuid, sbp_s, sbp_e)
ios_pos = content.find(ios_uuid, sbp_s, sbp_e)
mac_phase = content[mac_pos:ios_pos]
ios_phase = content[ios_pos:sbp_e]

# Check how many spine4v2 UUIDs are in each phase
import os
spine4_cpps = sorted([f for f in os.listdir('cocos/editor-support/spine4') if f.endswith('.cpp')])
jsb_cpps = ['jsb_cocos2dx_spine4_auto.cpp', 'jsb_spine4_manual.cpp']
all_cpps = spine4_cpps + jsb_cpps

mac_found = sum(1 for f in all_cpps if gen_uuid(f'spine4v2_build_mac_{f}') in mac_phase)
ios_found = sum(1 for f in all_cpps if gen_uuid(f'spine4v2_build_ios_{f}') in ios_phase)
print(f'Mac phase: {mac_found}/{len(all_cpps)} spine4 entries found')
print(f'iOS phase: {ios_found}/{len(all_cpps)} spine4 entries found')

# List any missing
mac_missing = [f for f in all_cpps if gen_uuid(f'spine4v2_build_mac_{f}') not in mac_phase]
ios_missing = [f for f in all_cpps if gen_uuid(f'spine4v2_build_ios_{f}') not in ios_phase]
if mac_missing:
    print(f'Mac missing: {mac_missing[:5]}')
if ios_missing:
    print(f'iOS missing: {ios_missing[:5]}')
