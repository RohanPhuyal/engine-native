# Mac Build

## Changes

- Initialized external dependencies required by native build:
  - `python download-deps.py --remove-download no`
- Initialized git submodules:
  - `git submodule update --init`
- Built mac simulator directly with `xcodebuild` (without `gulp`).
- On Apple Silicon, `arm64` mac simulator build failed because bundled external mac static libs are `x86_64` only.
- Fixed by building simulator as `x86_64`.

## Requirements

### Tools (required)

- `Xcode 15.4` (tested)
- `Python 2.7.18` (required by `download-deps.py`)
- `git 2.48.1` (tested)

### Tools (optional)

- `node` + `npm` (only needed if using old `gulp make-simulator` flow)

### Install

- Xcode:
  - Install from App Store (or Apple Developer downloads), then run once.
- Python 2.7 (if missing):
  - `brew install pyenv`
  - `pyenv install 2.7.18`
  - `pyenv global 2.7.18`
- Git (if missing):
  - `xcode-select --install`
- Rosetta (Apple Silicon, needed to run `x86_64` simulator binary):
  - `softwareupdate --install-rosetta --agree-to-license`

## Build Commands

Run from:

`/engine-native`

```bash
python download-deps.py --remove-download no
git submodule update --init
xcodebuild \
  -project tools/simulator/frameworks/runtime-src/proj.ios_mac/simulator.xcodeproj \
  -scheme "Simulator Mac" \
  -configuration Debug \
  -destination 'platform=macOS,arch=x86_64' \
  -derivedDataPath build/xcode-mac-simulator-x86_64 \
  CODE_SIGNING_ALLOWED=NO \
  CODE_SIGNING_REQUIRED=NO \
  build
```

## Output

- App path:
  - `simulator/mac/Simulator.app`
- Binary architecture:
  - `x86_64`
