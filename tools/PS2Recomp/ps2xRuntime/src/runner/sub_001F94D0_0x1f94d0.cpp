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

// Function: sub_001F94D0
// Address: 0x1f94d0 - 0x1f94f8
void sub_001F94D0_0x1f94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F94D0_0x1f94d0");
#endif

    switch (ctx->pc) {
        case 0x1f94e0u: goto label_1f94e0;
        case 0x1f94f0u: goto label_1f94f0;
        default: break;
    }

    ctx->pc = 0x1f94d0u;

    // 0x1f94d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f94d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f94d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f94d8: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x1F94D8u;
    SET_GPR_U32(ctx, 31, 0x1F94E0u);
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1F94D8u, 0x1F94E0u)) {
        return;
    }
    ctx->pc = 0x1F94E0u;
label_1f94e0:
    // 0x1f94e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F94E0u;
    {
        const bool branch_taken_0x1f94e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94E0u;
        // 0x1f94e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94e0) {
            ctx->pc = 0x1F94F0u;
            goto label_1f94f0;
        }
    }
    ctx->pc = 0x1F94E8u;
    // 0x1f94e8: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F94E8u;
    SET_GPR_U32(ctx, 31, 0x1F94F0u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F94E8u, 0x1F94F0u)) {
        return;
    }
    ctx->pc = 0x1F94F0u;
label_1f94f0:
    // 0x1f94f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F94F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94F0u;
        // 0x1f94f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F94F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F94F8u;
}
