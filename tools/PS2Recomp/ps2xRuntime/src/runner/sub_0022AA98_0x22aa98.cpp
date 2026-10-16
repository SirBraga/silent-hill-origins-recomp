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

// Function: sub_0022AA98
// Address: 0x22aa98 - 0x22aac8
void sub_0022AA98_0x22aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA98_0x22aa98");
#endif

    ctx->pc = 0x22aa98u;

    // 0x22aa98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22aa9c: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22aaa0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22aaa4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x22aaa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22aaac: 0x3e00008  jr          $ra
    ctx->pc = 0x22AAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAACu;
        // 0x22aab0: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AAB4u;
    // 0x22aab4: 0x0  nop
    ctx->pc = 0x22aab4u;
    // NOP
    // 0x22aab8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x22aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22aabc: 0x0  nop
    ctx->pc = 0x22aabcu;
    // NOP
    // 0x22aac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22aac4: 0x0  nop
    ctx->pc = 0x22aac4u;
    // NOP
    ctx->pc = 0x22aac8u;
}
