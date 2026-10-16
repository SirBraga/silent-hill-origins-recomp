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

// Function: sub_00113F90
// Address: 0x113f90 - 0x113fc8
void sub_00113F90_0x113f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113F90_0x113f90");
#endif

    ctx->pc = 0x113f90u;

    // 0x113f90: 0x8c8201a8  lw          $v0, 0x1A8($a0)
    ctx->pc = 0x113f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x113f94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x113F94u;
    {
        const bool branch_taken_0x113f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F94u;
        // 0x113f98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f94) {
            ctx->pc = 0x113FA0u;
            goto label_113fa0;
        }
    }
    ctx->pc = 0x113F9Cu;
    // 0x113f9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113fa0:
    // 0x113fa0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113FA0u;
    {
        const bool branch_taken_0x113fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113fa0) {
            ctx->pc = 0x113FC0u;
            goto label_113fc0;
        }
    }
    ctx->pc = 0x113FA8u;
    // 0x113fa8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x113fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113fb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113fb4: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x113fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x113fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x113FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB8u;
        // 0x113fbc: 0x8c620088  lw          $v0, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FC0u;
label_113fc0:
    // 0x113fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x113FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC0u;
        // 0x113fc4: 0x8c620088  lw          $v0, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FC8u;
}
