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

// Function: sub_001F36B8
// Address: 0x1f36b8 - 0x1f3750
void sub_001F36B8_0x1f36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F36B8_0x1f36b8");
#endif

    switch (ctx->pc) {
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f3700u: goto label_1f3700;
        default: break;
    }

    ctx->pc = 0x1f36b8u;

    // 0x1f36b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f36bc: 0x8c43eabc  lw          $v1, -0x1544($v0)
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33EABCu));
    // 0x1f36c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F36C0u;
    {
        const bool branch_taken_0x1f36c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36C0u;
        // 0x1f36c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36c0) {
            ctx->pc = 0x1F36DCu;
            goto label_1f36dc;
        }
    }
    ctx->pc = 0x1F36C8u;
    // 0x1f36c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f36cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F36CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36CCu;
        // 0x1f36d0: 0x24422590  addiu       $v0, $v0, 0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9616));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F36CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F36D4u;
label_1f36d4:
    // 0x1f36d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F36D4u;
    {
        const bool branch_taken_0x1f36d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36D4u;
        // 0x1f36d8: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36d4) {
            ctx->pc = 0x1F3720u;
            goto label_1f3720;
        }
    }
    ctx->pc = 0x1F36DCu;
label_1f36dc:
    // 0x1f36dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F36DCu;
    {
        const bool branch_taken_0x1f36dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f36dc) {
            ctx->pc = 0x1F3720u;
            goto label_1f3720;
        }
    }
    ctx->pc = 0x1F36E4u;
    // 0x1f36e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f36e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f36ec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F36ECu;
    {
        const bool branch_taken_0x1f36ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36ECu;
        // 0x1f36f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36ec) {
            ctx->pc = 0x1F371Cu;
            goto label_1f371c;
        }
    }
    ctx->pc = 0x1F36F4u;
    // 0x1f36f4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f36f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f36f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36fc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f36fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3700:
    // 0x1f3700: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3704: 0x1044fff3  beq         $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F3704u;
    {
        const bool branch_taken_0x1f3704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3704u;
        // 0x1f3708: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3704) {
            ctx->pc = 0x1F36D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f36d4;
        }
    }
    ctx->pc = 0x1F370Cu;
    // 0x1f370c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1f370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1f3710: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1f3710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f3714: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3714u;
    {
        const bool branch_taken_0x1f3714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3714u;
        // 0x1f3718: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3714) {
            ctx->pc = 0x1F3700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F371Cu;
label_1f371c:
    // 0x1f371c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f371cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3720:
    // 0x1f3720: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3720u;
    {
        const bool branch_taken_0x1f3720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3720) {
            ctx->pc = 0x1F3738u;
            goto label_1f3738;
        }
    }
    ctx->pc = 0x1F3728u;
    // 0x1f3728: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3728u;
    {
        const bool branch_taken_0x1f3728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3728) {
            ctx->pc = 0x1F3738u;
            goto label_1f3738;
        }
    }
    ctx->pc = 0x1F3730u;
    // 0x1f3730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f3734: 0x244225b8  addiu       $v0, $v0, 0x25B8
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
label_1f3738:
    // 0x1f3738: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3740u;
    // 0x1f3740: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f3744: 0x0  nop
    ctx->pc = 0x1f3744u;
    // NOP
    // 0x1f3748: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f374c: 0x0  nop
    ctx->pc = 0x1f374cu;
    // NOP
    ctx->pc = 0x1f3750u;
}
