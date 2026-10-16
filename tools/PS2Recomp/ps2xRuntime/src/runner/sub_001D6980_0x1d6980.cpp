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

// Function: sub_001D6980
// Address: 0x1d6980 - 0x1d69a0
void sub_001D6980_0x1d6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6980_0x1d6980");
#endif

    switch (ctx->pc) {
        case 0x1d6990u: goto label_1d6990;
        default: break;
    }

    ctx->pc = 0x1d6980u;

    // 0x1d6980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6988: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1D6988u;
    SET_GPR_U32(ctx, 31, 0x1D6990u);
    ctx->pc = 0x1D698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6988u;
    // 0x1d698c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1D6988u, 0x1D6990u)) {
        return;
    }
    ctx->pc = 0x1D6990u;
label_1d6990:
    // 0x1d6990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6994: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6994u;
        // 0x1d6998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D699Cu;
    // 0x1d699c: 0x0  nop
    ctx->pc = 0x1d699cu;
    // NOP
    ctx->pc = 0x1d69a0u;
}
