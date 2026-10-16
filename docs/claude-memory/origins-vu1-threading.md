---
name: origins-vu1-threading
description: Splitting Silent Hill Origins' VU1 work across cores was measured and rejected (dependencies, VIF share tiny)
metadata:
  type: project
---

Measured 2026-10-16, at the user's request ("dividir o trabalho da VU1 entre núcleos").
- `ps2x_vu1_trace_replay recomp/diagnostics/vu-trace/road-intro.bin --independence 1`: only 23% of the runs (17% of the pairs) are independent of the run before them, and 2% of two runs before. The programs carry state in registers and VU memory between batches. Program 0x2d78 depends in 79% of its runs.
- The `[cpu]` line now splits the VIF1/VU1 thread into "[VU1 programs X%, GS front end Y%]" (g_ps2xVu1RunNs / g_ps2xGifSubmitNs).
  - Hospital lobby: the thread is at 24%, VU1 programs 21%, GS front end 1%.
  - VIF command processing is about 3% of a core.
- Pipelining VIF against VU1 would therefore save about 3% of a core, so it was not done. The thread is not the 60 fps bottleneck: 24–50% of a core.

**How to apply:** do not re-propose VU1 multithreading for SHO without new evidence. For 120 fps the whole game doubles its work; measure first. Related: [[goal-120fps-native]], [[vu-recompiler-iteration]].
