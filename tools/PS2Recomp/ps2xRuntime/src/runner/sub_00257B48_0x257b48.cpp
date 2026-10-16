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

// Function: sub_00257B48
// Address: 0x257b48 - 0x257b58
void sub_00257B48_0x257b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257B48_0x257b48");
#endif

    ctx->pc = 0x257b48u;

    // 0x257b48: 0xaf8485dc  sw          $a0, -0x7A24($gp)
    ctx->pc = 0x257b48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 4));
    // 0x257b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x257B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B4Cu;
        // 0x257b50: 0xaf8585e0  sw          $a1, -0x7A20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B54u;
    // 0x257b54: 0x0  nop
    ctx->pc = 0x257b54u;
    // NOP
    ctx->pc = 0x257b58u;
}
