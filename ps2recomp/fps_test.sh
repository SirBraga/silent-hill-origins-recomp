#!/bin/bash
# fps_test.sh <label> [VAR=value ...]: plays to the road scene with the pad script and prints the frame rate there.
cd "$(dirname "$0")/.."
# The window cannot be created while the display sleeps (GLFW finds no monitor): keep it awake for the run.
caffeinate -u -d -w $$ &
L=ps2recomp/logs/fps-$1.log; shift
R="silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled"
# A run started while the previous one is still exiting hangs at start-up: wait until it is gone.
pkill -f "$R"; while pgrep -f "$R" >/dev/null || pgrep -f JogarSilentHillOrigins.command >/dev/null; do sleep 1; done; sleep 2; rm -f "$L"
env "$@" SHO_FPS=1 SHO_LOG="$L" PS2X_PAD_SCRIPT="$(cat ps2recomp/pad-script-newgame.txt)" ./ps2recomp/JogarSilentHillOrigins.command >/dev/null 2>&1 &
sleep 5; n=0; until grep -q IGC.ARC "$L" 2>/dev/null || [ $n -ge 80 ]; do sleep 3; n=$((n+1)); done
sleep ${WAIT:-40}; echo "scene at ~$((n*3+5))s"; grep "sho-fps\]" "$L" | tail -${LINES_SHOWN:-12} | cut -c11- | tr '\n' ';'; echo
[ "${KEEP:-0}" = 1 ] || pkill -f "silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled"
