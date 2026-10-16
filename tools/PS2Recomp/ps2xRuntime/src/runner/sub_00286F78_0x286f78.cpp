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

// Function: sub_00286F78
// Address: 0x286f78 - 0x286fa8
void sub_00286F78_0x286f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286F78_0x286f78");
#endif

    ctx->pc = 0x286f78u;

    // 0x286f78: 0x8f8388bc  lw          $v1, -0x7744($gp)
    ctx->pc = 0x286f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x286f7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286f80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286f84: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x286f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286f88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286F88u;
    {
        const bool branch_taken_0x286f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f88) {
            ctx->pc = 0x286F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F88u;
            // 0x286f8c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F98u;
            goto label_286f98;
        }
    }
    ctx->pc = 0x286F90u;
    // 0x286f90: 0x3e00008  jr          $ra
    ctx->pc = 0x286F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F90u;
        // 0x286f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286F98u;
label_286f98:
    // 0x286f98: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x286f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x286f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x286F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F9Cu;
        // 0x286fa0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286FA4u;
    // 0x286fa4: 0x0  nop
    ctx->pc = 0x286fa4u;
    // NOP
    ctx->pc = 0x286fa8u;
}
