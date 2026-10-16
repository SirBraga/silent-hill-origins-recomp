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

// Function: sub_0029F468
// Address: 0x29f468 - 0x29f488
void sub_0029F468_0x29f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F468_0x29f468");
#endif

    switch (ctx->pc) {
        case 0x29f478u: goto label_29f478;
        default: break;
    }

    ctx->pc = 0x29f468u;

    // 0x29f468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f470: 0xc0a8d92  jal         func_2A3648
    ctx->pc = 0x29F470u;
    SET_GPR_U32(ctx, 31, 0x29F478u);
    ctx->pc = 0x2A3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A3648u, 0x29F470u, 0x29F478u)) {
        return;
    }
    ctx->pc = 0x29F478u;
label_29f478:
    // 0x29f478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f47c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F47Cu;
        // 0x29f480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F484u;
    // 0x29f484: 0x0  nop
    ctx->pc = 0x29f484u;
    // NOP
    ctx->pc = 0x29f488u;
}
