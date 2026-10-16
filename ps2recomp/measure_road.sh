#!/bin/bash
# Drive the game to the intro road scene with the pad script and report presented frames/s
# over a 40 s window. Extra environment (engine switches) is passed through.
# Usage: [ENV=...] ps2recomp/measure_road.sh <label>
set -uo pipefail
cd "$(dirname "$0")/.."
LABEL="${1:-run}"
F="$PWD/ps2recomp/logs/frames_$LABEL"
L="$PWD/ps2recomp/logs/runner-$LABEL.log"
mkdir -p "$F"
if pgrep -f "silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled" >/dev/null; then
    echo "another Origins runner is active; not starting"; exit 1
fi
SHO_LOG="$L" PS2X_PAD_SCRIPT="$(cat ps2recomp/pad-script-newgame.txt)" PS2X_FRAME_DUMP_DIR="$F" PS2X_FRAME_DUMP_INTERVAL=60 \
    ./ps2recomp/JogarSilentHillOrigins.command >/dev/null 2>&1 &
sleep 12
n=0
until grep -q "IGC.ARC\|missing-target\|guest-fault\|window close" "$L" 2>/dev/null || [ $n -ge 220 ]; do sleep 2; n=$((n+1)); done
sleep 60
# Wall-clock frames/s depends on whatever else the machine is doing. Frames per second of CPU
# time used by the runner does not (the game thread is the bottleneck), so compare runs by that.
PID=$(pgrep -f "silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled" | head -1)
cpu() { ps -o time= -p "$PID" | awk -F: '{ if (NF==3) print $1*3600+$2*60+$3; else print $1*60+$2 }'; }
a=$(ls "$F" | wc -l); ca=$(cpu); sleep 40; b=$(ls "$F" | wc -l); cb=$(cpu)
echo "$LABEL: scene after $((n*2))s reached=$(grep -c IGC.ARC "$L") faults=$(grep -c 'guest-fault\|missing-target' "$L") frames/s=$(echo "scale=1; ($b-$a)*60/40" | bc) frames/cpu-s=$(echo "scale=2; ($b-$a)*60/($cb-$ca)" | bc) cpu-s=$(echo "$cb-$ca" | bc) load=$(uptime | sed 's/.*averages: //')"
pkill -9 -f "silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled"
sleep 1
pkill -f "ps2recomp/JogarSilentHillOrigins"
sleep 3
