---
name: ee-fpu-semantics-bugs
description: PS2Recomp EE FPU translator had PS2-specific semantic bugs (sqrt.s operand field, rsqrt.s, div by zero, cvt.w.s); check translator semantics before chasing rendering symptoms
metadata:
  type: project
---

On 2026-10-08, in `black-decomp`, wrong player spawn position, a tiny/spiky first-person weapon and much of the Level_00 slowdown turned out to be the EE recompiler's FPU translator (`tools/PS2Recomp/ps2xRecomp/src/lib/fpu_translator.cpp`), not the GS/VU/DMA layers I had been investigating for days: `SQRT.S` read the fs field although the EE encodes the operand in ft (147 of 200 sites computed sqrt(f0)); `RSQRT.S` ignored the numerator; `DIV.S` by zero produced infinity instead of ±FLT_MAX; `CVT.W.S` rounded instead of truncating. Fixed in the translator plus `ps2_runtime_macros.h`; fixing needs `ps2recomp/build.sh` to regenerate the game code.

**Why:** the upstream translator follows generic MIPS, and the disassembler prints EE-only encodings as `c1 0x...`, so nothing flags them.

**How to apply:** when game *behaviour* (positions, animation, camera, culling) differs from PCSX2 while individual frames render plausibly, audit the instruction translators (FPU, MMI, COP2 macro mode) against the EE manual by decoding real instruction words from the game, before instrumenting the renderer. Same runtime is used by the user's other recomp projects ([[black-gs-renderer-and-dma-guard]] mentions the Silent Hill session); the bug applies there too.

Also (2026-10-08): two more EE-state bugs of the same family, both found by diffing RAM against PCSX2 ([[pcsx2-savestate-ram-oracle]]):
- Guest EE code must run with round-toward-zero (PS2 truncates). Set once on the GameThread (`fesetround(FE_TOWARDZERO)`); Black's inline sin/cos breaks with round-to-nearest. `PS2X_EE_ROUND_NEAREST=1` reverts for A/B.
- `R5900Context()` must start with `vu0_vf[0] = (0,0,0,1)`; secondary guest threads had VF0 = 0.

Also (2026-10-10): `BLTZ/BGEZ/BLEZ/BGTZ` (and the likely/link forms) were emitted as 32-bit sign tests (`GPR_S32`) in `ps2xRecomp/src/lib/control_flow_emitter.cpp`; the R5900 tests the whole 64-bit register. Black's `func_0028A688` (graph flood fill) does `ld` + `bltz` on a 64-bit mask (bit 63): with the 32-bit test the fill never terminated, its 2500-entry stack overflowed and overwrote the render-queue bucket table, which was the random in-game freeze (qsort jumping to a garbage compare pointer). Found with a debugger watchpoint: `BLACK_WATCH=1` in `JogarBlack.command` runs under lldb with `ps2recomp/diagnostics/watch_bucket.py` (hardware watchpoint on a guest address, backtrace names give the guest function). That technique is the fast way to find who corrupts a guest address; lldb launches local builds without prompting.

Also (2026-10-10): COP2 macro-mode divide latency. The recompiled code resolves `VDIV/VSQRT/VRSQRT` at once; on the console a Q read in the very next instruction still sees the previous divide's result. Black relies on it at 0x37EB14 and 0x37EB30 (reciprocal per component, used by collision code); PCSX2's GameIndex ships the same instruction swap ("COP2 Rearrangement. Fixes broken collisions"). Fixed by swapping those pairs (`ps2recomp/add_instruction_patches.py` adds them to the recompiler config; the generated function was edited the same way). Found by diffing guest code in a PCSX2 savestate RAM against ours ([[pcsx2-savestate-ram-oracle]]): **PCSX2's GameIndex.yaml patches and gsHWFixes for the game are a checklist of hardware behaviours our runtime may also get wrong** — read the entry (`~/Documents/pcsx2-ref/bin/resources/GameIndex.yaml`) early. The same diff showed the user's PCSX2 runs a 60 fps patch that only changes the tick rate (30→60) and the vblank interval (2→1), the same two things `black_tick_rate.cpp` scales.

- 2026-10-10: COP2 `VRNEXT` never wrote its destination register and `VRINIT`/`VRXOR` used an invented 128-bit generator. Real R is a 23-bit M-sequence kept as a float mantissa (`0x3F800000 | bits`; next: x=bit4, y=bit22, `r=((r<<1)^x^y)&0x7FFFFF`). Symptom: particles (fire, smoke, debris) blurry, oversized, without variety vs PCSX2. Only `0x1BEF70` and `0x1BF918` (particle spawn) use them. I first blamed the 60-tick mode from single screenshots; smoke varies in time, compare several captures before concluding.

Also (2026-10-12/13), COP2 macro-mode translator (`vu_translation_helpers.cpp` + `ps2_runtime_macros.h`, generated code patched in place with perl): `VRSQRT` ignored fs (Black only uses vf0.w, so harmless), `VSQRT`/`VRSQRT` must take |ft|, divide by zero gives ±FLT_MAX; `VFTOI*` used sse2neon's x86-emulating `_mm_cvttps_epi32` (out of range → 0x80000000, so big positives turned negative) — now `PS2_VFTOI_SAT` (VU saturation, exponent-255 counts as huge); `VMAX`/`VMINI` used IEEE max/min — now `PS2_VMAX_VU`/`PS2_VMINI_VU` (sign-magnitude compare, raw bits, -0 < +0). Unit test of those helpers: scratch `t/test.cpp` pattern (copy the helpers, compile with sse2neon). Black keeps integer masks (0x7FFFFFFF, 0xFFFFFFFF) in VF registers, which is why bit-exact max/min matters. Still open: the VU micro interpreter/recompiler MAX/MINI also use float compares on normalized operands (needs the generator change + VU code regeneration + trace revalidation together).

Also (2026-10-13), bug hunt with the differential tests (`ps2x_ee_difftest`, `ps2x_vu0_macro_difftest`; regenerate their
`ops.inc` with `vu0_macro_emit` built against `out/build/ps2xRecomp/libps2_recomp_lib.a` — see that tool's header):
- `PMULTH` summed all products into one value; now 8 separate products (LO p0 p1 p4 p5, HI p2 p3 p6 p7, rd p0 p2 p4 p6).
  Reference models for PMULTH, QFSRV, MTSA/MFSA/MTSAB/MTSAH and the SA register were added to ee_difftest
  (5753 words, 0 mismatches). PDIVBW's translation also looks wrong but Black never executes it.
- VU0 macro difftest: run the macro code in the VU's FP mode (FPCR RZ+FZ) or every MADD differs by rounding;
  qmtc2/ctc2 "mismatches" are harness artifacts (the VU reference cannot execute EE moves); VCALLMS must be
  excluded (needs a runtime). 5031 game COP2 words, no real differences.
- IOP (`ps2xIOP/src/emulator/core/iop_cpu_exec.inl`, shared by the recompiled IRX code): LWL/LWR must merge with a
  pending load to the same register (R3000 forwards it for `lwl rt / lwr rt`). Black's SIO2D (pad) and MC2_D
  (memory card) drivers use 6 such pairs.
