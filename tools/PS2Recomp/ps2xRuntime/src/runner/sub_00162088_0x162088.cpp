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

// Function: sub_00162088
// Address: 0x162088 - 0x1620a8
void sub_00162088_0x162088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162088_0x162088");
#endif

    switch (ctx->pc) {
        case 0x162098u: goto label_162098;
        default: break;
    }

    ctx->pc = 0x162088u;

    // 0x162088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16208c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162090: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x162090u;
    SET_GPR_U32(ctx, 31, 0x162098u);
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x162090u, 0x162098u)) {
        return;
    }
    ctx->pc = 0x162098u;
label_162098:
    // 0x162098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16209c: 0x3e00008  jr          $ra
    ctx->pc = 0x16209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16209Cu;
        // 0x1620a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1620A4u;
    // 0x1620a4: 0x0  nop
    ctx->pc = 0x1620a4u;
    // NOP
    ctx->pc = 0x1620a8u;
}
