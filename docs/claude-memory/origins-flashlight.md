---
name: origins-flashlight
description: "Silent Hill Origins flashlight pipeline in the GS stream, the T8H alpha-copy fix, and what was ruled out (2026-10-14)"
metadata:
  node_type: memory
  type: project
  originSessionId: 1ab233d8-3e12-4b6b-b5d9-3094589bf522
  modified: 2026-10-14T22:56:52.399Z
---

Origins draws a light-view depth map into the alpha of the frame's top-left 256x256, then a GS local copy (TRXDIR 2,
PSMT8H -> PSMT8, dbp 16064, CLUT at 16320) makes the texture the flashlight projects (blend 2001, clamp 5). The
native renderer ignored that copy (gs_decode only calls Sink::localCopy; nothing copies on the CPU) and projected
stale VRAM: stripes, hard edges. Fixed in native_gs_module.mm localCopy (alpha byte copy on the GPU, alongside the
T4HH->T4 shadow nibble copy; PS2X_GS_NATIVE_NO_ALPHA8_COPY disables). Verified with gs-replay --vram on the
parallel reference + a T8 peek tool: cookies match.

Still open after that fix: the user reports the beam only lights specific places. In those scenes the parallel
reference shows no beam either, so the GS stream itself lacks it. Ruled out: VU1 recompiler (PS2X_VU_RECOMPILED=0 +
PS2X_VU_FAST_VERIFY + PS2X_VU_VERIFY_RECOMPILED: 1M runs, 0 mismatches, same symptom). Origins EE uses the FPU,
almost no COP2 macro code. The light-pass vertices carry negative Q. Next candidates: EE light culling/matrices, VIF
unpack of the light data; best oracle is PCSX2 at the same spot ([[pcsx2-savestate-ram-oracle]]).

Also 2026-10-14: Origins' tools/PS2Recomp lacked Black's COP2/MMI translator fixes (VDIV/VSQRT/VRSQRT, VMAX/VMINI,
VFTOI, VU saturation, PMULTH); ported and rebuilt. Keep the two runtimes in sync ([[ee-fpu-semantics-bugs]]).

ROOT CAUSE (2026-10-14): config/SLUS_217.31.toml bound the game's sceVu0MulMatrix (0x2977F0) to the runtime stub
(Stubs/VU.cpp), which computed m0.m1; the real routine computes dst[i] = sum_j m1[i][j]*m0[j] (= m1.m0 row-major).
The light's projection matrix (light object +0x70, sent to VU1 qw 956-959 as the per-vertex texture matrix) came
out transposed in order: no circle, flat over-bright light. Fixed by removing the stub so the game's own code is
recompiled (and correcting the stub). Found by converting a PCSX2 GS dump (Tools > Save Single Frame GS Dump,
converter scratch tools/pcsx2_to_dump.py) and replaying it in our renderers (beam correct), then comparing the
VIF packets uploading qw956 in both EE RAMs. Lesson: audit every math stub in the toml `stubs` list against the
game's code; prefer recompiling library math.

Follow-ups (2026-10-14, native renderer): shadow stripes on lit surfaces came from the hardware bilinear filter
(GS weights are sixteenths, result truncated; PS2X_GS_NATIVE_HW_BILINEAR=1 reverts). The inventory "ESTADO" thumbnail
broke after the Otherworld because fbp 494 alternates 16/32-bit captures and a draw into a target of the other pixel
size was skipped ("aliased target"); now the old target is synced to VRAM and recreated (PS2X_GS_NATIVE_ALIAS_SKIP=1
reverts). GS-to-memory transfers (fifo) now return real pixels. A remaining dark half of the beam on an Otherworld
door also happens in the original game (user checked) - not a bug.
