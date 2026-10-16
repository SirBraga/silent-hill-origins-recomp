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

// Function: sub_0029BA40
// Address: 0x29ba40 - 0x29ba60
void sub_0029BA40_0x29ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BA40_0x29ba40");
#endif

    switch (ctx->pc) {
        case 0x29ba50u: goto label_29ba50;
        default: break;
    }

    ctx->pc = 0x29ba40u;

    // 0x29ba40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ba44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ba48: 0xc0a7534  jal         func_29D4D0
    ctx->pc = 0x29BA48u;
    SET_GPR_U32(ctx, 31, 0x29BA50u);
    ctx->pc = 0x29D4D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D4D0u, 0x29BA48u, 0x29BA50u)) {
        return;
    }
    ctx->pc = 0x29BA50u;
label_29ba50:
    // 0x29ba50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ba54: 0x3e00008  jr          $ra
    ctx->pc = 0x29BA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA54u;
        // 0x29ba58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BA5Cu;
    // 0x29ba5c: 0x0  nop
    ctx->pc = 0x29ba5cu;
    // NOP
    ctx->pc = 0x29ba60u;
}
