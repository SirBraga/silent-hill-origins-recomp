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

// Function: sub_001D5FC0
// Address: 0x1d5fc0 - 0x1d5fe8
void sub_001D5FC0_0x1d5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5FC0_0x1d5fc0");
#endif

    switch (ctx->pc) {
        case 0x1d5fd0u: goto label_1d5fd0;
        case 0x1d5fd8u: goto label_1d5fd8;
        default: break;
    }

    ctx->pc = 0x1d5fc0u;

    // 0x1d5fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5fc8: 0xc07cdd4  jal         func_1F3750
    ctx->pc = 0x1D5FC8u;
    SET_GPR_U32(ctx, 31, 0x1D5FD0u);
    ctx->pc = 0x1F3750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3750u, 0x1D5FC8u, 0x1D5FD0u)) {
        return;
    }
    ctx->pc = 0x1D5FD0u;
label_1d5fd0:
    // 0x1d5fd0: 0xc07486c  jal         func_1D21B0
    ctx->pc = 0x1D5FD0u;
    SET_GPR_U32(ctx, 31, 0x1D5FD8u);
    ctx->pc = 0x1D21B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D21B0u, 0x1D5FD0u, 0x1D5FD8u)) {
        return;
    }
    ctx->pc = 0x1D5FD8u;
label_1d5fd8:
    // 0x1d5fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FDCu;
        // 0x1d5fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5FE4u;
    // 0x1d5fe4: 0x0  nop
    ctx->pc = 0x1d5fe4u;
    // NOP
    ctx->pc = 0x1d5fe8u;
}
