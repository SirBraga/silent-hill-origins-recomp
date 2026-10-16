---
name: native-gs-backend-default
description: The native GS renderer (gpu.h + Metal/Vulkan backends) is the default renderer for every new PS2 recomp the user starts
metadata:
  node_type: memory
  type: feedback
  originSessionId: 1ab233d8-3e12-4b6b-b5d9-3094589bf522
  modified: 2026-10-15T14:42:19.284Z
---

User decision 2026-10-15: the native GS renderer from Silent Hill Origins (ps2recomp/gpu/native: native_gs_module.mm on
gpu.h, gpu_metal.mm for macOS, gpu_vulkan.cpp for Windows, gs_shaders_msl.inc + gs_shaders.glsl) must be the
standard renderer for all new recomps, on both platforms. paraLLEl-GS stays only as reference/fallback
(PS2X_GS_PARALLEL_FALLBACK).

**Why:** one backend that serves Windows and Mac natively ("recompile, never emulate" applied to the GPU too).

**How to apply:** when starting a new recomp, bring this module (and the runtime pieces it needs: ps2_disc_image.h,
neon_sse_shim.h/PS2X_VU_SIMD, the launcher with extraction + UI scaling) instead of building a new renderer; keep game
fixes generic or behind env flags so the module stays shareable. See [[origins-windows-port]], [[native-gs-renderer]].

**paraLLEl-GS removed from Origins (2026-10-15, user: "não preciso mais dele"):**
- The native renderer is the only renderer.
- `ps2recomp/gpu/CMakeLists.txt` uses `ps2recomp/gpu/third_party/{volk,vulkan-headers}`.
- The launcher has no renderer choice and no fallback. Do not reintroduce paraLLEl-GS there.

**Windows hand-off (same day):** the user is moving the repository to their Windows PC.
- `CLAUDE.md` and `docs/WINDOWS.md` in the repo carry the state and the native Windows build.
- `docs/claude-memory/` holds a copy of these notes.
