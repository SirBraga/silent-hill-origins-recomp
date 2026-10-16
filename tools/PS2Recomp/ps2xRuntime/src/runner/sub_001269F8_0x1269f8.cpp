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

// Function: sub_001269F8
// Address: 0x1269f8 - 0x126a04
void sub_001269F8_0x1269f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001269F8_0x1269f8");
#endif

    ctx->pc = 0x1269f8u;

    // 0x1269f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1269f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1269fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1269FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269FCu;
        // 0x126a00: 0xaca20f58  sw          $v0, 0xF58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A04u;
}
