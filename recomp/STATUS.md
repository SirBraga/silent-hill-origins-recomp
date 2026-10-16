# Estado do projeto — 2026-10-06

## Disco identificado

- Plataforma: PlayStation 2.
- Região/revisão reportada em `SYSTEM.CNF`: NTSC, `VER = 1.00`.
- Executável: `SLUS_217.31`; ELF MIPS-III, 32-bit little-endian, estático e sem símbolos.
- SHA-1 do ELF: `04bd5dea8bbe4c525d23483d3fd0f8a1d5e8127a`.
- SHA-256 do ELF: `9975e9613a72ba057ab7a89b56a3a3bde78b44249ebfdb8ddca55105bc95c337`.
- SHA-256 da ISO: `b5f738336fc637a6742419c7183951f6ebb5e852b6a47126002decb18fbecff6`.
- Tamanho da ISO: 3.074.785.280 bytes.
- A ISO foi montada somente para leitura e ejetada após copiar o ELF para `orig/`.

## Análise e recompilação

- A configuração inicial está em `config/SLUS_217.31.toml`; entrada ELF relativa ao projeto e saída `recomp/output/`.
- ElfAnalyzer encontrou 8.688 funções, 52 seções, 445 correspondências de símbolos SCE e ponto de entrada `0x001F61E0`.
- PS2Recomp: 8.688 funções processadas; 8.569 recompiladas; 119 stubs; zero ignoradas e zero falhas de decode.
- Geração concluída sem erros; reportou 2.518 avisos de fluxo indireto `JR/JALR` não resolvido com promoção de entradas de fallback.
- Os 8.692 arquivos gerados ocupam aproximadamente 165 MB e são ignorados pelo Git. O log completo está em `recomp/recomp.log`, também ignorado.

## Próximo gate

O boot renderiza a tela “Silent Hill Origins — loading” corretamente na janela (captura em `ps2recomp/diagnostics/silent-hill-origins-loading.png`). O trace CDVD confirmou leituras de `SH.ARC` e `IGC.ARC` e não mostrou erro de leitura. A investigação do loading ainda não identificou a causa. Um run ficou em `done=queued=14` por centenas de milhões de polls no callback `0x002EDC30`; em boots posteriores os contadores avançaram até `0x75` (117), portanto esse congelamento em 14 não é reproduzível em todas as execuções. O frame permaneceu no loading sem `guest-fault`/`missing-target`. Próximo: correlacionar a transição após o item 117 com os estados das threads e os callbacks de carregamento.

## Observação sobre o runner de referência

O launcher atual do Black (`black-decomp/ps2recomp/run.sh`) depende de conteúdo extraído em `recomp/disc`, da ISO e de hooks `black_*` no runner. O build também copia funções recompiladas para dentro do checkout compartilhado do PS2Recomp e remove fontes gerados anteriores. Esse fluxo não é genérico e não deve ser executado apontando para este projeto. A integração de Origins precisa ter diretório/build próprios e adaptação explícita de CDVD/IOP antes do primeiro boot.

## Runtime isolado e primeiro boot — 2026-10-06

- Criada cópia de trabalho independente em `tools/PS2Recomp/`, baseada no commit `75d729ce40d7eed9649fd4bb05628dee520f3d0c`; aplicada nela a evolução local do runtime do Black e adicionadas as opções de SDL_GPU/Metal.
- Runner nativo Apple Silicon compilado com `PS2X_ENABLE_SDL_GPU_GS_BACKEND=ON`.
- `ps2recomp/JogarSilentHillOrigins.command` monta a ISO em modo somente leitura, passa o caminho da imagem e da raiz CDVD ao runtime e inicializa o runner com SDL_GPU ligado.
- Primeiro run: carregou o ELF, inicializou SDL_GPU/Metal (`Metal compute raster ready`), carregou nove módulos IRX do disco (incluindo `RWA.IRX`) e avançou até 183 ticks/frame 127. Isso confirma o caminho de boot inicial, acesso à ISO e execução do GS accelerated path; não confirma gameplay nem fidelidade visual.
- O run também registrou um primeiro `guest-branch:missing-target`: JALR em `0x002D9D24` apontou para `0x002EBED8`, endereço chamável interno ao corpo recompilado `0x002EBD98` que não estava exposto como entry point. O resumo preservado está em `ps2recomp/diagnostics/boot-missing-target-001.txt`; o log integral do primeiro run foi substituído pelo log do reteste.
- Reaproveitado `find_code_pointers.py` do Black e executado sobre o ELF Origins. Detectou 5.954 referências para `.text`, das quais 3.515 passam pelo filtro de início de função; 3.429 entry-point hints novos foram mesclados à configuração, incluindo `0x002EBED8`.
- Recompilação regenerada com os hints concluiu com zero erros e 2.518 avisos. `register_functions.cpp` agora mapeia `0x002EBED8` para o corpo recompilado e a função tem despacho pelo PC de entrada; a tabela foi copiada para o runner e reconstruída antes do reteste.

## Reteste após expor entradas indiretas

