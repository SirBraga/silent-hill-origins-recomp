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

// Function: sub_002E13C0
// Address: 0x2e13c0 - 0x2e1498
void sub_002E13C0_0x2e13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E13C0_0x2e13c0");
#endif

    switch (ctx->pc) {
        case 0x2e13f0u: goto label_2e13f0;
        case 0x2e1414u: goto label_2e1414;
        case 0x2e141cu: goto label_2e141c;
        case 0x2e1468u: goto label_2e1468;
        default: break;
    }

    ctx->pc = 0x2e13c0u;

    // 0x2e13c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e13c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e13c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e13c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e13cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e13ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e13d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e13d4: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x2e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2e13d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e13d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e13dc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2e13dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e13e0: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E13E0u;
    {
        const bool branch_taken_0x2e13e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13E0u;
        // 0x2e13e4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13e0) {
            ctx->pc = 0x2E1478u;
            goto label_2e1478;
        }
    }
    ctx->pc = 0x2E13E8u;
    // 0x2e13e8: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2e13e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e13ec: 0x0  nop
    ctx->pc = 0x2e13ecu;
    // NOP
label_2e13f0:
    // 0x2e13f0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E13F0u;
    {
        const bool branch_taken_0x2e13f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13f0) {
            ctx->pc = 0x2E13F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E13F0u;
            // 0x2e13f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1470u;
            goto label_2e1470;
        }
    }
    ctx->pc = 0x2E13F8u;
    // 0x2e13f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e13fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e1400: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2e1400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e1404: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E1404u;
    {
        const bool branch_taken_0x2e1404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1404) {
            ctx->pc = 0x2E1408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1404u;
            // 0x2e1408: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1470u;
            goto label_2e1470;
        }
    }
    ctx->pc = 0x2E140Cu;
    // 0x2e140c: 0xc0b855e  jal         func_2E1578
    ctx->pc = 0x2E140Cu;
    SET_GPR_U32(ctx, 31, 0x2E1414u);
    ctx->pc = 0x2E1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E140Cu;
    // 0x2e1410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1578u, 0x2E140Cu, 0x2E1414u)) {
        return;
    }
    ctx->pc = 0x2E1414u;
label_2e1414:
    // 0x2e1414: 0xc0b8526  jal         func_2E1498
    ctx->pc = 0x2E1414u;
    SET_GPR_U32(ctx, 31, 0x2E141Cu);
    ctx->pc = 0x2E1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1414u;
    // 0x2e1418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1498u, 0x2E1414u, 0x2E141Cu)) {
        return;
    }
    ctx->pc = 0x2E141Cu;
label_2e141c:
    // 0x2e141c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E141Cu;
    {
        const bool branch_taken_0x2e141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e141c) {
            ctx->pc = 0x2E1420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E141Cu;
            // 0x2e1420: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E147Cu;
            goto label_2e147c;
        }
    }
    ctx->pc = 0x2E1424u;
    // 0x2e1424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1428: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e1428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e142c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e142cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e1430: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e1434: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e1434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1438: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e1438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e143c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e1440: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1440u;
    {
        const bool branch_taken_0x2e1440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e1440) {
            ctx->pc = 0x2E1460u;
            goto label_2e1460;
        }
    }
    ctx->pc = 0x2E1448u;
    // 0x2e1448: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e1448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e144c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e1450: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e1454: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2e1454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2e1458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1458u;
    {
        const bool branch_taken_0x2e1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1458u;
        // 0x2e145c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1458) {
            ctx->pc = 0x2E1478u;
            goto label_2e1478;
        }
    }
    ctx->pc = 0x2E1460u;
label_2e1460:
    // 0x2e1460: 0xc0b858c  jal         func_2E1630
    ctx->pc = 0x2E1460u;
    SET_GPR_U32(ctx, 31, 0x2E1468u);
    ctx->pc = 0x2E1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1460u;
    // 0x2e1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1630u, 0x2E1460u, 0x2E1468u)) {
        return;
    }
    ctx->pc = 0x2E1468u;
label_2e1468:
    // 0x2e1468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1468u;
    {
        const bool branch_taken_0x2e1468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1468u;
        // 0x2e146c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1468) {
            ctx->pc = 0x2E147Cu;
            goto label_2e147c;
        }
    }
    ctx->pc = 0x2E1470u;
label_2e1470:
    // 0x2e1470: 0x1603ffdf  bne         $s0, $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E1470u;
    {
        const bool branch_taken_0x2e1470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1470u;
        // 0x2e1474: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1470) {
            ctx->pc = 0x2E13F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e13f0;
        }
    }
    ctx->pc = 0x2E1478u;
label_2e1478:
    // 0x2e1478: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e1478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e147c:
    // 0x2e147c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e147cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1480: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e1480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1488: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1488u;
        // 0x2e148c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1490u;
    // 0x2e1490: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2e1490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2e1494: 0x0  nop
    ctx->pc = 0x2e1494u;
    // NOP
    ctx->pc = 0x2e1498u;
}
