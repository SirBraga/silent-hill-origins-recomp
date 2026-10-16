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

// Function: sub_0030ABD8
// Address: 0x30abd8 - 0x30ada8
void sub_0030ABD8_0x30abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ABD8_0x30abd8");
#endif

    switch (ctx->pc) {
        case 0x30ac08u: goto label_30ac08;
        case 0x30ac34u: goto label_30ac34;
        case 0x30ac48u: goto label_30ac48;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac70u: goto label_30ac70;
        case 0x30ac94u: goto label_30ac94;
        case 0x30acb0u: goto label_30acb0;
        case 0x30acccu: goto label_30accc;
        case 0x30ace4u: goto label_30ace4;
        case 0x30ad00u: goto label_30ad00;
        case 0x30ad1cu: goto label_30ad1c;
        case 0x30ad38u: goto label_30ad38;
        default: break;
    }

    ctx->pc = 0x30abd8u;

    // 0x30abd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30abdc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30abe0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x30abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x30abe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30abe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abe8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30abec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30abecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30abf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30abf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30abf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30abf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30abfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ac00: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30AC00u;
    SET_GPR_U32(ctx, 31, 0x30AC08u);
    ctx->pc = 0x30AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC00u;
    // 0x30ac04: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30AC00u, 0x30AC08u)) {
        return;
    }
    ctx->pc = 0x30AC08u;
label_30ac08:
    // 0x30ac08: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x30AC08u;
    {
        const bool branch_taken_0x30ac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC08u;
        // 0x30ac0c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac08) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC10u;
    // 0x30ac10: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30ac14: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30ac18: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x30AC18u;
    {
        const bool branch_taken_0x30ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC18u;
        // 0x30ac1c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac18) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC20u;
    // 0x30ac20: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x30AC20u;
    {
        const bool branch_taken_0x30ac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC20u;
        // 0x30ac24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac20) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC28u;
    // 0x30ac28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ac2c: 0xc092796  jal         func_249E58
    ctx->pc = 0x30AC2Cu;
    SET_GPR_U32(ctx, 31, 0x30AC34u);
    ctx->pc = 0x30AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC2Cu;
    // 0x30ac30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30AC2Cu, 0x30AC34u)) {
        return;
    }
    ctx->pc = 0x30AC34u;
label_30ac34:
    // 0x30ac34: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x30AC34u;
    {
        const bool branch_taken_0x30ac34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC34u;
        // 0x30ac38: 0x37a50002  ori         $a1, $sp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac34) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC3Cu;
    // 0x30ac3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ac40: 0xc092796  jal         func_249E58
    ctx->pc = 0x30AC40u;
    SET_GPR_U32(ctx, 31, 0x30AC48u);
    ctx->pc = 0x30AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC40u;
    // 0x30ac44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30AC40u, 0x30AC48u)) {
        return;
    }
    ctx->pc = 0x30AC48u;
label_30ac48:
    // 0x30ac48: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x30AC48u;
    {
        const bool branch_taken_0x30ac48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC48u;
        // 0x30ac4c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac48) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC50u;
    // 0x30ac50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ac54: 0xc092796  jal         func_249E58
    ctx->pc = 0x30AC54u;
    SET_GPR_U32(ctx, 31, 0x30AC5Cu);
    ctx->pc = 0x30AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC54u;
    // 0x30ac58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30AC54u, 0x30AC5Cu)) {
        return;
    }
    ctx->pc = 0x30AC5Cu;
label_30ac5c:
    // 0x30ac5c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x30AC5Cu;
    {
        const bool branch_taken_0x30ac5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC5Cu;
        // 0x30ac60: 0x97a50002  lhu         $a1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac5c) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC64u;
    // 0x30ac64: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x30ac64u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30ac68: 0xc0c3eca  jal         func_30FB28
    ctx->pc = 0x30AC68u;
    SET_GPR_U32(ctx, 31, 0x30AC70u);
    ctx->pc = 0x30AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC68u;
    // 0x30ac6c: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30FB28u, 0x30AC68u, 0x30AC70u)) {
        return;
    }
    ctx->pc = 0x30AC70u;
label_30ac70:
    // 0x30ac70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ac70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac74: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30AC74u;
    {
        const bool branch_taken_0x30ac74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC74u;
        // 0x30ac78: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac74) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC7Cu;
    // 0x30ac7c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x30ac7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30ac80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ac84: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30ac84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30ac88: 0x3012  mflo        $a2
    ctx->pc = 0x30ac88u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30ac8c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30AC8Cu;
    SET_GPR_U32(ctx, 31, 0x30AC94u);
    ctx->pc = 0x30AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC8Cu;
    // 0x30ac90: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30AC8Cu, 0x30AC94u)) {
        return;
    }
    ctx->pc = 0x30AC94u;
label_30ac94:
    // 0x30ac94: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x30AC94u;
    {
        const bool branch_taken_0x30ac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC94u;
        // 0x30ac98: 0x97a60004  lhu         $a2, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac94) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AC9Cu;
    // 0x30ac9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30aca0: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30aca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30aca4: 0x3012  mflo        $a2
    ctx->pc = 0x30aca4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30aca8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30ACA8u;
    SET_GPR_U32(ctx, 31, 0x30ACB0u);
    ctx->pc = 0x30ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACA8u;
    // 0x30acac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30ACA8u, 0x30ACB0u)) {
        return;
    }
    ctx->pc = 0x30ACB0u;
label_30acb0:
    // 0x30acb0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30ACB0u;
    {
        const bool branch_taken_0x30acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACB0u;
        // 0x30acb4: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acb0) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30ACB8u;
    // 0x30acb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30acbc: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30acbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30acc0: 0x3012  mflo        $a2
    ctx->pc = 0x30acc0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30acc4: 0xc092796  jal         func_249E58
    ctx->pc = 0x30ACC4u;
    SET_GPR_U32(ctx, 31, 0x30ACCCu);
    ctx->pc = 0x30ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACC4u;
    // 0x30acc8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30ACC4u, 0x30ACCCu)) {
        return;
    }
    ctx->pc = 0x30ACCCu;
label_30accc:
    // 0x30accc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30ACCCu;
    {
        const bool branch_taken_0x30accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACCCu;
        // 0x30acd0: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30accc) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30ACD4u;
    // 0x30acd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30acd8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x30acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30acdc: 0xc092796  jal         func_249E58
    ctx->pc = 0x30ACDCu;
    SET_GPR_U32(ctx, 31, 0x30ACE4u);
    ctx->pc = 0x30ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACDCu;
    // 0x30ace0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30ACDCu, 0x30ACE4u)) {
        return;
    }
    ctx->pc = 0x30ACE4u;
label_30ace4:
    // 0x30ace4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30ACE4u;
    {
        const bool branch_taken_0x30ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACE4u;
        // 0x30ace8: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ace4) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30ACECu;
    // 0x30acec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30acecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30acf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30acf4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x30acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30acf8: 0xc092796  jal         func_249E58
    ctx->pc = 0x30ACF8u;
    SET_GPR_U32(ctx, 31, 0x30AD00u);
    ctx->pc = 0x30ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACF8u;
    // 0x30acfc: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30ACF8u, 0x30AD00u)) {
        return;
    }
    ctx->pc = 0x30AD00u;
label_30ad00:
    // 0x30ad00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AD00u;
    {
        const bool branch_taken_0x30ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD00u;
        // 0x30ad04: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad00) {
            ctx->pc = 0x30AD28u;
            goto label_30ad28;
        }
    }
    ctx->pc = 0x30AD08u;
    // 0x30ad08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ad0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30ad10: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30ad14: 0xc092796  jal         func_249E58
    ctx->pc = 0x30AD14u;
    SET_GPR_U32(ctx, 31, 0x30AD1Cu);
    ctx->pc = 0x30AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD14u;
    // 0x30ad18: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30AD14u, 0x30AD1Cu)) {
        return;
    }
    ctx->pc = 0x30AD1Cu;
