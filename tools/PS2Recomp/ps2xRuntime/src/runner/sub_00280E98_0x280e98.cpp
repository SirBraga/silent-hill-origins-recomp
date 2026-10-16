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

// Function: sub_00280E98
// Address: 0x280e98 - 0x280ee0
void sub_00280E98_0x280e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E98_0x280e98");
#endif

    switch (ctx->pc) {
        case 0x280eb0u: goto label_280eb0;
        default: break;
    }

    ctx->pc = 0x280e98u;

    // 0x280e98: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280e9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ea4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280ea8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280eac: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280eb0:
    // 0x280eb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280eb4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280eb8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x280EB8u;
    {
        const bool branch_taken_0x280eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280eb8) {
            ctx->pc = 0x280ED8u;
            goto label_280ed8;
        }
    }
    ctx->pc = 0x280EC0u;
    // 0x280ec0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280ec4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280ec8: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280ecc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280ECCu;
    {
        const bool branch_taken_0x280ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ecc) {
            ctx->pc = 0x280ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280ECCu;
            // 0x280ed0: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280eb0;
        }
    }
    ctx->pc = 0x280ED4u;
    // 0x280ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280ed8:
    // 0x280ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x280ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280ED8u;
        // 0x280edc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280EE0u;
}
