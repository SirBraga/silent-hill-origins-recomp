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

// Function: sub_002EDC30
// Address: 0x2edc30 - 0x2edc50
void sub_002EDC30_0x2edc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDC30_0x2edc30");
#endif

    switch (ctx->pc) {
        case 0x2edc40u: goto label_2edc40;
        default: break;
    }

    ctx->pc = 0x2edc30u;

    // 0x2edc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2edc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edc38: 0xc0ba464  jal         func_2E9190
    ctx->pc = 0x2EDC38u;
    SET_GPR_U32(ctx, 31, 0x2EDC40u);
    ctx->pc = 0x2E9190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9190u, 0x2EDC38u, 0x2EDC40u)) {
        return;
    }
    ctx->pc = 0x2EDC40u;
label_2edc40:
    // 0x2edc40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edc44: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC44u;
        // 0x2edc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC4Cu;
    // 0x2edc4c: 0x0  nop
    ctx->pc = 0x2edc4cu;
    // NOP
    ctx->pc = 0x2edc50u;
}
