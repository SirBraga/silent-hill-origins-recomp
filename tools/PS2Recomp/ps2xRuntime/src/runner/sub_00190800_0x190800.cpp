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

// Function: sub_00190800
// Address: 0x190800 - 0x190828
void sub_00190800_0x190800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190800_0x190800");
#endif

    switch (ctx->pc) {
        case 0x190804u: goto label_190804;
        default: break;
    }

    ctx->pc = 0x190800u;

    // 0x190800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190804:
    // 0x190804: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x190804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190808: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x190808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19080c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19080cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190810: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190814: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x190814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19081c: 0x3e00008  jr          $ra
    ctx->pc = 0x19081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19081Cu;
        // 0x190820: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190824u;
    // 0x190824: 0x0  nop
    ctx->pc = 0x190824u;
    // NOP
    ctx->pc = 0x190828u;
}
