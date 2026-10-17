#!/bin/bash
# Builds the Windows release package: dist/SilentHillOrigins-Recomp-Windows-<version>(.zip). Runs in Git Bash.
# Ships only code: no ELF, ISO, disc files or memory card. The player picks the ISO in the launcher, which extracts
# the disc (and the ELF from it) into the package folder on the first run.
# Usage: ps2recomp/package_windows.sh [version]   (build the runtime, ps2recomp/gpu/build.sh and the launcher first;
# the runtime must be configured with PS2X_ENABLE_AGRESSIVE_LOGS=OFF, see docs/WINDOWS.md)
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
VERSION="${1:-1.0}"
NAME="SilentHillOrigins-Recomp-Windows-$VERSION"
OUT="$ROOT/dist/$NAME"
RT="tools/PS2Recomp/out/rt/ps2xRuntime"

if grep -q "PS2X_ENABLE_AGRESSIVE_LOGS:BOOL=ON" "$ROOT/tools/PS2Recomp/out/rt/CMakeCache.txt"; then
  echo "error: the runtime was built with PS2X_ENABLE_AGRESSIVE_LOGS=ON (endless loading on Windows)" >&2; exit 1
fi

rm -rf "$OUT" "$OUT.zip"
mkdir -p "$OUT/$RT" "$OUT/config" "$OUT/launcher/assets" "$OUT/ps2recomp/logs" "$OUT/recomp/gpu/build" "$OUT/mods" "$OUT/orig"

# The launcher finds the game folder by walking up from its own folder to config/SLUS_217.31.toml.
cp "$ROOT/launcher/build/sho_launcher.exe" "$OUT/Silent Hill Origins.exe"
cp "$ROOT/$RT/SilentHillOriginsRecompiled.exe" "$ROOT/$RT/"*.dll "$OUT/$RT/" # ffmpeg (LGPL build) and what it pulls in
cp "$ROOT/config/SLUS_217.31.toml" "$OUT/config/"
cp -R "$ROOT/launcher/assets/icons" "$OUT/launcher/assets/"
cp "$ROOT/ps2recomp/sho_ptbr.ovl" "$ROOT/ps2recomp/sho_pc.ovl" "$OUT/ps2recomp/"
cp "$ROOT/recomp/gpu/build/libblack-native-gs.dll" "$OUT/recomp/gpu/build/"

cat > "$OUT/LEIA-ME.txt" <<EOF
Silent Hill Origins - Recomp $VERSION (Windows x64)

Você precisa da sua própria ISO do Silent Hill Origins de PS2 (NTSC-U, SLUS-21731).
Este pacote não traz nenhum arquivo do jogo.

1. Tire a pasta do zip e coloque onde quiser (ex.: Documentos).
   Ela precisa de uns 3 GB livres: o disco é extraído para dentro dela.
2. Abra "Silent Hill Origins.exe" (o launcher). O programa não é assinado: se o Windows
   mostrar "O Windows protegeu o computador", clique em "Mais informações" e "Executar assim mesmo".
3. Na página Jogar, escolha a ISO e aperte JOGAR. Na primeira vez o launcher extrai o disco
   para recomp\disc (uns 2,8 GB); depois a ISO não é mais necessária.

Requisitos: Windows 10/11 64 bits, processador com SSE4.2 e placa de vídeo com Vulkan
(driver atualizado da NVIDIA, AMD ou Intel).

O save fica em orig\mc0 dentro desta pasta. As opções de vídeo (resolução interna até 4x),
idioma e controles ficam no launcher; os efeitos modernos (nitidez, oclusão de ambiente, SMAA,
sombras suaves) vêm desligados e podem ser ligados lá.

Se algo der errado, o log da última execução fica em ps2recomp\logs\runner.log
(também aparece na página Jogar do launcher).

Os vídeos usam o FFmpeg (build LGPL, DLLs em tools\PS2Recomp\out\rt\ps2xRuntime).

Código: https://github.com/SirBraga/silent-hill-origins-recomp (branch windows)
EOF

# Never ship game files: the disc, the ELF, memory cards, dumps.
if find "$OUT" -type f \( -iname '*.iso' -o -iname 'SLUS_*' ! -name 'SLUS_217.31.toml' -o -iname '*.ps2' -o -iname '*.gsdump' -o -iname '*.elf' \) | grep -q . ||
   [ -n "$(ls -A "$OUT/orig")" ]; then
  echo "error: game files in the package" >&2; exit 1
fi

( cd "$ROOT/dist" && powershell.exe -NoProfile -Command "Compress-Archive -Path '$NAME' -DestinationPath '$NAME.zip' -Force" )
du -sh "$OUT" "$OUT.zip"
