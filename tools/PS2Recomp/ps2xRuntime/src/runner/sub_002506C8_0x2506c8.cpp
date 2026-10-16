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

// Function: sub_002506C8
// Address: 0x2506c8 - 0x2506e0
void sub_002506C8_0x2506c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002506C8_0x2506c8");
#endif

    ctx->pc = 0x2506c8u;

    // 0x2506c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2506cc: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x2506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x2506d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2506d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2506D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2506D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506D4u;
        // 0x2506d8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2506D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2506DCu;
    // 0x2506dc: 0x0  nop
    ctx->pc = 0x2506dcu;
    // NOP
    ctx->pc = 0x2506e0u;
}
