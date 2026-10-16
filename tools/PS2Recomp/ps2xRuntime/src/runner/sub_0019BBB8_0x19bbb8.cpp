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

// Function: sub_0019BBB8
// Address: 0x19bbb8 - 0x19bbe8
void sub_0019BBB8_0x19bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BBB8_0x19bbb8");
#endif

    ctx->pc = 0x19bbb8u;

    // 0x19bbb8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bbbc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BBBCu;
    {
        const bool branch_taken_0x19bbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bbbc) {
            ctx->pc = 0x19BBDCu;
            goto label_19bbdc;
        }
    }
    ctx->pc = 0x19BBC4u;
    // 0x19bbc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bbc8: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x19bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x19bbcc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BBCCu;
    {
        const bool branch_taken_0x19bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBCCu;
        // 0x19bbd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbcc) {
            ctx->pc = 0x19BBDCu;
            goto label_19bbdc;
        }
    }
    ctx->pc = 0x19BBD4u;
    // 0x19bbd4: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x19bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x19bbd8: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x19bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_19bbdc:
    // 0x19bbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19BBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBE4u;
    // 0x19bbe4: 0x0  nop
    ctx->pc = 0x19bbe4u;
    // NOP
    ctx->pc = 0x19bbe8u;
}
