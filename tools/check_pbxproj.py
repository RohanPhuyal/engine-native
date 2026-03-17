#!/usr/bin/env python3
import re
content = open('build/cocos2d_libs.xcodeproj/project.pbxproj').read()
sbp_s = content.find('/* Begin PBXSourcesBuildPhase section */')
sbp_e = content.find('/* End PBXSourcesBuildPhase section */')
sbp_section = content[sbp_s:sbp_e]

# Check Animation.cpp in sources
anim_count = sbp_section.count('Animation.cpp in Sources')
print(f'Animation.cpp in Sources: {anim_count}')

# Check jsb_spine4_manual in sources
jsb4_count = sbp_section.count('jsb_spine4_manual')
print(f'jsb_spine4_manual in sources: {jsb4_count}')

# What's the total line count in spine section?
print(f'Total spine4 refs in project: {content.count("spine4")}')
print(f'Total spine4 refs in sources section: {sbp_section.count("spine4")}')

# Check Mac phase specifically
mac_uuid = '1551A33B158F2AB200E66CFE'
mac_pos = content.find(mac_uuid, sbp_s, sbp_e)
ios_uuid = 'A07A4C251783777C0073F6A7'
ios_pos = content.find(ios_uuid, sbp_s, sbp_e)
print(f'Mac phase at: {mac_pos - sbp_s}')
print(f'iOS phase at: {ios_pos - sbp_s}')

# Get Mac phase content
mac_phase_content = content[mac_pos:ios_pos]
print(f'Mac phase Animation.cpp count: {mac_phase_content.count("Animation.cpp")}')
print(f'Mac phase jsb_spine4 count: {mac_phase_content.count("spine4")}')

# Get iOS phase content
ios_phase_content = content[ios_pos:sbp_e]
print(f'iOS phase Animation.cpp count: {ios_phase_content.count("Animation.cpp")}')
print(f'iOS phase jsb_spine4 count: {ios_phase_content.count("spine4")}')
