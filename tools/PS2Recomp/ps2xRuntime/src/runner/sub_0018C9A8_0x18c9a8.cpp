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

// Function: sub_0018C9A8
// Address: 0x18c9a8 - 0x18c9d0
void sub_0018C9A8_0x18c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C9A8_0x18c9a8");
#endif

    switch (ctx->pc) {
        case 0x18c9c4u: goto label_18c9c4;
        default: break;
    }

    ctx->pc = 0x18c9a8u;

    // 0x18c9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c9b0: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x18c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x18c9b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C9B4u;
    {
        const bool branch_taken_0x18c9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9B4u;
        // 0x18c9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9b4) {
            ctx->pc = 0x18C9C4u;
            goto label_18c9c4;
        }
    }
    ctx->pc = 0x18C9BCu;
    // 0x18c9bc: 0xc095596  jal         func_255658
    ctx->pc = 0x18C9BCu;
    SET_GPR_U32(ctx, 31, 0x18C9C4u);
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x18C9BCu, 0x18C9C4u)) {
        return;
    }
    ctx->pc = 0x18C9C4u;
label_18c9c4:
    // 0x18c9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9C8u;
        // 0x18c9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C9D0u;
}
