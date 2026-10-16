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

// Function: sub_001A47B0
// Address: 0x1a47b0 - 0x1a47c0
void sub_001A47B0_0x1a47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A47B0_0x1a47b0");
#endif

    ctx->pc = 0x1a47b0u;

    // 0x1a47b0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1a47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1a47b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A47B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47B4u;
        // 0x1a47b8: 0x8c6290a0  lw          $v0, -0x6F60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938784)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47BCu;
    // 0x1a47bc: 0x0  nop
    ctx->pc = 0x1a47bcu;
    // NOP
    ctx->pc = 0x1a47c0u;
}
