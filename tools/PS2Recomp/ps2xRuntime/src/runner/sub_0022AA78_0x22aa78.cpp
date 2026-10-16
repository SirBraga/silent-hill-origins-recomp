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

// Function: sub_0022AA78
// Address: 0x22aa78 - 0x22aa98
void sub_0022AA78_0x22aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA78_0x22aa78");
#endif

    ctx->pc = 0x22aa78u;

    // 0x22aa78: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22aa7c: 0x8ca53ea0  lw          $a1, 0x3EA0($a1)
    ctx->pc = 0x22aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22aa80: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x22aa84: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x22aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x22aa88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa8c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22aa90: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA90u;
        // 0x22aa94: 0xaca40020  sw          $a0, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA98u;
}
