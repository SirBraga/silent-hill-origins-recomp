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

// Function: sub_002D85C8
// Address: 0x2d85c8 - 0x2d85e8
void sub_002D85C8_0x2d85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D85C8_0x2d85c8");
#endif

    switch (ctx->pc) {
        case 0x2d85d8u: goto label_2d85d8;
        default: break;
    }

    ctx->pc = 0x2d85c8u;

    // 0x2d85c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d85c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d85cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d85d0: 0xc0b5e46  jal         func_2D7918
    ctx->pc = 0x2D85D0u;
    SET_GPR_U32(ctx, 31, 0x2D85D8u);
    ctx->pc = 0x2D7918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7918u, 0x2D85D0u, 0x2D85D8u)) {
        return;
    }
    ctx->pc = 0x2D85D8u;
label_2d85d8:
    // 0x2d85d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d85d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d85dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D85DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85DCu;
        // 0x2d85e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D85DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D85E4u;
    // 0x2d85e4: 0x0  nop
    ctx->pc = 0x2d85e4u;
    // NOP
    ctx->pc = 0x2d85e8u;
}
