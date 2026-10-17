# Silent Hill: Origins — versão nativa para PC

Jogue **Silent Hill: Origins** (PS2) direto no seu computador, como um jogo de PC de verdade, com
melhorias gráficas opcionais e tradução para português.

**O jogo já está jogável no Mac e no Windows.** Não é um emulador: o código do PS2 foi convertido em
um programa nativo, por isso roda leve e com imagem nítida.

## ⬇️ Baixar

| Sistema | Situação | Download |
|---|---|---|
| **Windows** 10/11 64 bits | ✅ Jogável | 👉 **[Baixar para Windows](https://github.com/SirBraga/silent-hill-origins-recomp/releases/tag/v1.0-windows)** |
| **macOS** (Apple Silicon, M1 ou mais novo, macOS 13+) | ✅ Jogável | 👉 **[Baixar para Mac](https://github.com/SirBraga/silent-hill-origins-recomp/releases/tag/v1.0)** |

Todas as versões ficam em [Releases](https://github.com/SirBraga/silent-hill-origins-recomp/releases).

> **Você precisa da sua própria cópia do jogo.** Use a ISO do *Silent Hill: Origins* de PS2 americano
> (NTSC-U, SLUS-21731). Este projeto não inclui nem distribui nenhum arquivo do jogo.

## ✨ O que tem de novo

- **Imagem em alta resolução:** escolha 1×, 2×, 3× ou 4× a resolução original, em qualquer tamanho de
  janela ou em tela cheia.
- **Widescreen 16:9** de verdade, sem esticar a imagem.
- **60 quadros por segundo** (ou 30, como no original).
- **Em português do Brasil:** todos os textos traduzidos, com acentos. Também dá para jogar em inglês
  e nos outros idiomas do disco.
- **Melhorias gráficas opcionais**, cada uma com liga/desliga e intensidade ajustável:
  - **Nitidez:** realça detalhes e texturas;
  - **Oclusão de ambiente:** sombras nos cantos e onde os objetos se encostam;
  - **Antisserrilhado** (FXAA ou SMAA): bordas lisas;
  - **Sombras suaves:** tira os degraus da sombra da lanterna.
- **Controle ou teclado e mouse**, com todos os botões configuráveis.
- **Launcher fácil:** escolha a ISO uma vez e jogue. Configurações de vídeo, idioma e controles ficam
  todas num só lugar.
- **Menu dentro do jogo** (tecla ESC) para mudar opções sem sair.
- **Mods e pacotes de texturas.**

Todas as melhorias vêm **desligadas**: sem mexer em nada, o jogo fica com o visual original, só que
mais nítido.

## 🎮 Como jogar (Windows)

1. Baixe o `.zip` da [versão para Windows](https://github.com/SirBraga/silent-hill-origins-recomp/releases/tag/v1.0-windows)
   e extraia a pasta onde quiser. Ela precisa de uns **3 GB livres**.
2. Abra **Silent Hill Origins.exe**. O programa não é assinado: se aparecer *"O Windows protegeu o
   computador"*, clique em **Mais informações** e depois em **Executar assim mesmo**.
3. Na página **Jogar**, escolha a sua ISO e aperte **JOGAR**. Na primeira vez o launcher copia os
   arquivos do disco para dentro da pasta, o que leva uns minutos. Depois disso a ISO não é mais
   necessária.

Precisa de uma placa de vídeo com **Vulkan** (NVIDIA, AMD ou Intel, com o driver atualizado) e de um
processador com SSE4.2. Testado numa GeForce GTX 1660 Ti em 4×.

## 🎮 Como jogar (Mac)

1. Baixe o `.zip` da [versão para Mac](https://github.com/SirBraga/silent-hill-origins-recomp/releases/tag/v1.0)
   e extraia a pasta onde quiser. Ela precisa de uns **3 GB livres**.
2. Como o app não é assinado pela Apple, o Mac vai bloquear a primeira abertura. Para liberar, abra o
   **Terminal**, digite o comando abaixo com um espaço no fim, arraste a pasta do jogo para a janela e
   aperte Enter:
   ```
   xattr -dr com.apple.quarantine
   ```
3. Abra **Silent Hill Origins.app**.
4. Na página **Jogar**, escolha a sua ISO e aperte **JOGAR**. Na primeira vez o launcher copia os
   arquivos do disco para dentro da pasta, o que leva uns minutos. Depois disso a ISO não é mais
   necessária.

O seu save fica na própria pasta do jogo, em `orig/mc0` (nos dois sistemas).

## ❓ Problemas

- **O jogo não abre ou fecha sozinho:** o launcher mostra o log da última vez que o jogo rodou, na
  página Jogar. O arquivo fica em `ps2recomp/logs/runner.log`.
- **"ISO não parece ser Silent Hill Origins":** o projeto só funciona com a versão americana
  (SLUS-21731).
- **Windows, tela preta ou erro ao abrir:** atualize o driver da placa de vídeo (o jogo usa Vulkan).
- Encontrou um bug? Abra uma [issue](https://github.com/SirBraga/silent-hill-origins-recomp/issues)
  e mande o `runner.log`.

---

<details>
<summary>Para desenvolvedores</summary>

Este é um projeto de recompilação estática: o código do EE, do VU0/VU1 e do IOP vira C++ nativo, e o
hardware que não é código (GS, SPU2, DMA, VIF, timers) foi reescrito em C++. O vídeo é desenhado por um
renderizador próprio, em Metal no Mac e em Vulkan no Windows.

- Branches: `macos` (versão do Mac) e `windows` (versão do Windows).
- Visão geral, mapa do código e pendências: [CLAUDE.md](CLAUDE.md)
- Compilar no Windows: [docs/WINDOWS.md](docs/WINDOWS.md). Configure o runtime com
  `-DPS2X_ENABLE_AGRESSIVE_LOGS=OFF -DPS2X_ENABLE_IOP_RPC_TRACE=OFF`: com os logs ligados (o padrão do
  CMake) o jogo fica num carregamento sem fim.
- Anotações técnicas: [docs/claude-memory/](docs/claude-memory/)
- Montar os pacotes: `ps2recomp/package_macos.sh <versão>` (no Mac, branch `macos`) e
  `ps2recomp/package_windows.sh <versão>` (no Windows pelo Git Bash, branch `windows`). Nenhum dos dois leva
  arquivos do jogo.
- O renderizador também é publicado à parte em [ps2-native-gs](https://github.com/SirBraga/ps2-native-gs).

</details>

*Silent Hill é marca registrada da Konami. Este é um projeto de fãs, sem fins lucrativos e sem ligação
com a Konami.*
