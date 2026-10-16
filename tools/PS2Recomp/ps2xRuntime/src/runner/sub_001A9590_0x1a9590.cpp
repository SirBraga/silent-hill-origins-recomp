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

// Function: sub_001A9590
// Address: 0x1a9590 - 0x1a95c8
void sub_001A9590_0x1a9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9590_0x1a9590");
#endif

    switch (ctx->pc) {
        case 0x1a95a0u: goto label_1a95a0;
        default: break;
    }

    ctx->pc = 0x1a9590u;

    // 0x1a9590: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a9590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9594: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9594u;
    {
        const bool branch_taken_0x1a9594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9594) {
            ctx->pc = 0x1A95BCu;
            goto label_1a95bc;
        }
    }
    ctx->pc = 0x1A959Cu;
    // 0x1a959c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a95a0:
    // 0x1a95a0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1a95a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a95a4: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A95A4u;
    {
        const bool branch_taken_0x1a95a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a95a4) {
            ctx->pc = 0x1A95A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95A4u;
            // 0x1a95a8: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A95B4u;
            goto label_1a95b4;
        }
    }
    ctx->pc = 0x1A95ACu;
    // 0x1a95ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ACu;
        // 0x1a95b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A95B4u;
label_1a95b4:
    // 0x1a95b4: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A95B4u;
    {
        const bool branch_taken_0x1a95b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a95b4) {
            ctx->pc = 0x1A95B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95B4u;
            // 0x1a95b8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A95A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a95a0;
        }
    }
    ctx->pc = 0x1A95BCu;
label_1a95bc:
    // 0x1a95bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A95BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95BCu;
        // 0x1a95c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A95C4u;
    // 0x1a95c4: 0x0  nop
    ctx->pc = 0x1a95c4u;
    // NOP
    ctx->pc = 0x1a95c8u;
}
