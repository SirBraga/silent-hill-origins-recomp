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

// Function: sub_0020D4D0
// Address: 0x20d4d0 - 0x20d4e8
void sub_0020D4D0_0x20d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D4D0_0x20d4d0");
#endif

    ctx->pc = 0x20d4d0u;

    // 0x20d4d0: 0x8c8501c4  lw          $a1, 0x1C4($a0)
    ctx->pc = 0x20d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x20d4d4: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x20d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x20d4d8: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x20d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
    // 0x20d4dc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x20d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x20d4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4E0u;
        // 0x20d4e4: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D4E8u;
}
