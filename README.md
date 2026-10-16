# Silent Hill: Origins — projeto de recomp

Projeto paralelo para estudar e desenvolver uma recompilação da edição de PlayStation 2 de *Silent Hill: Origins*. A ISO local foi identificada como NTSC, revisão 1.00, com executável `SLUS_217.31`.

## Jogo de origem

- Imagem: `/Users/sirbraga/Downloads/Silent Hill Origins/Silent Hill Origins.iso`
- Formato detectado: UDF 1.5; volume `SILENT_HILL_ORIGINS`
- Tamanho: 3.074.785.280 bytes
- SHA-256: `b5f738336fc637a6742419c7183951f6ebb5e852b6a47126002decb18fbecff6`.
- A imagem original permanece em Downloads; foi montada somente para leitura e não foi copiada nem modificada.
- ELF extraído em `orig/SLUS_217.31` (ignorado pelo Git); hashes e resultados estão em [recomp/STATUS.md](recomp/STATUS.md).

## Direção técnica

- Renderização: SDL3 + SDL_GPU, inicialmente com driver Metal nativo no macOS.
- Base técnica a estudar: o renderer SDL_GPU/Metal experimental integrado ao GS de `black-decomp`.
- Plano de portabilidade e limites do reaproveitamento: [SDL_GPU_PORTING_PLAN.md](SDL_GPU_PORTING_PLAN.md).
- Projeto de referência local: `/Users/sirbraga/Documents/black-decomp`.

O código de gameplay, ELF, configuração de recomp, capturas e comportamento de DMA/GIF/VIF são específicos de cada jogo. O backend gráfico do Black serve como ponto de partida técnico; precisa passar por fixtures e validação com dados do Origins antes de ser considerado compatível.

## Estado

O código do guest foi gerado, o runner isolado compilou com SDL_GPU/Metal e o jogo já iniciou módulos do disco. A tabela de entry points agora inclui callbacks encontrados pelo scanner do Black. Ainda não foi confirmada a tela de menu nem gameplay controlável; veja [recomp/STATUS.md](recomp/STATUS.md) para o log de boot e os próximos passos.
