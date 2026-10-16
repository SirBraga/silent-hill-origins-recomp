# Compilar e testar no Windows

Até 2026-10-15 o Windows era compilado no Mac (cross-compile com llvm-mingw). Este guia faz o mesmo build direto
no Windows, com o **mesmo compilador** (llvm-mingw, clang + mingw-w64 UCRT) e as mesmas opções, para que o
executável seja equivalente ao que já foi testado.

## O que copiar do Mac

O repositório inteiro tem cerca de 28 GB; o necessário fica em uns 6 GB.

| Copiar | Não copiar (é gerado ou é só do Mac) |
|---|---|
| `CLAUDE.md`, `docs/`, `cmake/`, `config/`, `include/`, `launcher/` (menos `build*`), `mods/`, `orig/` (o ELF), `ps2recomp/`, `src/`, `tools/` (menos `tools/PS2Recomp/out`), `keymap.ini`, `launcher.ini` | `tools/PS2Recomp/out/` (4 GB de builds), `dist/`, `launcher/build*`, `recomp/gpu/build*`, `recomp/gpu/native-build`, `recomp/output-prev`, `recomp/output-pre-pointers` |
| `recomp/output/`, `recomp/STATUS.md`, `recomp/diagnostics/` (menos os dumps grandes, abaixo) | `recomp/gpu/moltenvk` (só serve no Mac) |
| `recomp/disc/` (2,8 GB; ou extrair de novo pelo launcher a partir da ISO) | |
| Dumps de GS para validação: `menu`, `road`, `hosp`, `elev`, `estado`, `porta2` (≈ 2,3 GB) | os outros dumps de `recomp/diagnostics/gs-dump` (≈ 16 GB; `elev2` tem 11 GB) |
| `~/Documents/toolchains/ffmpeg-win/ffmpeg-n7.1-241205-lgpl-amd64-shared.zip` (35 MB) | |

## Ferramentas

- **llvm-mingw**, release `ucrt-x86_64` (https://github.com/mstorsjo/llvm-mingw/releases), descompactado em
  `C:\llvm-mingw`. Outro lugar funciona com a variável `LLVM_MINGW`.
- **CMake** 3.20 ou mais novo e **Ninja**, no `PATH`.
- **Python 3**, para os geradores `iop_recompile.py` e `extract_vu_programs.py`.
- **Git for Windows**, pelo bash: `build.sh`, `compile_shaders.sh` e `rebuild_vu.sh` são scripts bash.
- **Vulkan SDK** (LunarG): só para recompilar os shaders (`glslangValidator`) e para a camada de validação
  (`PS2X_GS_VULKAN_VALIDATION=1`). O SPIR-V pronto já está em `ps2recomp/gpu/native/gs_shaders_spv.inc`.

## Build

Os comandos abaixo rodam na raiz do repositório (PowerShell ou Git Bash). `-DCMAKE_TOOLCHAIN_FILE` aponta para o
mesmo arquivo usado no Mac, que agora também funciona com host Windows.

```bash
# 1. Runtime (o jogo): uns 5 a 10 minutos; o código do EE gerado é grande
cmake -S tools/PS2Recomp -B tools/PS2Recomp/out/rt -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_TOOLCHAIN_FILE=cmake/windows-x64.cmake \
  -DPS2X_BUILD_RUNTIME=ON -DPS2X_BUILD_RECOMP=OFF -DPS2X_BUILD_ANALYZER=OFF -DPS2X_BUILD_STUDIO=OFF -DPS2X_BUILD_TEST=OFF \
  -DPS2X_ENABLE_SDL_GPU_GS_BACKEND=OFF -DPS2X_ENABLE_DEBUG_UI=ON -DPS2X_SHOW_WINDOWS_CONSOLE=ON \
  -DPS2X_RUNNER_OUTPUT_NAME=SilentHillOriginsRecompiled "-DPS2X_WINDOW_TITLE=Silent Hill Origins - Recompiled" \
  -DPS2X_FFMPEG_PREBUILT_URL=file:///C:/caminho/ffmpeg-n7.1-241205-lgpl-amd64-shared.zip
ninja -C tools/PS2Recomp/out/rt ps2EntryRunner
# as DLLs do ffmpeg (e suas dependências: SDL2, OpenEXR, jxl...) ficam ao lado do executável:
cp tools/PS2Recomp/out/rt/ThirdParty/ffmpeg-prefix/src/ffmpeg_external/bin/*.dll tools/PS2Recomp/out/rt/ps2xRuntime/

# 2. Renderizador (Vulkan) + gs-replay; copia a DLL para recomp/gpu/build
bash ps2recomp/gpu/build.sh

# 3. Launcher
cmake -S launcher -B launcher/build -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=cmake/windows-x64.cmake
ninja -C launcher/build
```

O launcher (`launcher/build/sho_launcher.exe`) acha a raiz do projeto sozinho, procurando `config/SLUS_217.31.toml`
nas pastas acima dele, e procura o jogo em `tools/PS2Recomp/out/rt/ps2xRuntime/SilentHillOriginsRecompiled.exe` e o
renderizador em `recomp/gpu/build/libblack-native-gs.dll`.

Sem `PS2X_FFMPEG_PREBUILT_URL`, o CMake baixa o ffmpeg de
`github.com/System233/ffmpeg-msvc-prebuilt` (tag `n7.1-241205`). O ffmpeg é necessário: sem ele, os vídeos travam o
jogo.

## Testar

- O log do jogo é a janela de console (`PS2X_SHOW_WINDOWS_CONSOLE=ON`) ou o arquivo que o launcher grava.
  - Procure `[build]`, para confirmar que é o executável novo.
  - Procure `[cpu]`, `[hitch]`, `[window]` e, com `PS2X_IOP_RECOMP_STATS=1`, `[IOP stats]`.
- Renderizador isolado, na NVIDIA, sem abrir o jogo:
  `tools\...\gs-replay.exe recomp/diagnostics/gs-dump/road.gsdump --module recomp/gpu/native-build/libblack-native-gs.dll --frames 120`
  imprime ms por quadro. Com `PS2X_GS_NATIVE_SCALE=4` dá para comparar o 4×.
  O `gs-replay.exe` fica em `recomp/gpu/native-build/`.
- Variáveis úteis: veja `CLAUDE.md` (Diagnóstico rápido) e `docs/claude-memory/`.

## Referências do Mac

Dá para comparar com estes números:
- IOP no menu: 7% de um núcleo com o spin-yield (32% sem). Com `PS2X_IOP_RECOMP_STATS=1`, as linhas
  `[IOP stats]` mostram cerca de **2,7 M instruções/s** (16,8 M a cada 6,3 s) e 0,01% interpretado. Se o
  Windows mostrar muito mais instruções por segundo com o mesmo menu, algum laço de espera do jogo não está sendo
  encurtado lá; se mostrar o mesmo número com 97% de CPU, o custo está fora do código do jogo (tempo do IOP, SPU2,
  esperas).
- GS no vídeo de abertura em 4×: cerca de 4 ms por quadro, tanto em Metal quanto em Vulkan via MoltenVK.
