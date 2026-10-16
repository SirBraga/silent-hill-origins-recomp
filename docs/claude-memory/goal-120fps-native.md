---
name: goal-120fps-native
description: "End goal for the Black recomp — behave like a native PC game, use modern hardware fully, 120 Hz with real frames"
metadata:
  node_type: memory
  type: project
  originSessionId: 86b040fb-66ea-4d6c-af9d-786c1215e7f7
  modified: 2026-10-10T04:49:34.220Z
---

The user's end goal for the Black (SLUS_213.76) static recompilation, stated on 2026-10-09 and widened on 2026-10-10:

- 2026-10-09: "aproveite o maximo de hardware do computador, sem ter nada emulado e ter o melhor codigo recompilado possivel, meu plano e ter o jogo em 120hz e 120 fps (fazendo o jogo gerar mais quadros, e nao ter o jogo acelerado)".
- 2026-10-10: "eu quero que esse projeto transforme esse recomp como se o black tivesse sido feito pra pc (dentro dos limites do recomp), mas eu quero que aproveite ao maximo o hardware do pc moderno".

**Why:** the user does not want an emulator-like result that merely matches the console; matching PS2 speed or PS2 structure (cycle-counted waits, software rasterizer, 640x448) is not success.

**How to apply:** when choosing what to work on, prefer changes that remove console-shaped costs (guest busy-waits, cycle-accurate scheduling the game does not need, CPU-side GS work, serial EE/VU hand-offs) over polishing fidelity nobody observes. Keep [[recompile-not-emulate]]: guest code stays statically recompiled. Be honest about distance to the goal: on 2026-10-10 VU1 was at ~3.3 ns/pair (console parity), the game thread was the bottleneck at ~25 ms per update, and 60 updates/s was not yet sustained.
