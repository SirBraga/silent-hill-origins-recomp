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

// Function: sub_001D94D0
// Address: 0x1d94d0 - 0x1d9508
void sub_001D94D0_0x1d94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D94D0_0x1d94d0");
#endif

    switch (ctx->pc) {
        case 0x1d94e0u: goto label_1d94e0;
        default: break;
    }

    ctx->pc = 0x1d94d0u;

    // 0x1d94d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D94D0u;
    {
        const bool branch_taken_0x1d94d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94D0u;
        // 0x1d94d4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94d0) {
            ctx->pc = 0x1D9500u;
            goto label_1d9500;
        }
    }
    ctx->pc = 0x1D94D8u;
    // 0x1d94d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94dc: 0x244389e0  addiu       $v1, $v0, -0x7620
    ctx->pc = 0x1d94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
label_1d94e0:
    // 0x1d94e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d94e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D94E4u;
    {
        const bool branch_taken_0x1d94e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94E4u;
        // 0x1d94e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94e4) {
            ctx->pc = 0x1D94F4u;
            goto label_1d94f4;
        }
    }
    ctx->pc = 0x1D94ECu;
    // 0x1d94ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94ECu;
        // 0x1d94f0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94F4u;
label_1d94f4:
    // 0x1d94f4: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1d94f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d94f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D94F8u;
    {
        const bool branch_taken_0x1d94f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94F8u;
        // 0x1d94fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94f8) {
            ctx->pc = 0x1D94E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94e0;
        }
    }
    ctx->pc = 0x1D9500u;
label_1d9500:
    // 0x1d9500: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9508u;
}
