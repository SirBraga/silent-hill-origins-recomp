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

// Function: sub_002D71C0
// Address: 0x2d71c0 - 0x2d71e0
void sub_002D71C0_0x2d71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D71C0_0x2d71c0");
#endif

    switch (ctx->pc) {
        case 0x2d71d0u: goto label_2d71d0;
        default: break;
    }

    ctx->pc = 0x2d71c0u;

    // 0x2d71c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d71c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d71c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d71c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d71c8: 0xc0b5af4  jal         func_2D6BD0
    ctx->pc = 0x2D71C8u;
    SET_GPR_U32(ctx, 31, 0x2D71D0u);
    ctx->pc = 0x2D6BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6BD0u, 0x2D71C8u, 0x2D71D0u)) {
        return;
    }
    ctx->pc = 0x2D71D0u;
label_2d71d0:
    // 0x2d71d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d71d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d71d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D71D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71D4u;
        // 0x2d71d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D71D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D71DCu;
    // 0x2d71dc: 0x0  nop
    ctx->pc = 0x2d71dcu;
    // NOP
    ctx->pc = 0x2d71e0u;
}
