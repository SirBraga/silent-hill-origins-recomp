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

// Function: sub_00136E28
// Address: 0x136e28 - 0x136e48
void sub_00136E28_0x136e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E28_0x136e28");
#endif

    switch (ctx->pc) {
        case 0x136e38u: goto label_136e38;
        default: break;
    }

    ctx->pc = 0x136e28u;

    // 0x136e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136e30: 0xc049b40  jal         func_126D00
    ctx->pc = 0x136E30u;
    SET_GPR_U32(ctx, 31, 0x136E38u);
    ctx->pc = 0x126D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126D00u, 0x136E30u, 0x136E38u)) {
        return;
    }
    ctx->pc = 0x136E38u;
label_136e38:
    // 0x136e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x136E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E3Cu;
        // 0x136e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E44u;
    // 0x136e44: 0x0  nop
    ctx->pc = 0x136e44u;
    // NOP
    ctx->pc = 0x136e48u;
}
