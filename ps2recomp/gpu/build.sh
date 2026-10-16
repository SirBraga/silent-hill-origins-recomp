#!/usr/bin/env bash
# Builds the native GS renderer module (Metal on macOS, Vulkan on Windows) and gs-replay, and puts the module where
# the launcher and JogarSilentHillOrigins.command look for it (recomp/gpu/build/).
#   ps2recomp/gpu/build.sh            this system
#   ps2recomp/gpu/build.sh windows    from macOS, for Windows (llvm-mingw, cmake/windows-x64.cmake)
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
TARGET="${1:-host}"
if [[ "$TARGET" == windows ]]; then
    OUT="$ROOT/recomp/gpu/build-win"
    cmake -S "$ROOT/ps2recomp/gpu" -B "$OUT" -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE="$ROOT/cmake/windows-x64.cmake"
else
    OUT="$ROOT/recomp/gpu/native-build"
    TOOLCHAIN=()
    case "$(uname -s)" in MINGW*|MSYS*|CYGWIN*) TOOLCHAIN=(-DCMAKE_TOOLCHAIN_FILE="$ROOT/cmake/windows-x64.cmake") ;; esac
    cmake -S "$ROOT/ps2recomp/gpu" -B "$OUT" -G Ninja -DCMAKE_BUILD_TYPE=Release "${TOOLCHAIN[@]}"
fi
ninja -C "$OUT"
mkdir -p "$ROOT/recomp/gpu/build"
case "$(uname -s)" in
    Darwin) [[ "$TARGET" == windows ]] || cp "$OUT/libblack-native-gs.so" "$ROOT/recomp/gpu/build/" ;;
    MINGW*|MSYS*|CYGWIN*) cp "$OUT/libblack-native-gs.dll" "$ROOT/recomp/gpu/build/" ;;
esac
echo "módulo: $OUT (copiado para recomp/gpu/build quando é deste sistema)"
