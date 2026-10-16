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

// Function: sub_001FB1D0
// Address: 0x1fb1d0 - 0x1fb1f0
void sub_001FB1D0_0x1fb1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB1D0_0x1fb1d0");
#endif

    switch (ctx->pc) {
        case 0x1fb1e0u: goto label_1fb1e0;
        default: break;
    }

    ctx->pc = 0x1fb1d0u;

    // 0x1fb1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb1d8: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x1FB1D8u;
    SET_GPR_U32(ctx, 31, 0x1FB1E0u);
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FB1D8u, 0x1FB1E0u)) {
        return;
    }
    ctx->pc = 0x1FB1E0u;
label_1fb1e0:
    // 0x1fb1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb1e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fb1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1E8u;
        // 0x1fb1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB1F0u;
}
