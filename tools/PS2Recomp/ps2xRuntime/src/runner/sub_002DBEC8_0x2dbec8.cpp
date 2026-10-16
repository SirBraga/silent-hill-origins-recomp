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

// Function: sub_002DBEC8
// Address: 0x2dbec8 - 0x2dbfa0
void sub_002DBEC8_0x2dbec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBEC8_0x2dbec8");
#endif

    switch (ctx->pc) {
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf10u: goto label_2dbf10;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf50u: goto label_2dbf50;
        case 0x2dbf60u: goto label_2dbf60;
        case 0x2dbf78u: goto label_2dbf78;
        default: break;
    }

    ctx->pc = 0x2dbec8u;

    // 0x2dbec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dbed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dbed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbedc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2dbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2dbee0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dbee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2dbee4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DBEE4u;
    {
        const bool branch_taken_0x2dbee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEE4u;
        // 0x2dbee8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbee4) {
            ctx->pc = 0x2DBF90u;
            goto label_2dbf90;
        }
    }
    ctx->pc = 0x2DBEECu;
    // 0x2dbeec: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2dbeecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2dbef0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBEF0u;
    {
        const bool branch_taken_0x2dbef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbef0) {
            ctx->pc = 0x2DBEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBEF0u;
            // 0x2dbef4: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF40u;
            goto label_2dbf40;
        }
    }
    ctx->pc = 0x2DBEF8u;
    // 0x2dbef8: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DBEF8u;
    SET_GPR_U32(ctx, 31, 0x2DBF00u);
    ctx->pc = 0x2DBEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEF8u;
    // 0x2dbefc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DBEF8u, 0x2DBF00u)) {
        return;
    }
    ctx->pc = 0x2DBF00u;
label_2dbf00:
    // 0x2dbf00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dbf04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf08: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dbf0c: 0x244440e8  addiu       $a0, $v0, 0x40E8
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
label_2dbf10:
    // 0x2dbf10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dbf14: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBF14u;
    {
        const bool branch_taken_0x2dbf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF14u;
        // 0x2dbf18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf14) {
            ctx->pc = 0x2DBF30u;
            goto label_2dbf30;
        }
    }
    ctx->pc = 0x2DBF1Cu;
    // 0x2dbf1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbf20: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DBF20u;
    SET_GPR_U32(ctx, 31, 0x2DBF28u);
    ctx->pc = 0x2DBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF20u;
    // 0x2dbf24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DBF20u, 0x2DBF28u)) {
        return;
    }
    ctx->pc = 0x2DBF28u;
label_2dbf28:
    // 0x2dbf28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBF28u;
    {
        const bool branch_taken_0x2dbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF28u;
        // 0x2dbf2c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf28) {
            ctx->pc = 0x2DBF40u;
            goto label_2dbf40;
        }
    }
    ctx->pc = 0x2DBF30u;
label_2dbf30:
    // 0x2dbf30: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2dbf30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dbf34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DBF34u;
    {
        const bool branch_taken_0x2dbf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF34u;
        // 0x2dbf38: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf34) {
            ctx->pc = 0x2DBF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf10;
        }
    }
    ctx->pc = 0x2DBF3Cu;
    // 0x2dbf3c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2dbf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2dbf40:
    // 0x2dbf40: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBF40u;
    {
        const bool branch_taken_0x2dbf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf40) {
            ctx->pc = 0x2DBF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF40u;
            // 0x2dbf44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF90u;
            goto label_2dbf90;
        }
    }
    ctx->pc = 0x2DBF48u;
    // 0x2dbf48: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DBF48u;
    SET_GPR_U32(ctx, 31, 0x2DBF50u);
    ctx->pc = 0x2DBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF48u;
    // 0x2dbf4c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DBF48u, 0x2DBF50u)) {
        return;
    }
    ctx->pc = 0x2DBF50u;
label_2dbf50:
    // 0x2dbf50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dbf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dbf54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf58: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dbf5c: 0x244440e8  addiu       $a0, $v0, 0x40E8
    ctx->pc = 0x2dbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
label_2dbf60:
    // 0x2dbf60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dbf64: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBF64u;
    {
        const bool branch_taken_0x2dbf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF64u;
        // 0x2dbf68: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf64) {
            ctx->pc = 0x2DBF80u;
            goto label_2dbf80;
        }
    }
    ctx->pc = 0x2DBF6Cu;
    // 0x2dbf6c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbf70: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DBF70u;
    SET_GPR_U32(ctx, 31, 0x2DBF78u);
    ctx->pc = 0x2DBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBF70u;
    // 0x2dbf74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DBF70u, 0x2DBF78u)) {
        return;
    }
    ctx->pc = 0x2DBF78u;
label_2dbf78:
    // 0x2dbf78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBF78u;
    {
        const bool branch_taken_0x2dbf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF78u;
        // 0x2dbf7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf78) {
            ctx->pc = 0x2DBF90u;
            goto label_2dbf90;
        }
    }
    ctx->pc = 0x2DBF80u;
label_2dbf80:
    // 0x2dbf80: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2dbf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2dbf84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DBF84u;
    {
        const bool branch_taken_0x2dbf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF84u;
        // 0x2dbf88: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbf84) {
            ctx->pc = 0x2DBF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf60;
        }
    }
    ctx->pc = 0x2DBF8Cu;
    // 0x2dbf8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dbf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dbf90:
    // 0x2dbf90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBF98u;
        // 0x2dbf9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBFA0u;
}
