---
name: origins-memory-card
description: Silent Hill Origins memory card on the PC - SIO2-level card image, pre-formatted, partial flush, PC save texts overlay
metadata:
  type: project
---

The card is emulated at the SIO2 level (`ps2xIOP/src/emulator/core/iop_sio2.cpp`). The game's own MC2_D drives it, and the image is `orig/mc0/Mcd001.ps2` (8 MB raw, 528-byte pages).

Fixed 2026-10-16:
- `flushCard` wrote the whole 8.6 MB image after every page and every erase block. Saves stuttered and a format took minutes. It now writes only the dirty byte range (`markDirty`).
- A missing card is created already formatted (`formatCard`): superblock, ifc in cluster 8, FAT in 9–40, root in 41, with ECC. It was validated byte for byte against a game-formatted card, and the game reads it without formatting it. `PS2X_MEMCARD_UNFORMATTED=1` gives the old erased card.
- Save messages now say "save file" instead of memory card (`tools/loc/pc_saves.json`).
  - `build_ptbr.py <iso> ps2recomp/sho_ptbr.ovl ps2recomp/sho_pc.ovl`.
  - Other languages use `sho_pc.ovl` (launcher and the run script).
  - The JA table is ordered differently, so match strings by hash; JA is not offered in the launcher.

Test without touching the user's card: copy the ELF to a scratch dir and run a copy of JogarSilentHillOrigins.command with `ELF=` and `ROOT=` edited. `mc0/` is created next to the ELF. `PS2X_SIO2_TRACE=1` shows the card commands (0x23 read sector, 0x22 write, 0x82 erase).
