---
name: origins-windows-port
description: "Silent Hill Origins Windows x64 build - cross-compiled from macOS with llvm-mingw; layout, commands, open work"
metadata:
  node_type: memory
  type: project
  originSessionId: 1ab233d8-3e12-4b6b-b5d9-3094589bf522
  modified: 2026-10-15T03:47:33.469Z
---

Started 2026-10-15. Toolchain: llvm-mingw 20261006 (UCRT, macOS universal) in ~/Documents/toolchains/; CMake
toolchain file `cmake/windows-x64.cmake` (x86-64-v2, -static). Builds:
- launcher: `cmake -S launcher -B launcher/build-win -DCMAKE_TOOLCHAIN_FILE=$PWD/cmake/windows-x64.cmake` (windows.h
  needs NOGDI/NOUSER next to raylib).
- runtime: tools/PS2Recomp/out/rt-win (FFMPEG off, SDL_GPU backend off, recomp/analyzer/test/studio off).
  Portable dlopen in include/runtime/platform_dl.h + src/lib/platform_dl.cpp; filesystem paths need .string() for fopen.
- paraLLEl-GS DLL: recomp/gpu/build-win from ps2recomp/gpu with GS_SOURCE = Black's recomp/gpu/parallel-gs (read-only
  use); loads vulkan-1.dll.
Package: dist/SilentHillOrigins-Recomp-win64(.zip), same relative layout the launcher expects. Contains the game ELF
and the user's memory card: for the user's own PC only, never publish.

The launcher (launcher/, copied from Black) extracts the ISO into recomp/disc itself (own ISO 9660 reader) - the
user asked for extraction inside the game folder, not mounting.

User decision 2026-10-15: Windows gets the native renderer too, on Vulkan (not D3D12; Linux later).
Done 2026-10-15: ps2recomp/gpu/native split into gpu.h (API-neutral) + gpu_metal.mm + gpu_vulkan.cpp; renderer
native_gs_module.mm only talks to gpu.h (Metal output verified pixel-identical vs the pre-split .so on 684 replay
frames at 1x/4x; old lib kept as recomp/gpu/build/libblack-native-gs.so.pre-gpusplit). Shaders: gs_shaders_msl.inc
(Metal) and gs_shaders.glsl (Vulkan port, keep in step) -> compile_shaders.sh -> gs_shaders_spv.inc. Targets:
black-native-gs-vk (macOS, MoltenVK via PS2X_GS_MOLTENVK, for gs-replay testing) and black-native-gs DLL in
recomp/gpu/build-win. glslang installed via brew (user ran it). Vulkan backend verified pixel-identical to Metal on
684 replay frames via MoltenVK (export PS2X_GS_MOLTENVK=recomp/gpu/moltenvk/libMoltenVK.dylib; module
libblack-native-gs-vk.so). MoltenVK has no raster-order ext, so the barrier path runs there (slow, ~120 ms/frame;
OK for validation only). Barriers split draws into runs of non-overlapping triangles (exact SAT test); per-primitive
barriers made MoltenVK run out of memory. Windows package ships libblack-native-gs.dll as default; untested on real PC. Vulkan design: all images GENERAL, full barriers between passes, destination read = input attachment with
rasterization-order ext or per-primitive by-region barriers. Metal Storage::Default must stay CPU-writable
(replaceRegion on a Private texture segfaults). VU1 direct blocks now run on x86 too (2026-10-15): guards are PS2X_VU_SIMD
(ps2_vu1.h), NEON intrinsics mapped to SSE4.1 in include/runtime/neon_sse_shim.h, ps2x_fp:: sets MXCSR RZ+FTZ+DAZ like
FPCR. Validated with an x86_64 macOS build under Rosetta (out/rt-x86, configure with -DCMAKE_SYSTEM_NAME=Darwin
-DCMAKE_SYSTEM_PROCESSOR=x86_64 so sse2neon is skipped; -O1 to build fast): ps2x_vu1_trace_replay road-intro.bin
--engine recompiled = 0 mismatches. Touching the 8 generated part files costs ~1 h of -O3 compile on the Mac. Related: [[native-gs-renderer]], [[recompile-not-emulate]].

Windows test loop without the PC (2026-10-15): out/rt-x86 runner under Rosetta reproduces x86/Windows-config problems
(SHO_RUNNER=<x86 runner> SHO_GS=none PS2X_WINDOW_HIDDEN=1 ps2recomp/JogarSilentHillOrigins.command). The endless
loading screen on Windows was PS2X_ENABLE_AGRESSIVE_LOGS=ON (default in fresh configures): the load after MC2_D.IRX
ran 10x+ slower. Keep it OFF in every shipped build. PS2X_SIMULATE_WIN_TIMER=1|1ms simulates Windows' 15.6 ms timer.
Runner binary is now SilentHillOriginsRecompiled(.exe), window "Silent Hill Origins - Recompiled".

Fixed-function blend (2026-10-15): on GPUs without raster-order (Intel/NVIDIA/MoltenVK) hwBlend() in native_gs_module
maps GS blends to dual-source blending (+ whole-channel FBMASK -> write mask, Cs*Ad+Cd -> DST_ALPHA additive drawn
twice, 0.49 truncation bias). MoltenVK elev 1x: 301 ms -> 6.8 ms; only self-reading draws still use barriers.
PS2X_GS_NATIVE_BLEND_STATS=1 lists what still reads the target; PS2X_GS_FIXED_BLEND=1 forces it on Metal to diff.
Pitfall: SPIRV-Cross (MoltenVK) fails on booleans built only from specialization constants - use runtime values.
Barriers dominate cost: coarser overlap tests made it slower (more barriers), keep the exact test.
