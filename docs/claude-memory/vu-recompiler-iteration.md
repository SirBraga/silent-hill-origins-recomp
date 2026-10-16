---
name: vu-recompiler-iteration
description: How to measure and iterate on the VU1/VU0 static recompiler without being misled or stuck in compiles
metadata:
  type: project
---

Working on the VU recompiler (`ps2recomp/diagnostics/vu1_recompile.cpp`, `vu1_direct_emit.inl`), as of 2026-10-11:

- **Metric:** `ps2x_vu1_trace_replay <trace> --engine recompiled --bench 30 --bench-engine fast`, the line "without the harness" (the plain ns/pair includes the tool's own 16 KB reset per run, ~20 % for VU1 and most of the time for VU0). Baseline: VU1 1.61–1.70 ns/pair, VU0 ~143 ns per 49-pair call (100 with the caller already in VU FP mode). Console = 3.39 ns/pair. The user's target of VU1 < 1.5 was not reached.
- **Validation:** "fast-vs-reference mismatches=0" on heavy-spot, contig, level00 and vu0-session (`PS2X_VU0_FLAGS_UNOBSERVED=1` for VU0). Nothing goes into the game without it; "ceiling" experiments that delete checks are measurement only.
- **Ceilings already measured (do not repeat):** removing all flag recording, all per-pair commit checks and entry hazard blocks gains at most ~0.1 ns/pair; a shorter operand clamp, clang PGO, function-level register locals and superblocks gain nothing measurable.
- **Compile-time traps:** function-level register locals and unguided superblocks make clang take 30–50+ min; the generator binary links the runtime library that contains the generated code, so a slow variant left in the tree blocks even rebuilding the generator (empty the `black_vu1_recompiled_part*.cpp` files and delete the `.inc` first). Kill leftover `ps2x_vu1_trace_replay` / `xctrace` processes: one ran for 47 min and skewed every benchmark.
- **In-game load is not a metric:** the scripted heavy pose lands in two regimes (VU1 ~30 % with the street empty, ~60 % with the fight on); compare with the trace replay instead.
- `xctrace` Time Profiler stopped capturing samples mid-session; `sample <pid>` top-of-stack still works.

**Why:** I lost hours to a benchmark that measured itself, to in-game numbers that varied by scene, and to builds that never finished.
**How to apply:** start from `ps2recomp/build_vu_recompiled.sh`; see the 2026-10-11 sections of `ps2recomp/PS2_PROJECT_STATE.md` for what was tried. Related: [[black-perf-measurement]], [[vu-timing-stalls]], [[recompile-not-emulate]].
