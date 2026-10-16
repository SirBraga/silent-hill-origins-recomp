---
name: ghidra-ee-tool
description: tools/ghidra_ee.sh gives headless Ghidra decompilation of SLUS_213.76 with the R5900/VU0 plugin; REA was rejected
metadata:
  node_type: memory
  type: reference
  originSessionId: 1a315c6d-3f3a-494e-b780-8189a4e88348
  modified: 2026-10-12T16:41:34.637Z
---

`tools/ghidra_ee.sh decomp 0xADDR ...` prints Ghidra pseudocode (R5900 + COP2/VU0 macro ops via ghidra-emotionengine-reloaded,
already in tools/ghidra/ghidra_12.1.3_PUBLIC/Ghidra/Extensions). Project in recomp/ghidra; `import` re-analyses (~1 min).
`symbols` applies config/symbol_addrs*.txt (ImportSplatSymbols.java); rerun after naming functions. JDK: openjdk@21 from Homebrew. The portable Ghidra lacked mac_arm_64 natives; they were copied from the Homebrew Ghidra 12.1.3
(re-copy if tools/ghidra is re-downloaded). Do NOT also put the plugin in ~/Library/ghidra/.../Extensions: module-name collision.

The user asked (2026-10-12) to integrate morluto/rea; it refuses R5900 (only MIPS32r2), so this Ghidra route was chosen instead.
