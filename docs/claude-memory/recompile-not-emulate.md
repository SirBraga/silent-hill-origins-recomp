---
name: recompile-not-emulate
description: "In the Black PS2 recomp project, code that the console executes must be statically recompiled, never interpreted/emulated"
metadata:
  node_type: memory
  type: feedback
  originSessionId: 86b040fb-66ea-4d6c-af9d-786c1215e7f7
  modified: 2026-10-08T00:57:44.782Z
---

For the Black (SLUS_213.76) recomp in `black-decomp`, never choose interpretation/emulation for anything that is guest code: the solution must be recompiled code. The user said this on 2026-10-07 after I had spent the session speeding up the VU1 *interpreter* instead of recompiling the VU1 microprograms ("jamais use emulação, sempre tem que ser código recompilado, interpretação rebenta com performance, pois emulador já existe o PCSX2").

**Why:** the whole point of the project is a native port; an emulator already exists (PCSX2), and interpreters are what keeps the game at ~2 updates/s.

**How to apply:** when guest code is slow or wrong (VU0/VU1 microprograms, IOP modules, EE), propose and build static recompilation (AOT C++ generated from the captured programs, with pipeline/flag timing resolved at generation time), not a faster interpreter or a JIT-less emulation layer. My interpretation: hardware that is not code (GS rasterization, DMA/GIF/VIF routing, timers) still needs a model, but it should be the thinnest native implementation possible and I should say explicitly when something is a hardware model rather than recompiled code. If an interpreter is kept, it is only a fallback/reference for validating the recompiled output — say so.

Audit 2026-10-15 (Silent Hill Origins): the IOP "recompiled" code was really an interpreter (each instruction called
IopCpuCore::executeDecoded) - it was the Windows bottleneck. Replaced by real native code: ps2recomp/diagnostics/
iop_recompile.py now emits C++ per basic block (load/branch delay slots and exceptions resolved at generation), and
PS2X_IOP_RECOMP_VERIFY=<n> re-runs every n-th block through the interpreter and compares registers + all of IOP RAM
(first run: 200k blocks, 0 mismatches). EE, VU0/VU1 are recompiled; uncaptured VU programs still fall back to the
interpreter. Import stubs (kernel calls) still go through step()/dispatchImport - a candidate for direct calls.

**IOP status 2026-10-15 (Origins):** iop_recompile.py emits native C++ blocks chained by `[[clang::musttail]]`, with import stubs called directly (`impl.callImportStub`, cached decode `importAt`). Leaders also come from function starts after `jr ra` and lui+addiu/ori pointers. With `PS2X_IOP_RECOMP_STATS=1` it measures 0.01% interpreted, all at the host return sentinels. `PS2X_IOP_RECOMP_VERIFY=16` gives 0 mismatches; chains that call imports are skipped because imports are not repeatable. Menu IOP: 32% without the spin yield, 7% with it. The rest is the SPU2 mixer plus waiting.