- O runner atualizado compilou com a tabela de funções regenerada.
- No segundo boot, o destino `0x002EBED8` deixou de gerar `missing-target`. O IOP carregou `MC2_D.IRX`; até o encerramento manual, o guest continuava em `0x002DEC6C` com três threads ativas, DMA=75, GIF=18, VIF=4 e apresentações 512×448. Nenhum `guest-fault` ou novo `missing-target` apareceu nesse trecho.
- A leitura do código gerado confirmou um laço guest explícito: carrega um callback do campo `*(s2+0xC)`, chama o ponteiro em `callback+0x1C` quando não nulo e, por causa de `beql $v0,$s1`, repete enquanto o retorno for `1`. O callback em runtime é `0x002EDC30`, que chama `0x002E9190` e lê a flag `GP-0x73A0`. As transições guest confirmaram `0→1` em `0x002E8ECC` e `1→0` em `0x002E8CD8`; o log de funções também registra saídas de `sub_002DE7F0`. Portanto, é polling ativo, não uma espera permanentemente presa. Quatro amostras espaçadas retornaram `1`; entre elas a flag alternou. O PC observado em `0x002DEC50/0x002DEC6C` corresponde a esse laço; `0x002DECC0` pertence a outro laço da mesma rotina.
- A nova inspeção visual confirmou o frame do título legível; Enter não alterou a tela. Isso só testa entrada durante o loading, não valida controles de jogo. Menu e gameplay seguem sem confirmação.
- A rasterização compatível do GS passou por SDL_GPU/Metal. A janela e o caminho de apresentação continuam em Raylib/OpenGL com cópia do frame; a apresentação final não foi migrada para SDL_GPU ainda. O renderer SDL_GPU do Black segue híbrido e cobre somente operações compatíveis.
- O log em `ps2recomp/logs/runner.log` é do run de aproximadamente um minuto e foi ignorado pelo Git. Ele avançou até tick 3.360 e não contém `guest-fault` nem `missing-target`. A primeira falha está resumida em `ps2recomp/diagnostics/boot-missing-target-001.txt`.
- Instrumentação opcional, ligada apenas com `SHO_DIAG_CALLBACK=1`, registra transições da flag nas rotinas guest e amostras a cada 100.000 retornos do callback. Detalhes em `ps2recomp/diagnostics/callback-wait-001.txt`.
- Um boot diagnóstico com `PS2X_CD_TRACE=1` registrou 129 chamadas `sceCdRead` antes de encerrar, incluindo streams dentro de `SH.ARC` (LSN 3422, 491.152.188 bytes) e `IGC.ARC` (LSN 453266, 248.949.585 bytes). O código CDVD copia os setores do arquivo da ISO direto para RAM; nenhum erro de leitura, `guest-fault` ou `missing-target` apareceu. O trace completo está em `ps2recomp/logs/runner.log` (arquivo ignorado). O arquivo temporário `ps2_log.txt` produzido pela configuração verbosa foi removido após o run.
- A amostragem condicional de callback foi ampliada para incluir `done` (`GP-0x7390`), `queued` (`GP-0x738C`) e palavras do objeto/descritor. Nos runs seguintes, o runner isolado foi configurado localmente com `PS2X_ENABLE_AGRESSIVE_LOGS=OFF`; o trace seletivo continua ativável com `SHO_DIAG_CALLBACK=1` e `PS2X_CD_TRACE=1`.


## Amostragem de threads e semáforos

- O trace seletivo confirmou que o callback continuou retornando `1` enquanto `done`/`queued` avançaram em outro run até `0x75` (117). A flag global alternou durante esse progresso. O último run de diagnóstico foi encerrado manualmente após a amostragem; o launcher desmontou a ISO.
- O snapshot do scheduler mostrou a thread principal ativa e duas threads bloqueadas em semáforos diferentes. Semáforo 9 teve chamadas pareadas de wait/signal, com alguns sinais feitos pela thread auxiliar; semáforo 12 recebeu waits da thread iniciada em `0x002F1888`, sem sinal observado no intervalo amostrado. O código dessa thread trata uma fila/eventos antes de sinalizar o semáforo associado ao gerenciador. Isso é compatível com espera ociosa na fila, mas não prova a função da thread nem que seja a causa do loading.
- O log de semáforo dessa captura mostra `pc=0` devido a um erro na instrumentação (leitura do registrador zero). A fonte foi corrigida para registrar `ctx->pc`; `ra` permanece útil para identificar o retorno guest. O zero no log salvo não é um PC real. As linhas são diagnósticas, não evidência de falha do kernel.


## Reteste instrumentado — 2026-10-07

