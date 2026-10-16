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

// Function: sub_00126EA8
// Address: 0x126ea8 - 0x126eb8
void sub_00126EA8_0x126ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126EA8_0x126ea8");
#endif

    ctx->pc = 0x126ea8u;

    // 0x126ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126eac: 0xac851454  sw          $a1, 0x1454($a0)
    ctx->pc = 0x126eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5204), GPR_U32(ctx, 5));
    // 0x126eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x126EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EB0u;
        // 0x126eb4: 0xac821450  sw          $v0, 0x1450($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126EB8u;
}
