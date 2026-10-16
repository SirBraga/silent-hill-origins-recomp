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

// Function: sub_0029BFF0
// Address: 0x29bff0 - 0x29c010
void sub_0029BFF0_0x29bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BFF0_0x29bff0");
#endif

    switch (ctx->pc) {
        case 0x29c000u: goto label_29c000;
        default: break;
    }

    ctx->pc = 0x29bff0u;

    // 0x29bff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29bff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bff8: 0xc0a7a02  jal         func_29E808
    ctx->pc = 0x29BFF8u;
    SET_GPR_U32(ctx, 31, 0x29C000u);
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x29BFF8u, 0x29C000u)) {
        return;
    }
    ctx->pc = 0x29C000u;
label_29c000:
    // 0x29c000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c004: 0x3e00008  jr          $ra
    ctx->pc = 0x29C004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C004u;
        // 0x29c008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C00Cu;
    // 0x29c00c: 0x0  nop
    ctx->pc = 0x29c00cu;
    // NOP
    ctx->pc = 0x29c010u;
}
