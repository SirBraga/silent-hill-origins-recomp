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

// Function: sub_002D2698
// Address: 0x2d2698 - 0x2d26b0
void sub_002D2698_0x2d2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2698_0x2d2698");
#endif

    ctx->pc = 0x2d2698u;

    // 0x2d2698: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d269c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2d269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d26a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d26a4: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x2d26a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d26a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D26A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26A8u;
        // 0x2d26ac: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D26A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D26B0u;
}
