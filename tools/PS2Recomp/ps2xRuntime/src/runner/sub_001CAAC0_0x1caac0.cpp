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

// Function: sub_001CAAC0
// Address: 0x1caac0 - 0x1caae8
void sub_001CAAC0_0x1caac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAAC0_0x1caac0");
#endif

    ctx->pc = 0x1caac0u;

    // 0x1caac0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAAC0u;
    {
        const bool branch_taken_0x1caac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caac0) {
            ctx->pc = 0x1CAADCu;
            goto label_1caadc;
        }
    }
    ctx->pc = 0x1CAAC8u;
    // 0x1caac8: 0x8c82041c  lw          $v0, 0x41C($a0)
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1052)));
    // 0x1caacc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAACCu;
    {
        const bool branch_taken_0x1caacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAACCu;
        // 0x1caad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caacc) {
            ctx->pc = 0x1CAADCu;
            goto label_1caadc;
        }
    }
    ctx->pc = 0x1CAAD4u;
    // 0x1caad4: 0xac800420  sw          $zero, 0x420($a0)
    ctx->pc = 0x1caad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1056), GPR_U32(ctx, 0));
    // 0x1caad8: 0xac820418  sw          $v0, 0x418($a0)
    ctx->pc = 0x1caad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1048), GPR_U32(ctx, 2));
label_1caadc:
    // 0x1caadc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAADCu;
        // 0x1caae0: 0xac85041c  sw          $a1, 0x41C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1052), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAAE4u;
    // 0x1caae4: 0x0  nop
    ctx->pc = 0x1caae4u;
    // NOP
    ctx->pc = 0x1caae8u;
}
