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

// Function: sub_0022B070
// Address: 0x22b070 - 0x22b090
void sub_0022B070_0x22b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B070_0x22b070");
#endif

    ctx->pc = 0x22b070u;

    // 0x22b070: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b074: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b078: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22b07c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x22b080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b084: 0x3e00008  jr          $ra
    ctx->pc = 0x22B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B084u;
        // 0x22b088: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B08Cu;
    // 0x22b08c: 0x0  nop
    ctx->pc = 0x22b08cu;
    // NOP
    ctx->pc = 0x22b090u;
}
