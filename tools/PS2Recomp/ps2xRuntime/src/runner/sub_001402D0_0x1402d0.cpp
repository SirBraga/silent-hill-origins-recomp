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

// Function: sub_001402D0
// Address: 0x1402d0 - 0x1402f8
void sub_001402D0_0x1402d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001402D0_0x1402d0");
#endif

    ctx->pc = 0x1402d0u;

    // 0x1402d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1402D0u;
    {
        const bool branch_taken_0x1402d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402D0u;
        // 0x1402d4: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402d0) {
            ctx->pc = 0x1402E8u;
            goto label_1402e8;
        }
    }
    ctx->pc = 0x1402D8u;
    // 0x1402d8: 0x9083004c  lbu         $v1, 0x4C($a0)
    ctx->pc = 0x1402d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1402dc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1402dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1402e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1402E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1402E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402E0u;
        // 0x1402e4: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1402E8u;
label_1402e8:
    // 0x1402e8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1402e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1402ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1402ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1402F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402ECu;
        // 0x1402f0: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1402ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1402F4u;
    // 0x1402f4: 0x0  nop
    ctx->pc = 0x1402f4u;
    // NOP
    ctx->pc = 0x1402f8u;
}
