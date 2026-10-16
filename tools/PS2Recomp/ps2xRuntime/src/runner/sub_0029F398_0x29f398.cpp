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

// Function: sub_0029F398
// Address: 0x29f398 - 0x29f3b8
void sub_0029F398_0x29f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F398_0x29f398");
#endif

    switch (ctx->pc) {
        case 0x29f3a8u: goto label_29f3a8;
        default: break;
    }

    ctx->pc = 0x29f398u;

    // 0x29f398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f3a0: 0xc0a7dfc  jal         func_29F7F0
    ctx->pc = 0x29F3A0u;
    SET_GPR_U32(ctx, 31, 0x29F3A8u);
    ctx->pc = 0x29F7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F7F0u, 0x29F3A0u, 0x29F3A8u)) {
        return;
    }
    ctx->pc = 0x29F3A8u;
label_29f3a8:
    // 0x29f3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3ACu;
        // 0x29f3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F3B4u;
    // 0x29f3b4: 0x0  nop
    ctx->pc = 0x29f3b4u;
    // NOP
    ctx->pc = 0x29f3b8u;
}
