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

// Function: sub_001CBED8
// Address: 0x1cbed8 - 0x1cc080
void sub_001CBED8_0x1cbed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBED8_0x1cbed8");
#endif

    switch (ctx->pc) {
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc058u: goto label_1cc058;
        default: break;
    }

    ctx->pc = 0x1cbed8u;

    // 0x1cbed8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cbedc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cbee0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1cbee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1cbee4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1cbee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbeec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cbef0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1cbef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1cbef4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1cbef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1cbef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbefc: 0xc0731c4  jal         func_1CC710
    ctx->pc = 0x1CBEFCu;
    SET_GPR_U32(ctx, 31, 0x1CBF04u);
    ctx->pc = 0x1CBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBEFCu;
    // 0x1cbf00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC710u, 0x1CBEFCu, 0x1CBF04u)) {
        return;
    }
    ctx->pc = 0x1CBF04u;
label_1cbf04:
    // 0x1cbf04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBF04u;
    {
        const bool branch_taken_0x1cbf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF04u;
        // 0x1cbf08: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf04) {
            ctx->pc = 0x1CBF14u;
            goto label_1cbf14;
        }
    }
    ctx->pc = 0x1CBF0Cu;
    // 0x1cbf0c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1CBF0Cu;
    {
        const bool branch_taken_0x1cbf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF0Cu;
        // 0x1cbf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf0c) {
            ctx->pc = 0x1CC05Cu;
            goto label_1cc05c;
        }
    }
    ctx->pc = 0x1CBF14u;
label_1cbf14:
    // 0x1cbf14: 0x26130274  addiu       $s3, $s0, 0x274
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x1cbf18: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1cbf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbf24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf28: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cbf2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf30: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1cbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1cbf34: 0x2632ffff  addiu       $s2, $s1, -0x1
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1cbf38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cbf3c: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CBF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF44u);
    ctx->pc = 0x1CBF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF3Cu;
    // 0x1cbf40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CBF3Cu, 0x1CBF44u)) {
        return;
    }
    ctx->pc = 0x1CBF44u;
label_1cbf44:
    // 0x1cbf44: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1cbf44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cbf48: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CBF48u;
    {
        const bool branch_taken_0x1cbf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF48u;
        // 0x1cbf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf48) {
            ctx->pc = 0x1CBFD0u;
            goto label_1cbfd0;
        }
    }
    ctx->pc = 0x1CBF50u;
    // 0x1cbf50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cbf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf54: 0xc0731c4  jal         func_1CC710
    ctx->pc = 0x1CBF54u;
    SET_GPR_U32(ctx, 31, 0x1CBF5Cu);
    ctx->pc = 0x1CBF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF54u;
    // 0x1cbf58: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC710u, 0x1CBF54u, 0x1CBF5Cu)) {
        return;
    }
    ctx->pc = 0x1CBF5Cu;
label_1cbf5c:
    // 0x1cbf5c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CBF5Cu;
    {
        const bool branch_taken_0x1cbf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF5Cu;
        // 0x1cbf60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf5c) {
            ctx->pc = 0x1CC034u;
            goto label_1cc034;
        }
    }
    ctx->pc = 0x1CBF64u;
    // 0x1cbf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf6c: 0xc0731c4  jal         func_1CC710
    ctx->pc = 0x1CBF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF74u);
    ctx->pc = 0x1CBF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF6Cu;
    // 0x1cbf70: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC710u, 0x1CBF6Cu, 0x1CBF74u)) {
        return;
    }
    ctx->pc = 0x1CBF74u;
label_1cbf74:
    // 0x1cbf74: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CBF74u;
    {
        const bool branch_taken_0x1cbf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF74u;
        // 0x1cbf78: 0x124080  sll         $t0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf74) {
            ctx->pc = 0x1CC034u;
            goto label_1cc034;
        }
    }
    ctx->pc = 0x1CBF7Cu;
    // 0x1cbf7c: 0x114880  sll         $t1, $s1, 2
    ctx->pc = 0x1cbf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1cbf80: 0x2684021  addu        $t0, $s3, $t0
    ctx->pc = 0x1cbf80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1cbf84: 0x2694821  addu        $t1, $s3, $t1
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x1cbf88: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cbf8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf94: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1cbf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cbf98: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x1cbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x1cbf9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbf9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfa0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1cbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1cbfa4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1cbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cbfa8: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x1cbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x1cbfac: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CBFACu;
    SET_GPR_U32(ctx, 31, 0x1CBFB4u);
    ctx->pc = 0x1CBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFACu;
    // 0x1cbfb0: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CBFACu, 0x1CBFB4u)) {
        return;
    }
    ctx->pc = 0x1CBFB4u;
