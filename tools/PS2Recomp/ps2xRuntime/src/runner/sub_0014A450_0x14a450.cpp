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

// Function: sub_0014A450
// Address: 0x14a450 - 0x14a470
void sub_0014A450_0x14a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A450_0x14a450");
#endif

    switch (ctx->pc) {
        case 0x14a464u: goto label_14a464;
        default: break;
    }

    ctx->pc = 0x14a450u;

    // 0x14a450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a45c: 0xc052882  jal         func_14A208
    ctx->pc = 0x14A45Cu;
    SET_GPR_U32(ctx, 31, 0x14A464u);
    ctx->pc = 0x14A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A45Cu;
    // 0x14a460: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14A208u, 0x14A45Cu, 0x14A464u)) {
        return;
    }
    ctx->pc = 0x14A464u;
label_14a464:
    // 0x14a464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a468: 0x3e00008  jr          $ra
    ctx->pc = 0x14A468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A468u;
        // 0x14a46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A470u;
}
