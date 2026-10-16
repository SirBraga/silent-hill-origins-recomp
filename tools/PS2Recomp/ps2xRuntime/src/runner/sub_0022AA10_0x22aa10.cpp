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

// Function: sub_0022AA10
// Address: 0x22aa10 - 0x22aa38
void sub_0022AA10_0x22aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA10_0x22aa10");
#endif

    ctx->pc = 0x22aa10u;

    // 0x22aa10: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22aa14: 0x8ca53ea0  lw          $a1, 0x3EA0($a1)
    ctx->pc = 0x22aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22aa18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x22aa1c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x22aa20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA28u;
        // 0x22aa2c: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA30u;
    // 0x22aa30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x22aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22aa34: 0x0  nop
    ctx->pc = 0x22aa34u;
    // NOP
    ctx->pc = 0x22aa38u;
}
