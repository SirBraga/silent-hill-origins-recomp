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

// Function: sub_0029F418
// Address: 0x29f418 - 0x29f438
void sub_0029F418_0x29f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F418_0x29f418");
#endif

    switch (ctx->pc) {
        case 0x29f428u: goto label_29f428;
        default: break;
    }

    ctx->pc = 0x29f418u;

    // 0x29f418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f420: 0xc0a8cc6  jal         func_2A3318
    ctx->pc = 0x29F420u;
    SET_GPR_U32(ctx, 31, 0x29F428u);
    ctx->pc = 0x2A3318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A3318u, 0x29F420u, 0x29F428u)) {
        return;
    }
    ctx->pc = 0x29F428u;
label_29f428:
    // 0x29f428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f42c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F42Cu;
        // 0x29f430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F434u;
    // 0x29f434: 0x0  nop
    ctx->pc = 0x29f434u;
    // NOP
    ctx->pc = 0x29f438u;
}
