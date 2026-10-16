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

// Function: sub_002DC608
// Address: 0x2dc608 - 0x2dc640
void sub_002DC608_0x2dc608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC608_0x2dc608");
#endif

    switch (ctx->pc) {
        case 0x2dc618u: goto label_2dc618;
        case 0x2dc620u: goto label_2dc620;
        default: break;
    }

    ctx->pc = 0x2dc608u;

    // 0x2dc608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc610: 0xc0b7164  jal         func_2DC590
    ctx->pc = 0x2DC610u;
    SET_GPR_U32(ctx, 31, 0x2DC618u);
    ctx->pc = 0x2DC590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC590u, 0x2DC610u, 0x2DC618u)) {
        return;
    }
    ctx->pc = 0x2DC618u;
label_2dc618:
    // 0x2dc618: 0xc0b7174  jal         func_2DC5D0
    ctx->pc = 0x2DC618u;
    SET_GPR_U32(ctx, 31, 0x2DC620u);
    ctx->pc = 0x2DC5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC5D0u, 0x2DC618u, 0x2DC620u)) {
        return;
    }
    ctx->pc = 0x2DC620u;
label_2dc620:
    // 0x2dc620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc624: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC624u;
        // 0x2dc628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC62Cu;
    // 0x2dc62c: 0x0  nop
    ctx->pc = 0x2dc62cu;
    // NOP
    // 0x2dc630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dc630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dc634: 0x0  nop
    ctx->pc = 0x2dc634u;
    // NOP
    // 0x2dc638: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dc638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dc63c: 0x0  nop
    ctx->pc = 0x2dc63cu;
    // NOP
    ctx->pc = 0x2dc640u;
}
