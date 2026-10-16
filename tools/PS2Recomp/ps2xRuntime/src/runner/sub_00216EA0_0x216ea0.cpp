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

// Function: sub_00216EA0
// Address: 0x216ea0 - 0x216ec0
void sub_00216EA0_0x216ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216EA0_0x216ea0");
#endif

    ctx->pc = 0x216ea0u;

    // 0x216ea0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x216ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x216ea4: 0x8c422d34  lw          $v0, 0x2D34($v0)
    ctx->pc = 0x216ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702D34u));
    // 0x216ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216EA8u;
    {
        const bool branch_taken_0x216ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ea8) {
            ctx->pc = 0x216EB8u;
            goto label_216eb8;
        }
    }
    ctx->pc = 0x216EB0u;
    // 0x216eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x216EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EB0u;
        // 0x216eb4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216EB8u;
label_216eb8:
    // 0x216eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x216EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EB8u;
        // 0x216ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216EC0u;
}
