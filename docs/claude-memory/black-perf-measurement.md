---
name: black-perf-measurement
description: How to measure Black's performance without diagnostics distorting it; where the frame-rate knobs are
metadata:
  type: reference
---

Measure the game with `python3 ps2recomp/diagnostics/perf_run.py <tag> [VAR=value ...]` (launcher settings, no debug hooks; prints updates/s, per-thread busy time and what threads wait on; sample kept in `recomp/diagnostics/perf/<tag>.sample.txt`). `sample_game_thread.py`, `sample_threads.py`, `sample_waits.py` read a sample.

Do not use `path3_gate_test.py` for performance: it forces `BLACK_DEBUG=1` and the GS stream capture, which show up as `ReadVram`, copies and mutex contention on the game thread (found 2026-10-10 after several misleading profiles). It is for image validation only.

Useful: `sample` prints `symbol + offset`; a histogram of offsets inside one hot function pinpoints the hot loop when the per-function profile does not.

Frame rate: `BLACK_TICK_RATE=60` (override `black_tick_rate.cpp`, experimental) scales the game's tick rate (`func_0027F730`) and vblanks-per-frame (`func_002B4DD0`). See [[goal-120fps-native]].

2026-10-10: the macOS `sample` profiler slows the game heavily while attached (updates/s drops to 30–47, then overshoots to ~85 catching up). Rates, minima and hitch counts must come from windows without it: `SAMPLE=0` in `perf_run.py`, and `BLACK_FPS=1` now prints per 2 s window the worst gap between updates and how many exceeded 20/25 ms. Thread busy % taken under `sample` is inflated too; use it only for where time goes, not for whether a thread is saturated. Also close other heavy apps (the user's PCSX2 at 174% speed skewed a whole afternoon of numbers), and the scripted run must press X as well as R1 or it sits in a tutorial pause.

**User instruction (2026-10-10): "pra testar o desempenho sempre use a posicao do savestate".** Performance tests teleport to the PCSX2 savestate pose, `recomp/diagnostics/pcsx2/state01.eeMemory.bin` (street of Level_00, lots in view); `perf_run.py` uses it by default when `POSE` is not given (`POSE=none` disables). The older `heavy-spot.ram` is the window view from inside the first building; use it only when asked.

2026-10-11: the game-side counters ("presented X of Y blanks", loop times) do not see presentation problems. The native GS module logs `[black-fps] gpu: N of M frames reached the screen late` from the drawable's presented time; that is the number that matches what the user sees. It showed ~4 late frames per 2 s caused by the main loop polling for the vblank on its own 60 Hz sleep; presenting on the display flip (thread "Present", `PS2X_PRESENT_POLLED=1` for the old way) cut 207 late frames to 7 in the same run. The user's display is 120 Hz. Scripted runs keep the window in the background, where macOS delays timers: pacing numbers from them are a lower bound on quality.
