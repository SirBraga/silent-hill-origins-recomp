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

// Function: sub_001D2C60
// Address: 0x1d2c60 - 0x1d2c70
void sub_001D2C60_0x1d2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2C60_0x1d2c60");
#endif

    ctx->pc = 0x1d2c60u;

    // 0x1d2c60: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C64u;
        // 0x1d2c68: 0x8c629b5c  lw          $v0, -0x64A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941532)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C6Cu;
    // 0x1d2c6c: 0x0  nop
    ctx->pc = 0x1d2c6cu;
    // NOP
    ctx->pc = 0x1d2c70u;
}
