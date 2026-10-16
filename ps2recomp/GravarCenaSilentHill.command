#!/bin/zsh
# Opens the game with the native renderer. Pressing 0 (zero) records the next 300 frames to
# recomp/diagnostics/gs-dump/cena.gsdump, so the native renderer can be checked offline on that scene.
cd "$(dirname "$0")/.."
DUMPDIR="$PWD/recomp/diagnostics/gs-dump"
mkdir -p "$DUMPDIR"; rm -f "$DUMPDIR/cena.request"
export PS2X_GS_DUMP="$DUMPDIR/cena.gsdump" PS2X_GS_DUMP_REQUEST="$DUMPDIR/cena.request" PS2X_GS_DUMP_FRAMES=300 PS2X_GS_NATIVE_READBACK_LOG=1
exec "$PWD/ps2recomp/JogarSilentHillOrigins.command"
