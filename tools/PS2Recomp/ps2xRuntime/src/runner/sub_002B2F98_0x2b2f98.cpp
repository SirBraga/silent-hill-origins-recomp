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

// Function: sub_002B2F98
// Address: 0x2b2f98 - 0x2b2fa8
void sub_002B2F98_0x2b2f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F98_0x2b2f98");
#endif

    ctx->pc = 0x2b2f98u;

    // 0x2b2f98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F9Cu;
        // 0x2b2fa0: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FA4u;
    // 0x2b2fa4: 0x0  nop
    ctx->pc = 0x2b2fa4u;
    // NOP
    ctx->pc = 0x2b2fa8u;
}
