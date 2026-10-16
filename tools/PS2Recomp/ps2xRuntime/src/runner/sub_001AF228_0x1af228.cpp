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

// Function: sub_001AF228
// Address: 0x1af228 - 0x1af240
void sub_001AF228_0x1af228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF228_0x1af228");
#endif

    ctx->pc = 0x1af228u;

    // 0x1af228: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF228u;
    {
        const bool branch_taken_0x1af228 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF228u;
        // 0x1af22c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af228) {
            ctx->pc = 0x1AF238u;
            goto label_1af238;
        }
    }
    ctx->pc = 0x1AF230u;
    // 0x1af230: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1af234: 0xac460110  sw          $a2, 0x110($v0)
    ctx->pc = 0x1af234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 6));
label_1af238:
    // 0x1af238: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF240u;
}
