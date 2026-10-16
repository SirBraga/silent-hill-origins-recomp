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

// Function: sub_00190318
// Address: 0x190318 - 0x190338
void sub_00190318_0x190318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190318_0x190318");
#endif

    switch (ctx->pc) {
        case 0x190328u: goto label_190328;
        default: break;
    }

    ctx->pc = 0x190318u;

    // 0x190318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19031c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190320: 0xc0640ce  jal         func_190338
    ctx->pc = 0x190320u;
    SET_GPR_U32(ctx, 31, 0x190328u);
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x190320u, 0x190328u)) {
        return;
    }
    ctx->pc = 0x190328u;
label_190328:
    // 0x190328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19032c: 0x3e00008  jr          $ra
    ctx->pc = 0x19032Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19032Cu;
        // 0x190330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19032Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190334u;
    // 0x190334: 0x0  nop
    ctx->pc = 0x190334u;
    // NOP
    ctx->pc = 0x190338u;
}