label_30ad1c:
    // 0x30ad1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AD1Cu;
    {
        const bool branch_taken_0x30ad1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ad1c) {
            ctx->pc = 0x30AD30u;
            goto label_30ad30;
        }
    }
    ctx->pc = 0x30AD24u;
    // 0x30ad24: 0x0  nop
    ctx->pc = 0x30ad24u;
    // NOP
label_30ad28:
    // 0x30ad28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30AD28u;
    {
        const bool branch_taken_0x30ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD28u;
        // 0x30ad2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad28) {
            ctx->pc = 0x30AD88u;
            goto label_30ad88;
        }
    }
    ctx->pc = 0x30AD30u;
label_30ad30:
    // 0x30ad30: 0xc0c3f1a  jal         func_30FC68
    ctx->pc = 0x30AD30u;
    SET_GPR_U32(ctx, 31, 0x30AD38u);
    ctx->pc = 0x30AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD30u;
    // 0x30ad34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30FC68u, 0x30AD30u, 0x30AD38u)) {
        return;
    }
    ctx->pc = 0x30AD38u;
label_30ad38:
    // 0x30ad38: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30AD38u;
    {
        const bool branch_taken_0x30ad38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD38u;
        // 0x30ad3c: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad38) {
            ctx->pc = 0x30AD84u;
            goto label_30ad84;
        }
    }
    ctx->pc = 0x30AD40u;
    // 0x30ad40: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x30ad40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x30ad44: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x30ad44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ad48: 0x97a70004  lhu         $a3, 0x4($sp)
    ctx->pc = 0x30ad48u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30ad4c: 0x923018  mult        $a2, $a0, $s2
    ctx->pc = 0x30ad4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30ad50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x30ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30ad54: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ad58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30ad5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ad60: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x30ad60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30ad64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x30ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x30ad68: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x30ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x30ad6c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30ad70: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30ad74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30ad78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30ad7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30ad80: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x30ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_30ad84:
    // 0x30ad84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ad88:
    // 0x30ad88: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30ad88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ad8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30ad8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ad90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30ad90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ad94: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x30ad94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ad98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD9Cu;
        // 0x30ada0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ADA4u;
    // 0x30ada4: 0x0  nop
    ctx->pc = 0x30ada4u;
    // NOP
    ctx->pc = 0x30ada8u;
}
