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

// Function: sub_0017CFC0
// Address: 0x17cfc0 - 0x17cfd8
void sub_0017CFC0_0x17cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CFC0_0x17cfc0");
#endif

    ctx->pc = 0x17cfc0u;

    // 0x17cfc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17cfc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17CFC4u;
    {
        const bool branch_taken_0x17cfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cfc4) {
            ctx->pc = 0x17CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CFC4u;
            // 0x17cfc8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CFCCu;
            goto label_17cfcc;
        }
    }
    ctx->pc = 0x17CFCCu;
label_17cfcc:
    // 0x17cfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x17CFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CFD4u;
    // 0x17cfd4: 0x0  nop
    ctx->pc = 0x17cfd4u;
    // NOP
    ctx->pc = 0x17cfd8u;
}
