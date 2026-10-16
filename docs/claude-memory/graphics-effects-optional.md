---
name: graphics-effects-optional
description: Modern graphics effects (sharpen, AO, SMAA...) must each be toggleable, original look by default
metadata:
  type: feedback
---

The user said that every modern graphics effect added to the native renderer must be optional (on/off). This came up on 2026-10-15 while adding CAS sharpening.

**Why:** they want the modernization without losing the original PS2 look.

**How to apply:**
- Each effect gets its own toggle in both the ESC menu (ps2_debug_panel.cpp, writes to launcher.ini [video]) and the launcher's "EFEITOS DE IMAGEM" card.
- Effects are off by default.
- Each effect also has a PS2X_GS_NATIVE_* environment variable and a native option key ("sharpen", ...).
- Effects work on `Target::scene`, a GPU copy of the target taken at each transition from depth-tested draws (ZTE with GEQUAL/GREATER) to a draw without a depth test. The frame's last copy is the 3D picture before the grain, overlays and HUD.
- The present shader adds only the effect's delta. The delta is scaled by luma(shown)/luma(scene), capped at 1, and masked where the 2D replaced the pixel. This keeps the grain from being sharpened.
- Diagnostics: gs-replay with `PS2X_GS_NATIVE_SCANOUT_PRESENT=1` returns the final present output; `PS2X_GS_NATIVE_SCANOUT_SCENE=1` returns the copy. gs-replay needs an absolute `PS2X_GS_MOLTENVK` path for Vulkan.
- AO is done (2026-10-15). It works from Z alone: pair test (z1+z2)/2 against zc, relative to zc, using GS screen-linear Z.
  - At each transition only Z is copied, to Target::sceneDepth; there is one AO pass per frame in ensureSceneAo.
  - The AO pass runs at game resolution with 12 pairs, then a joint bilateral upsample writes it into the scene copy's alpha.
  - Copies happen only from the predicted last transition (per-target count from the previous frame).
  - Cost on M1 Pro at 3x: about 1.5 ms AO, about 0.5 ms sharpen.
  - PS2X_GS_NATIVE_SCANOUT_AO=1 shows the AO only. See [[native-gs-renderer]].
- SMAA 1x (ULTRA: threshold 0.05, 32 steps, corners, no diagonals) is ported to MSL+GLSL.
  - Lookup tables: AreaTex.h and SearchTex.h, MIT, downloaded with the user's OK. They live in native/third_party/smaa and are packed into one 160x576 texture, read texel by texel.
  - Edge detection requires the edge in both the final picture and Target::scene, which excludes the grain and the HUD.
  - Rounding is half-to-even (rint/roundEven), matching HLSL.
  - Post-processing shaders must sample at level 0 (sampleL0 / textureL0). Implicit derivatives inside divergent control flow, combined with the 8x anisotropic linear sampler, made FXAA/SMAA nondeterministic. With level-0 sampling, runs are identical, SMAA matches between Metal and Vulkan, and FXAA differs by at most 1 tone.
  - The selector is "aa" (0 off, 1 FXAA, 2 SMAA). The old FXAA blurs about 19% of pixels (the grain); SMAA touches about 0.3%.
  - When syncing ps2-native-gs, credit SMAA (MIT).
- AO fixes, 2026-10-15, after the user reported flicker and blur:
  - Flicker: the scene copy was missing in 1 of every 5 frames, because the transition count alternates 5/6. The fix predicts from the minimum count over the last 64 frames and keeps the previous copy for up to 4 presents.
  - Distance: radius and fade are relative to a per-frame reference Z, the median of 64x64-block nearest Z. The max was useless: Z beyond the Z format's range (16-bit Z16S in SH Origins) is other VRAM data, and a near flashlight volume skews the max.
  - Foliage noise: a confidence term (7..11 of 12 valid pairs).
- Soft shadows (2026-10-16), optional (`PS2X_GS_NATIVE_SOFT_SHADOWS`, menu and launcher toggles):
  - Mechanism: a 6-tap depth-weighted average of the alpha shadow mask, applied once per frame before the first C=Ad blend draw after a shuffle into half 1.
  - Why it is an enhancement: the jagged edges are the game's own (8-bit light depth with an alpha-test compare); the paraLLEl-GS reference shows the same steps.
  - Cost: about 1.8 ms at 3x. Per-draw area softening was slower because of pass breaks on TBDR.
- Present area filter (default on; `PS2X_GS_NATIVE_PRESENT_BILINEAR=1` restores the old behaviour): up to 4x4 taps when the internal resolution is larger than the window. The user's MSAA request was answered with this instead.
