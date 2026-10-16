---
name: black-decomp-subagent-workflow
description: Fastest way found to advance the Black matching decomp (cod/) — one subagent per TU with try_match/apply_c; how many to run at once
metadata:
  type: project
---

For the matching decomp side of `black-decomp` (not the recomp), the fastest route found on 2026-10-09 is one subagent per `src/cod/<TU>.c`, writing C by hand with `tools/try_match.py` as oracle and `tools/apply_c.py` as the gated writer; the coordinator then runs `callfix.py`, `ninja`, `romfix.py`. Each agent matched ~30 functions (~2.7 KB) in 7–9 minutes at ~140–165k tokens, versus ~90 s per function for the permuter.

Six agents in parallel hit the user's session limit after ~9 minutes and three died mid-run (their partial work was safe because apply_c only writes matching files). The user approved subagents with "bora decompilar mais" after I proposed them.

**Why:** the m2c-based generators (`tools/auto/m2cgen.py`, incl. the `voidfix`/`argfix` variants) plateau at small functions; clones are exhausted.

**How to apply:** my interpretation — run 2–3 agents at a time rather than 6, never two on the same TU, agents must not run ninja or use `build/auto/_dr.c`/`applyloop.py` (shared paths). After `callfix.py`, check for a duplicate `_k_func_X` alias when a draft declared the same alias with a prototype (it broke the build once in `1A4FE8.c`). Matching patterns go in README.md, section "Padroes do codigo do jogo". See [[recompile-not-emulate]] for the recomp side.
