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

// Function: sub_0018DAC0
// Address: 0x18dac0 - 0x18dba8
void sub_0018DAC0_0x18dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DAC0_0x18dac0");
#endif

    switch (ctx->pc) {
        case 0x18daf4u: goto label_18daf4;
        case 0x18db10u: goto label_18db10;
        case 0x18db28u: goto label_18db28;
        case 0x18db58u: goto label_18db58;
        case 0x18db70u: goto label_18db70;
        default: break;
    }

    ctx->pc = 0x18dac0u;

    // 0x18dac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18dac4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18dac8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18dacc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18daccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dad0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18dad4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18dad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dad8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18dadc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18dae0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DAE0u;
    {
        const bool branch_taken_0x18dae0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAE0u;
        // 0x18dae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dae0) {
            ctx->pc = 0x18DAFCu;
            goto label_18dafc;
        }
    }
    ctx->pc = 0x18DAE8u;
    // 0x18dae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18daec: 0xc065c40  jal         func_197100
    ctx->pc = 0x18DAECu;
    SET_GPR_U32(ctx, 31, 0x18DAF4u);
    ctx->pc = 0x18DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAECu;
    // 0x18daf0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18DAECu, 0x18DAF4u)) {
        return;
    }
    ctx->pc = 0x18DAF4u;
label_18daf4:
    // 0x18daf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DAF4u;
    {
        const bool branch_taken_0x18daf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF4u;
        // 0x18daf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daf4) {
            ctx->pc = 0x18DB00u;
            goto label_18db00;
        }
    }
    ctx->pc = 0x18DAFCu;
label_18dafc:
    // 0x18dafc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18dafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18db00:
    // 0x18db00: 0x8e900040  lw          $s0, 0x40($s4)
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x18db04: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18DB04u;
    {
        const bool branch_taken_0x18db04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB04u;
        // 0x18db08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db04) {
            ctx->pc = 0x18DB3Cu;
            goto label_18db3c;
        }
    }
    ctx->pc = 0x18DB0Cu;
    // 0x18db0c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18db10:
    // 0x18db10: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18db14: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DB14u;
    {
        const bool branch_taken_0x18db14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18db14) {
            ctx->pc = 0x18DB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB14u;
            // 0x18db18: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB34u;
            goto label_18db34;
        }
    }
    ctx->pc = 0x18DB1Cu;
    // 0x18db1c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x18db20: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18DB20u;
    SET_GPR_U32(ctx, 31, 0x18DB28u);
    ctx->pc = 0x18DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB20u;
    // 0x18db24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18DB20u, 0x18DB28u)) {
        return;
    }
    ctx->pc = 0x18DB28u;
label_18db28:
    // 0x18db28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB28u;
    {
        const bool branch_taken_0x18db28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db28) {
            ctx->pc = 0x18DB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB28u;
            // 0x18db2c: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB3Cu;
            goto label_18db3c;
        }
    }
    ctx->pc = 0x18DB30u;
    // 0x18db30: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18db34:
    // 0x18db34: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18DB34u;
    {
        const bool branch_taken_0x18db34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db34) {
            ctx->pc = 0x18DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB34u;
            // 0x18db38: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18db10;
        }
    }
    ctx->pc = 0x18DB3Cu;
label_18db3c:
    // 0x18db3c: 0x16600012  bnez        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x18DB3Cu;
    {
        const bool branch_taken_0x18db3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB3Cu;
        // 0x18db40: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db3c) {
            ctx->pc = 0x18DB88u;
            goto label_18db88;
        }
    }
    ctx->pc = 0x18DB44u;
    // 0x18db44: 0x8e900050  lw          $s0, 0x50($s4)
    ctx->pc = 0x18db44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x18db48: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18DB48u;
    {
        const bool branch_taken_0x18db48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db48) {
            ctx->pc = 0x18DB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB48u;
            // 0x18db4c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB8Cu;
            goto label_18db8c;
        }
    }
    ctx->pc = 0x18DB50u;
    // 0x18db50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18db54: 0x0  nop
    ctx->pc = 0x18db54u;
    // NOP
label_18db58:
    // 0x18db58: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18db5c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DB5Cu;
    {
        const bool branch_taken_0x18db5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18db5c) {
            ctx->pc = 0x18DB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB5Cu;
            // 0x18db60: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB7Cu;
            goto label_18db7c;
        }
    }
    ctx->pc = 0x18DB64u;
    // 0x18db64: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x18db68: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18DB68u;
    SET_GPR_U32(ctx, 31, 0x18DB70u);
    ctx->pc = 0x18DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB68u;
    // 0x18db6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18DB68u, 0x18DB70u)) {
        return;
    }
    ctx->pc = 0x18DB70u;
label_18db70:
    // 0x18db70: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DB70u;
    {
        const bool branch_taken_0x18db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db70) {
            ctx->pc = 0x18DB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB70u;
            // 0x18db74: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB84u;
            goto label_18db84;
        }
    }
    ctx->pc = 0x18DB78u;
    // 0x18db78: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18db7c:
    // 0x18db7c: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18DB7Cu;
    {
        const bool branch_taken_0x18db7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db7c) {
            ctx->pc = 0x18DB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB7Cu;
            // 0x18db80: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18db58;
        }
    }
    ctx->pc = 0x18DB84u;
label_18db84:
    // 0x18db84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x18db84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18db88:
    // 0x18db88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18db88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18db8c:
    // 0x18db8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18db8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18db90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18db90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18db94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18db94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18db98: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18db98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18db9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18db9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x18DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBA0u;
        // 0x18dba4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DBA8u;
}