- A saída corrigida do laço confirmou duas tarefas completadas (`done` 13 e 14), e a seguinte ficou ativa: `s2=0x0034FDC0`, `s3=0x1300`, `work=1`. O callback `0x002EDC30` continua retornando 1; não houve terceira linha `[sho:callback-exit]` até mais de 80 milhões de amostras. Nesta execução, a parada em 14 voltou a ocorrer.
- O guest leu blocos de `SH.ARC` até LSN 32776 e recebeu tráfego SIF/IRQ antes da parada. O LSN está dentro do extent válido do arquivo; isso não aponta, por si só, para leitura fora da ISO. A evidência atual localiza a espera na conclusão de uma tarefa assíncrona, mas ainda não identifica qual resposta ou evento está faltando.
- A fonte gerada e o espelho do runner agora emitem `[sho:callback-exit]` (até 128 saídas) junto dos dados de espera. Runner recompilado com sucesso. A execução foi encerrada após a coleta e a ISO desmontada pelo launcher.
- No reteste seguinte, o dispatcher SIF registrou os campos dos pacotes e o término de até 64 handlers `cid=1` e 32 handlers `cid=4` separadamente. Os handlers foram encontrados, enfileirados e chegaram ao retorno do scheduler. Os dois últimos pacotes `cid=1` carregavam o identificador `0x0f`; ambos antecederam as saídas com `done=13` e `done=14`. O boot voltou a parar na tarefa seguinte com `done=queued=14`. Isso afasta perda/rejeição no despacho do SIF para os pacotes observados, mas não demonstra qual trabalho da tarefa 15 está pendente nem a causa do loading.
- A instrumentação de término mostra retorno do handler de todos os pacotes observados; não basta, isoladamente, para provar que o efeito guest esperado (por exemplo, sinalização do semáforo/atualização da fila) foi aplicado corretamente. O próximo ponto deve correlacionar os argumentos do syscall de sincronização e a fila/estado do descritor da tarefa 15.
- Runner atualizado e compilado. A captura mais recente foi encerrada manualmente após reproduzir a espera; o launcher desmontou a ISO. O log temporário permanece em `ps2recomp/logs/runner.log` (ignorado pelo Git).
- A instrumentação de semáforos foi ampliada para os IDs usados pelo handler CID4 (`4`, `5`, `8`). No boot, as operações observadas formam ciclos de wait/signal nessas três IDs; o traço antigo saturava nos primeiros 512 eventos e terminava durante um ciclo, por isso não era possível verificar o restante. Os IDs `9` e `12` continuam representando as duas threads auxiliares bloqueadas no snapshot; o callback que não conclui é polling ativo da thread principal, não wait nesses semáforos.
- O runner foi recompilado com a captura seletiva dos IDs `4/5/8` e o boot voltou a parar em `done=queued=14`. A captura atingiu o limite de 512 eventos antes do fim do run; nos ciclos registrados, waits e signals aparecem pareados, mas o trecho final continua sem observação suficiente para excluir um sinal ausente depois do limite. O log foi salvo e a ISO desmontada ao encerrar o processo.
- O trace seguinte aumentou o limite e observou 6.762 operações de semáforo antes do encerramento, com os ciclos de poll do ID 4 consumindo o sinal (poll retorna o próprio ID e a contagem cai para zero); os sinais do ID 4 também retornaram sucesso, sem overflow. O callback da tarefa continuou parado em 14, então os semáforos 4/5/8 não são a causa demonstrada.
- As transições da flag `GP-0x73A0` mostraram duas sequências completas `0→1→0` e uma última `0→1` sem limpeza. Os argumentos salvos no evento da última transição foram `{a0=0x5e00, a1=0x00e77940, a2=0x1300, a3=7, t1=0, t2=0, t3=0}`. As leituras de CD pararam em LSN 32776 no mesmo trecho e a tarefa seguinte permaneceu em polling. A hipótese agora é uma conclusão/evento posterior ausente para esse item; ainda não há prova se a origem é o runtime IOP/CDVD ou o fluxo guest.
- A coleta foi encerrada manualmente e a ISO desmontada. Runner compilado com a instrumentação ampliada; `git diff --check` passou.

## Reteste do dispatcher IOP — 2026-10-07

- A coleta localizou os pacotes de conclusão `cid=1` no módulo `RWA.IRX`, com retorno de syscall em `0x5708c`. O callback especializado está em `0x57050`, é chamado pelo dispatcher do RWA com `index=1` e argumento `0x6d1e0`; nas chamadas observadas, a comparação interna recebeu `15` e o envio SIF ocorreu. O item que antes parava em 14 foi concluído em outro boot, então esse bloqueio é intermitente e não explica sozinho o loading.
- O boot avançou até `done=117`, consumiu novos eventos SIF tipo 20/69 e leu com sucesso os setores 579185–579217. Depois disso, o log ficou sem novas linhas por mais de dois minutos enquanto o runner permanecia em loop ativo, sem fault/missing-target ou erro CDVD. A execução foi encerrada manualmente e a ISO desmontada.
- Próximo: identificar o PC/laço guest após o pacote tipo 69 e a leitura em LSN 579217, e verificar a tela nessa fase. O jogo ainda não foi confirmado como chegando ao menu nem está jogável.

## Worker RWA no item 15 — 2026-10-07

