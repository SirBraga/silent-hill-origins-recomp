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

// Function: sub_00171F50
// Address: 0x171f50 - 0x171fd0
void sub_00171F50_0x171f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171F50_0x171f50");
#endif

    switch (ctx->pc) {
        case 0x171f70u: goto label_171f70;
        default: break;
    }

    ctx->pc = 0x171f50u;

    // 0x171f50: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x171f54: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x171F54u;
    {
        const bool branch_taken_0x171f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F54u;
        // 0x171f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f54) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x171F5Cu;
    // 0x171f5c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x171F5Cu;
    {
        const bool branch_taken_0x171f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F5Cu;
        // 0x171f60: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f5c) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x171F64u;
    // 0x171f64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x171f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x171f6c: 0x0  nop
    ctx->pc = 0x171f6cu;
    // NOP
label_171f70:
    // 0x171f70: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x171F70u;
    {
        const bool branch_taken_0x171f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x171f70) {
            ctx->pc = 0x171F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171F70u;
            // 0x171f74: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171FB0u;
            goto label_171fb0;
        }
    }
    ctx->pc = 0x171F78u;
    // 0x171f78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x171f7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171f80: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x171f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x171f84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171f88: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x171f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x171f8c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x171f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x171f90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x171f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x171f94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171f98: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x171f9c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x171f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x171fa0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x171fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x171fa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x171fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x171FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FA8u;
        // 0x171fac: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171FB0u;
label_171fb0:
    // 0x171fb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x171fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x171fb4: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x171fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171fb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171FB8u;
    {
        const bool branch_taken_0x171fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FB8u;
        // 0x171fbc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fb8) {
            ctx->pc = 0x171FC8u;
            goto label_171fc8;
        }
    }
    ctx->pc = 0x171FC0u;
    // 0x171fc0: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x171FC0u;
    {
        const bool branch_taken_0x171fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x171fc0) {
            ctx->pc = 0x171FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171FC0u;
            // 0x171fc4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171f70;
        }
    }
    ctx->pc = 0x171FC8u;
label_171fc8:
    // 0x171fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x171FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171FD0u;
}
