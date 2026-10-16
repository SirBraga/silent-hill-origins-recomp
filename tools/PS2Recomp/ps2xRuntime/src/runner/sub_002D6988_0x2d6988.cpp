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

// Function: sub_002D6988
// Address: 0x2d6988 - 0x2d69a0
void sub_002D6988_0x2d6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6988_0x2d6988");
#endif

    ctx->pc = 0x2d6988u;

    // 0x2d6988: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2d698c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d698cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6994: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6994u;
        // 0x2d6998: 0xac83006c  sw          $v1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D699Cu;
    // 0x2d699c: 0x0  nop
    ctx->pc = 0x2d699cu;
    // NOP
    ctx->pc = 0x2d69a0u;
}