- Um boot novo voltou ao bloqueio intermitente `done=queued=14`. Os dois callbacks RWA ocorreram em `0x57050` e retornaram pelo dispatcher em `0x55a9c`; ambos receberam `index=1`, argumento `0x6d1e0` e estado `15`. Não houve terceira invocação antes do encerramento.
- Snapshots de threads IOP confirmaram que a thread RWA em `PC=0x570f4` ficou bloqueada no semáforo 12 (`state=Semaphore`, `waitId=12`). Outras threads RWA apareceram bloqueadas nos semáforos 14 e 16; threads em `0x557e4` alternaram entre `Sleep` e `Ready`. Isso desloca a investigação para quem deveria acordar/agendar o próximo trabalho, sem provar ainda qual sinal está faltando.
- Instrumentação condicional nova, habilitada com `SHO_DIAG_RWA=1`, registra dispatcher RWA, snapshots das threads IOP e operações de semáforos 12/14/16. O próximo boot deve correlacionar o semáforo 12 com o produtor do evento SIF. O runner continua exibindo o loading; menu e gameplay ainda não foram alcançados.
- No reteste, o semáforo 12 foi criado no início do RWA e só registrou uma consulta e uma espera da thread 16 (`PC=0x570f4`); nenhum sinal para o ID 12 apareceu durante a captura. Os semáforos 14/16, em contraste, receberam sinais repetidos da thread 21. A próxima captura também registra os SIDs registrados pelo IOP e chamadas RPC iniciadas pelo EE, para localizar o produtor ausente.

## Sync com o runtime do Black e saída do loading — 2026-10-08

- **Sync de runtime.** `tools/PS2Recomp` recebeu o delta do Black posterior ao snapshot de 6/out (merge de 3 vias sobre a base `75d729c`, sem conflitos): grupo GS, `ps2_memory`, `ps2_runtime`, `ps2_vif1_interpreter` e interpretador VU. IOP/SIF/RPC não tinham mudado no Black. Não foram trazidos `black_vu1_recompiled.inc` nem `black_vu_aot_generated.hpp` (código gerado dos microprogramas do Black). Estado anterior guardado em `patches/pre-black-sync-backup/`.
- **Regressão do sync, isolada por bisseção.** No Black `PS2X_GIF_INCREMENTAL` passou de opt-in a ligado por padrão; com ele ligado o Origins para logo após o boot do IOP (20 leituras de CD, EE em polling em `sub_0022E120`). O launcher agora exporta `PS2X_GIF_INCREMENTAL=0` por padrão. A causa dentro do modo incremental não foi investigada.
- **Travamento intermitente em `done=queued=14`: corrigido.** O emulador do IOP entregava handlers de interrupção (DMA, SPU2, SIO2, timers) e handlers de comando SIF sem checar `CpuSuspendIntr`, e permitia aninhamento. Em `iop_emulator.cpp` essas entregas agora ficam pendentes enquanto o guest está com interrupções desabilitadas ou já dentro de um handler. Antes: o terceiro upload de áudio do RWA (offset `0x5e00`, `0x1300` bytes) nunca gerava o DMA do SPU2 em cerca de metade dos boots. Depois: 5 de 5 boots concluíram os 105 uploads e chegaram ao LSN 579217. A espera da thread RWA no semáforo 12 é o estado ocioso normal (aparece igual nos boots que passam), não a causa.
- **Bloqueio em LSN 579217: corrigido.** O EE ficava em laço em `sceSifBindRpc` para o SID `0x80000597` (busca de arquivo do CDVDFSV), que nenhum módulo IOP registra. Origem: `sceCdLayerSearchFile@0x00295EF8` tem nome na configuração mas não está em `stubs`, então o corpo do SDK rodava. `ps2recomp/overrides/sho_cd.cpp` liga esse endereço ao `sceCdSearchFile` HLE; o arquivo precisa ser copiado para `tools/PS2Recomp/ps2xRuntime/src/runner/zz_sho_cd.cpp` antes do build.
- **Estado atual.** O boot sai do loading sem `guest-fault`/`missing-target`, localiza `\MOVIES\B\BACKN.PSS` e `\MOVIES\L\LOGON.PSS` e inicia o stream de `LOGON.PSS` (257 leituras de CD, até o LSN 1004644). Para aí: o EE fica em laço em `sub_00182568`/`sub_00182ED0` chamando `sceCdStRead`, que passa por `notifyMpegCdStreamEof` com o stream em `lbn=0x10122a` de `end=0x101bdb`. O decodificador registrou 144 erros `mpeg2video` (`invalid cbp`, `ac-tex damaged`), o que sugere dados de stream corrompidos ou fora de ordem. A tela não foi inspecionada nesta sessão (sem permissão de captura); menu e gameplay continuam sem confirmação.
- **Próximo:** caminho de stream de CD/MPEG (`Kernel/Stubs/CD.cpp` e `MPEG.cpp`): por que o EOF é sinalizado antes do fim e por que os dados chegam inválidos ao decodificador.
- **VU recompilado.** O carregador de bundle veio no sync e `ps2recomp/build_vu_recompiled.sh` foi adaptado do Black, mas ainda não foi executado: ele gera código a partir de imagens VU capturadas em execução (`PS2X_VU_CATALOG`, `PS2X_VU_RECOMP_CAPTURE`), o que exige chegar a cenas 3D.
- **Cuidado operacional.** O runner do Black tem o mesmo nome de processo. Matar sempre pelo caminho: `pkill -f "silent-hill-origins-recomp/tools/PS2Recomp/out/rt/ps2xRuntime/ps2EntryRunner"`.

## FMVs, menu e primeira cutscene — 2026-10-08 (tarde)

