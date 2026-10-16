# Silent Hill Origins — recompilação estática para PC

Recompilação estática do *Silent Hill: Origins* de PS2 (NTSC, `SLUS_217.31`) para macOS (Apple Silicon) e Windows
x64. O código do console vira C++ nativo; o hardware que não é código (GS, SPU2, DMA, VIF, timers) é implementado em
C++ nativo.

## Regras do projeto

- **Responder sempre em português (pt-BR).**
- **Recompilar, nunca emular.** EE, VU0/VU1 e IOP rodam código recompilado. Interpretadores existem só como
  referência para validar e como rede de segurança, e cada caso que cai neles é um defeito a corrigir.
- **Efeitos gráficos modernos são opcionais:** cada um tem liga/desliga e vem desligado por padrão, preservando o
  visual original.
- **Nunca publicar** ELF, ISO, dumps, memory card nem pacotes com eles. O repositório público é só o renderizador:
  https://github.com/SirBraga/ps2-native-gs.
- Pedir permissão antes de baixar qualquer coisa (dizer nome, origem e tamanho) e antes de fechar ou reabrir o jogo
  do usuário.
- Depois de terminar uma mudança, abrir o jogo para o usuário testar.

## Mapa

| Caminho | O quê |
|---|---|
| `tools/PS2Recomp/ps2xRuntime` | runtime: EE, VU, GS frontend, SPU2, pad, janela (raylib), menu ESC (`src/lib/ps2_debug_panel.cpp`) |
| `tools/PS2Recomp/ps2xIOP` | IOP; código recompilado em `src/emulator/black_iop_recompiled.inc` (gerado) |
| `ps2recomp/gpu/native` | renderizador nativo (Metal/Vulkan, `gpu.h`), shaders MSL e GLSL, efeitos (nitidez, AO, SMAA) |
| `ps2recomp/diagnostics` | geradores (`iop_recompile.py`, `vu1_recompile.cpp`), `gs_replay.cpp` |
| `launcher/` | launcher (ImGui) — o "Silent Hill Origins.exe" |
| `recomp/disc` | disco extraído pelo launcher (`.layout` + arquivos) |
| `recomp/diagnostics` | dumps de GS, traços de VU, imagens capturadas (dados do jogo: locais) |
| `docs/WINDOWS.md` | como compilar e testar no Windows |
| `docs/claude-memory/` | anotações acumuladas das sessões no Mac (contexto, armadilhas, como medir) |

## Estado (2026-10-15)

- O jogo roda no Mac (Metal) e no Windows (Vulkan), com menu ESC, launcher e tradução pt-BR.
- **IOP:** recompilado. No Mac, 99,99% nativo (`PS2X_IOP_RECOMP_STATS=1`) e 0 diferenças no modo de verificação
  (`PS2X_IOP_RECOMP_VERIFY=16`).
- **VU:** recompilado. Todos os programas do executável são recompilados (`ps2recomp/rebuild_vu.sh`).
- **Efeitos opcionais:** nitidez (CAS), oclusão de ambiente (a partir do Z) e SMAA. Todos são calculados sobre uma
  cópia da cena 3D tirada antes do 2D do jogo.

## Pendências, em ordem

1. **Windows, "Não respondendo" em 1×.** Correção provável já no código: com o menu ESC fechado, a janela não troca
   mais o buffer do OpenGL, porque ficava coberta pela janela-filha do Vulkan. Ainda não foi confirmada no Windows.
   Um vigia imprime `[window] ... has been in '<etapa>'` quando o laço da janela trava mais de 1 s.
2. **Windows, 4× não funciona (NVIDIA GTX 1660 Ti).** A partir do vídeo do logo, o GS fica de 5 a 12 s ocupado por
   quadro. No Mac, Metal e Vulkan (MoltenVK) rodam o 4× normalmente. Descartados: vazamento de memória de vídeo e o
   limite de 256 MB de memória visível pela CPU. A linha `[hitch]` agora separa leituras, VRAM→alvos, apresentação
   e esperas pela GPU.
3. **Windows, IOP a 96–98% de um núcleo**, contra 7% no Mac. `[IOP stats]` mostra instruções por segundo; comparar
   com o Mac para ver se algum laço de espera do jogo não está sendo encurtado no Windows.
4. **Menu ESC preto no Windows** (provavelmente a mesma causa do item 1).
5. **VU: entradas no meio de blocos.** O gerador `ps2recomp/diagnostics/vu1_recompile.cpp` já tem a mudança, que
   ainda **não foi validada**; o código em `src/lib/vu/black_vu1_recompiled*` é a versão anterior, que é válida. O
   traço de gameplay mostra 0,9% dos ciclos de VU no interpretador, por desvios que caem no meio de blocos diretos.
   Para aplicar, rodar `ps2recomp/rebuild_vu.sh` e exigir `mismatches=0` no `ps2x_vu1_trace_replay`.
6. **Sombra da lanterna serrilhada (pedido do usuário, opcional: "sombras suaves").**
   - O jogo desenha um mapa de sombra de 256×256 no canto do buffer do quadro, no começo de cada quadro, e o projeta
     como textura T8 de 256×256 (`tex=16064`, `TEX1` com o filtro "vizinho mais próximo"); em 4× as bordas viram
     degraus.
   - Ideias:
     - manter o mapa na resolução interna, sem cair para 256 (ver onde ele perde resolução: VRAM ou shuffle);
     - filtrar a borda com várias amostras (PCF).
   - Dump para validar: `recomp/diagnostics/gs-dump/maca2.gsdump`.
7. **Vídeo do menu parando/texto embaralhado/travamento** depois de ficar parado no menu. Correção no código
   (`CD.cpp`: `sceCdStSeek/SeekF` num stream ativo recomeça o stream para o MPEG; o jogo rebobina o `MENUW.PSS` com
   `sceMpegReset` + `sceCdStSeekF` em `0x00182870`). Ainda não testada no jogo.
8. **AO some nas transições de sala:** correção provável no código (quadro parado mantém os efeitos); falta um dump
   de uma transição para confirmar.
9. **Meta: 120 fps reais** (mais quadros de verdade, sem acelerar o jogo).

## Diagnóstico rápido

- `[cpu]` no log: CPU por thread. `PS2X_IOP_RECOMP_STATS=1`: quanto do IOP ainda é interpretado.
  `PS2X_VU_RECOMP_STATS=1`: o mesmo para o VU (e `PS2X_VU_RECOMP_CAPTURE=<pasta>` salva programas não capturados).
- `gs-replay <dump> --module <módulo> --out <pasta>` / `--diff A B`: renderizador isolado.
  `PS2X_GS_NATIVE_SCANOUT_PRESENT=1` (imagem com efeitos), `..._SCANOUT_SCENE=1`, `..._SCANOUT_AO=1`.
- Custo de GPU: `PS2X_GS_NATIVE_STATS=1` ("GPU mean"; com o jogo aberto há um piso de ~2 ms),
  `PS2X_GS_NATIVE_PASS_TIMES=1` (tempo por alvo e por etapa, serializado: ~1 ms de viés por etapa),
  `PS2X_GS_NATIVE_FILL_STATS=1` (área desenhada por tipo de shader), `PS2X_GS_NATIVE_PASS_LOG=1` (cada passe e quem o encerrou).
- Shaders de pós-processamento: sempre ler textura no nível 0 (`sampleL0`/`textureL0`); derivadas implícitas em
  fluxo divergente deixavam o resultado não determinístico.
