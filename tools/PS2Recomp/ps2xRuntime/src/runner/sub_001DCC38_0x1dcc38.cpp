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

// Function: sub_001DCC38
// Address: 0x1dcc38 - 0x1dcc58
void sub_001DCC38_0x1dcc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC38_0x1dcc38");
#endif

    ctx->pc = 0x1dcc38u;

    // 0x1dcc38: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCC38u;
    {
        const bool branch_taken_0x1dcc38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC38u;
        // 0x1dcc3c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc38) {
            ctx->pc = 0x1DCC48u;
            goto label_1dcc48;
        }
    }
    ctx->pc = 0x1DCC40u;
    // 0x1dcc40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC40u;
        // 0x1dcc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC48u;
label_1dcc48:
    // 0x1dcc48: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dcc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
    // 0x1dcc4c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcc50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC50u;
        // 0x1dcc54: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC58u;
}
