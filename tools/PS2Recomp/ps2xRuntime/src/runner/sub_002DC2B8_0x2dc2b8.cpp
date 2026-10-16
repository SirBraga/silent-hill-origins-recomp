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

// Function: sub_002DC2B8
// Address: 0x2dc2b8 - 0x2dc2d8
void sub_002DC2B8_0x2dc2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC2B8_0x2dc2b8");
#endif

    switch (ctx->pc) {
        case 0x2dc2c8u: goto label_2dc2c8;
        default: break;
    }

    ctx->pc = 0x2dc2b8u;

    // 0x2dc2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc2c0: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x2DC2C0u;
    SET_GPR_U32(ctx, 31, 0x2DC2C8u);
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x2DC2C0u, 0x2DC2C8u)) {
        return;
    }
    ctx->pc = 0x2DC2C8u;
label_2dc2c8:
    // 0x2dc2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2CCu;
        // 0x2dc2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC2D4u;
    // 0x2dc2d4: 0x0  nop
    ctx->pc = 0x2dc2d4u;
    // NOP
    ctx->pc = 0x2dc2d8u;
}
