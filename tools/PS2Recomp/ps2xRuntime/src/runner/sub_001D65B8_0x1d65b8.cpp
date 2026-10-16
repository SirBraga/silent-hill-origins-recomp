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

// Function: sub_001D65B8
// Address: 0x1d65b8 - 0x1d65c8
void sub_001D65B8_0x1d65b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65B8_0x1d65b8");
#endif

    ctx->pc = 0x1d65b8u;

    // 0x1d65b8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d65bc: 0x8c628830  lw          $v0, -0x77D0($v1)
    ctx->pc = 0x1d65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8830u));
    // 0x1d65c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65C0u;
        // 0x1d65c4: 0xac658830  sw          $a1, -0x77D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65C8u;
}
