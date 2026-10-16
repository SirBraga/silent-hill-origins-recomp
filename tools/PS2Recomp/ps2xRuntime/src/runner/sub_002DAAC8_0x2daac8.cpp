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

// Function: sub_002DAAC8
// Address: 0x2daac8 - 0x2dab50
void sub_002DAAC8_0x2daac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAAC8_0x2daac8");
#endif

    switch (ctx->pc) {
        case 0x2dab18u: goto label_2dab18;
        case 0x2dab28u: goto label_2dab28;
        default: break;
    }

    ctx->pc = 0x2daac8u;

    // 0x2daac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2daac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2daacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2daad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2daad4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2daad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2daad8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2daad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daadc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2daadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2daae0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2daae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daae4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2daae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2daae8: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAAE8u;
    {
        const bool branch_taken_0x2daae8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAE8u;
        // 0x2daaec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daae8) {
            ctx->pc = 0x2DAB00u;
            goto label_2dab00;
        }
    }
    ctx->pc = 0x2DAAF0u;
    // 0x2daaf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2daaf4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2daaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2daaf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAAF8u;
    {
        const bool branch_taken_0x2daaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAF8u;
        // 0x2daafc: 0x9471000c  lhu         $s1, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daaf8) {
            ctx->pc = 0x2DAB0Cu;
            goto label_2dab0c;
        }
    }
    ctx->pc = 0x2DAB00u;
label_2dab00:
    // 0x2dab00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2dab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2dab04: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2dab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2dab08: 0x9471000e  lhu         $s1, 0xE($v1)
    ctx->pc = 0x2dab08u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2dab0c:
    // 0x2dab0c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DAB0Cu;
    {
        const bool branch_taken_0x2dab0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB0Cu;
        // 0x2dab10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab0c) {
            ctx->pc = 0x2DAB34u;
            goto label_2dab34;
        }
    }
    ctx->pc = 0x2DAB14u;
    // 0x2dab14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dab18:
    // 0x2dab18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dab1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab20: 0xc0b6910  jal         func_2DA440
    ctx->pc = 0x2DAB20u;
    SET_GPR_U32(ctx, 31, 0x2DAB28u);
    ctx->pc = 0x2DAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB20u;
    // 0x2dab24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA440u, 0x2DAB20u, 0x2DAB28u)) {
        return;
    }
    ctx->pc = 0x2DAB28u;
label_2dab28:
    // 0x2dab28: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2dab28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2dab2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DAB2Cu;
    {
        const bool branch_taken_0x2dab2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB2Cu;
        // 0x2dab30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab2c) {
            ctx->pc = 0x2DAB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dab18;
        }
    }
    ctx->pc = 0x2DAB34u;
label_2dab34:
    // 0x2dab34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dab34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dab38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dab38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dab3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dab3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dab40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2dab40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dab44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dab48: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB48u;
        // 0x2dab4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB50u;
}
