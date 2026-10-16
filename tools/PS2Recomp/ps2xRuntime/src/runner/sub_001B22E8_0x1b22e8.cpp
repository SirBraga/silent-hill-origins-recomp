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

// Function: sub_001B22E8
// Address: 0x1b22e8 - 0x1b2300
void sub_001B22E8_0x1b22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B22E8_0x1b22e8");
#endif

    ctx->pc = 0x1b22e8u;

    // 0x1b22e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b22ec: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1b22f0: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1b22f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B22F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22F4u;
        // 0x1b22f8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22FCu;
    // 0x1b22fc: 0x0  nop
    ctx->pc = 0x1b22fcu;
    // NOP
    ctx->pc = 0x1b2300u;
}
