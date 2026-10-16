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

// Function: sub_0019BB88
// Address: 0x19bb88 - 0x19bbb8
void sub_0019BB88_0x19bb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BB88_0x19bb88");
#endif

    ctx->pc = 0x19bb88u;

    // 0x19bb88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bb8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BB8Cu;
    {
        const bool branch_taken_0x19bb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb8c) {
            ctx->pc = 0x19BBB0u;
            goto label_19bbb0;
        }
    }
    ctx->pc = 0x19BB94u;
    // 0x19bb94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bb98: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x19bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x19bb9c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BB9Cu;
    {
        const bool branch_taken_0x19bb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB9Cu;
        // 0x19bba0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb9c) {
            ctx->pc = 0x19BBB0u;
            goto label_19bbb0;
        }
    }
    ctx->pc = 0x19BBA4u;
    // 0x19bba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bba8: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x19bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x19bbac: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x19bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_19bbb0:
    // 0x19bbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBB8u;
}
