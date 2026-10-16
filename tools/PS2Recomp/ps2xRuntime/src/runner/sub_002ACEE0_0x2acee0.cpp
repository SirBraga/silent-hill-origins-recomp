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

// Function: sub_002ACEE0
// Address: 0x2acee0 - 0x2ad018
void sub_002ACEE0_0x2acee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACEE0_0x2acee0");
#endif

    switch (ctx->pc) {
        case 0x2acf18u: goto label_2acf18;
        case 0x2acf50u: goto label_2acf50;
        case 0x2acf8cu: goto label_2acf8c;
        case 0x2acfa0u: goto label_2acfa0;
        default: break;
    }

    ctx->pc = 0x2acee0u;

    // 0x2acee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2acee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2acee4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2acee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2acee8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2acee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2aceec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2acef0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2acef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acef4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2acef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2acef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2acef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acefc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2acf00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2acf00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2acf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2acf08: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2acf08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acf0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acf10: 0xc0adf32  jal         func_2B7CC8
    ctx->pc = 0x2ACF10u;
    SET_GPR_U32(ctx, 31, 0x2ACF18u);
    ctx->pc = 0x2ACF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF10u;
    // 0x2acf14: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7CC8u, 0x2ACF10u, 0x2ACF18u)) {
        return;
    }
    ctx->pc = 0x2ACF18u;
label_2acf18:
    // 0x2acf18: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2acf18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2acf1c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2acf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2acf20: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2acf20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2acf24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2acf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2acf28: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2acf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2acf2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2acf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2acf30: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x2acf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2acf34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2acf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acf38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acf3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACF3Cu;
    {
        const bool branch_taken_0x2acf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF3Cu;
        // 0x2acf40: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf3c) {
            ctx->pc = 0x2ACF54u;
            goto label_2acf54;
        }
    }
    ctx->pc = 0x2ACF44u;
    // 0x2acf44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acf48: 0xc0adf12  jal         func_2B7C48
    ctx->pc = 0x2ACF48u;
    SET_GPR_U32(ctx, 31, 0x2ACF50u);
    ctx->pc = 0x2ACF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF48u;
    // 0x2acf4c: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7C48u, 0x2ACF48u, 0x2ACF50u)) {
        return;
    }
    ctx->pc = 0x2ACF50u;
label_2acf50:
    // 0x2acf50: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2acf50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2acf54:
    // 0x2acf54: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2acf54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2acf58: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2acf5c: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2acf60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2acf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2acf64: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2acf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2acf68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2acf6c: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x2acf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2acf70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acf74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2acf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2acf78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACF78u;
    {
        const bool branch_taken_0x2acf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acf78) {
            ctx->pc = 0x2ACF8Cu;
            goto label_2acf8c;
        }
    }
    ctx->pc = 0x2ACF80u;
    // 0x2acf80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acf84: 0xc0adcce  jal         func_2B7338
    ctx->pc = 0x2ACF84u;
    SET_GPR_U32(ctx, 31, 0x2ACF8Cu);
    ctx->pc = 0x2ACF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF84u;
    // 0x2acf88: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7338u, 0x2ACF84u, 0x2ACF8Cu)) {
        return;
    }
    ctx->pc = 0x2ACF8Cu;
label_2acf8c:
    // 0x2acf8c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2ACF8Cu;
    {
        const bool branch_taken_0x2acf8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF8Cu;
        // 0x2acf90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf8c) {
            ctx->pc = 0x2ACFCCu;
            goto label_2acfcc;
        }
    }
    ctx->pc = 0x2ACF94u;
    // 0x2acf94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2acf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2acf98: 0xc0adc58  jal         func_2B7160
    ctx->pc = 0x2ACF98u;
    SET_GPR_U32(ctx, 31, 0x2ACFA0u);
    ctx->pc = 0x2ACF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF98u;
    // 0x2acf9c: 0x96050020  lhu         $a1, 0x20($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B7160u, 0x2ACF98u, 0x2ACFA0u)) {
        return;
    }
    ctx->pc = 0x2ACFA0u;
label_2acfa0:
    // 0x2acfa0: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2acfa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2acfa4: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2acfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2acfa8: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x2acfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2acfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2acfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2acfb0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2acfb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2acfb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2acfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2acfb8: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x2acfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2acfbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2acfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acfc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2acfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2acfc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ACFC4u;
    {
        const bool branch_taken_0x2acfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFC4u;
        // 0x2acfc8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfc4) {
            ctx->pc = 0x2ACFF8u;
            goto label_2acff8;
        }
    }
    ctx->pc = 0x2ACFCCu;
label_2acfcc:
    // 0x2acfcc: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x2acfccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2acfd0: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2acfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2acfd4: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2acfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2acfd8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2acfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2acfdc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2acfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2acfe0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2acfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acfe4: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x2acfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x2acfe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acfec: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2acfecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2acff0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2acff4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2acff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2acff8:
    // 0x2acff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2acff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acffc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2acffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad000: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ad000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad004: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ad004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ad008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad00c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad010: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD010u;
        // 0x2ad014: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD018u;
}
