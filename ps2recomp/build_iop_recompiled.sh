#!/usr/bin/env bash
# Regenerates the statically recompiled IOP module code (tools/PS2Recomp/ps2xIOP/src/emulator/black_iop_recompiled.inc,
# the file name the emulator includes; the contents are this game's) and rebuilds the runner. Same workflow as Black.
#
# Module text comes from recomp/diagnostics/iop-captured/: run the game with PS2X_IOP_RECOMP_CAPTURE=<that directory>
# (every IRX loaded at boot is captured in the first seconds). Local files only: they contain game code.
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
D="$ROOT/recomp/diagnostics/iop-captured"
OUT="$ROOT/tools/PS2Recomp/ps2xIOP/src/emulator/black_iop_recompiled.inc"
shopt -s nullglob
MODULES=("$D"/iop-*.bin)
(( ${#MODULES[@]} )) || { echo "no IOP module captured in $D (run with PS2X_IOP_RECOMP_CAPTURE=$D)" >&2; exit 1; }
python3 "$ROOT/ps2recomp/diagnostics/iop_recompile.py" "$OUT" "${MODULES[@]}"
touch "$ROOT/tools/PS2Recomp/ps2xIOP/src/emulator/iop_emulator.cpp"
ninja -C "$ROOT/tools/PS2Recomp/out/rt" -j"${J:-6}" ps2EntryRunner
