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

// Function: sub_002EDCC0
// Address: 0x2edcc0 - 0x2edcd8
void sub_002EDCC0_0x2edcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDCC0_0x2edcc0");
#endif

    ctx->pc = 0x2edcc0u;

    // 0x2edcc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edcc4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2edcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2edcc8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2edcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2edccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCCCu;
        // 0x2edcd0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDCD4u;
    // 0x2edcd4: 0x0  nop
    ctx->pc = 0x2edcd4u;
    // NOP
    ctx->pc = 0x2edcd8u;
}
