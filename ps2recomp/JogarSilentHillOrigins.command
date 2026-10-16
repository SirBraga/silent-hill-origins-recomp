#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
ISO="${SILENT_HILL_ORIGINS_ISO:-/Users/sirbraga/Downloads/Silent Hill Origins/Silent Hill Origins.iso}"
RUNNER="${SHO_RUNNER:-$ROOT/tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled}"
ELF="$ROOT/orig/SLUS_217.31"
MOUNT="${TMPDIR:-/tmp}/silent-hill-origins-disc-$$"
# SHO_LOG=<file> keeps a second (test) run from overwriting the log of the one being played.
LOG="${SHO_LOG:-$ROOT/ps2recomp/logs/runner.log}"

[[ -x "$RUNNER" ]] || { echo "Runner não compilado: $RUNNER" >&2; exit 1; }
[[ -f "$ELF" ]] || { echo "ELF não encontrado: $ELF" >&2; exit 1; }
[[ -f "$ISO" || -f "$ROOT/recomp/disc/.layout" ]] || { echo "ISO não encontrada: $ISO" >&2; exit 1; }

mkdir -p "$(dirname "$LOG")"
# The disc's files: the folder the launcher extracts (recomp/disc, made once from this ISO) when it is there;
# otherwise the image is mounted for the run.
DISC="$ROOT/recomp/disc"
if [[ -f "$DISC/.extracted" ]]; then
    MOUNT="$DISC"
    # The extracted folder holds the whole disc (.layout): the ISO is not read.
    [[ -f "$DISC/.layout" ]] && CD_IMAGE="$DISC/.layout"
else
mkdir -p "$MOUNT"
# A run that was killed leaves its disc attached, and attaching the same image again fails.
# Detach mounts whose launcher (the pid in the directory name) is gone.
for stale in "${TMPDIR:-/tmp}"/silent-hill-origins-disc-*; do
    [[ -d "$stale" && "$stale" != "$MOUNT" ]] || continue
    if ! kill -0 "${stale##*-}" 2>/dev/null; then
        hdiutil detach "$stale" >/dev/null 2>&1 || true
        rmdir "$stale" 2>/dev/null || true
    fi
done
hdiutil attach -readonly -nobrowse -mountpoint "$MOUNT" "$ISO" >/dev/null
cleanup() {
    hdiutil detach "$MOUNT" >/dev/null 2>&1 || true
    rmdir "$MOUNT" 2>/dev/null || true
}
trap cleanup EXIT INT TERM
fi

# GS renderer: the native Metal renderer, drawn straight to the window at SHO_GS_SCALE times the game's resolution;
# the frame never comes back to the CPU. SHO_GS=sdlgpu uses the old in-tree SDL_GPU kernels.
NATIVE_MODULE="$ROOT/recomp/gpu/build/libblack-native-gs.so"
unset PS2X_GS_PARALLEL PS2X_GS_PARALLEL_MODULE PS2X_GS_NATIVE_PRESENT PS2X_GS_NATIVE_SCALE
if [[ "${SHO_GS:-native}" == "native" && -f "$NATIVE_MODULE" ]]; then
    export PS2X_GS_PARALLEL=1 PS2X_GS_PARALLEL_MODULE="$NATIVE_MODULE" PS2X_GS_NATIVE_PRESENT=1 PS2X_GS_NATIVE_SCALE="${SHO_GS_SCALE:-4}"
else
    export PS2X_GS_SDL_GPU="${PS2X_GS_SDL_GPU:-1}"
