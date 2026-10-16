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

// Function: sub_002D9840
// Address: 0x2d9840 - 0x2d9860
void sub_002D9840_0x2d9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9840_0x2d9840");
#endif

    switch (ctx->pc) {
        case 0x2d9850u: goto label_2d9850;
        default: break;
    }

    ctx->pc = 0x2d9840u;

    // 0x2d9840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9848: 0xc0b62e8  jal         func_2D8BA0
    ctx->pc = 0x2D9848u;
    SET_GPR_U32(ctx, 31, 0x2D9850u);
    ctx->pc = 0x2D8BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8BA0u, 0x2D9848u, 0x2D9850u)) {
        return;
    }
    ctx->pc = 0x2D9850u;
label_2d9850:
    // 0x2d9850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9854: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9854u;
        // 0x2d9858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D985Cu;
    // 0x2d985c: 0x0  nop
    ctx->pc = 0x2d985cu;
    // NOP
    ctx->pc = 0x2d9860u;
}
