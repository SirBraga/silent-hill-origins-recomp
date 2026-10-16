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

// Function: sub_002D62A0
// Address: 0x2d62a0 - 0x2d62c0
void sub_002D62A0_0x2d62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D62A0_0x2d62a0");
#endif

    switch (ctx->pc) {
        case 0x2d62b0u: goto label_2d62b0;
        default: break;
    }

    ctx->pc = 0x2d62a0u;

    // 0x2d62a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d62a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d62a8: 0xc0b5a70  jal         func_2D69C0
    ctx->pc = 0x2D62A8u;
    SET_GPR_U32(ctx, 31, 0x2D62B0u);
    ctx->pc = 0x2D62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D62A8u;
    // 0x2d62ac: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69C0u, 0x2D62A8u, 0x2D62B0u)) {
        return;
    }
    ctx->pc = 0x2D62B0u;
label_2d62b0:
    // 0x2d62b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d62b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d62b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D62B4u;
        // 0x2d62b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D62B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D62BCu;
    // 0x2d62bc: 0x0  nop
    ctx->pc = 0x2d62bcu;
    // NOP
    ctx->pc = 0x2d62c0u;
}
