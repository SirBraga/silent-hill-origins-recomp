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

// Function: sub_0022A9E8
// Address: 0x22a9e8 - 0x22aa10
void sub_0022A9E8_0x22a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A9E8_0x22a9e8");
#endif

    ctx->pc = 0x22a9e8u;

    // 0x22a9e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22a9ec: 0x8ca53ea0  lw          $a1, 0x3EA0($a1)
    ctx->pc = 0x22a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22a9f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x22a9f4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x22a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x22a9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a9fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA00u;
        // 0x22aa04: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA08u;
    // 0x22aa08: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x22aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x22aa0c: 0x0  nop
    ctx->pc = 0x22aa0cu;
    // NOP
    ctx->pc = 0x22aa10u;
}
