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

// Function: sub_001D65A8
// Address: 0x1d65a8 - 0x1d65b8
void sub_001D65A8_0x1d65a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65A8_0x1d65a8");
#endif

    ctx->pc = 0x1d65a8u;

    // 0x1d65a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d65ac: 0x8c62882c  lw          $v0, -0x77D4($v1)
    ctx->pc = 0x1d65acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F882Cu));
    // 0x1d65b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65B0u;
        // 0x1d65b4: 0xac65882c  sw          $a1, -0x77D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936620), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65B8u;
}
