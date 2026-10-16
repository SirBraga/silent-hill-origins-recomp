---
name: open-game-after-work
description: "When a change to the game/runtime is finished and built, launch the game for the user to test"
metadata:
  node_type: memory
  type: feedback
  originSessionId: 1a315c6d-3f3a-494e-b780-8189a4e88348
  modified: 2026-10-12T17:28:48.182Z
---

When finishing a change (built and checked), open the game for the user to test: `open ps2recomp/JogarBlack.command`.

**Why:** the user said (2026-10-12) "sempre quando terminar, abra pra eu testar" after the SPU2 audio work.
**How to apply:** at the end of each finished change, check no game window of theirs is already open ([[launcher-defaults]]),
then launch it and say what to look/listen for.
