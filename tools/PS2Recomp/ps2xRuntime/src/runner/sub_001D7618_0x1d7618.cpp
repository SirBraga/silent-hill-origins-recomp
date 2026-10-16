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

// Function: sub_001D7618
// Address: 0x1d7618 - 0x1d7628
void sub_001D7618_0x1d7618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7618_0x1d7618");
#endif

    ctx->pc = 0x1d7618u;

    // 0x1d7618: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d761c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7620: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7620u;
        // 0x1d7624: 0xac629cec  sw          $v0, -0x6314($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7628u;
}
