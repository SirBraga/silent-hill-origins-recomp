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

// Function: sub_002DC298
// Address: 0x2dc298 - 0x2dc2b8
void sub_002DC298_0x2dc298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC298_0x2dc298");
#endif

    switch (ctx->pc) {
        case 0x2dc2a8u: goto label_2dc2a8;
        default: break;
    }

    ctx->pc = 0x2dc298u;

    // 0x2dc298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc2a0: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DC2A0u;
    SET_GPR_U32(ctx, 31, 0x2DC2A8u);
    ctx->pc = 0x2DC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC2A0u;
    // 0x2dc2a4: 0x8c84fffc  lw          $a0, -0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DC2A0u, 0x2DC2A8u)) {
        return;
    }
    ctx->pc = 0x2DC2A8u;
label_2dc2a8:
    // 0x2dc2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2ACu;
        // 0x2dc2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC2B4u;
    // 0x2dc2b4: 0x0  nop
    ctx->pc = 0x2dc2b4u;
    // NOP
    ctx->pc = 0x2dc2b8u;
}
