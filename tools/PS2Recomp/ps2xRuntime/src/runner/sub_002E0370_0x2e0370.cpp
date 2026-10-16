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

// Function: sub_002E0370
// Address: 0x2e0370 - 0x2e0390
void sub_002E0370_0x2e0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0370_0x2e0370");
#endif

    switch (ctx->pc) {
        case 0x2e0380u: goto label_2e0380;
        default: break;
    }

    ctx->pc = 0x2e0370u;

    // 0x2e0370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0378: 0xc0b875a  jal         func_2E1D68
    ctx->pc = 0x2E0378u;
    SET_GPR_U32(ctx, 31, 0x2E0380u);
    ctx->pc = 0x2E1D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1D68u, 0x2E0378u, 0x2E0380u)) {
        return;
    }
    ctx->pc = 0x2E0380u;
label_2e0380:
    // 0x2e0380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0384: 0xaf808c08  sw          $zero, -0x73F8($gp)
    ctx->pc = 0x2e0384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 0));
    // 0x2e0388: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0388u;
        // 0x2e038c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0390u;
}
