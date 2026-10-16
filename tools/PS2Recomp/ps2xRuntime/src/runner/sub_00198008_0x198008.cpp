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

// Function: sub_00198008
// Address: 0x198008 - 0x198020
void sub_00198008_0x198008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198008_0x198008");
#endif

    ctx->pc = 0x198008u;

    // 0x198008: 0xac8009dc  sw          $zero, 0x9DC($a0)
    ctx->pc = 0x198008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2524), GPR_U32(ctx, 0));
    // 0x19800c: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x19800cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x198010: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x198010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x198014: 0xac8009d4  sw          $zero, 0x9D4($a0)
    ctx->pc = 0x198014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2516), GPR_U32(ctx, 0));
    // 0x198018: 0x3e00008  jr          $ra
    ctx->pc = 0x198018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198018u;
        // 0x19801c: 0xac8009d8  sw          $zero, 0x9D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198020u;
}
