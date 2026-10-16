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

// Function: sub_00126E90
// Address: 0x126e90 - 0x126ea8
void sub_00126E90_0x126e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126E90_0x126e90");
#endif

    ctx->pc = 0x126e90u;

    // 0x126e90: 0x8c820f70  lw          $v0, 0xF70($a0)
    ctx->pc = 0x126e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3952)));
    // 0x126e94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126e98: 0x8c830f74  lw          $v1, 0xF74($a0)
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3956)));
    // 0x126e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x126E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E9Cu;
        // 0x126ea0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126EA4u;
    // 0x126ea4: 0x0  nop
    ctx->pc = 0x126ea4u;
    // NOP
    ctx->pc = 0x126ea8u;
}
