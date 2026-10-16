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

// Function: sub_001B8FE8
// Address: 0x1b8fe8 - 0x1b90d8
void sub_001B8FE8_0x1b8fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8FE8_0x1b8fe8");
#endif

    switch (ctx->pc) {
        case 0x1b9020u: goto label_1b9020;
        case 0x1b9038u: goto label_1b9038;
        case 0x1b9058u: goto label_1b9058;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b90bcu: goto label_1b90bc;
        default: break;
    }

    ctx->pc = 0x1b8fe8u;

    // 0x1b8fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8fec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b8ff0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b8ff4: 0x2442ce68  addiu       $v0, $v0, -0x3198
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954600));
    // 0x1b8ff8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b8ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b9000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b9004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9008: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1b9008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1b900c: 0x8e2402a8  lw          $a0, 0x2A8($s1)
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1b9010: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9010u;
    {
        const bool branch_taken_0x1b9010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9010u;
        // 0x1b9014: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9010) {
            ctx->pc = 0x1B9024u;
            goto label_1b9024;
        }
    }
    ctx->pc = 0x1B9018u;
    // 0x1b9018: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B9018u;
    SET_GPR_U32(ctx, 31, 0x1B9020u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B9018u, 0x1B9020u)) {
        return;
    }
    ctx->pc = 0x1B9020u;
label_1b9020:
    // 0x1b9020: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x1b9020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
label_1b9024:
    // 0x1b9024: 0x8e2402ac  lw          $a0, 0x2AC($s1)
    ctx->pc = 0x1b9024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x1b9028: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9028u;
    {
        const bool branch_taken_0x1b9028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9028u;
        // 0x1b902c: 0x26300318  addiu       $s0, $s1, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9028) {
            ctx->pc = 0x1B903Cu;
            goto label_1b903c;
        }
    }
    ctx->pc = 0x1B9030u;
    // 0x1b9030: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B9030u;
    SET_GPR_U32(ctx, 31, 0x1B9038u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B9030u, 0x1B9038u)) {
        return;
    }
    ctx->pc = 0x1B9038u;
label_1b9038:
    // 0x1b9038: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x1b9038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
label_1b903c:
    // 0x1b903c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b9040: 0x2442cd58  addiu       $v0, $v0, -0x32A8
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954328));
    // 0x1b9044: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b9048: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B9048u;
    {
        const bool branch_taken_0x1b9048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9048u;
        // 0x1b904c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9048) {
            ctx->pc = 0x1B90B0u;
            goto label_1b90b0;
        }
    }
    ctx->pc = 0x1B9050u;
    // 0x1b9050: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b9054: 0x0  nop
    ctx->pc = 0x1b9054u;
    // NOP
label_1b9058:
    // 0x1b9058: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B9058u;
    {
        const bool branch_taken_0x1b9058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9058) {
            ctx->pc = 0x1B905Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9058u;
            // 0x1b905c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B90A8u;
            goto label_1b90a8;
        }
    }
    ctx->pc = 0x1B9060u;
    // 0x1b9060: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b9064: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9064u;
    {
        const bool branch_taken_0x1b9064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9064u;
        // 0x1b9068: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9064) {
            ctx->pc = 0x1B9074u;
            goto label_1b9074;
        }
    }
    ctx->pc = 0x1B906Cu;
    // 0x1b906c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B906Cu;
    {
        const bool branch_taken_0x1b906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B906Cu;
        // 0x1b9070: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b906c) {
            ctx->pc = 0x1B9078u;
            goto label_1b9078;
        }
    }
    ctx->pc = 0x1B9074u;
label_1b9074:
    // 0x1b9074: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b9074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b9078:
    // 0x1b9078: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b9078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b907c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B907Cu;
    {
        const bool branch_taken_0x1b907c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B907Cu;
        // 0x1b9080: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b907c) {
            ctx->pc = 0x1B908Cu;
            goto label_1b908c;
        }
    }
    ctx->pc = 0x1B9084u;
    // 0x1b9084: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9084u;
    {
        const bool branch_taken_0x1b9084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9084u;
        // 0x1b9088: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9084) {
            ctx->pc = 0x1B9090u;
            goto label_1b9090;
        }
    }
    ctx->pc = 0x1B908Cu;
label_1b908c:
    // 0x1b908c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b908cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b9090:
    // 0x1b9090: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B9090u;
    SET_GPR_U32(ctx, 31, 0x1B9098u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B9090u, 0x1B9098u)) {
        return;
    }
    ctx->pc = 0x1B9098u;
label_1b9098:
    // 0x1b9098: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b909c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b90a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b90a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b90a8:
    // 0x1b90a8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B90A8u;
    {
        const bool branch_taken_0x1b90a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b90a8) {
            ctx->pc = 0x1B90ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B90A8u;
            // 0x1b90ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9058;
        }
    }
    ctx->pc = 0x1B90B0u;
label_1b90b0:
    // 0x1b90b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b90b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90b4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1B90B4u;
    SET_GPR_U32(ctx, 31, 0x1B90BCu);
    ctx->pc = 0x1B90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90B4u;
    // 0x1b90b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B90B4u, 0x1B90BCu)) {
        return;
    }
    ctx->pc = 0x1B90BCu;
label_1b90bc:
    // 0x1b90bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b90bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b90c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b90c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b90c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b90c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b90c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b90c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b90cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B90CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B90CCu;
        // 0x1b90d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B90CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B90D4u;
    // 0x1b90d4: 0x0  nop
    ctx->pc = 0x1b90d4u;
    // NOP
    ctx->pc = 0x1b90d8u;
}
