---
name: origins-save-load-hang
description: Silent Hill Origins recomp - save loading hang (fixed 2026-10-14) and how the RtFS disc reads work
metadata:
  node_type: memory
  type: project
  originSessionId: 1ab233d8-3e12-4b6b-b5d9-3094589bf522
  modified: 2026-10-14T19:43:40.004Z
---

Loading a memory card save used to hang on the loading screen. Fixed 2026-10-14 (user confirmed the save loads) by
ps2recomp/overrides/sho_rtfs_seek.cpp (SHO_RTFS_SEEK_DRAIN=0 disables).

Cause: RenderWare file reads go EE -> RTFSSIOP RPC (client 0x705448: fno 5 read sector, 6 seek); the IOP answers
"transfer done" with SIF cmd 4, whose EE handler 0x274A80 signals the file's semaphore (+0x60, id 5). The EE read
0x273C90 drains that semaphore before each RPC; the EE seek 0x274118 does not, so a leftover completion let the
seek's wait pass early, the next read was refused by RwFSReadEE (seek pending), and every read after delivered the
previous sector -> truncated SH.ARC entry -> loader loop (fault at 0x201BFC). The override drains before the seek.

Also enabled the memory card by default (iop_emulator.cpp setCardPath, PS2X_MEMCARD=0 disables), as Black does.
Debug aids added: tools/ghidra_ee.sh (Origins EE), sho_load_trace.cpp (SHO_LOAD_TRACE, SHO_THREAD_DUMP),
SHO_SEMA_TRACE_MAX, PS2X_CDVD_CALLBACK_CYCLES, IOP preemption on SignalSema/SetEventFlag (PS2X_IOP_NO_PREEMPT=1).
RTFSSIOP.IRX has symbols (RwFSHandleRPC, RwFSSeekEE, RwFSReadEE...) and decompiles in Ghidra as MIPS:LE:32.
