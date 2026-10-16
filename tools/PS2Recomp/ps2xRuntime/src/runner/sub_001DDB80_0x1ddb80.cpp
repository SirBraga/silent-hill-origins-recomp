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

// Function: sub_001DDB80
// Address: 0x1ddb80 - 0x1ddbe8
void sub_001DDB80_0x1ddb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDB80_0x1ddb80");
#endif

    ctx->pc = 0x1ddb80u;

    // 0x1ddb80: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1ddb84: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1ddb88: 0x8ca3e688  lw          $v1, -0x1978($a1)
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E688u));
    // 0x1ddb8c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1ddb90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ddb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddb9c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ddba0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DDBA0u;
    {
        const bool branch_taken_0x1ddba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddba0) {
            ctx->pc = 0x1DDBDCu;
            goto label_1ddbdc;
        }
    }
    ctx->pc = 0x1DDBA8u;
    // 0x1ddba8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDBA8u;
    {
        const bool branch_taken_0x1ddba8 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1ddba8) {
            ctx->pc = 0x1DDBDCu;
            goto label_1ddbdc;
        }
    }
    ctx->pc = 0x1DDBB0u;
    // 0x1ddbb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ddbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ddbb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ddbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ddbb8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ddbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddbbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDBBCu;
    {
        const bool branch_taken_0x1ddbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbbc) {
            ctx->pc = 0x1DDBDCu;
            goto label_1ddbdc;
        }
    }
    ctx->pc = 0x1DDBC4u;
    // 0x1ddbc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ddbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddbc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ddbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ddbcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddbd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBD4u;
        // 0x1ddbd8: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDBDCu;
label_1ddbdc:
    // 0x1ddbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBDCu;
        // 0x1ddbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDBE4u;
    // 0x1ddbe4: 0x0  nop
    ctx->pc = 0x1ddbe4u;
    // NOP
    ctx->pc = 0x1ddbe8u;
}