fi
# VIF1/VU1 on its own thread (SHO_VIF1_THREAD=0 disables) and the IOP on its own thread (SHO_IOP_THREAD=0).
if [[ "${SHO_VIF1_THREAD:-1}" != "0" ]]; then export PS2X_VIF1_THREAD=1; else unset PS2X_VIF1_THREAD; fi
if [[ "${SHO_IOP_THREAD:-1}" != "0" ]]; then export PS2X_IOP_THREAD=1; else unset PS2X_IOP_THREAD; fi
export PS2X_IOP_QUANTUM="${PS2X_IOP_QUANTUM:-512}"
# Display adjustment in the native renderer's final pass: SHO_GAMMA > 1 lifts the dark tones (1.15: a light lift that
# keeps the game's darkness), SHO_BRIGHTNESS is an overall gain.
export PS2X_GS_NATIVE_GAMMA="${SHO_GAMMA:-1.15}" PS2X_GS_NATIVE_BRIGHTNESS="${SHO_BRIGHTNESS:-1.0}"
# 16:9: a 16:9 window (choose 16:9 in the game's "Choose your aspect ratio" screen; the game then renders anamorphic
# and the picture is stretched to the window). SHO_WIDESCREEN=0 for 4:3. PS2X_WINDOW_SIZE is in real pixels.
# Scale 4 (internal 2048x1792 for the game's 512x448) peaks at ~8.6 ms of GPU per frame on an M1 Pro.
export SHO_WIDESCREEN="${SHO_WIDESCREEN:-1}"
# Language: SHO_LANGUAGE=pt (default, Brazilian Portuguese with accents) or en|fr|it|de|es. Portuguese takes the
# English slot (menus and logos are pictures, and stay English): its text and the font with ã/õ come from ps2recomp/sho_ptbr.ovl (tools/loc/build_ptbr.py), laid
# over the disc image while it is read; the image is not modified.
export SHO_LANGUAGE="${SHO_LANGUAGE:-pt}"
# Key 0 records the next 300 frames of graphics (recomp/diagnostics/gs-dump/cena.gsdump) for offline debugging.
export PS2X_GS_DUMP="${PS2X_GS_DUMP:-$ROOT/recomp/diagnostics/gs-dump/cena.gsdump}" PS2X_GS_DUMP_REQUEST="${PS2X_GS_DUMP_REQUEST:-$ROOT/recomp/diagnostics/gs-dump/cena.request}" PS2X_GS_DUMP_FRAMES="${PS2X_GS_DUMP_FRAMES:-300}"
mkdir -p "$ROOT/recomp/diagnostics/gs-dump"; rm -f "$PS2X_GS_DUMP_REQUEST"
# Other languages: sho_pc.ovl rewrites their save messages for the PC (a save file instead of a memory card).
if [[ "$SHO_LANGUAGE" == "pt" && -f "$ROOT/ps2recomp/sho_ptbr.ovl" ]]; then export PS2X_CD_OVERLAY="$ROOT/ps2recomp/sho_ptbr.ovl"
elif [[ -f "$ROOT/ps2recomp/sho_pc.ovl" ]]; then export PS2X_CD_OVERLAY="$ROOT/ps2recomp/sho_pc.ovl"; else unset PS2X_CD_OVERLAY; fi
if [[ "$SHO_WIDESCREEN" == "1" ]]; then export PS2X_WINDOW_SIZE="${PS2X_WINDOW_SIZE:-2560x1440}"; else export PS2X_WINDOW_SIZE="${PS2X_WINDOW_SIZE:-1920x1440}"; fi
# 60 frames a second: the game asks for a new frame every 2 vertical blanks (30 per second); 1 gives one every blank.
# Its logic measures the frame length (1/30 s becomes 1/60 s), so the game runs at the same speed with twice the
# frames. SHO_VSYNC_INTERVAL=2 gives the console's rate. See ps2recomp/overrides/sho_framerate.cpp.
export SHO_VSYNC_INTERVAL="${SHO_VSYNC_INTERVAL:-1}"
# Cutscenes at 60 too. The 30-during-disc-streams fallback (sho_framerate.cpp) was for a fake sound clock that is
# gone (sceSdRemote now runs the game's own code against the real SDRDRV); SHO_STREAM_30=1 brings it back.
export SHO_STREAM_30="${SHO_STREAM_30:-0}"
# Game time from the host clock instead of EE timer 2 (sho_framerate.cpp). Off: with it on, the start-up menus
# (language/flag select) froze. SHO_REAL_CLOCK=1 turns it on for testing.
export SHO_REAL_CLOCK="${SHO_REAL_CLOCK:-0}"

cd "$ROOT"
PS2X_CD_IMAGE="${CD_IMAGE:-$ISO}" \
PS2X_CD_ROOT="$MOUNT" \
PS2X_GIF_INCREMENTAL="${PS2X_GIF_INCREMENTAL:-0}" \
"$RUNNER" "$ELF" 2>&1 | tee "$LOG"
