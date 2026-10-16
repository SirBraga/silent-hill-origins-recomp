#!/bin/bash
# Builds the macOS release package: dist/SilentHillOrigins-Recomp-macOS-<version>(.zip).
# Ships only code: no ELF, ISO, disc files or memory card. The player picks the ISO in the launcher, which extracts
# the disc (and the ELF from it) into the package folder on the first run.
# Usage: ps2recomp/package_macos.sh [version]   (build the runtime and the launcher first)
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
VERSION="${1:-1.0}"
NAME="SilentHillOrigins-Recomp-macOS-$VERSION"
OUT="$ROOT/dist/$NAME"
RT="tools/PS2Recomp/out/rt/ps2xRuntime"

rm -rf "$OUT" "$OUT.zip"
mkdir -p "$OUT/$RT/lib" "$OUT/config" "$OUT/launcher/assets" "$OUT/ps2recomp/logs" "$OUT/recomp/gpu/build" "$OUT/mods" "$OUT/orig"

# Launcher as an app bundle; it finds the game folder by walking up from Contents/MacOS to config/SLUS_217.31.toml.
APP="$OUT/Silent Hill Origins.app"
mkdir -p "$APP/Contents/MacOS"
cp "$ROOT/launcher/build/sho_launcher" "$APP/Contents/MacOS/"
cat > "$APP/Contents/Info.plist" <<EOF
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
  <key>CFBundleName</key><string>Silent Hill Origins</string>
  <key>CFBundleDisplayName</key><string>Silent Hill Origins</string>
  <key>CFBundleIdentifier</key><string>io.github.sirbraga.sho-recomp</string>
  <key>CFBundleExecutable</key><string>sho_launcher</string>
  <key>CFBundlePackageType</key><string>APPL</string>
  <key>CFBundleShortVersionString</key><string>$VERSION</string>
  <key>CFBundleVersion</key><string>$VERSION</string>
  <key>LSMinimumSystemVersion</key><string>13.0</string>
  <key>NSHighResolutionCapable</key><true/>
</dict></plist>
EOF

cp "$ROOT/$RT/SilentHillOriginsRecompiled" "$OUT/$RT/"
cp "$ROOT/config/SLUS_217.31.toml" "$OUT/config/"
cp -R "$ROOT/launcher/assets/icons" "$OUT/launcher/assets/"
cp "$ROOT/ps2recomp/sho_ptbr.ovl" "$ROOT/ps2recomp/sho_pc.ovl" "$OUT/ps2recomp/"
cp "$ROOT/recomp/gpu/build/libblack-native-gs.so" "$OUT/recomp/gpu/build/"

# Homebrew dylibs (ffmpeg, SDL3 and what they pull in) go into the runtime's lib/ and are relinked to it.
python3 - "$OUT/$RT" <<'EOF'
import os, shutil, subprocess, sys
rt = sys.argv[1]; lib = os.path.join(rt, "lib")
def deps(f):
    out = subprocess.run(["otool", "-L", f], capture_output=True, text=True, check=True).stdout.splitlines()[1:]
    return [l.split(" (")[0].strip() for l in out]
def foreign(d): return not (d.startswith("/System/") or d.startswith("/usr/lib/") or d.startswith("@"))
def real(d):
    if d.startswith("@rpath/"):
        for base in ("/opt/homebrew/lib",):
            p = os.path.join(base, d[7:])
            if os.path.exists(p): return p
    return d
todo = [os.path.join(rt, "SilentHillOriginsRecompiled")]; seen = set()
while todo:
    f = todo.pop(); exe = f.endswith("SilentHillOriginsRecompiled")
    if not exe: subprocess.run(["install_name_tool", "-id", "@loader_path/" + os.path.basename(f), f], check=True, stderr=subprocess.DEVNULL)
    for d in deps(f):
        if not (foreign(d) or d.startswith("@rpath/")): continue
        src = real(d); name = os.path.basename(src)
        if not os.path.exists(src): sys.exit(f"missing dependency {d} of {f}")
        dst = os.path.join(lib, name)
        subprocess.run(["install_name_tool", "-change", d, ("@executable_path/lib/" if exe else "@loader_path/") + name, f], check=True, stderr=subprocess.DEVNULL)
        if name not in seen:
            seen.add(name); shutil.copy2(os.path.realpath(src), dst); os.chmod(dst, 0o755); todo.append(dst)
print(f"bundled {len(seen)} libraries")
EOF

# Relinking breaks the signatures: everything is signed again, ad hoc (required to run on Apple Silicon).
find "$OUT" \( -name '*.dylib' -o -name '*.so' \) -exec codesign -f -s - {} \; 2>/dev/null
codesign -f -s - "$OUT/$RT/SilentHillOriginsRecompiled"
codesign -f -s - --deep "$APP"

# Anything still pointing at Homebrew would only work on this Mac.
if find "$OUT" -type f \( -perm +111 -o -name '*.dylib' -o -name '*.so' \) -exec otool -L {} \; 2>/dev/null | grep -q /opt/homebrew; then
  echo "error: a binary still links against /opt/homebrew" >&2; exit 1
fi

cat > "$OUT/LEIA-ME.txt" <<EOF
Silent Hill Origins - Recomp $VERSION (macOS, Apple Silicon)

Você precisa da sua própria ISO do Silent Hill Origins de PS2 (NTSC-U, SLUS-21731).
Este pacote não traz nenhum arquivo do jogo.

1. Tire a pasta do zip e coloque onde quiser (ex.: Aplicativos ou Documentos).
   Ela precisa de uns 3 GB livres: o disco é extraído para dentro dela.
2. O app não é assinado pela Apple. Antes de abrir pela primeira vez, abra o Terminal,
   digite o comando abaixo com um espaço no fim, arraste esta pasta para a janela e aperte Enter:
       xattr -dr com.apple.quarantine
3. Abra "Silent Hill Origins.app" (o launcher).
4. Na página Jogar, escolha a ISO e aperte JOGAR. Na primeira vez o launcher extrai o disco
   para recomp/disc (uns 2,8 GB); depois a ISO não é mais necessária.

Requisitos: Mac com Apple Silicon (M1 ou mais novo), macOS 13 ou mais novo.

O save fica em orig/mc0 dentro desta pasta. As opções de vídeo, idioma e controles ficam
no launcher; os efeitos modernos (nitidez, oclusão de ambiente, SMAA, sombras suaves)
vêm desligados e podem ser ligados lá. No jogo, ESC abre o menu.

Se algo der errado, o log da última execução fica em ps2recomp/logs/runner.log
(também aparece na página Jogar do launcher).

Código: https://github.com/SirBraga/silent-hill-origins-recomp
EOF

( cd "$ROOT/dist" && ditto -c -k --keepParent "$NAME" "$NAME.zip" )
du -sh "$OUT" "$OUT.zip"
