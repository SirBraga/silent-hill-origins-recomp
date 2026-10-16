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

// Function: sub_00212350
// Address: 0x212350 - 0x212360
void sub_00212350_0x212350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212350_0x212350");
#endif

    ctx->pc = 0x212350u;

    // 0x212350: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x212354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212358: 0x3e00008  jr          $ra
    ctx->pc = 0x212358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212358u;
        // 0x21235c: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212360u;
}
