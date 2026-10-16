# Silent Hill: Origins — versão nativa para PC

Jogue **Silent Hill: Origins** (PS2) direto no seu computador, como um jogo de PC de verdade, com
melhorias gráficas opcionais e tradução para português.

**O jogo já está jogável no Mac.** Não é um emulador: o código do PS2 foi convertido em
um programa nativo, por isso roda leve e com imagem nítida.

## ⬇️ Baixar

👉 **[Baixe a versão mais recente em Releases](https://github.com/SirBraga/silent-hill-origins-recomp/releases/latest)**

| Sistema | Situação |
|---|---|
| **macOS** (Apple Silicon, M1 ou mais novo, macOS 13+) | ✅ Jogável |
| **Windows** 10/11 64 bits | 🧪 Em testes, ainda sem versão pública |

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

## 🎮 Como jogar (Mac)

1. Baixe o `.zip` em [Releases](https://github.com/SirBraga/silent-hill-origins-recomp/releases/latest) e
   extraia a pasta onde quiser. Ela precisa de uns **3 GB livres**.
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

O seu save fica na própria pasta do jogo, em `orig/mc0`.

## ❓ Problemas

- **O jogo não abre ou fecha sozinho:** o launcher mostra o log da última vez que o jogo rodou, na
  página Jogar. O arquivo fica em `ps2recomp/logs/runner.log`.
- **"ISO não parece ser Silent Hill Origins":** o projeto só funciona com a versão americana
  (SLUS-21731).
- Encontrou um bug? Abra uma [issue](https://github.com/SirBraga/silent-hill-origins-recomp/issues)
  e mande o `runner.log`.

---

<details>
<summary>Para desenvolvedores</summary>

Este é um projeto de recompilação estática: o código do EE, do VU0/VU1 e do IOP vira C++ nativo, e o
hardware que não é código (GS, SPU2, DMA, VIF, timers) foi reescrito em C++. O vídeo é desenhado por um
renderizador próprio, em Metal no Mac e em Vulkan no Windows.

- Visão geral, mapa do código e pendências: [CLAUDE.md](CLAUDE.md)
- Compilar no Windows: [docs/WINDOWS.md](docs/WINDOWS.md)
- Anotações técnicas: [docs/claude-memory/](docs/claude-memory/)
- Montar o pacote do Mac: `ps2recomp/package_macos.sh <versão>`
- O renderizador também é publicado à parte em [ps2-native-gs](https://github.com/SirBraga/ps2-native-gs).

</details>

*Silent Hill é marca registrada da Konami. Este é um projeto de fãs, sem fins lucrativos e sem ligação
com a Konami.*
