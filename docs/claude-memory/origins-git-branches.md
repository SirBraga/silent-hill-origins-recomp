---
name: origins-git-branches
description: Silent Hill Origins repo - branches macos (Mac release) and windows (port), what is versioned and what never is
metadata:
  type: project
---

Since 2026-10-16 the SHO repo (`~/Documents/silent-hill-origins-recomp`) has commits.
- Branch `macos`: the Mac release, first commit 6058211.
- Branch `windows`: created from it, for the Windows port. The user asked to commit from now on, with the Mac release on `macos` and the port on `windows`.
- Remote `origin`: public repo https://github.com/SirBraga/silent-hill-origins-recomp, both branches pushed on 2026-10-16. Making it public, with the generated code, was the user's choice.
- Versioned on the user's choice:
  - the generated recompiled code (EE in `tools/PS2Recomp/ps2xRuntime/src/runner` plus the two `include/ps2_recompiled_*.h`, force-added past the upstream .gitignore; IOP `.inc`; VU parts);
  - the PS2Recomp runtime inside the main repo. Its original clone `.git` was moved to `tools/PS2Recomp/.git-upstream` (ignored).
- Never versioned: ISO/ELF (`orig/`), `recomp/disc`, `recomp/diagnostics` (dumps, traces), memory cards (`mc0/`, `*.ps2`), `dist/` packages, `tools/loc/src/*.bin` (extracted game text and font), builds, and `recomp/output` (the generator's copy).

**How to apply:**
- Commit work to the branch it belongs to.
- Before each push, check that no ISO/ELF/dumps/memory cards/disc files were staged.
- After `rebuild_ee.sh`, re-add `src/runner` with `git add -f`.
