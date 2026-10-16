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

// Function: sub_0025DFE0
// Address: 0x25dfe0 - 0x25e000
void sub_0025DFE0_0x25dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DFE0_0x25dfe0");
#endif

    switch (ctx->pc) {
        case 0x25dff0u: goto label_25dff0;
        default: break;
    }

    ctx->pc = 0x25dfe0u;

    // 0x25dfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25dfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25dfe8: 0xc097dea  jal         func_25F7A8
    ctx->pc = 0x25DFE8u;
    SET_GPR_U32(ctx, 31, 0x25DFF0u);
    ctx->pc = 0x25F7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F7A8u, 0x25DFE8u, 0x25DFF0u)) {
        return;
    }
    ctx->pc = 0x25DFF0u;
label_25dff0:
    // 0x25dff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dff4: 0x3e00008  jr          $ra
    ctx->pc = 0x25DFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFF4u;
        // 0x25dff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DFFCu;
    // 0x25dffc: 0x0  nop
    ctx->pc = 0x25dffcu;
    // NOP
    ctx->pc = 0x25e000u;
}
