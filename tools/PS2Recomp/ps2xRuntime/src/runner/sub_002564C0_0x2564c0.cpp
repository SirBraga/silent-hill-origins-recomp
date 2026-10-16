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

// Function: sub_002564C0
// Address: 0x2564c0 - 0x2564d8
void sub_002564C0_0x2564c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002564C0_0x2564c0");
#endif

    ctx->pc = 0x2564c0u;

    // 0x2564c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2564c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564c4: 0xa4a80004  sh          $t0, 0x4($a1)
    ctx->pc = 0x2564c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2564c8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x2564c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2564cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2564CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2564D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564CCu;
        // 0x2564d0: 0xa4a70002  sh          $a3, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2564D4u;
    // 0x2564d4: 0x0  nop
    ctx->pc = 0x2564d4u;
    // NOP
    ctx->pc = 0x2564d8u;
}
