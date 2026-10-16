# Runtime port patches

- Base PS2Recomp revision: `75d729ce40d7eed9649fd4bb05628dee520f3d0c` (`Feature/iop emulator`, 2026-10-06).
- `black-runtime-progress.patch` snapshots the 67 tracked-file changes in the Black checkout's PS2Recomp worktree at project creation, excluding Black's generated `register_functions.cpp`. It includes the SDL_GPU GS path, Metal shader support, CPU/GPU synchronization, IOP/SIO2/SPU2 work, and runtime fixes. It is a broad working-tree snapshot, not a minimal upstream change set.
- `gs_sdl_gpu_raster.cpp/.h` and the three SDL_GPU diagnostic sources under `ps2recomp/diagnostics/` were untracked in that Black checkout and are therefore copied separately into the isolated PS2Recomp tree.
- `origins-cd-paths.patch` adds `PS2X_CD_IMAGE` and `PS2X_CD_ROOT` handling to the runner so it can boot from this game's ISO and mounted filesystem.

The isolated checkout under `tools/PS2Recomp/` is ignored by this project's Git repo. The patch files and base revision are kept here so the runtime source can be recreated without editing `black-decomp`'s checkout. Runtime changes remain experimental and need Origins-specific validation.

## 2026-10-08

- `origins-runtime-2026-10-08.patch` is the full tracked-file diff of `tools/PS2Recomp` against base `75d729c` after syncing Black's later runtime work and adding the Origins fixes (IOP interrupt-disable gating in `ps2xIOP/src/emulator/iop_emulator.cpp`, `SHO_*` diagnostics). It supersedes `black-runtime-progress.patch` + `origins-cd-paths.patch` for tracked files. Untracked sources (SDL_GPU raster, threaded GS backend, SPU2/SIO2, `ps2_vu1_*.inl`) are not in the patch and still have to be copied from the Black checkout.
- `pre-black-sync-backup/` holds the pre-sync diff and the 31 replaced files.
- Game overrides live in `ps2recomp/overrides/` and are copied into `ps2xRuntime/src/runner/` as `zz_<name>.cpp` before building.
