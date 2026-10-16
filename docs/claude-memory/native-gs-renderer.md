---
name: native-gs-renderer
description: Native Metal GS renderer for Black — where the plan/status live and the dump/replay/diff workflow used to validate it
metadata:
  type: project
---

Started 2026-10-10 at the user's request ("um gs com codigo recompilado"; the GS has no code, so it is a native translation of GS draw state to Metal draw calls). User decisions: Metal directly; match the GS first, PC enhancements after; PCSX2 source is read-only reference (GPL — never copy code), cloned at `~/Documents/pcsx2-ref`.

Plan, phases and current status: `ps2recomp/GS_NATIVE_RENDERER_PLAN.md` (keep its "Andamento" section current instead of writing status here).

**How to apply:** validate every renderer change with the replay, not by playing: `bash ps2recomp/gpu/build.sh`, then `recomp/gpu/build/gs-replay recomp/diagnostics/gs-dump/heavy.gsdump --module recomp/gpu/build/libblack-native-gs.so --out DIR --every 10`, and `gs-replay --diff recomp/diagnostics/gs-dump/heavy-parallel DIR --out DIFFDIR --tolerance 8` against the paraLLEl-GS frames. New dumps: run the game with `PS2X_GS_DUMP=<file> PS2X_GS_DUMP_REQUEST=<trigger file>` (e.g. through `perf_run.py` with `POSE=`), touch the trigger at the scene. Since 2026-10-10 the native renderer is the launcher default (BLACK_GS=parallel falls back to paraLLEl-GS). All targets are upscaled; a scaled target read with bilinear filtering is box-averaged over the game texel size (texBox in the shader), otherwise the half-texel blur of the 160-wide effect buffers (light shafts, glow, smoke) breaks into stairs and dotted lines. PS2X_GS_NATIVE_SCALE_NARROW=0 keeps fbw<8 buffers at 1x (exact but blocky). Related: [[goal-120fps-native]], [[black-perf-measurement]].

2026-10-11: batches that sample the target they draw to are drawn one primitive at a time with a fresh copy (Black's glow blur is 20 sprites in one batch, each reading the previous one's output); this took heavy from 1.35 % to 0.04 % and room to 0.01 % vs paraLLEl-GS. To inspect an intermediate buffer of the reference use `gs-replay --vram FRAME FILE` (whole VRAM; decode with the CT32 swizzle) against `PS2X_GS_NATIVE_SHOW=fbp,fbw,psm`; `PS2X_GS_SHOW` on the paraLLEl module shows black for non-display buffers. The ~4.4 mean error left is the reference's 16-bit dither.


2026-10-11 (afternoon): GPU time must be the union of command-buffer intervals (they overlap; a plain sum doubled it). On `recomp/diagnostics/gs-dump/wide.gsdump` (16:9 heavy pose) the GPU is fill-bound and two thirds of it was the pixel shader deciding everything from uniforms per pixel; specializing it with Metal function constants (one pipeline per state combination, compiled asynchronously, `PS2X_GS_NATIVE_GENERIC_SHADER=1` to disable) took 3x from 7.5 to 4.4 ms with identical output. `PS2X_GS_NATIVE_TRIVIAL=1` gives the rasterization floor (2.5 ms at 3x). Frames are presented by a "Present" thread on the display flip and the game's vblank follows the display link; the on-screen lateness line in hitches.log is the metric that matches what the user sees.

**Display flip marker (2026-10-16), the fix for a black 256x256 corner flicker in the maca room:**
- Cause: when the game runs ahead it starts the next frame (shadow maps in the corner) in the old front buffer. The scanout request was latched one flip earlier and showed that buffer half-redrawn.
- Fix, runtime side: `ps2xGsSetOrderedDisplayRegs` (DMA sink thread, stream order) sends `DirectRegister(0x59, displayed DISPFB)`.
- Fix, module side: `noteDisplayFlip`; `scanout()` uses the last stream flip instead of the request (`PS2X_GS_NATIVE_REQUESTED_DISPLAY=1` restores the old behaviour).
- Result on dump `maca2`: 26 bad frames out of 300 became 0. Dumps recorded since then contain the markers.

