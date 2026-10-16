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

// Function: sub_00208300
// Address: 0x208300 - 0x208318
void sub_00208300_0x208300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208300_0x208300");
#endif

    ctx->pc = 0x208300u;

    // 0x208300: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x208300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x208304: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x208304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x208308: 0x244281e0  addiu       $v0, $v0, -0x7E20
    ctx->pc = 0x208308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935008));
    // 0x20830c: 0x3e00008  jr          $ra
    ctx->pc = 0x20830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20830Cu;
        // 0x208310: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208314u;
    // 0x208314: 0x0  nop
    ctx->pc = 0x208314u;
    // NOP
    ctx->pc = 0x208318u;
}
