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

// Function: sub_001788A0
// Address: 0x1788a0 - 0x1788b0
void sub_001788A0_0x1788a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001788A0_0x1788a0");
#endif

    ctx->pc = 0x1788a0u;

    // 0x1788a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1788a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1788A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788A4u;
        // 0x1788a8: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1788A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788ACu;
    // 0x1788ac: 0x0  nop
    ctx->pc = 0x1788acu;
    // NOP
    ctx->pc = 0x1788b0u;
}
