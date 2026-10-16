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

// Function: sub_001D65F8
// Address: 0x1d65f8 - 0x1d6610
void sub_001D65F8_0x1d65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65F8_0x1d65f8");
#endif

    ctx->pc = 0x1d65f8u;

    // 0x1d65f8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d65fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65FCu;
        // 0x1d6600: 0x8c62883c  lw          $v0, -0x77C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936636)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6604u;
    // 0x1d6604: 0x0  nop
    ctx->pc = 0x1d6604u;
    // NOP
    // 0x1d6608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d6608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d660c: 0x0  nop
    ctx->pc = 0x1d660cu;
    // NOP
    ctx->pc = 0x1d6610u;
}
