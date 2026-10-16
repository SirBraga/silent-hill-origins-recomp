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

// Function: sub_001B6980
// Address: 0x1b6980 - 0x1b69a0
void sub_001B6980_0x1b6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6980_0x1b6980");
#endif

    switch (ctx->pc) {
        case 0x1b6990u: goto label_1b6990;
        default: break;
    }

    ctx->pc = 0x1b6980u;

    // 0x1b6980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6988: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1B6988u;
    SET_GPR_U32(ctx, 31, 0x1B6990u);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1B6988u, 0x1B6990u)) {
        return;
    }
    ctx->pc = 0x1B6990u;
label_1b6990:
    // 0x1b6990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6994: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6994u;
        // 0x1b6998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B699Cu;
    // 0x1b699c: 0x0  nop
    ctx->pc = 0x1b699cu;
    // NOP
    ctx->pc = 0x1b69a0u;
}
