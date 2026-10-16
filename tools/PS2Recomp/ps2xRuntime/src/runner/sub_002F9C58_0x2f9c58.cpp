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

// Function: sub_002F9C58
// Address: 0x2f9c58 - 0x2f9c68
void sub_002F9C58_0x2f9c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9C58_0x2f9c58");
#endif

    ctx->pc = 0x2f9c58u;

    // 0x2f9c58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C5Cu;
        // 0x2f9c60: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9C64u;
    // 0x2f9c64: 0x0  nop
    ctx->pc = 0x2f9c64u;
    // NOP
    ctx->pc = 0x2f9c68u;
}
