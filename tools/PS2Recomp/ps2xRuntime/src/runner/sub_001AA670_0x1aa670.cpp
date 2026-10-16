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

// Function: sub_001AA670
// Address: 0x1aa670 - 0x1aa690
void sub_001AA670_0x1aa670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA670_0x1aa670");
#endif

    switch (ctx->pc) {
        case 0x1aa680u: goto label_1aa680;
        default: break;
    }

    ctx->pc = 0x1aa670u;

    // 0x1aa670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa678: 0xc0694ee  jal         func_1A53B8
    ctx->pc = 0x1AA678u;
    SET_GPR_U32(ctx, 31, 0x1AA680u);
    ctx->pc = 0x1A53B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A53B8u, 0x1AA678u, 0x1AA680u)) {
        return;
    }
    ctx->pc = 0x1AA680u;
label_1aa680:
    // 0x1aa680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa684: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA684u;
        // 0x1aa688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA68Cu;
    // 0x1aa68c: 0x0  nop
    ctx->pc = 0x1aa68cu;
    // NOP
    ctx->pc = 0x1aa690u;
}
