---
name: vu-timing-stalls
description: VU fast/recompiled path must model pipeline stalls; view-dependent missing geometry was the VU1 clipper reading flags at the wrong cycle
metadata:
  type: project
---

View-dependent missing geometry in Black (floor, arm, decals, fire flicker; found 2026-10-09) was the VU1 triangle clipper: the fast VU path (`stepPair`) did not count register-hazard stalls, the EFU resource stall, or re-evaluate stalls after each wait (XGKICK waits for the whole previous transfer). The flag pipeline is cycle-based, so `FMAND` read the wrong instruction's flags.

**Why:** two earlier explanations (MAC flag elision; register hazards alone) were wrong and I announced them before testing. Bisecting in the reference engine (`PS2X_VU_ACCURATE_PARTS`) and validating fast-vs-reference on the trace is what found it.

**How to apply:** when geometry/primitives vanish depending on the view, test `PS2X_VU_ACCURATE=1` early. Validate any VU timing change with `ps2x_vu1_trace_replay` (0 fast-vs-reference mismatches) before a full rebuild, and do not report a fix until the frame was checked in the normal recompiled mode. A run without `black_vu1_recompiled.inc` silently uses the reference interpreter. Related: [[pcsx2-savestate-ram-oracle]], [[recompile-not-emulate]].
