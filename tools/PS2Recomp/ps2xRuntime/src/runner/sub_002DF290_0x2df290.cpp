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

// Function: sub_002DF290
// Address: 0x2df290 - 0x2df2b8
void sub_002DF290_0x2df290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF290_0x2df290");
#endif

    switch (ctx->pc) {
        case 0x2df2a4u: goto label_2df2a4;
        default: break;
    }

    ctx->pc = 0x2df290u;

    // 0x2df290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df294: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2df298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df29c: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DF29Cu;
    SET_GPR_U32(ctx, 31, 0x2DF2A4u);
    ctx->pc = 0x2DF2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF29Cu;
    // 0x2df2a0: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DF29Cu, 0x2DF2A4u)) {
        return;
    }
    ctx->pc = 0x2DF2A4u;
label_2df2a4:
    // 0x2df2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df2a8: 0xaf808bf0  sw          $zero, -0x7410($gp)
    ctx->pc = 0x2df2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937584), GPR_U32(ctx, 0));
    // 0x2df2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2ACu;
        // 0x2df2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF2B4u;
    // 0x2df2b4: 0x0  nop
    ctx->pc = 0x2df2b4u;
    // NOP
    ctx->pc = 0x2df2b8u;
}
