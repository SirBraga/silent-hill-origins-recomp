---
name: launcher-defaults
description: Defaults the user asked for in JogarBlack.command (16:9, native GPU, pt-BR, 3x, 60 Hz)
metadata:
  type: feedback
---

On 2026-10-10 the user asked that `ps2recomp/JogarBlack.command` always default to: 16:9 (`BLACK_WIDESCREEN=1`, window 2560x1440 real px), the native Metal renderer, Brazilian Portuguese, a higher internal resolution (I picked `BLACK_GS_SCALE=3`), and 60 Hz (`BLACK_TICK_RATE=60`). I also made the IOP thread default (my choice: 60 Hz does not hold without it; sound is mute in that mode and the user said sound comes later).

**Why:** this is how the user plays and tests; they should not have to type options.
**How to apply:** keep these as defaults when editing the launcher; opt-outs are `BLACK_WIDESCREEN=0`, `BLACK_GS=parallel`, `BLACK_LANG=en`, `BLACK_GS_SCALE=n`, `BLACK_TICK_RATE=30`, `BLACK_IOP_THREAD=0`. Related: [[launch-game-in-ptbr]], [[native-gs-renderer]].