- **Vídeo de logo não terminava: corrigido.** `0x002F9948` é `sceMpegIsEnd` (não reconhecido pelo analisador); lia um campo guest que o decodificador HLE nunca escreve. O override `sho_cd.cpp` agora liga esse endereço ao `sceMpegIsEnd` do runtime.
- **Erros de decodificação MPEG: corrigidos.** O decodificador recebia o mesmo ES de duas fontes intercaladas: o demux HLE (`sceMpegDemuxPssRing`) e a cadeia de DMA para o IPU que o próprio jogo alimenta com o ES copiado no callback. Confirmado por dump: os bytes PSS entregues batem com os arquivos do disco, e o ES despejado continha o início do filme repetido no meio. Em `MPEG.cpp`, depois que o demux PSS entrega vídeo, a cadeia do IPU continua sendo consumida mas não realimenta o decodificador. Antes: mais de 200 erros `mpeg2video` até o menu; depois: 0.
- **Laço no fim do filme: corrigido.** O callback de reabastecimento do jogo (`0x00181FE0`) repete a leitura enquanto `sceCdStRead` devolve 0 e só sai quando o demux consome 0 bytes. No hardware a leitura de stream não para no fim do arquivo. `CD.cpp` agora devolve setores zerados após o fim e `sceMpegDemuxPss/Ring` devolvem 0 quando o stream da geração atual já terminou.
- **Bandeiras cortadas na seleção de idioma: causa tratada, falta confirmação visual.** O backend SDL_GPU descartava triângulos com `AA1` ligado (`rejected draw reason=3`, 254 ocorrências, cada uma virando `guest-fault`). `gs_cpu_backend.cpp` agora desenha esses primitivos com borda dura; `PS2X_GS_SDL_GPU_REJECT_AA1=1` restaura a rejeição. Depois da mudança: 0 rejeições e 0 faults em 130 s na tela de idioma.
- **Seleção pulando opções: causa provável tratada, falta confirmação.** No teclado, W/A/S/D acionavam o direcional e o analógico esquerdo ao mesmo tempo. Agora setas = direcional, W/A/S/D = só analógico (`ps2_pad.cpp`). Não foi medido se há outra causa.
- **Até onde o jogo foi.** Em sessão jogada pelo usuário: idioma → logo → menu (`MENUN.PSS`) → Novo Jogo → primeira cutscene `\MOVIES\S\SCN01N.PSS`. Isso foi antes da correção do AA1; não há ainda registro do que acontece depois da cutscene.
- Diagnósticos novos: `PS2X_MPEG_PSS_DUMP=<arquivo>` e `PS2X_MPEG_ES_DUMP=<arquivo>`.
- Teclado: setas direcional, W/A/S/D analógico esquerdo, I/J/K/L analógico direito, X ou Espaço = Cross, C ou Esc = Circle, Enter = Start, Tab = Select.

## Tela de idioma correta — 2026-10-08 (fim da tarde)

- **Bandeiras cortadas e texto ausente: corrigido e confirmado por imagem** (`ps2recomp/diagnostics/language-select-2026-10-08.png`). Causa: o backend SDL_GPU montava a tabela de swizzle de Z16/Z16S com páginas 64×32; páginas de 16 bits são 64×64. O Z-buffer do jogo (Z16S 512×448, blocos 7168–8959) ocupava o dobro e sobrescrevia as texturas a partir do bloco 8960 (bandeiras) e o alvo de texto. Corrigido em `gs_sdl_gpu_raster.cpp` (tabela) e `gs_metal_shader.h` (`bitAddress`, base do Z16S passa a 40960). A mudança do AA1 continua necessária (sem ela os triângulos eram descartados).
- O rasterizador de CPU (`PS2X_GS_SDL_GPU=0`) mostra tela branca nesta cena; não serve de referência hoje.
- Diagnósticos novos: `PS2X_FRAME_DUMP_DIR=<dir>` (+ `PS2X_FRAME_DUMP_INTERVAL`) grava o frame apresentado em PNG; `PS2X_GS_DRAW_TRACE=<n>` (+ `_SKIP`) lista lotes de triângulos texturizados; `PS2X_GS_TEX_DUMP=<n>` (+ `PS2X_GS_TEX_DUMP_DIR`) despeja as primeiras texturas distintas.
- Ainda sem confirmação: seleção pulando opções (mapeamento de teclado alterado) e o que acontece depois da primeira cutscene.

## Primeira cena 3D — 2026-10-08 (noite)

