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

// Function: sub_0012B790
// Address: 0x12b790 - 0x12b7a0
void sub_0012B790_0x12b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B790_0x12b790");
#endif

    ctx->pc = 0x12b790u;

    // 0x12b790: 0x3e00008  jr          $ra
    ctx->pc = 0x12B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B790u;
        // 0x12b794: 0x8c822cf4  lw          $v0, 0x2CF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11508)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B798u;
    // 0x12b798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b79c: 0x0  nop
    ctx->pc = 0x12b79cu;
    // NOP
    ctx->pc = 0x12b7a0u;
}
