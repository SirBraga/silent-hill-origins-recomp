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

// Function: sub_00188438
// Address: 0x188438 - 0x188460
void sub_00188438_0x188438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188438_0x188438");
#endif

    switch (ctx->pc) {
        case 0x188454u: goto label_188454;
        default: break;
    }

    ctx->pc = 0x188438u;

    // 0x188438: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x188438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18843c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x188440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188444: 0x8c448ac0  lw          $a0, -0x7540($v0)
    ctx->pc = 0x188444u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338AC0u));
    // 0x188448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18844c: 0xc0622da  jal         func_188B68
    ctx->pc = 0x18844Cu;
    SET_GPR_U32(ctx, 31, 0x188454u);
    ctx->pc = 0x188B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188B68u, 0x18844Cu, 0x188454u)) {
        return;
    }
    ctx->pc = 0x188454u;
label_188454:
    // 0x188454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188458: 0x3e00008  jr          $ra
    ctx->pc = 0x188458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188458u;
        // 0x18845c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188460u;
}
