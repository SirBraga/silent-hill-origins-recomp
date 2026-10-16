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

// Function: sub_001AED70
// Address: 0x1aed70 - 0x1aed80
void sub_001AED70_0x1aed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED70_0x1aed70");
#endif

    ctx->pc = 0x1aed70u;

    // 0x1aed70: 0x3e00008  jr          $ra
    ctx->pc = 0x1AED70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED70u;
        // 0x1aed74: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AED78u;
    // 0x1aed78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aed78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed7c: 0x0  nop
    ctx->pc = 0x1aed7cu;
    // NOP
    ctx->pc = 0x1aed80u;
}
