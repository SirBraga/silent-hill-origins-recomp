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

// Function: sub_001A4DE8
// Address: 0x1a4de8 - 0x1a4e08
void sub_001A4DE8_0x1a4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4DE8_0x1a4de8");
#endif

    ctx->pc = 0x1a4de8u;

    // 0x1a4de8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4df0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a4df4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1a4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1a4df8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4dfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E00u;
        // 0x1a4e04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E08u;
}
