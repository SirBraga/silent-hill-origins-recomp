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

// Function: sub_0029BEE8
// Address: 0x29bee8 - 0x29bf10
void sub_0029BEE8_0x29bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BEE8_0x29bee8");
#endif

    switch (ctx->pc) {
        case 0x29bf04u: goto label_29bf04;
        default: break;
    }

    ctx->pc = 0x29bee8u;

    // 0x29bee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29beec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bef0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x29bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29bef4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BEF4u;
    {
        const bool branch_taken_0x29bef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BEF4u;
        // 0x29bef8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bef4) {
            ctx->pc = 0x29BF08u;
            goto label_29bf08;
        }
    }
    ctx->pc = 0x29BEFCu;
    // 0x29befc: 0xc0a6de8  jal         func_29B7A0
    ctx->pc = 0x29BEFCu;
    SET_GPR_U32(ctx, 31, 0x29BF04u);
    ctx->pc = 0x29B7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7A0u, 0x29BEFCu, 0x29BF04u)) {
        return;
    }
    ctx->pc = 0x29BF04u;
label_29bf04:
    // 0x29bf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29bf08:
    // 0x29bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF08u;
        // 0x29bf0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF10u;
}
