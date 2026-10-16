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

// Function: sub_002E1578
// Address: 0x2e1578 - 0x2e15d0
void sub_002E1578_0x2e1578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1578_0x2e1578");
#endif

    switch (ctx->pc) {
        case 0x2e1580u: goto label_2e1580;
        default: break;
    }

    ctx->pc = 0x2e1578u;

    // 0x2e1578: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e157c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2e157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2e1580:
    // 0x2e1580: 0x5445000e  bnel        $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1580u;
    {
        const bool branch_taken_0x2e1580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e1580) {
            ctx->pc = 0x2E1584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1580u;
            // 0x2e1584: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E15BCu;
            goto label_2e15bc;
        }
    }
    ctx->pc = 0x2E1588u;
    // 0x2e1588: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2e1588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e158c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1590: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1590u;
    {
        const bool branch_taken_0x2e1590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1590) {
            ctx->pc = 0x2E1594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1590u;
            // 0x2e1594: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E15A8u;
            goto label_2e15a8;
        }
    }
    ctx->pc = 0x2E1598u;
    // 0x2e1598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e159c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e159cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e15a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e15a4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2e15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e15a8:
    // 0x2e15a8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E15A8u;
    {
        const bool branch_taken_0x2e15a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15a8) {
            ctx->pc = 0x2E15C8u;
            goto label_2e15c8;
        }
    }
    ctx->pc = 0x2E15B0u;
    // 0x2e15b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e15b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E15B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15B4u;
        // 0x2e15b8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E15B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E15BCu;
label_2e15bc:
    // 0x2e15bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e15c0: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E15C0u;
    {
        const bool branch_taken_0x2e15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15C0u;
        // 0x2e15c4: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15c0) {
            ctx->pc = 0x2E1580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1580;
        }
    }
    ctx->pc = 0x2E15C8u;
label_2e15c8:
    // 0x2e15c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E15C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E15C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E15D0u;
}
