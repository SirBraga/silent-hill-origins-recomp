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

// Function: sub_001B13B0
// Address: 0x1b13b0 - 0x1b14e8
void sub_001B13B0_0x1b13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B13B0_0x1b13b0");
#endif

    switch (ctx->pc) {
        case 0x1b1458u: goto label_1b1458;
        case 0x1b14d4u: goto label_1b14d4;
        default: break;
    }

    ctx->pc = 0x1b13b0u;

    // 0x1b13b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b13b4: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x1b13b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1b13b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b13b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b13bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b13c0: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b13c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b13c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B13C8u;
    {
        const bool branch_taken_0x1b13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C8u;
        // 0x1b13cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c8) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B13D0u;
    // 0x1b13d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b13d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b13d8: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x1b13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x1b13dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b13e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b13e4: 0x800008  jr          $a0
    ctx->pc = 0x1B13E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B13ECu: goto label_1b13ec;
            case 0x1B13F4u: goto label_1b13f4;
            case 0x1B13FCu: goto label_1b13fc;
            case 0x1B1404u: goto label_1b1404;
            case 0x1B140Cu: goto label_1b140c;
            case 0x1B1414u: goto label_1b1414;
            case 0x1B141Cu: goto label_1b141c;
            case 0x1B1424u: goto label_1b1424;
            case 0x1B142Cu: goto label_1b142c;
            case 0x1B1434u: goto label_1b1434;
            case 0x1B1438u: goto label_1b1438;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B13E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B13ECu;
label_1b13ec:
    // 0x1b13ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B13ECu;
    {
        const bool branch_taken_0x1b13ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13ECu;
        // 0x1b13f0: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13ec) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B13F4u;
label_1b13f4:
    // 0x1b13f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B13F4u;
    {
        const bool branch_taken_0x1b13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13F4u;
        // 0x1b13f8: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13f4) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B13FCu;
label_1b13fc:
    // 0x1b13fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B13FCu;
    {
        const bool branch_taken_0x1b13fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13FCu;
        // 0x1b1400: 0x24100021  addiu       $s0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13fc) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B1404u;
label_1b1404:
    // 0x1b1404: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B1404u;
    {
        const bool branch_taken_0x1b1404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1404u;
        // 0x1b1408: 0x24100022  addiu       $s0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1404) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B140Cu;
label_1b140c:
    // 0x1b140c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B140Cu;
    {
        const bool branch_taken_0x1b140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B140Cu;
        // 0x1b1410: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b140c) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B1414u;
label_1b1414:
    // 0x1b1414: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1414u;
    {
        const bool branch_taken_0x1b1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1414u;
        // 0x1b1418: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1414) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B141Cu;
label_1b141c:
    // 0x1b141c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B141Cu;
    {
        const bool branch_taken_0x1b141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B141Cu;
        // 0x1b1420: 0x24100025  addiu       $s0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b141c) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B1424u;
label_1b1424:
    // 0x1b1424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1424u;
    {
        const bool branch_taken_0x1b1424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x24100026  addiu       $s0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1424) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B142Cu;
label_1b142c:
    // 0x1b142c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B142Cu;
    {
        const bool branch_taken_0x1b142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B142Cu;
        // 0x1b1430: 0x24100027  addiu       $s0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b142c) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B1434u;
label_1b1434:
    // 0x1b1434: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x1b1434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b1438:
    // 0x1b1438: 0x3a020032  xori        $v0, $s0, 0x32
    ctx->pc = 0x1b1438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)50);
    // 0x1b143c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B143Cu;
    {
        const bool branch_taken_0x1b143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B143Cu;
        // 0x1b1440: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b143c) {
            ctx->pc = 0x1B14D4u;
            goto label_1b14d4;
        }
    }
    ctx->pc = 0x1B1444u;
    // 0x1b1444: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b1444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1448: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b144c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1450: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B1450u;
    SET_GPR_U32(ctx, 31, 0x1B1458u);
    ctx->pc = 0x1B1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1450u;
    // 0x1b1454: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B1450u, 0x1B1458u)) {
        return;
    }
    ctx->pc = 0x1B1458u;
label_1b1458:
    // 0x1b1458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b145c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b145cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1460: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1464: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1b1464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b1468: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b146c: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x1b146cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x1b1470: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1b1470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1b1474: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1474u;
    {
        const bool branch_taken_0x1b1474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1474u;
        // 0x1b1478: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1474) {
            ctx->pc = 0x1B14D4u;
            goto label_1b14d4;
        }
    }
    ctx->pc = 0x1B147Cu;
    // 0x1b147c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b147cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1480: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1484: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1484u;
    {
        const bool branch_taken_0x1b1484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1484u;
        // 0x1b1488: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1484) {
            ctx->pc = 0x1B14C0u;
            goto label_1b14c0;
        }
    }
    ctx->pc = 0x1B148Cu;
    // 0x1b148c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b1490: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b1490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1494: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b1498: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b1498u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b149c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b149cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b14a0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b14a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1b14a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b14a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b14ac: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b14acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1b14b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b14b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b14b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B14B8u;
    {
        const bool branch_taken_0x1b14b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14B8u;
        // 0x1b14bc: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14b8) {
            ctx->pc = 0x1B14C4u;
            goto label_1b14c4;
        }
    }
    ctx->pc = 0x1B14C0u;
label_1b14c0:
    // 0x1b14c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b14c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b14c4:
    // 0x1b14c4: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B14C4u;
    {
        const bool branch_taken_0x1b14c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C4u;
        // 0x1b14c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c4) {
            ctx->pc = 0x1B14D8u;
            goto label_1b14d8;
        }
    }
    ctx->pc = 0x1B14CCu;
    // 0x1b14cc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B14CCu;
    SET_GPR_U32(ctx, 31, 0x1B14D4u);
    ctx->pc = 0x1B14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14CCu;
    // 0x1b14d0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B14CCu, 0x1B14D4u)) {
        return;
    }
    ctx->pc = 0x1B14D4u;
label_1b14d4:
    // 0x1b14d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b14d8:
    // 0x1b14d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b14dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E0u;
        // 0x1b14e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14E8u;
}
