#!/bin/bash
# Regenerate the recompiled VU microcode and rebuild the runner and the trace validator.
#
# Output: black_vu1_recompiled.inc (helpers, tables) plus black_vu1_recompiled_part0..7.cpp (the functions, in
# eight files that compile in parallel; the generator came from the Black session). Every VU1 program in the
# executable is recompiled (extract_vu_programs.py); those that fit VU0 code memory are offered to VU0 too.
# VU_USED_ONLY=1 limits VU1 to recomp/diagnostics/vu-programs/used.txt for quick iteration.
#
# The core includes the generated file through __has_include, which the build system cannot see: the core is
# touched so it is rebuilt against the new file.
set -uo pipefail
cd "$(dirname "$0")/.."
RT=tools/PS2Recomp/out/rt
BIN=$RT/ps2xRuntime
D=recomp/diagnostics/vu-programs
T=recomp/diagnostics/vu-trace
INC=tools/PS2Recomp/ps2xRuntime/src/lib/vu/black_vu1_recompiled.inc
CORE=tools/PS2Recomp/ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp
J=${J:-6}

python3 ps2recomp/diagnostics/extract_vu_programs.py orig/SLUS_217.31 "$D" >/dev/null || { echo "EXTRACT FAILED"; exit 1; }
for f in "$D"/prog1-*.bin; do
    if [ "$(stat -f%z "$f")" -le 4096 ]; then cp "$f" "$D/prog0-${f##*/prog1-}"; fi
done

IMAGES=()
if [ "${VU_USED_ONLY:-0}" = "1" ] && [ -f "$D/used.txt" ]; then
    while read -r name; do
        [ -n "$name" ] && [ -f "$D/$name" ] && IMAGES+=("$D/$name")
    done < "$D/used.txt"
else
    IMAGES=("$D"/prog1-*.bin)
fi
IMAGES+=("$D"/prog0-*.bin)
echo "${#IMAGES[@]} programs"

ninja -C "$RT" -j"$J" ps2x_vu1_recompile ps2x_vu1_trace_replay || { echo "GEN BUILD FAILED"; exit 1; }
# Execution profile of the recorded traces: the generator runs blocks through hot branch targets ("superblocks").
mkdir -p "$T/profile"
PROFILE=""
for TRACE in "$T"/*.bin; do
    [ -f "$TRACE" ] || continue
    HIST="$T/profile/$(basename "$TRACE" .bin).txt"
    [[ -f "$HIST" && "$HIST" -nt "$TRACE" ]] || PS2X_VU_PC_HISTOGRAM="$HIST" "$BIN/ps2x_vu1_trace_replay" "$TRACE" >/dev/null
    PROFILE="$PROFILE$HIST:"
done
rm -f tools/PS2Recomp/ps2xRuntime/src/lib/vu/black_vu1_recompiled_part*.cpp
PS2X_VU_RECOMPILE_PROFILE="$PROFILE" PS2X_VU_RECOMPILE_SHARED=0 "$BIN/ps2x_vu1_recompile" "$INC" "${IMAGES[@]}" | tail -1 || { echo "GENERATE FAILED"; exit 1; }
touch "$CORE"
ninja -C "$RT" -j"$J" ps2EntryRunner ps2x_vu1_trace_replay || { echo "RUNNER BUILD FAILED"; exit 1; }
for TRACE in "$T"/*.bin; do
    [ -f "$TRACE" ] || continue
    echo "== $(basename "$TRACE")"
    "$BIN/ps2x_vu1_trace_replay" "$TRACE" --engine recompiled 2>&1 | grep -v '^record' | tail -3
done
echo "REBUILD DONE"
