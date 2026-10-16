---
name: launch-game-in-ptbr
description: Every run of Black (launcher and my own test/measurement runs) starts with the pt-BR text, not the English disc image
metadata:
  type: feedback
---

On 2026-10-10 the user said: "nas proximas vezes inicie o jogo em ptbr". When launching the game for them to play, use the Brazilian Portuguese text.

**Why:** another session translated `recomp/disc/LANGUAGE/STRINGS/MAINUS.BIN`; the game only reads it when `BLACK_CD_IMAGE` is empty (virtual ISO from the loose files in `recomp/disc`). With `BLACK_CD_IMAGE=orig/Black.iso` it shows the original English.

**How to apply:** every time the game is opened, by the launcher or by my own test/measurement runs, it must be in pt-BR. `ps2recomp/JogarBlack.command` and `ps2recomp/diagnostics/perf_run.py` both default to it (`BLACK_LANG=en` goes back to the image). The user repeated the request the same day ("nao me ignore, abra nas proximas vezes em portugues") after I had kept my measurement runs in English: do not make exceptions for measurements. Any other script that starts the game must pass an empty `BLACK_CD_IMAGE` too. Related: [[black-perf-measurement]].