- **`missing-target` após a primeira cutscene: corrigido.** Depois de `SCN01W.PSS` o jogo abre `\IGC.ARC` e fazia `JALR` para `0x001023E8`, início de função real que o analisador fundiu em `sub_001023E0` e que nenhum ponteiro estático referencia. `tools/find_function_starts.py` varre todo o `.text` atrás do caso inequívoco (`jr ra` + delay slot seguido de `addiu sp,sp,-N`) e mescla em `entry_points`. Nove inícios estavam de fato ocultos: `0x1023E8 0x151CF8 0x151D88 0x1BE428 0x27C500 0x27CAE0 0x289430 0x289520 0x29D358`. Código regenerado (0 erros, 2.518 avisos) com o `ps2_recomp` do checkout do Black, só executado.
- A regeneração sobrescreveu a instrumentação manual `[sho:callback-*]` em três arquivos gerados; as versões instrumentadas ficaram em `patches/generated-diagnostics/`. A saída anterior está em `recomp/output-prev/`.
- **Resultado:** com roteiro de controle (`PS2X_PAD_SCRIPT`, Cross a cada 3 s) o jogo vai sozinho de idioma → logo → menu → Novo Jogo → `SCN01W.PSS` → cena 3D em tempo real (Travis, caminhão, lanterna, neblina), sem `guest-fault`, `missing-target` nem desenho rejeitado. Imagem: `ps2recomp/diagnostics/first-3d-scene-2026-10-08.png`. Controle do personagem ainda não foi testado.
- **Desempenho na cena 3D:** lento. A amostragem da thread do jogo mostra a maior parte do tempo em `VU1Interpreter::run/runFast` sob `processVIF1DataPrefix`, o mesmo gargalo do Black. Taxa de quadros não medida com precisão.
- **Próximo:** capturar os microprogramas VU nesta cena (`PS2X_VU_CATALOG` / `PS2X_VU_RECOMP_CAPTURE`) e rodar `ps2recomp/build_vu_recompiled.sh`; testar movimento do personagem.
- Restam 851 instruções "após retorno" sem quadro de pilha não expostas como entrada; a maioria deve ser bloco interno de função com retorno antecipado. Se aparecer outro `missing-target`, conferir essa lista antes.

## Ponto flutuante do EE e VU recompilado — 2026-10-08 (noite, parte 2)

- **Tradutor de FPU corrigido (aviso da sessão do Black, conferido aqui).** `SQRT.S` usava o campo `fs` como operando; no EE o operando é `ft`. 67 das 212 raízes do jogo estavam erradas. Também: `RSQRT.S` passa a calcular `fs / sqrt(ft)`, divisão por zero resulta em ±`FLT_MAX` (não infinito) e `CVT.W.S` trunca com saturação. Mudanças em `ps2xRecomp/src/lib/fpu_translator.cpp` e `ps2_runtime_macros.h`. O Origins agora tem tradutor próprio compilado em `tools/PS2Recomp/out/build` (antes usava o binário do Black). Código regenerado; a cena 3D continua sendo alcançada sem faults. Efeito visual/físico da correção não foi comparado.
- **Launcher:** execuções mortas deixavam a ISO montada e a seguinte abortava em silêncio no `hdiutil attach` (duas execuções de teste perdidas por isso). O launcher agora desmonta montagens órfãs. `SHO_LOG=<arquivo>` redireciona o log.
- **Microcódigo VU no executável.** `tools/extract_vu_programs.py` extrai 13 programas completos da seção `.vutext` (comandos VIF `MPG`): 5 grandes de VU1 (1.034–1.451 pares) e 8 menores. `ps2x_vu1_recompile` (cópia em `ps2recomp/diagnostics/vu1_recompile.cpp`) ganhou imagens estáticas `-len<pares>`, casadas em execução pelo hash só do trecho do programa (`VuRecompiled::findPrefix`), porque o resto da memória de código guarda resíduo de programas anteriores. Também corrigido um `else` pendurado que fazia imagens sem cobertura emitirem zero pares.
- **Resultado medido (`PS2X_VU_RECOMP_TRACE=1`):** VU0 100% recompilada; VU1 recompilada para os programas do `.vutext`, mas a cena 3D usa 8 outras imagens que não casam.
- **Por quê:** essas imagens são compostas. Todo o código delas está no ELF (seção de dados, offsets `0x4c0000`–`0x580000`), mas em fragmentos que o jogo combina em tempo de execução (cabeçalho comum + trechos por material em endereços fixos). Cada combinação é uma imagem diferente.
- **Em andamento:** recompilar as 8 combinações capturadas (`recomp/diagnostics/vu-captured/`), como no Black. Combinações de outras cenas caem no interpretador até serem capturadas com `PS2X_VU_RECOMP_CAPTURE=<dir>`.
- **Melhoria futura:** recompilar por fragmento (endereço, tamanho, hash) em vez de por imagem inteira, o que cobriria todas as combinações direto do executável. Exige tratar com cuidado as fronteiras entre fragmentos (delay slot, E-bit, análise de flags).

## VU recompilado ativo na cena 3D — 2026-10-08 (madrugada)

