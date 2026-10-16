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

// Function: sub_0022AA58
// Address: 0x22aa58 - 0x22aa78
void sub_0022AA58_0x22aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA58_0x22aa58");
#endif

    ctx->pc = 0x22aa58u;

    // 0x22aa58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22aa5c: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22aa60: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22aa64: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x22aa68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA6Cu;
        // 0x22aa70: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA74u;
    // 0x22aa74: 0x0  nop
    ctx->pc = 0x22aa74u;
    // NOP
    ctx->pc = 0x22aa78u;
}
