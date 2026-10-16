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

// Function: sub_002D9800
// Address: 0x2d9800 - 0x2d9820
void sub_002D9800_0x2d9800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9800_0x2d9800");
#endif

    switch (ctx->pc) {
        case 0x2d9810u: goto label_2d9810;
        default: break;
    }

    ctx->pc = 0x2d9800u;

    // 0x2d9800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9808: 0xc0b6350  jal         func_2D8D40
    ctx->pc = 0x2D9808u;
    SET_GPR_U32(ctx, 31, 0x2D9810u);
    ctx->pc = 0x2D8D40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8D40u, 0x2D9808u, 0x2D9810u)) {
        return;
    }
    ctx->pc = 0x2D9810u;
label_2d9810:
    // 0x2d9810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9814: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9814u;
        // 0x2d9818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D981Cu;
    // 0x2d981c: 0x0  nop
    ctx->pc = 0x2d981cu;
    // NOP
    ctx->pc = 0x2d9820u;
}
