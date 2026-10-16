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

// Function: sub_001C9010
// Address: 0x1c9010 - 0x1c9160
void sub_001C9010_0x1c9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9010_0x1c9010");
#endif

    switch (ctx->pc) {
        case 0x1c9048u: goto label_1c9048;
        case 0x1c9054u: goto label_1c9054;
        case 0x1c9064u: goto label_1c9064;
        case 0x1c9080u: goto label_1c9080;
        case 0x1c908cu: goto label_1c908c;
        case 0x1c9090u: goto label_1c9090;
        case 0x1c909cu: goto label_1c909c;
        case 0x1c90b0u: goto label_1c90b0;
        case 0x1c90c4u: goto label_1c90c4;
        case 0x1c90d8u: goto label_1c90d8;
        case 0x1c90e0u: goto label_1c90e0;
        case 0x1c90f4u: goto label_1c90f4;
        case 0x1c9110u: goto label_1c9110;
        case 0x1c9120u: goto label_1c9120;
        default: break;
    }

    ctx->pc = 0x1c9010u;

    // 0x1c9010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c9014: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c9014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c9018: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c901c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c901cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9024: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c9024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c9028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c902c: 0x8e2202a0  lw          $v0, 0x2A0($s1)
    ctx->pc = 0x1c902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1c9030: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C9030u;
    {
        const bool branch_taken_0x1c9030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9030u;
        // 0x1c9034: 0x263302c4  addiu       $s3, $s1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9030) {
            ctx->pc = 0x1C90B0u;
            goto label_1c90b0;
        }
    }
    ctx->pc = 0x1C9038u;
    // 0x1c9038: 0x263002a4  addiu       $s0, $s1, 0x2A4
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
    // 0x1c903c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9040: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c9040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9044: 0x0  nop
    ctx->pc = 0x1c9044u;
    // NOP
label_1c9048:
    // 0x1c9048: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c904c: 0xc097a26  jal         func_25E898
    ctx->pc = 0x1C904Cu;
    SET_GPR_U32(ctx, 31, 0x1C9054u);
    ctx->pc = 0x1C9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C904Cu;
    // 0x1c9050: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x1C904Cu, 0x1C9054u)) {
        return;
    }
    ctx->pc = 0x1C9054u;
label_1c9054:
    // 0x1c9054: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c905c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1C905Cu;
    SET_GPR_U32(ctx, 31, 0x1C9064u);
    ctx->pc = 0x1C9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C905Cu;
    // 0x1c9060: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1C905Cu, 0x1C9064u)) {
        return;
    }
    ctx->pc = 0x1C9064u;
label_1c9064:
    // 0x1c9064: 0x643fff8  bgezl       $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C9064u;
    {
        const bool branch_taken_0x1c9064 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c9064) {
            ctx->pc = 0x1C9068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9064u;
            // 0x1c9068: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9048;
        }
    }
    ctx->pc = 0x1C906Cu;
    // 0x1c906c: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x1c906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1c9070: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1c9070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9074: 0x8e2502b0  lw          $a1, 0x2B0($s1)
    ctx->pc = 0x1c9074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c9078: 0xc097922  jal         func_25E488
    ctx->pc = 0x1C9078u;
    SET_GPR_U32(ctx, 31, 0x1C9080u);
    ctx->pc = 0x1C907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9078u;
    // 0x1c907c: 0x261200c8  addiu       $s2, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1C9078u, 0x1C9080u)) {
        return;
    }
    ctx->pc = 0x1C9080u;
label_1c9080:
    // 0x1c9080: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x1c9080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c9084: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1C9084u;
    SET_GPR_U32(ctx, 31, 0x1C908Cu);
    ctx->pc = 0x1C9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9084u;
    // 0x1c9088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1C9084u, 0x1C908Cu)) {
        return;
    }
    ctx->pc = 0x1C908Cu;
label_1c908c:
    // 0x1c908c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c908cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9090:
    // 0x1c9090: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x1c9090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1c9094: 0xc09799a  jal         func_25E668
    ctx->pc = 0x1C9094u;
    SET_GPR_U32(ctx, 31, 0x1C909Cu);
    ctx->pc = 0x1C9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9094u;
    // 0x1c9098: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x1C9094u, 0x1C909Cu)) {
        return;
    }
    ctx->pc = 0x1C909Cu;
