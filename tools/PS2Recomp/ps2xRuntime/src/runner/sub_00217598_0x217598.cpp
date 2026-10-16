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

// Function: sub_00217598
// Address: 0x217598 - 0x2175b8
void sub_00217598_0x217598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217598_0x217598");
#endif

    ctx->pc = 0x217598u;

    // 0x217598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21759c: 0xac80026c  sw          $zero, 0x26C($a0)
    ctx->pc = 0x21759cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
    // 0x2175a0: 0xac820260  sw          $v0, 0x260($a0)
    ctx->pc = 0x2175a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 2));
    // 0x2175a4: 0xa080025c  sb          $zero, 0x25C($a0)
    ctx->pc = 0x2175a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 604), (uint8_t)GPR_U32(ctx, 0));
    // 0x2175a8: 0xac800264  sw          $zero, 0x264($a0)
    ctx->pc = 0x2175a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 0));
    // 0x2175ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2175ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175ACu;
        // 0x2175b0: 0xac800268  sw          $zero, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175B4u;
    // 0x2175b4: 0x0  nop
    ctx->pc = 0x2175b4u;
    // NOP
    ctx->pc = 0x2175b8u;
}
