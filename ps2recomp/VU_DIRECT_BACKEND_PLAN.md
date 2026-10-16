# Backend direto da VU (NEON por bloco)

> **Dono: sessão do Black** (decisão do usuário em 2026-10-09). O Origins não implementa; traz o
> resultado quando estiver validado lá e fornece `recomp/diagnostics/vu-trace/road-intro.bin` como
> segundo traço do validador.

Objetivo: substituir a chamada genérica por par (`VU1Interpreter::stepPair`) por código C++/NEON
gerado por bloco básico, com o mesmo resultado observável. Genérico: nada aqui depende do jogo.

## De onde partimos (medido)

- Origins: 76 programas de VU1 no ELF, 104.617 pares, 11.815 corpos de par distintos (os programas
  compartilham a maior parte do código).
- Black (dados da outra sessão): 19,3 ns/par na VU1 recompilada com todos os flags; o console faz
  3,39 ns/par. `commitReadyPipelines` + `updateFmacFlags` + `normalizeFmacResult` somam cerca de 1/3 do
  tempo ocupado; os corpos dos programas, 1/4. Só 292 de 8.997 corpos têm checagem de hazard de
  leitura depois da poda; ACC nunca trava.
- Origins, cena da estrada: 10–13 quadros apresentados/s, com a thread do jogo saturada na VU1.

## O que `stepPair` faz por par e que um bloco pode resolver antes

| Custo por par hoje | No bloco |
|---|---|
| Teste de `m_hazardUnknown`, hazards de leitura, `PairStall` | Só no primeiro par de blocos que podem travar; o resto é linha reta |
| `execUpper`/`execLower` lendo e gravando `m_state.vf[]` na memória | VF/VI/ACC em variáveis locais (`float32x4_t`), gravados na saída |
| `normalizeFmacResult` e flags MAC/status por instrução | NEON sem desvio; flags só onde a análise diz que são lidos |
| `m_cycle++`, `commitReadyPipelines`, `progressXgkick`, fim de programa, PC, VF0 | Uma vez por bloco, com ciclo final conhecido na geração |
| Teste de orçamento de ciclos (`budgetEnd`) | Uma vez na entrada: se o bloco não cabe, cai no caminho atual |

## Desenho

1. **Blocos.** Um bloco é uma sequência de pares sem alvo de desvio no meio, terminando em desvio
   (+ delay slot), E-bit, XGKICK ou par que pode travar. Blocos são deduplicados pelo conteúdo e pelos
   fatos dos pares (incluindo `hazardReads`/`hazardWrites`, que dependem dos vizinhos).
2. **Guarda de entrada.** O caminho rápido só roda se: o bloco cabe no orçamento, não há XGKICK em
   andamento, `m_hazardUnknown == 0`, e os registradores lidos antes de serem escritos no bloco já
   estão prontos (`m_vfReady`/`m_viReady` <= ciclo atual). Senão, executa o bloco pelo `stepPair`
   atual. O caminho lento continua existindo e é a referência.
3. **Flags dentro do bloco.** Para cada leitor (FMAND/FMEQ/FMOR, FS*, FC*), o gerador sabe qual
   escritor está visível naquele ciclo. Se é do próprio bloco, usa a variável local; se seria de antes
   do bloco, chama o helper genérico (commit até o ciclo atual e leitura do estado).
4. **Saída.** Grava VF/VI/ACC, avança `m_cycle` de uma vez, enfileira no pipeline real os resultados
   de flags/Q/P ainda pendentes com os ciclos corretos e atualiza `m_vfReady`/`m_viReady` das últimas
   escritas. O estado depois do bloco tem que ser idêntico ao do caminho lento.
   `commitReadyPipelines` confirma as entradas prontas na ordem dos slots, não de `readyCycle`: um
   bloco que avança vários ciclos de uma vez tem que confirmar evento a evento (avançar `m_cycle`
   até `m_nextCommitCycle`, confirmar, repetir) para o MAC/clip final ser o do escritor mais recente.
   `progressXgkick` roda por ciclo, então XGKICK ativo na entrada é sempre fallback. (Observação da
   sessão do Black.)
5. **Fallback por bloco.** Instrução que o emissor ainda não cobre deixa o bloco inteiro no caminho
   atual. Cobertura cresce por instrução, medida.

## Prova de equivalência (antes de ligar qualquer bloco)

- **Diferencial por bloco:** para cada bloco gerado, N estados de entrada aleatórios (incluindo zeros
  com sinal, denormais, extremos, pipeline pendente) executados pelo caminho novo e pelo `stepPair`;
  comparação bit a bit de VF, VI, ACC, Q, P, flags, ciclo, prontidão e filas.
- **Traço real:** `ps2x_vu1_trace_replay` com traços gravados no jogo (`PS2X_VU_TRACE`), comparando
  contra o interpretador de referência; critério: zero divergências.
- **Jogo:** mesma cena, quadro comparado, e taxa medida antes/depois com a mesma métrica.

## Ordem de trabalho

1. Traço de VU1 do Origins na cena da estrada + linha de base de ns/par no replay.
2. Gerador de blocos com emissão trivial (chama os corpos atuais em sequência, contabilidade uma vez
   por bloco). Mede quanto se ganha só tirando a contabilidade por par.
3. VF/VI em locais e NEON para as FMAC mais frequentes (ADD/SUB/MUL/MADD/MSUB e variantes bc/q/i),
   MOVE/MR32, LQ/SQ, ITOF/FTOI, inteiras; depois o resto por frequência no traço.
4. Flags e normalização em NEON.
5. Cache da análise por hash de imagem (`analyzeFastPairs` é refeita a cada recarga de microcódigo).

## Riscos

- Tempo de compilação: o `.inc` atual já leva mais de uma hora. Blocos deduplicados e funções
  menores devem reduzir; se não, dividir em várias unidades de compilação.
- O modelo de tempo de referência ainda está mudando no Black (elisão de flags ciente de stalls não
  validada no recompilado em 2026-10-09). O backend segue o modelo que estiver validado.
