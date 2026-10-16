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

// Function: sub_0024CA30
// Address: 0x24ca30 - 0x24ca50
void sub_0024CA30_0x24ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CA30_0x24ca30");
#endif

    switch (ctx->pc) {
        case 0x24ca40u: goto label_24ca40;
        default: break;
    }

    ctx->pc = 0x24ca30u;

    // 0x24ca30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ca38: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x24CA38u;
    SET_GPR_U32(ctx, 31, 0x24CA40u);
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x24CA38u, 0x24CA40u)) {
        return;
    }
    ctx->pc = 0x24CA40u;
label_24ca40:
    // 0x24ca40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca44: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA44u;
        // 0x24ca48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA4Cu;
    // 0x24ca4c: 0x0  nop
    ctx->pc = 0x24ca4cu;
    // NOP
    ctx->pc = 0x24ca50u;
}
