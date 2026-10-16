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

// Function: sub_0013B1F0
// Address: 0x13b1f0 - 0x13b220
void sub_0013B1F0_0x13b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B1F0_0x13b1f0");
#endif

    switch (ctx->pc) {
        case 0x13b210u: goto label_13b210;
        default: break;
    }

    ctx->pc = 0x13b1f0u;

    // 0x13b1f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13b1f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b1f8: 0x8c4345f8  lw          $v1, 0x45F8($v0)
    ctx->pc = 0x13b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B45F8u));
    // 0x13b1fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b200: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B200u;
    {
        const bool branch_taken_0x13b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B200u;
        // 0x13b204: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b200) {
            ctx->pc = 0x13B210u;
            goto label_13b210;
        }
    }
    ctx->pc = 0x13B208u;
    // 0x13b208: 0xc04a474  jal         func_1291D0
    ctx->pc = 0x13B208u;
    SET_GPR_U32(ctx, 31, 0x13B210u);
    ctx->pc = 0x1291D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1291D0u, 0x13B208u, 0x13B210u)) {
        return;
    }
    ctx->pc = 0x13B210u;
label_13b210:
    // 0x13b210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b214: 0x3e00008  jr          $ra
    ctx->pc = 0x13B214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B214u;
        // 0x13b218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B21Cu;
    // 0x13b21c: 0x0  nop
    ctx->pc = 0x13b21cu;
    // NOP
    ctx->pc = 0x13b220u;
}