- `black_vu1_recompiled.inc` gerado com 29 imagens e 24.963 pares: 13 programas estáticos do `.vutext` (21 imagens contando VU0/VU1) + 8 imagens compostas capturadas na primeira cena 3D. O nome do arquivo é o que o core inclui; o conteúdo é do Origins.
- **Cobertura medida** (`PS2X_VU_RECOMP_TRACE=1`, da inicialização até ~1 min de cena 3D): 1.852 resoluções de VU0 e 7.962 de VU1, todas "recompiled", nenhuma no interpretador.
- **Imagem:** igual à do interpretador a olho (`ps2recomp/diagnostics/first-3d-scene-vu-recompiled-2026-10-08.png`). Sem comparação pixel a pixel.
- **Velocidade, uma execução de cada, mesma cena, janela de 40 s:** 13,5 quadros apresentados/s com VU recompilada contra 9,0 com `PS2X_VU_RECOMPILED=0` (+50%). A métrica é o número de uploads de frame do runtime, não o FPS interno do jogo, e não houve repetições. Continua longe de tempo real.
- **Perfil com VU recompilada (3 s, thread do jogo, 1.742 amostras):** 1.100 sob `VU1Interpreter::run` (inclui o código recompilado e o agendador de pares), das quais ~450 no caminho XGKICK → `GS::vertexKick` → `GSCpuBackend::TryMetal` (submissão de primitivo por primitivo ao backend de GPU). Próximos alvos: custo por primitivo na submissão ao GS e o overhead do `stepPair`/pipelines.
- **Custo de build:** com o `.inc` grande, ligar o `ps2EntryRunner` leva mais de 10 minutos e compilar `ps2_vu1_core.cpp` cerca de 20. Qualquer mudança no runtime paga a ligação.
- **Testes sem janela:** `PS2X_WINDOW_HIDDEN=1`. Roteiro até a cena 3D em `ps2recomp/pad-script-newgame.txt` (alterna Cross e direcional para baixo; o roteiro só com Cross pode ficar preso no aviso de memory card).
- **Pendências novas:** o menu mostra "No memory card (8MB) in MEMORY CARD slot 1" (memory card emulado não reconhecido; salvar/carregar não deve funcionar). Dois testes terminaram com "window close requested" sem causa identificada.

## Introdução jogável, cabeça do Travis e funções matemáticas — 2026-10-09

- **Objetivo declarado pelo usuário:** usar o hardware do computador ao máximo, nada emulado, melhor código recompilado possível, 120 Hz / 120 fps com quadros reais (não jogo acelerado). Testes automáticos devem rodar com a janela visível.
- **Progresso:** com `ps2recomp/pad-script-newgame.txt` o jogo vai até a introdução em tempo real: créditos de abertura e o Travis andando pela estrada, sem faults.
- **Cabeça do Travis solta do corpo: corrigido** (`ps2recomp/diagnostics/bug-head-detached-2026-10-09.png` antes, `intro-walk-head-fixed-2026-10-09.png` depois; a lanterna também passou a iluminar). Não era a VU: o defeito persistia com `PS2X_VU_ACCURATE=1`. Causa: `cos sin log pow fabs floor` do jogo são as versões double (argumento em `a0`, resultado em `v0`, sem FPU de double no EE) e estavam em `stubs`, substituídas por versões do runtime que usam `f12`/`f0` como float. Removidas de `stubs` em `config/SLUS_217.31.toml`, junto com `__ieee754_rem_pio2f`, `__kernel_cosf`, `__kernel_sinf` (aproximações) e `rand`. Agora roda o código original recompilado.
- **Scripts:** `ps2recomp/rebuild_ee.sh` (regenera o EE e reconstrói) e `ps2recomp/rebuild_vu.sh` (regenera o código de VU e reconstrói).
- **Outras mudanças do dia, vindas de avisos da sessão do Black e conferidas aqui:** VF0 = (0,0,0,1) em todo `R5900Context`; thread do jogo com arredondamento em direção a zero; elisão de flags MAC desligada em programas de VU1 que leem flags (`PS2X_VU_FLAG_ELISION=1` restaura). Esc deixou de fechar o jogo (`SetExitKey(KEY_NULL)`).
- **Defeito aberto: texturas piscando/bugando na introdução.** Segundo o usuário, somem com `PS2X_VU_ACCURATE=1` e voltam com a VU recompilada. Isso bate com a causa que o Black confirmou: o caminho rápido da VU (`stepPair`) não conta os stalls de hazard de registrador, de recurso da EFU, nem reavalia o stall depois de cada espera. O Black validou a correção no interpretador rápido; a versão recompilada estava compilando lá. Ainda não trazida para o Origins.
- **Velocidade (uma execução, 40 s, antes das correções de hoje no EE):** 10,5 quadros apresentados/s com flags exatos, contra 13,5 antes.

## Segundo sync com o Black e base do backend direto da VU — 2026-10-09 (tarde)

- **Decisão do usuário:** construir o backend direto da VU (NEON por bloco), genérico, para o Black reaproveitar. Plano em `ps2recomp/VU_DIRECT_BACKEND_PLAN.md`. A sessão do Black confirmou que não está fazendo isso e que a correção de stalls está validada no jogo dele.
- **Sync 2** (backup em `patches/pre-black-sync2-backup/`): 18 arquivos; conflitos resolvidos a favor do Black onde os dois lados corrigiram a mesma coisa (FPU do EE, VF0, arredondamento), mantidos os itens só do Origins (dump de frames, janela oculta, Esc, teclado, guarda de interrupções do IOP). `ps2_vu1_core.cpp`, `ps2_vu1.h`, `vu1_recompile.cpp`, `vu1_trace_replay.cpp`, `extract_vu_programs.py` adotados do Black por inteiro; `findPrefix` e a minha versão da elisão de flags saíram. Atenção: o core copiado inclui a elisão de flags ciente de stalls, que o Black ainda não tinha validado no modo recompilado.
- **Microcódigo:** o extrator do Black acha 76 programas de VU1 no ELF do Origins (todos carregam no endereço 0; ficam na seção de dados, não só no `.vutext`). `--verify` contra as 8 imagens capturadas: o que não é coberto é resíduo de programa anterior além do fim do programa atual. 7 deles cabem na VU0 e são gerados também como `prog0-*`. Gerado: 83 programas, 104.617 pares, 11.815 corpos distintos.
- **Armadilha de build:** `rebuild_ee.sh` não força a recompilação de `ps2_vu1_core.cpp` depois de gerar o `.inc` (o `__has_include` é invisível ao ninja); sem isso o runner sai sem VU recompilada e usa o interpretador de referência. Precisa de `touch` no core.
- **Traço de referência do Origins:** `recomp/diagnostics/vu-trace/road-intro.bin` (local, 303 MB): 6.000 execuções amostradas (1 a cada 40) da inicialização até a introdução, 12,4 M pares, 13 imagens. Linha de base no replay, com um build pesado rodando em paralelo: referência 47–49 ns/par, interpretador rápido 21,4–21,9 ns/par, 0 divergências rápido × referência; 15 registros divergem do resultado gravado só no status (máscara c3f). Número do recompilado pendente do build.