**GPU profiling in Silent Hill Origins' flashlight rooms (2026-10-16, dump `pias`, 4x):**
- Metric: `PS2X_GS_NATIVE_STATS=1` "GPU mean" (union of command buffers). With the user's game open it has a ~2 ms floor (even the menu dump shows it); compare configurations, not absolutes.
- `PS2X_GS_NATIVE_PASS_TIMES=1` now serializes every command buffer and also times named sections (AO, SMAA, soft shadows, scene copy, shuffle in its own pass). Each section carries ~1 ms of fixed bias, so it only finds big costs.
- `PS2X_GS_NATIVE_FILL_STATS=1`: covered pixels per shader kind. `PS2X_GS_NATIVE_PASS_LOG=1`: every pass begin and what ended it (`endPass` records its caller).
- Results:
  - The base is ~96 Mpixels/scanout of destination-reading draws, about 26 full screens.
  - About 5 pass breaks per frame, all forced by the game: 2 nibble/byte copies of the flashlight circle, 1 view16 self-read, and 2 switches to the buffer over the Z buffer.
  - The alpha-fail second draws cost only ~1 ms; not worth merging.
- AO "reference Z" cost ~12 ms. Two causes: a single-thread O(n²) median that read the texture every time, and 1024 reads per output in the first reduction. It is now one sample per game pixel plus a parallel rank pass and a max. AO went from +11 to +5 ms; all effects together from 30.5 to ~24.5 ms. What is left is mostly the scene copy and its pass break (~2.5 ms just to have any effect on), SMAA ~+4, and soft shadows ~+3.
- Clean measurement (game idle, pias, 4x): 2.4/4.1/6.6/9.8 ms at 1/2/3/4x. A trivial shader gives 3.7 ms at 4x, so the cost is our shader, not the GPU.
- Shader ablation:
  - Shader-side fbmask (integer pack/unpack to keep the 24-bit frame's alpha): 2.7 ms.
  - Texturing: 3.1 ms.
  - Fog: ~0.
  - Fixed-function blend on Metal (`PS2X_GS_FIXED_BLEND=1`): no gain.
- Fix: whole-byte fbmasks become the pipeline write mask (`byteWriteMask`), and such draws can use the opaque (non-fetch) pipeline. Base went from 9.6 to 6.5 ms, all effects from 13.2 to 11.2 ms. Output is identical on 8 dumps.
- Pass render area limited to the used rows (`PassDesc::rows`, `PS2X_GS_NATIVE_FULL_PASS=1` disables): ~0.2 ms. The viewport must stay the full 512 rows, or the edges of sprites move (448 is not a power of two).
- Depth store/load cost is ~0.8 ms in total, so 16-bit Z would save ~0.4 ms. Not done.

**AO flicker in cutscenes (2026-10-16, dump `cena`):**
- The cutscene frames alternate between 1 and 2 3D→2D transitions. Predicting "the last frame's count" missed the frames with 1: no copy, so an older one was presented and the masked delta faded the AO every 2–3 frames.
- Fix: `predictedTransitions()` returns max(fewest of the last 16 frames, last − 2). This adds ~0.36 copies/scanout in the flashlight rooms.
- A flip now ends only the shown buffer's frame. Another buffer still in its 3D is left alone (`PS2X_GS_NATIVE_FLIP_ENDS_ALL=1` restores the old behaviour).
- `presentSceneDelta`'s k is now taken from neighbourhood means over game pixels (uniforms gamePixelX/Y). The grain turned out to be weak, so this was not the cause, but it is kept.
- Room transitions: effects now stay on for a held frame (`changesSincePresent == 0`) instead of switching off after 5 presents. Not verified yet: no dump of a loading transition exists.
- AO stepping while moving (dump `muro`: a wall with the street in front of it):
  - The median of the block Zs was bimodal and flipped between ~2450 and ~1620. That is more than the 25% cut threshold, so the AO of the whole picture stepped.
  - The reference is now the interquartile mean (rank pass keeps the middle half; the last aoReduce step averages, limit.w = 1), followed over time (`aoSmoothFragment`, `PS2X_GS_NATIVE_AO_FOLLOW`, default 0.1, snaps beyond ±25%).
  - Strong steps went from 12 to 1. The AO is 5–15% weaker overall.
- Flicker test that works: the mean AO darkness per frame (SCANOUT_SCENE + SCANOUT_AO) and its frame-to-frame steps. Second-difference metrics are fooled by the game repeating frames.
