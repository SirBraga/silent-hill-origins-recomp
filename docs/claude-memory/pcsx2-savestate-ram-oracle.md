---
name: pcsx2-savestate-ram-oracle
description: Compare our EE RAM dump with the PCSX2 savestate RAM to find wrong game state; heap addresses match
metadata:
  type: reference
---

For Black behaviour bugs (missing geometry, stuck player), diff our RAM against PCSX2's instead of reading guest code blind.

- PCSX2 savestate: `~/Library/Application Support/PCSX2/sstates/*.p2s` — zip with zstd members (method 93: cut the raw member out and `zstd -d`); `eeMemory.bin` = 32 MiB EE RAM.
- Ours: `PS2X_RAM_DUMP=<file>` and touch `<file>.trigger`.
- The game heap is deterministic: object addresses coincide, so objects can be compared one by one (class = vtable pointer at obj+0x10).

This found the VF0 bug of 2026-10-08 (guest thread contexts started with vf0 = 0 instead of (0,0,0,1)). Related: [[ee-fpu-semantics-bugs]], [[recompile-not-emulate]].

When measuring speed in test scripts, unsetting `PS2X_GS_SDL_GPU` alone selects the CPU rasterizer; paraLLEl-GS needs `PS2X_GS_PARALLEL=1` + module + MoltenVK paths as in `JogarBlack.command` ([[black-gs-renderer-and-dma-guard]]).
