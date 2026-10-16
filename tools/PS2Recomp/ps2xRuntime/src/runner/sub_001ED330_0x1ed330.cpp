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

// Function: sub_001ED330
// Address: 0x1ed330 - 0x1ed348
void sub_001ED330_0x1ed330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED330_0x1ed330");
#endif

    ctx->pc = 0x1ed330u;

    // 0x1ed330: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ed334: 0x8c43e7bc  lw          $v1, -0x1844($v0)
    ctx->pc = 0x1ed334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ed338: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ed338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ed33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED33Cu;
        // 0x1ed340: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED344u;
    // 0x1ed344: 0x0  nop
    ctx->pc = 0x1ed344u;
    // NOP
    ctx->pc = 0x1ed348u;
}
