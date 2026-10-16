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

// Function: sub_00238C40
// Address: 0x238c40 - 0x238c68
void sub_00238C40_0x238c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C40_0x238c40");
#endif

    switch (ctx->pc) {
        case 0x238c58u: goto label_238c58;
        default: break;
    }

    ctx->pc = 0x238c40u;

    // 0x238c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238c44: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x238c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238c4c: 0x24c60d78  addiu       $a2, $a2, 0xD78
    ctx->pc = 0x238c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3448));
    // 0x238c50: 0xc08e058  jal         func_238160
    ctx->pc = 0x238C50u;
    SET_GPR_U32(ctx, 31, 0x238C58u);
    ctx->pc = 0x238C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238C50u;
    // 0x238c54: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x238160u, 0x238C50u, 0x238C58u)) {
        return;
    }
    ctx->pc = 0x238C58u;
label_238c58:
    // 0x238c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c60: 0x3e00008  jr          $ra
    ctx->pc = 0x238C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C60u;
        // 0x238c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C68u;
}
