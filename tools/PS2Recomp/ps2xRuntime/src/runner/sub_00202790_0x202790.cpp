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

// Function: sub_00202790
// Address: 0x202790 - 0x2027b8
void sub_00202790_0x202790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202790_0x202790");
#endif

    switch (ctx->pc) {
        case 0x2027a8u: goto label_2027a8;
        default: break;
    }

    ctx->pc = 0x202790u;

    // 0x202790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202794: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x202798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20279c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2027a0: 0xc08082e  jal         func_2020B8
    ctx->pc = 0x2027A0u;
    SET_GPR_U32(ctx, 31, 0x2027A8u);
    ctx->pc = 0x2027A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A0u;
    // 0x2027a4: 0x24844158  addiu       $a0, $a0, 0x4158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2020B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020B8u, 0x2027A0u, 0x2027A8u)) {
        return;
    }
    ctx->pc = 0x2027A8u;
label_2027a8:
    // 0x2027a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2027ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027ACu;
        // 0x2027b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2027B4u;
    // 0x2027b4: 0x0  nop
    ctx->pc = 0x2027b4u;
    // NOP
    ctx->pc = 0x2027b8u;
}
