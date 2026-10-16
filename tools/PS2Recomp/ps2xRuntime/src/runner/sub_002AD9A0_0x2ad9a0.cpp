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

// Function: sub_002AD9A0
// Address: 0x2ad9a0 - 0x2ad9c8
void sub_002AD9A0_0x2ad9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD9A0_0x2ad9a0");
#endif

    switch (ctx->pc) {
        case 0x2ad9a8u: goto label_2ad9a8;
        default: break;
    }

    ctx->pc = 0x2ad9a0u;

    // 0x2ad9a0: 0x8f8389e0  lw          $v1, -0x7620($gp)
    ctx->pc = 0x2ad9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x2ad9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ad9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad9a8:
    // 0x2ad9a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD9A8u;
    {
        const bool branch_taken_0x2ad9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9a8) {
            ctx->pc = 0x2AD9C0u;
            goto label_2ad9c0;
        }
    }
    ctx->pc = 0x2AD9B0u;
    // 0x2ad9b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad9b4: 0x1445fffc  bne         $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2AD9B4u;
    {
        const bool branch_taken_0x2ad9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ad9b4) {
            ctx->pc = 0x2AD9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad9a8;
        }
    }
    ctx->pc = 0x2AD9BCu;
    // 0x2ad9bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2ad9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ad9c0:
    // 0x2ad9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9C0u;
        // 0x2ad9c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD9C8u;
}
