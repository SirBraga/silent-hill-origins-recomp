---
name: black-gs-renderer-and-dma-guard
description: Black recomp — which GS renderer is the default, and the game-side DMA list overflow fix that Level_00 gameplay depends on
metadata:
  type: project
---

State as of 2026-10-08 in `black-decomp`:

- Level_00 gameplay needs `ps2recomp/overrides/black_dma_guard.cpp` (adds 8 qwords to every request to the game's display-list allocator `func_002B3D88`). Without it the game's own VIF1 list terminator overwrites the head of the texture-upload list when a frame fills the DMA buffer, and whole frames draw with garbage textures. `BLACK_DMA_GUARD=0` turns it off for A/B.
- `ps2recomp/JogarBlack.command` picks paraLLEl-GS (Vulkan compute over MoltenVK, module in `recomp/gpu/build/`) when the module exists, else the in-tree SDL_GPU renderer; `BLACK_GS=sdlgpu` forces SDL_GPU. paraLLEl-GS with its feed thread (`PS2X_GS_PARALLEL_THREAD`, default on) measured ~14.4 updates/s in Level_00 vs ~4.8 for SDL_GPU and renders correctly; after that the game thread is CPU-bound, mostly VU1.
- The launcher also sets `PS2X_VIF1_THREAD=1` (VIF1/VU1/GS work on a "sink" thread; `BLACK_VIF1_THREAD=0` disables): ~20 updates/s at the Level_00 spawn, real time in lighter views. After that the sink thread is the limit (81% VU1).
- The user runs other recomp sessions (e.g. `silent-hill-origins-recomp`) that build a binary with the same name `ps2EntryRunner`; shells and runs here that mention that name got killed alongside them. Test scripts run a copy named `blackRunner`; never use name-wide `pkill` on the runner.
- VU1 microcode is recompiled per microprogram, extracted from the executable's VIF MPG commands (`ps2recomp/diagnostics/extract_vu_programs.py`, used by `ps2recomp/build_vu_recompiled.sh`) and matched by content at run time; no need to play to capture images. A `[vu-recomp] ... not recompiled` line in a game log means code that is not in the executable.
- IOP modules are statically recompiled per basic block (`ps2recomp/build_iop_recompiled.sh`, generated `black_iop_recompiled.inc`); it is not faster than the interpreter — IOP cost is scheduler overhead, reduced by `PS2X_IOP_QUANTUM=512` in the launcher.
- Generated `.inc` files (VU and IOP) hold game code: when regenerating patch 0001, `git reset` both so they stay out of it.
- The paraLLEl-GS module was rebuilt on 2026-10-08 from a fresh clone in `recomp/gpu/parallel-gs` (user approved the download).

**Why:** earlier sessions shelved paraLLEl-GS for "wrong colours"; that was the PATH3/DMA stream bugs, not the renderer. See [[recompile-not-emulate]] for the standing rule on guest code.

**How to apply:** when gameplay textures look corrupted again, check the guard override is being built into the runner before suspecting the renderer; when measuring performance, say which renderer was used. Details: `ps2recomp/PS2_PROJECT_STATE.md`, sections dated 2026-10-08.
