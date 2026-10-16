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

// Function: sub_002818F0
// Address: 0x2818f0 - 0x281910
void sub_002818F0_0x2818f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002818F0_0x2818f0");
#endif

    switch (ctx->pc) {
        case 0x281900u: goto label_281900;
        default: break;
    }

    ctx->pc = 0x2818f0u;

    // 0x2818f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2818f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2818f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2818f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2818f8: 0xc0a0054  jal         func_280150
    ctx->pc = 0x2818F8u;
    SET_GPR_U32(ctx, 31, 0x281900u);
    ctx->pc = 0x280150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280150u, 0x2818F8u, 0x281900u)) {
        return;
    }
    ctx->pc = 0x281900u;
label_281900:
    // 0x281900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281904: 0x3e00008  jr          $ra
    ctx->pc = 0x281904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281904u;
        // 0x281908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28190Cu;
    // 0x28190c: 0x0  nop
    ctx->pc = 0x28190cu;
    // NOP
    ctx->pc = 0x281910u;
}
