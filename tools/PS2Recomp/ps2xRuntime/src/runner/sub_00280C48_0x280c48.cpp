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

// Function: sub_00280C48
// Address: 0x280c48 - 0x280c90
void sub_00280C48_0x280c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280C48_0x280c48");
#endif

    switch (ctx->pc) {
        case 0x280c60u: goto label_280c60;
        default: break;
    }

    ctx->pc = 0x280c48u;

    // 0x280c48: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280c4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x280c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280c58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280c5c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280c60:
    // 0x280c60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280c64: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280c68: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x280C68u;
    {
        const bool branch_taken_0x280c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280c68) {
            ctx->pc = 0x280C88u;
            goto label_280c88;
        }
    }
    ctx->pc = 0x280C70u;
    // 0x280c70: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280c74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280c78: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280c78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280c7c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280C7Cu;
    {
        const bool branch_taken_0x280c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c7c) {
            ctx->pc = 0x280C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280C7Cu;
            // 0x280c80: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280c60;
        }
    }
    ctx->pc = 0x280C84u;
    // 0x280c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280c88:
    // 0x280c88: 0x3e00008  jr          $ra
    ctx->pc = 0x280C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C88u;
        // 0x280c8c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280C90u;
}
