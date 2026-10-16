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

// Function: sub_0029C1F0
// Address: 0x29c1f0 - 0x29c208
void sub_0029C1F0_0x29c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C1F0_0x29c1f0");
#endif

    ctx->pc = 0x29c1f0u;

    // 0x29c1f0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29c1f4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x29c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29c1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29c1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1FCu;
        // 0x29c200: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C204u;
    // 0x29c204: 0x0  nop
    ctx->pc = 0x29c204u;
    // NOP
    ctx->pc = 0x29c208u;
}