label_1c909c:
    // 0x1c909c: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1c909cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c90a0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C90A0u;
    {
        const bool branch_taken_0x1c90a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c90a0) {
            ctx->pc = 0x1C90A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90A0u;
            // 0x1c90a4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9090;
        }
    }
    ctx->pc = 0x1C90A8u;
    // 0x1c90a8: 0xc0971cc  jal         func_25C730
    ctx->pc = 0x1C90A8u;
    SET_GPR_U32(ctx, 31, 0x1C90B0u);
    ctx->pc = 0x1C90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90A8u;
    // 0x1c90ac: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C730u, 0x1C90A8u, 0x1C90B0u)) {
        return;
    }
    ctx->pc = 0x1C90B0u;
label_1c90b0:
    // 0x1c90b0: 0x8e2402b4  lw          $a0, 0x2B4($s1)
    ctx->pc = 0x1c90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1c90b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C90B4u;
    {
        const bool branch_taken_0x1c90b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90b4) {
            ctx->pc = 0x1C90B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90B4u;
            // 0x1c90b8: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C90C8u;
            goto label_1c90c8;
        }
    }
    ctx->pc = 0x1C90BCu;
    // 0x1c90bc: 0xc0898d2  jal         func_226348
    ctx->pc = 0x1C90BCu;
    SET_GPR_U32(ctx, 31, 0x1C90C4u);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x1C90BCu, 0x1C90C4u)) {
        return;
    }
    ctx->pc = 0x1C90C4u;
label_1c90c4:
    // 0x1c90c4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x1c90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_1c90c8:
    // 0x1c90c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90C8u;
    {
        const bool branch_taken_0x1c90c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90C8u;
        // 0x1c90cc: 0x263302c4  addiu       $s3, $s1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90c8) {
            ctx->pc = 0x1C90D8u;
            goto label_1c90d8;
        }
    }
    ctx->pc = 0x1C90D0u;
    // 0x1c90d0: 0xc089484  jal         func_225210
    ctx->pc = 0x1C90D0u;
    SET_GPR_U32(ctx, 31, 0x1C90D8u);
    ctx->pc = 0x225210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225210u, 0x1C90D0u, 0x1C90D8u)) {
        return;
    }
    ctx->pc = 0x1C90D8u;
label_1c90d8:
    // 0x1c90d8: 0x263002a4  addiu       $s0, $s1, 0x2A4
    ctx->pc = 0x1c90d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
    // 0x1c90dc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c90dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c90e0:
    // 0x1c90e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c90e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C90E4u;
    {
        const bool branch_taken_0x1c90e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90E4u;
        // 0x1c90e8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90e4) {
            ctx->pc = 0x1C90F8u;
            goto label_1c90f8;
        }
    }
    ctx->pc = 0x1C90ECu;
    // 0x1c90ec: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x1C90ECu;
    SET_GPR_U32(ctx, 31, 0x1C90F4u);
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x1C90ECu, 0x1C90F4u)) {
        return;
    }
    ctx->pc = 0x1C90F4u;
label_1c90f4:
    // 0x1c90f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c90f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c90f8:
    // 0x1c90f8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C90F8u;
    {
        const bool branch_taken_0x1c90f8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F8u;
        // 0x1c90fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f8) {
            ctx->pc = 0x1C90E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c90e0;
        }
    }
    ctx->pc = 0x1C9100u;
    // 0x1c9100: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1c9100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9104: 0x261200c8  addiu       $s2, $s0, 0xC8
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x1c9108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c910c: 0x0  nop
    ctx->pc = 0x1c910cu;
    // NOP
label_1c9110:
    // 0x1c9110: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9110u;
    {
        const bool branch_taken_0x1c9110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9110) {
            ctx->pc = 0x1C9114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9110u;
            // 0x1c9114: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9128u;
            goto label_1c9128;
        }
    }
    ctx->pc = 0x1C9118u;
    // 0x1c9118: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x1C9118u;
    SET_GPR_U32(ctx, 31, 0x1C9120u);
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x1C9118u, 0x1C9120u)) {
        return;
    }
    ctx->pc = 0x1C9120u;
label_1c9120:
    // 0x1c9120: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c9120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c9124: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x1c9124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1c9128:
    // 0x1c9128: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1c9128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c912c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C912Cu;
    {
        const bool branch_taken_0x1c912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c912c) {
            ctx->pc = 0x1C9130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C912Cu;
            // 0x1c9130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9110;
        }
    }
    ctx->pc = 0x1C9134u;
    // 0x1c9134: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x1c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x1c9138: 0xae2002a0  sw          $zero, 0x2A0($s1)
    ctx->pc = 0x1c9138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 0));
    // 0x1c913c: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x1c913cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
    // 0x1c9140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c9140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c9144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c914c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c914cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9154: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9154u;
        // 0x1c9158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C915Cu;
    // 0x1c915c: 0x0  nop
    ctx->pc = 0x1c915cu;
    // NOP
    ctx->pc = 0x1c9160u;
}
