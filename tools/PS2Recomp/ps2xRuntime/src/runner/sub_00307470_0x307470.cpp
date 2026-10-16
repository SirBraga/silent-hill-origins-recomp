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

// Function: sub_00307470
// Address: 0x307470 - 0x307490
void sub_00307470_0x307470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307470_0x307470");
#endif

    switch (ctx->pc) {
        case 0x307480u: goto label_307480;
        default: break;
    }

    ctx->pc = 0x307470u;

    // 0x307470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307478: 0xc0c1e78  jal         func_3079E0
    ctx->pc = 0x307478u;
    SET_GPR_U32(ctx, 31, 0x307480u);
    ctx->pc = 0x3079E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3079E0u, 0x307478u, 0x307480u)) {
        return;
    }
    ctx->pc = 0x307480u;
label_307480:
    // 0x307480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307484: 0x3e00008  jr          $ra
    ctx->pc = 0x307484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307484u;
        // 0x307488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30748Cu;
    // 0x30748c: 0x0  nop
    ctx->pc = 0x30748cu;
    // NOP
    ctx->pc = 0x307490u;
}
