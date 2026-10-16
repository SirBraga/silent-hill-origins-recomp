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

// Function: sub_0023AAD0
// Address: 0x23aad0 - 0x23aae0
void sub_0023AAD0_0x23aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAD0_0x23aad0");
#endif

    ctx->pc = 0x23aad0u;

    // 0x23aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAD0u;
        // 0x23aad4: 0x8f828498  lw          $v0, -0x7B68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AAD8u;
    // 0x23aad8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x23aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x23aadc: 0x0  nop
    ctx->pc = 0x23aadcu;
    // NOP
    ctx->pc = 0x23aae0u;
}
