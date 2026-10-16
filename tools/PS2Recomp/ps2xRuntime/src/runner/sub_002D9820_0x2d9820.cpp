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

// Function: sub_002D9820
// Address: 0x2d9820 - 0x2d9840
void sub_002D9820_0x2d9820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9820_0x2d9820");
#endif

    switch (ctx->pc) {
        case 0x2d9830u: goto label_2d9830;
        default: break;
    }

    ctx->pc = 0x2d9820u;

    // 0x2d9820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9828: 0xc0b6388  jal         func_2D8E20
    ctx->pc = 0x2D9828u;
    SET_GPR_U32(ctx, 31, 0x2D9830u);
    ctx->pc = 0x2D8E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D8E20u, 0x2D9828u, 0x2D9830u)) {
        return;
    }
    ctx->pc = 0x2D9830u;
label_2d9830:
    // 0x2d9830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9834: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9834u;
        // 0x2d9838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D983Cu;
    // 0x2d983c: 0x0  nop
    ctx->pc = 0x2d983cu;
    // NOP
    ctx->pc = 0x2d9840u;
}
