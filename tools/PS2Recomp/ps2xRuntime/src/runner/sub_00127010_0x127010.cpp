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

// Function: sub_00127010
// Address: 0x127010 - 0x127030
void sub_00127010_0x127010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127010_0x127010");
#endif

    ctx->pc = 0x127010u;

    // 0x127010: 0x8c820f6c  lw          $v0, 0xF6C($a0)
    ctx->pc = 0x127010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3948)));
    // 0x127014: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127014u;
    {
        const bool branch_taken_0x127014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127014) {
            ctx->pc = 0x127024u;
            goto label_127024;
        }
    }
    ctx->pc = 0x12701Cu;
    // 0x12701c: 0x3e00008  jr          $ra
    ctx->pc = 0x12701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12701Cu;
        // 0x127020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127024u;
label_127024:
    // 0x127024: 0x3e00008  jr          $ra
    ctx->pc = 0x127024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127024u;
        // 0x127028: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12702Cu;
    // 0x12702c: 0x0  nop
    ctx->pc = 0x12702cu;
    // NOP
    ctx->pc = 0x127030u;
}
