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

// Function: sub_00237800
// Address: 0x237800 - 0x237820
void sub_00237800_0x237800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237800_0x237800");
#endif

    ctx->pc = 0x237800u;

    // 0x237800: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x237800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x237804: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x237804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x237808: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23780c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x237810: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x237810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x237814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237818: 0x3e00008  jr          $ra
    ctx->pc = 0x237818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237818u;
        // 0x23781c: 0x24420058  addiu       $v0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237820u;
}