label_1cbfb4:
    // 0x1cbfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfbc: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1cbfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cbfc0: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CBFC0u;
    SET_GPR_U32(ctx, 31, 0x1CBFC8u);
    ctx->pc = 0x1CBFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFC0u;
    // 0x1cbfc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CBFC0u, 0x1CBFC8u)) {
        return;
    }
    ctx->pc = 0x1CBFC8u;
label_1cbfc8:
    // 0x1cbfc8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CBFC8u;
    {
        const bool branch_taken_0x1cbfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFC8u;
        // 0x1cbfcc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfc8) {
            ctx->pc = 0x1CC05Cu;
            goto label_1cc05c;
        }
    }
    ctx->pc = 0x1CBFD0u;
label_1cbfd0:
    // 0x1cbfd0: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBFD0u;
    {
        const bool branch_taken_0x1cbfd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFD0u;
        // 0x1cbfd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfd0) {
            ctx->pc = 0x1CC014u;
            goto label_1cc014;
        }
    }
    ctx->pc = 0x1CBFD8u;
    // 0x1cbfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbfe0: 0xc0731c4  jal         func_1CC710
    ctx->pc = 0x1CBFE0u;
    SET_GPR_U32(ctx, 31, 0x1CBFE8u);
    ctx->pc = 0x1CBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFE0u;
    // 0x1cbfe4: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC710u, 0x1CBFE0u, 0x1CBFE8u)) {
        return;
    }
    ctx->pc = 0x1CBFE8u;
label_1cbfe8:
    // 0x1cbfe8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CBFE8u;
    {
        const bool branch_taken_0x1cbfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFE8u;
        // 0x1cbfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfe8) {
            ctx->pc = 0x1CC034u;
            goto label_1cc034;
        }
    }
    ctx->pc = 0x1CBFF0u;
    // 0x1cbff0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cbff4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbff8: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cbffc: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x1cc000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc004: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC004u;
    SET_GPR_U32(ctx, 31, 0x1CC00Cu);
    ctx->pc = 0x1CC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC004u;
    // 0x1cc008: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC004u, 0x1CC00Cu)) {
        return;
    }
    ctx->pc = 0x1CC00Cu;
label_1cc00c:
    // 0x1cc00c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CC00Cu;
    {
        const bool branch_taken_0x1cc00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC00Cu;
        // 0x1cc010: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc00c) {
            ctx->pc = 0x1CC05Cu;
            goto label_1cc05c;
        }
    }
    ctx->pc = 0x1CC014u;
label_1cc014:
    // 0x1cc014: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC014u;
    {
        const bool branch_taken_0x1cc014 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC014u;
        // 0x1cc018: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc014) {
            ctx->pc = 0x1CC05Cu;
            goto label_1cc05c;
        }
    }
    ctx->pc = 0x1CC01Cu;
    // 0x1cc01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc020: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc024: 0xc0731c4  jal         func_1CC710
    ctx->pc = 0x1CC024u;
    SET_GPR_U32(ctx, 31, 0x1CC02Cu);
    ctx->pc = 0x1CC028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC024u;
    // 0x1cc028: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC710u, 0x1CC024u, 0x1CC02Cu)) {
        return;
    }
    ctx->pc = 0x1CC02Cu;
label_1cc02c:
    // 0x1cc02c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC02Cu;
    {
        const bool branch_taken_0x1cc02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc02c) {
            ctx->pc = 0x1CC030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC02Cu;
            // 0x1cc030: 0x8e020280  lw          $v0, 0x280($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC03Cu;
            goto label_1cc03c;
        }
    }
    ctx->pc = 0x1CC034u;
label_1cc034:
    // 0x1cc034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC034u;
    {
        const bool branch_taken_0x1cc034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC034u;
        // 0x1cc038: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc034) {
            ctx->pc = 0x1CC058u;
            goto label_1cc058;
        }
    }
    ctx->pc = 0x1CC03Cu;
label_1cc03c:
    // 0x1cc03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc040: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc044: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1cc044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cc048: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x1cc048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x1cc04c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc050: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC050u;
    SET_GPR_U32(ctx, 31, 0x1CC058u);
    ctx->pc = 0x1CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC050u;
    // 0x1cc054: 0xae020280  sw          $v0, 0x280($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC050u, 0x1CC058u)) {
        return;
    }
    ctx->pc = 0x1CC058u;
label_1cc058:
    // 0x1cc058: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1cc058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc05c:
    // 0x1cc05c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cc05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc060: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cc060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc064: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cc064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc068: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1cc068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc06c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1cc06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc074: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC074u;
        // 0x1cc078: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC07Cu;
    // 0x1cc07c: 0x0  nop
    ctx->pc = 0x1cc07cu;
    // NOP
    ctx->pc = 0x1cc080u;
}
