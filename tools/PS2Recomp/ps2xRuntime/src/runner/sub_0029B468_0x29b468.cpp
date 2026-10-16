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

// Function: sub_0029B468
// Address: 0x29b468 - 0x29b488
void sub_0029B468_0x29b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B468_0x29b468");
#endif

    switch (ctx->pc) {
        case 0x29b478u: goto label_29b478;
        default: break;
    }

    ctx->pc = 0x29b468u;

    // 0x29b468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b470: 0xc0a7188  jal         func_29C620
    ctx->pc = 0x29B470u;
    SET_GPR_U32(ctx, 31, 0x29B478u);
    ctx->pc = 0x29C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C620u, 0x29B470u, 0x29B478u)) {
        return;
    }
    ctx->pc = 0x29B478u;
label_29b478:
    // 0x29b478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b47c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B47Cu;
        // 0x29b480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B484u;
    // 0x29b484: 0x0  nop
    ctx->pc = 0x29b484u;
    // NOP
    ctx->pc = 0x29b488u;
}
