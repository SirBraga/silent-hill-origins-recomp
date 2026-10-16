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

// Function: sub_001F9F90
// Address: 0x1f9f90 - 0x1fa018
void sub_001F9F90_0x1f9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9F90_0x1f9f90");
#endif

    switch (ctx->pc) {
        case 0x1f9fa8u: goto label_1f9fa8;
        default: break;
    }

    ctx->pc = 0x1f9f90u;

    // 0x1f9f90: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f9f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f94: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1f9f94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f98: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9f9c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9fa0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9FA0u;
    {
        const bool branch_taken_0x1f9fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FA0u;
        // 0x1f9fa4: 0x8cea0000  lw          $t2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fa0) {
            ctx->pc = 0x1FA00Cu;
            goto label_1fa00c;
        }
    }
    ctx->pc = 0x1F9FA8u;
label_1f9fa8:
    // 0x1f9fa8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f9fac: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9FACu;
    {
        const bool branch_taken_0x1f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fac) {
            ctx->pc = 0x1F9FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9FACu;
            // 0x1f9fb0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9FFCu;
            goto label_1f9ffc;
        }
    }
    ctx->pc = 0x1F9FB4u;
    // 0x1f9fb4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f9fb8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1F9FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9FB8u;
            // 0x1f9fbc: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9FFCu;
            goto label_1f9ffc;
        }
    }
    ctx->pc = 0x1F9FC0u;
    // 0x1f9fc0: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f9fc4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f9fc8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f9fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9fd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f9fd4: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f9fd8: 0xad640004  sw          $a0, 0x4($t3)
    ctx->pc = 0x1f9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x1f9fdc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f9fe0: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1f9fe4: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x1f9fe4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1f9fe8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9fec: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x1f9fecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3));
    // 0x1f9ff0: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x1f9ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f9ff4: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x1f9ff4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4));
    // 0x1f9ff8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f9ffc:
    // 0x1f9ffc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1fa000: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fa004: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FA004u;
    {
        const bool branch_taken_0x1fa004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA004u;
        // 0x1fa008: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa004) {
            ctx->pc = 0x1F9FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9fa8;
        }
    }
    ctx->pc = 0x1FA00Cu;
label_1fa00c:
    // 0x1fa00c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1fa00cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1fa010: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA010u;
        // 0x1fa014: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA018u;
}