## VU recompilada validada no traço, texturas ok, perfil da estrada — 2026-10-09 (noite)

- **Divisão de trabalho (decisão do usuário):** o backend direto da VU fica com a sessão do Black. O Origins cuida de GS, IOP, memory card e do que é específico do jogo. Requisito do usuário para o GS: o quadro não pode passar pela CPU de novo.
- **Build de VU:** os 76 programas numa unidade só passaram de 2h30 de compilação sem terminar; cancelado. `ps2recomp/rebuild_vu.sh` agora recompila só os programas listados em `recomp/diagnostics/vu-programs/used.txt` (6 de VU1 usados na introdução, 7.220 pares; `VU_ALL=1` para todos) mais 7 de VU0. Os demais rodam no interpretador rápido.
- **Validação no traço `road-intro.bin`:** recompilado × referência = 0 divergências em 12,4 M pares; 11,3 ns/par (rápido 21,7; referência 47).
- **Texturas da introdução: ok**, confirmado pelo usuário com o modelo de stalls do Black.
- **Taxa na estrada:** 13,5 quadros apresentados/s, igual a antes, apesar da VU 2× mais rápida no traço.
- **Perfil (thread do jogo, 3 s, 1.433 amostras; todas as outras threads ociosas):** `VU1Interpreter::run` 914, das quais `runFast` 637 (código recompilado + contabilidade por par) e ~277 fora dele (redecodificação/análise a cada troca de microprograma; `analyzeFastPairs` sozinha 61); XGKICK → `GS::vertexKick` → `GSCpuBackend::TryMetal` ~250; código do jogo ~110.
- **Threads existentes não ajudam:** `PS2X_GS_THREAD=1` 4,5 quadros/s, `PS2X_VIF1_THREAD=1` 4,5, os dois juntos 3,0 (uma execução de cada, `ps2recomp/measure_road.sh`).
- **Cache de análise de microcódigo** adicionado em `rebuildDecodedCodeCache` (chave: unidade, tamanho, janela e bytes exatos; `PS2X_VU_NO_ANALYSIS_CACHE=1` desliga). Resultado pendente de medição.
- **GS hoje, conferido no código:** raster por compute shader escrevendo na VRAM do PS2 em formato swizzled; apresentação = kernel `scanout` para um buffer → `SDL_DownloadFromGPUBuffer` → pixels na CPU → `UpdateTexture` do Raylib/OpenGL → janela. O dispositivo SDL_GPU não tem swapchain; a janela é do Raylib.

## Perfil por tempo próprio e correção da minha leitura — 2026-10-09 (noite, parte 2)

- **Medições de relógio da noite não são comparáveis:** carga média 6–9 (navegador e builds do Black). `measure_road.sh` passou a informar também quadros por segundo de CPU do processo. Cache de análise: 20,3 quadros/CPU-s com, 22,1 sem; as janelas caíram em trechos diferentes da cena, então isso não mostra ganho nem perda. Os números de `PS2X_GS_THREAD`/`PS2X_VIF1_THREAD` (4,5 e 3,0) foram medidos sob a mesma carga e ficam sem conclusão.
- **Erro meu:** os "~20% em reanálise de microcódigo" vieram de subtrair `runFast` de `run` num perfil por tempo inclusivo. No perfil por tempo próprio a reanálise era pequena (`analyzeFastPairs` ~4%); com o cache ela sumiu.
- **Perfil por tempo próprio, estrada, 5 s, 2.639 amostras na thread do jogo:** corpos dos programas recompilados 25,1% (dois programas: 16,9% + 8,2%); `commitReadyPipelines` 12,4%; `processVIF1DataPrefix` 4,9%; `normalizeFmacResult` 4,5%; `updateFmacFlags` 4,4%; espera em condvar 7,5%; código EE do jogo ~3%; IOP ~4%; submissão ao GS e codificadores Metal ~8–10% espalhados.
- **Conclusão:** cerca de metade do tempo da thread é VU (corpos + pipelines + flags), território do backend direto que está com o Black. Do lado do Origins não há outro item isolado grande; GS é ~10% hoje.
- O perfil e o cache foram repassados à sessão do Black.
