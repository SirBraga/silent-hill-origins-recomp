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

// Function: sub_001E47E0
// Address: 0x1e47e0 - 0x1e4818
void sub_001E47E0_0x1e47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E47E0_0x1e47e0");
#endif

    switch (ctx->pc) {
        case 0x1e480cu: goto label_1e480c;
        default: break;
    }

    ctx->pc = 0x1e47e0u;

    // 0x1e47e0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e47e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e47e8: 0x8c44e720  lw          $a0, -0x18E0($v0)
    ctx->pc = 0x1e47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E720u));
    // 0x1e47ec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E47ECu;
    {
        const bool branch_taken_0x1e47ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47ECu;
        // 0x1e47f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47ec) {
            ctx->pc = 0x1E480Cu;
            goto label_1e480c;
        }
    }
    ctx->pc = 0x1E47F4u;
    // 0x1e47f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e47f8: 0x8c43e700  lw          $v1, -0x1900($v0)
    ctx->pc = 0x1e47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E700u));
    // 0x1e47fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4810u;
            goto label_1e4810;
        }
    }
    ctx->pc = 0x1E4804u;
    // 0x1e4804: 0xc079c90  jal         func_1E7240
    ctx->pc = 0x1E4804u;
    SET_GPR_U32(ctx, 31, 0x1E480Cu);
    ctx->pc = 0x1E7240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7240u, 0x1E4804u, 0x1E480Cu)) {
        return;
    }
    ctx->pc = 0x1E480Cu;
label_1e480c:
    // 0x1e480c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4810:
    // 0x1e4810: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4810u;
        // 0x1e4814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4818u;
}
