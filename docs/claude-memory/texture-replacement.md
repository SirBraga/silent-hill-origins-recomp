---
name: texture-replacement
description: PCSX2-format HD texture pack support in the native Metal renderer, and the hash rules that make filenames match
metadata:
  type: project
---

User put the "hd-reimagined" pack (1,313 files, 4.5 GB, PCSX2 naming, DDS BC1/BC3 with mips) in `mods/hd-reimagined/`; wired as a launcher mod (`mod.ini`, env `PS2X_TEXTURE_PACKS=${MOD_DIR}/replacements`). Implementation: `ps2recomp/gpu/native/texture_replace.h` (index, DDS loader) + hooks in `native_gs_module.mm` `texture()`; docs in `ps2recomp/TEXTURE_REPLACEMENT.md`.

**Key finding:** PCSX2 hashes plain PSMT8/PSMT4 textures (>= one block) as the RAW 256-byte GS blocks in block order, not unswizzled indices; only sub-block levels and T8H/T4H*/CT24 are hashed expanded. Getting this wrong gave 1/113 hits, right gave 77/77 of what the pack covers. Reference pack hashes only the base level (no mips).

**How to apply:** validate with `gs-replay heavy.gsdump` + `PS2X_TEXTURE_LOG=1` (count hit/miss), never by playing. Not done yet: non-palette formats (CT32/CT16/CT24), async loading (cold-disk first sight can hitch), region-clamp names.
