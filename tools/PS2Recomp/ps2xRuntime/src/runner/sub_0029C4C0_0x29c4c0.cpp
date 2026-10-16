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

// Function: sub_0029C4C0
// Address: 0x29c4c0 - 0x29c4d0
void sub_0029C4C0_0x29c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C4C0_0x29c4c0");
#endif

    ctx->pc = 0x29c4c0u;

    // 0x29c4c0: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x29c4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4C4u;
        // 0x29c4c8: 0xa4850018  sh          $a1, 0x18($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C4CCu;
    // 0x29c4cc: 0x0  nop
    ctx->pc = 0x29c4ccu;
    // NOP
    ctx->pc = 0x29c4d0u;
}
