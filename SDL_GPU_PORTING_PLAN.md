# Plano de recomp e renderização — Silent Hill: Origins

## Direção escolhida

Migrar a janela, apresentação e trabalho gráfico do GS para SDL3 + SDL_GPU, com o driver Metal nativo no macOS. O estado atual já usa SDL_GPU/Metal em parte da rasterização do GS, mas ainda apresenta o framebuffer via Raylib/OpenGL. O alvo inicial é a edição de PlayStation 2 indicada pela ISO local; confirmar região e executável antes de fixar configuração ou ABI.

## Base técnica existente em `black-decomp`

O projeto [black-decomp](/Users/sirbraga/Documents/black-decomp) contém um protótipo funcional e opt-in de SDL_GPU integrado ao runtime PS2Recomp. A implementação relevante está em:

- `tools/PS2Recomp/ps2xRuntime/src/lib/gs/gs_sdl_gpu_raster.cpp` e `include/runtime/gs/gs_sdl_gpu_raster.h`: rasterização/compute SDL_GPU.
- `tools/PS2Recomp/ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp` e `include/runtime/gs/gs_cpu_backend.h`: despacho e coerência entre CPU e espelho GPU.
- `tools/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` e `ps2xRuntime/CMakeLists.txt`: inicialização e ligação do backend ao runtime.
- `ps2recomp/GPU_BACKEND_PLAN.md`: decisões, limitações e sequência de validação do backend.
- `ps2recomp/diagnostics/`: probes SDL_GPU/Metal, captura/análise de transferências e testes de integração.

O runtime consegue selecionar SDL_GPU/Metal por opção, executar rasterização compatível e manter espelho de VRAM com sincronização CPU/GPU. Os registros do Black também apontam limites ainda ativos: há fallback CPU, operações incompatíveis, readbacks e apresentação híbrida em alguns caminhos. É uma base experimental comprovada em cenas específicas do Black, não um renderer completo nem garantia de compatibilidade com Origins.

## Reaproveitar versus reconstruir

**Reaproveitar como referência ou componente compartilhado:** inicialização SDL_GPU/Metal, abstração de backend GS, upload e coerência de VRAM, shaders MSL já implementados, mecanismos de captura de transferências e snapshots, testes sintéticos e instrumentação de desempenho. Antes de copiar código, identificar se cada mudança está no runtime PS2Recomp, nos patches locais do Black ou em dependências alteradas; registrar origem/licença e manter um caminho de integração reproduzível.

**Específico de Black; não importar como se fosse genérico:** funções recompiladas, configuração/análise do ELF, overrides, patches de fluxo do guest, capturas de gameplay, endereços e suposições sobre GIF/VIF, texturas, timing e cenas. O GS é compartilhado pelo hardware, mas precisa ser comparado com streams e estados do Origins antes de confiar no caminho acelerado.

**Trabalho específico de Origins:** identificar revisão/região e ELF, analisar/recompilar o código EE, descobrir dependências de IOP e comportamento de boot, confirmar entrada e sincronização dos caminhos GIF/VIF, registrar cenas de referência e validar formatos/estados de GS usados pelo jogo.

## Sequência proposta

1. Registrar SHA-256 da ISO; listar arquivos sem alterar a imagem; determinar ID/região e extrair o ELF para `orig/` (conteúdo extraído fica ignorado pelo Git).
2. Criar configuração própria do jogo e provar boot no runtime PS2Recomp sem backend SDL_GPU acelerado.
3. Fazer comparação de estado e imagem em uma cena fixa, primeiro no backend de referência e depois em SDL_GPU.
4. Habilitar por opção o backend compartilhado; adicionar fixtures mínimas originadas de capturas do Origins para cada formato, transferência e primitiva necessária.
5. Corrigir diferenças no runtime compartilhado com teste reproduzível; separar regressões do renderer de erros de recomp/guest.
6. Só promover SDL_GPU a padrão após compatibilidade visual e funcional nas cenas escolhidas e medições A/B equivalentes.

## Estado atual

O runner de Origins está compilado com o backend SDL_GPU opt-in. O segundo boot carregou módulos do disco, iniciou o caminho Metal compute e executou apresentações 512×448 até tick 2520 sem o `missing-target` inicial. A apresentação final ainda usa Raylib/OpenGL; não declarar que o renderer completo está em SDL_GPU. O log de boot está em `ps2recomp/logs/runner.log` (arquivo local ignorado pelo Git).

## Critérios de progresso

- Boot e avanço do guest relatados separadamente da fidelidade gráfica.
- Comparação visual repetível da mesma cena, resolução, estado e configuração.
- Cobertura de formatos/transferências observados no Origins, com fallback e sincronização explicitamente contabilizados.
- Nenhum resultado de teste específico do Black tratado como validação de Origins.
