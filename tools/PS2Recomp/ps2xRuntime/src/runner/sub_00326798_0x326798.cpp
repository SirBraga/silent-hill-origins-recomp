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

// Function: sub_00326798
// Address: 0x326798 - 0x3267c8
void sub_00326798_0x326798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326798_0x326798");
#endif

    switch (ctx->pc) {
        case 0x3267a8u: goto label_3267a8;
        default: break;
    }

    ctx->pc = 0x326798u;

    // 0x326798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32679c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3267a0: 0xc0c99c8  jal         func_326720
    ctx->pc = 0x3267A0u;
    SET_GPR_U32(ctx, 31, 0x3267A8u);
    ctx->pc = 0x326720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326720u, 0x3267A0u, 0x3267A8u)) {
        return;
    }
    ctx->pc = 0x3267A8u;
label_3267a8:
    // 0x3267a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3267a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3267ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3267B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267ACu;
        // 0x3267b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267B4u;
    // 0x3267b4: 0x0  nop
    ctx->pc = 0x3267b4u;
    // NOP
    // 0x3267b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3267b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3267bc: 0x0  nop
    ctx->pc = 0x3267bcu;
    // NOP
    // 0x3267c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3267c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3267c4: 0x0  nop
    ctx->pc = 0x3267c4u;
    // NOP
    ctx->pc = 0x3267c8u;
}
