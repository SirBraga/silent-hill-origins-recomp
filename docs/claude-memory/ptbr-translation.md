---
name: ptbr-translation
description: pt-BR translation of Black — string table format, tooling in tools/loc, font/accent blocker, how to install and run
metadata:
  type: project
---

Goal: translate Black to Brazilian Portuguese. Started 2026-10-10; first pass is ASCII-only (accents folded at build time).

- Text lives in `LANGUAGE/STRINGS/MAINUS.BIN` (1716 UTF-8 strings, keyed by hash id). Game opens it as `Language/Strings/Main%s.bin`.
- `tools/loc/strings_bin.py` extract/build/check; translations in `assets/loc/mainus.json` (field `pt`, keep accents there; `build --ascii` folds them). `tools/loc/install.sh` installs into `recomp/disc` (`--restore` goes back to English). Run the game with `BLACK_CD_IMAGE=` (empty) so the virtual ISO uses loose files.
- Button icons are invisible private-use chars (U+F009..U+F021) inside strings; translations must keep them (an earlier pass dropped them silently).
- Accents blocked: `LANGUAGE/FONTS/{SMALL,BIG}.BIN` glyph table only covers ASCII (129 slots, 1-8/14-31 free), and menus use EA Apt (Flash-like) with atlas textures `textsmall_01/02.tif` in `EXPORT/FRONTEND/COMMON.BIN`; pixel format not decoded. Idea: capture the atlas via the gs-replay dump ([[native-gs-renderer]]).
- Accent hunt (2026-10-10): GLOBDATA.BIN has no recognisable font atlas by static scan. Method that works: `tools/loc/capture_screen.sh` (game on paraLLEl-GS, `touch /tmp/black_dump_now` on a text screen) then `tools/loc/decode_dump.py` (decodes PSMT8 textures + CLUT from the VRAM dump via the runtime's GSMem::PixelBitAddress). First dump hit the intro video (empty effect buffers) — needs a menu/HUD frame. Fonts are opened right before GlobData.bin in the load order.
- Voices are English (SPCH_EN.BKS); only text/subtitles are in scope.

**Why:** user asked to start a pt-BR localisation, no-accent first.
**How to apply:** edit `pt` in mainus.json, run install.sh, test in game; untranslated entries (names, weapon codes) intentionally stay English.
