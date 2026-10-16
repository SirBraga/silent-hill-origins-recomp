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

// Function: sub_0013C3C0
// Address: 0x13c3c0 - 0x13c3d0
void sub_0013C3C0_0x13c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C3C0_0x13c3c0");
#endif

    ctx->pc = 0x13c3c0u;

    // 0x13c3c0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13c3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3C4u;
        // 0x13c3c8: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C3CCu;
    // 0x13c3cc: 0x0  nop
    ctx->pc = 0x13c3ccu;
    // NOP
    ctx->pc = 0x13c3d0u;
}
