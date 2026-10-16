#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1440
// Address: 0x2f1440 - 0x2f1570
void sub_002F1440_0x2f1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1440_0x2f1440");
#endif

    switch (ctx->pc) {
        case 0x2f14a0u: goto label_2f14a0;
        case 0x2f14c0u: goto label_2f14c0;
        case 0x2f14e0u: goto label_2f14e0;
        case 0x2f14fcu: goto label_2f14fc;
        case 0x2f151cu: goto label_2f151c;
        case 0x2f1538u: goto label_2f1538;
        case 0x2f1540u: goto label_2f1540;
        default: break;
    }

    ctx->pc = 0x2f1440u;

    // 0x2f1440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f1444: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f1448: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f1448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f144c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f1450: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2f1450u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1454: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f1454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f1458: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f1458u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f145c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f1460: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f1460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1464: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f1468: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2f1468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f146c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1470: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1474: 0x8c436338  lw          $v1, 0x6338($v0)
    ctx->pc = 0x2f1474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x686338u));
    // 0x2f1478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f147c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f1480: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1484: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1484u;
    {
        const bool branch_taken_0x2f1484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1484u;
        // 0x2f1488: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1484) {
            ctx->pc = 0x2F1498u;
            goto label_2f1498;
        }
    }
    ctx->pc = 0x2F148Cu;
    // 0x2f148c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1490: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F1490u;
    {
        const bool branch_taken_0x2f1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1490u;
        // 0x2f1494: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1490) {
            ctx->pc = 0x2F1544u;
            goto label_2f1544;
        }
    }
    ctx->pc = 0x2F1498u;
label_2f1498:
    // 0x2f1498: 0xc0bdfde  jal         func_2F7F78
    ctx->pc = 0x2F1498u;
    SET_GPR_U32(ctx, 31, 0x2F14A0u);
    ctx->pc = 0x2F149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1498u;
    // 0x2f149c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7F78u, 0x2F1498u, 0x2F14A0u)) {
        return;
    }
    ctx->pc = 0x2F14A0u;
label_2f14a0:
    // 0x2f14a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f14a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14a4: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F14A4u;
    {
        const bool branch_taken_0x2f14a4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2f14a4) {
            ctx->pc = 0x2F14B8u;
            goto label_2f14b8;
        }
    }
    ctx->pc = 0x2F14ACu;
    // 0x2f14ac: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f14acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f14b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F14B0u;
    {
        const bool branch_taken_0x2f14b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14B0u;
        // 0x2f14b4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14b0) {
            ctx->pc = 0x2F1544u;
            goto label_2f1544;
        }
    }
    ctx->pc = 0x2F14B8u;
label_2f14b8:
    // 0x2f14b8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F14B8u;
    SET_GPR_U32(ctx, 31, 0x2F14C0u);
    ctx->pc = 0x2F14BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14B8u;
    // 0x2f14bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F14B8u, 0x2F14C0u)) {
        return;
    }
    ctx->pc = 0x2F14C0u;
label_2f14c0:
    // 0x2f14c0: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f14c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f14c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F14C4u;
    {
        const bool branch_taken_0x2f14c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14C4u;
        // 0x2f14c8: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14c4) {
            ctx->pc = 0x2F14D8u;
            goto label_2f14d8;
        }
    }
    ctx->pc = 0x2F14CCu;
    // 0x2f14cc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f14d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F14D0u;
    {
        const bool branch_taken_0x2f14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14D0u;
        // 0x2f14d4: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14d0) {
            ctx->pc = 0x2F1544u;
            goto label_2f1544;
        }
    }
    ctx->pc = 0x2F14D8u;
label_2f14d8:
    // 0x2f14d8: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F14D8u;
    SET_GPR_U32(ctx, 31, 0x2F14E0u);
    ctx->pc = 0x2F14DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14D8u;
    // 0x2f14dc: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F14D8u, 0x2F14E0u)) {
        return;
    }
    ctx->pc = 0x2F14E0u;
label_2f14e0:
    // 0x2f14e0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f14e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f14e4: 0x2470f100  addiu       $s0, $v1, -0xF00
    ctx->pc = 0x2f14e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963456));
    // 0x2f14e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f14ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F14ECu;
    {
        const bool branch_taken_0x2f14ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f14ec) {
            ctx->pc = 0x2F14F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F14ECu;
            // 0x2f14f0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1508u;
            goto label_2f1508;
        }
    }
    ctx->pc = 0x2F14F4u;
    // 0x2f14f4: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F14F4u;
    SET_GPR_U32(ctx, 31, 0x2F14FCu);
    ctx->pc = 0x2F14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14F4u;
    // 0x2f14f8: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F14F4u, 0x2F14FCu)) {
        return;
    }
    ctx->pc = 0x2F14FCu;
label_2f14fc:
    // 0x2f14fc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f1500: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F1500u;
    {
        const bool branch_taken_0x2f1500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1500u;
        // 0x2f1504: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1500) {
            ctx->pc = 0x2F1544u;
            goto label_2f1544;
        }
    }
    ctx->pc = 0x2F1508u;
label_2f1508:
    // 0x2f1508: 0xac71f100  sw          $s1, -0xF00($v1)
    ctx->pc = 0x2f1508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963456), GPR_U32(ctx, 17));
    // 0x2f150c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2f150cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2f1510: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1514: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F1514u;
    SET_GPR_U32(ctx, 31, 0x2F151Cu);
    ctx->pc = 0x2F1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1514u;
    // 0x2f1518: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F1514u, 0x2F151Cu)) {
        return;
    }
    ctx->pc = 0x2F151Cu;
label_2f151c:
    // 0x2f151c: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x2f151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x2f1520: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2f1520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2f1524: 0x8c64f624  lw          $a0, -0x9DC($v1)
    ctx->pc = 0x2f1524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70F624u));
    // 0x2f1528: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2f1528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2f152c: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x2f152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x2f1530: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1530u;
    SET_GPR_U32(ctx, 31, 0x2F1538u);
    ctx->pc = 0x2F1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1530u;
    // 0x2f1534: 0xae170014  sw          $s7, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1530u, 0x2F1538u)) {
        return;
    }
    ctx->pc = 0x2F1538u;
label_2f1538:
    // 0x2f1538: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2F1538u;
    SET_GPR_U32(ctx, 31, 0x2F1540u);
    ctx->pc = 0x2F153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1538u;
    // 0x2f153c: 0x8e44f62c  lw          $a0, -0x9D4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294964780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2F1538u, 0x2F1540u)) {
        return;
    }
    ctx->pc = 0x2F1540u;
label_2f1540:
    // 0x2f1540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1544:
    // 0x2f1544: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f1544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1548: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f1548u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f154c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f154cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1550: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f1550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1554: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f1554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1558: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f1558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f155c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f155cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1560: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1568: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1568u;
        // 0x2f156c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1570u;
}
