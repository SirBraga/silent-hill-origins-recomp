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

// Function: sub_0021AF08
// Address: 0x21af08 - 0x21af30
void sub_0021AF08_0x21af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AF08_0x21af08");
#endif

    switch (ctx->pc) {
        case 0x21af10u: goto label_21af10;
        default: break;
    }

    ctx->pc = 0x21af08u;

    // 0x21af08: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AF08u;
    {
        const bool branch_taken_0x21af08 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF08u;
        // 0x21af0c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af08) {
            ctx->pc = 0x21AF28u;
            goto label_21af28;
        }
    }
    ctx->pc = 0x21AF10u;
label_21af10:
    // 0x21af10: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21af14: 0x0  nop
    ctx->pc = 0x21af14u;
    // NOP
    // 0x21af18: 0x0  nop
    ctx->pc = 0x21af18u;
    // NOP
    // 0x21af1c: 0x0  nop
    ctx->pc = 0x21af1cu;
    // NOP
    // 0x21af20: 0x1ca0fffb  bgtz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21AF20u;
    {
        const bool branch_taken_0x21af20 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x21AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF20u;
        // 0x21af24: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af20) {
            ctx->pc = 0x21AF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af10;
        }
    }
    ctx->pc = 0x21AF28u;
label_21af28:
    // 0x21af28: 0x3e00008  jr          $ra
    ctx->pc = 0x21AF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF28u;
        // 0x21af2c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AF30u;
}
