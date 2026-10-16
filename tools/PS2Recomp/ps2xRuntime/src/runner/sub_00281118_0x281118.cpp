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

// Function: sub_00281118
// Address: 0x281118 - 0x281160
void sub_00281118_0x281118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281118_0x281118");
#endif

    switch (ctx->pc) {
        case 0x281130u: goto label_281130;
        default: break;
    }

    ctx->pc = 0x281118u;

    // 0x281118: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x281118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x28111c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x281124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281128: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x281128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28112c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x28112cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_281130:
    // 0x281130: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x281130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281134: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281138: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x281138u;
    {
        const bool branch_taken_0x281138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x281138) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x281140u;
    // 0x281140: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x281140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x281144: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x281144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281148: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x281148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28114c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28114Cu;
    {
        const bool branch_taken_0x28114c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28114c) {
            ctx->pc = 0x281150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28114Cu;
            // 0x281150: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281130;
        }
    }
    ctx->pc = 0x281154u;
    // 0x281154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281158:
    // 0x281158: 0x3e00008  jr          $ra
    ctx->pc = 0x281158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281158u;
        // 0x28115c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281160u;
}
