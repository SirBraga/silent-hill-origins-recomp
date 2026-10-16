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

// Function: sub_00230310
// Address: 0x230310 - 0x230338
void sub_00230310_0x230310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230310_0x230310");
#endif

    switch (ctx->pc) {
        case 0x230318u: goto label_230318;
        default: break;
    }

    ctx->pc = 0x230310u;

    // 0x230310: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230310u;
    {
        const bool branch_taken_0x230310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230310u;
        // 0x230314: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230310) {
            ctx->pc = 0x230330u;
            goto label_230330;
        }
    }
    ctx->pc = 0x230318u;
label_230318:
    // 0x230318: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x230318u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x23031c: 0x0  nop
    ctx->pc = 0x23031cu;
    // NOP
    // 0x230320: 0x0  nop
    ctx->pc = 0x230320u;
    // NOP
    // 0x230324: 0x0  nop
    ctx->pc = 0x230324u;
    // NOP
    // 0x230328: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x230328u;
    {
        const bool branch_taken_0x230328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230328u;
        // 0x23032c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230328) {
            ctx->pc = 0x230318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230318;
        }
    }
    ctx->pc = 0x230330u;
label_230330:
    // 0x230330: 0x3e00008  jr          $ra
    ctx->pc = 0x230330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230338u;
}
