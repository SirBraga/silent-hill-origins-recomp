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

// Function: sub_00180720
// Address: 0x180720 - 0x180740
void sub_00180720_0x180720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180720_0x180720");
#endif

    ctx->pc = 0x180720u;

    // 0x180720: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x180720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x180724: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x180724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180728: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x18072c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180730: 0x3e00008  jr          $ra
    ctx->pc = 0x180730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180730u;
        // 0x180734: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180738u;
    // 0x180738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18073c: 0x0  nop
    ctx->pc = 0x18073cu;
    // NOP
    ctx->pc = 0x180740u;
}
