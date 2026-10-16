# Renderizador nativo do GS

O renderizador do jogo: traduz o estado do GS em chamadas da GPU, em Metal no macOS e em Vulkan no Windows, com o
mesmo código (`native/native_gs_module.mm` sobre a interface `native/gpu.h`). É carregado pelo runtime como módulo
(`PS2X_GS_PARALLEL=1`, `PS2X_GS_PARALLEL_MODULE=<arquivo>`), que é o que o launcher e o `JogarSilentHillOrigins.command`
fazem. O código também é publicado à parte em https://github.com/SirBraga/ps2-native-gs.

- Compilar: `ps2recomp/gpu/build.sh` (deste sistema) ou `ps2recomp/gpu/build.sh windows` (do Mac para o Windows).
- Shaders Vulkan: depois de mudar `native/gs_shaders.glsl`, rodar `native/compile_shaders.sh` (precisa do
  `glslangValidator`, do Vulkan SDK). O MSL (`native/gs_shaders_msl.inc`) é compilado pelo Metal em execução; os dois
  precisam ficar em sincronia.
- Validar: `gs-replay <dump> --module <módulo> --out <pasta>` e `gs-replay --diff <pastaA> <pastaB>` (dumps em
  `recomp/diagnostics/gs-dump`). No macOS, `libblack-native-gs-vk.so` roda o backend Vulkan via MoltenVK
  (`PS2X_GS_MOLTENVK=<caminho absoluto>/libMoltenVK.dylib`, em `recomp/gpu/moltenvk/`).
- `third_party/`: volk (MIT) e os headers C do Vulkan (Apache-2.0); `native/third_party/smaa`: tabelas do SMAA (MIT).
