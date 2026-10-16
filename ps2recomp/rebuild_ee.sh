#!/bin/bash
# Regenerate the recompiled EE code from config/SLUS_217.31.toml and rebuild the runner.
set -uo pipefail
cd "$(dirname "$0")/.."
P=tools/PS2Recomp; R=$P/ps2xRuntime
ninja -C $P/out/build -j6 ps2_recomp || { echo "TRANSLATOR BUILD FAILED"; exit 1; }
rm -rf recomp/output-prev
mv recomp/output recomp/output-prev
$P/out/build/ps2xRecomp/ps2_recomp config/SLUS_217.31.toml > recomp/recomp.log 2>&1 || { echo "RECOMP FAILED"; exit 1; }
grep -A9 "PS2Recomp report" recomp/recomp.log | sed -n '4p;10p'
find $R/src/runner -maxdepth 1 \( -name 'sub_*.cpp' -o -name 'entry_*.cpp' -o -name 'register_functions.cpp' \) -delete
cp recomp/output/*.cpp $R/src/runner/
cp recomp/output/*.h $R/include/
cp ps2recomp/overrides/*.cpp $R/src/runner/ && for f in ps2recomp/overrides/*.cpp; do mv "$R/src/runner/$(basename "$f")" "$R/src/runner/zz_$(basename "$f")"; done
ninja -C $P/out/rt -j6 ps2EntryRunner || { echo "RUNNER BUILD FAILED"; exit 1; }
echo "REBUILD DONE"
