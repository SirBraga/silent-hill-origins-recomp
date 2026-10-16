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

// Function: sub_0031E958
// Address: 0x31e958 - 0x31eda0
void sub_0031E958_0x31e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E958_0x31e958");
#endif

    switch (ctx->pc) {
        case 0x31e9fcu: goto label_31e9fc;
        case 0x31ea0cu: goto label_31ea0c;
        case 0x31ea18u: goto label_31ea18;
        case 0x31ea70u: goto label_31ea70;
        case 0x31ea98u: goto label_31ea98;
        case 0x31eae8u: goto label_31eae8;
        case 0x31eb18u: goto label_31eb18;
        case 0x31ebe8u: goto label_31ebe8;
        case 0x31ec78u: goto label_31ec78;
        default: break;
    }

    ctx->pc = 0x31e958u;

    // 0x31e958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31e95c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31e960: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31e964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e968: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31e968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e96c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31e970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e974: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31e974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e978: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x31e978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e97c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x31e97cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x31e980: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x31e980u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e984: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x31e984u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e988: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31e988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e98c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x31e98cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e990: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x31e990u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x31e994: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x31e994u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e998: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x31e998u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e99c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e9a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x31e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x31e9a4: 0xe36824  and         $t5, $a3, $v1
    ctx->pc = 0x31e9a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x31e9a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e9ac: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x31e9acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x31e9b0: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x31e9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x31e9b4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31E9B4u;
    {
        const bool branch_taken_0x31e9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B4u;
        // 0x31e9b8: 0xed3826  xor         $a3, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9b4) {
            ctx->pc = 0x31E9F0u;
            goto label_31e9f0;
        }
    }
    ctx->pc = 0x31E9BCu;
    // 0x31e9bc: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x31e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x31e9c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e9c4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31e9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31e9c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31E9C8u;
    {
        const bool branch_taken_0x31e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9C8u;
        // 0x31e9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9c8) {
            ctx->pc = 0x31E9F4u;
            goto label_31e9f4;
        }
    }
    ctx->pc = 0x31E9D0u;
    // 0x31e9d0: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x31e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x31e9d4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x31e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x31e9d8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x31e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x31e9dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x31e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x31e9e0: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x31e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x31e9e4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x31e9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31e9e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31E9E8u;
    {
        const bool branch_taken_0x31e9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9E8u;
        // 0x31e9ec: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9e8) {
            ctx->pc = 0x31EA20u;
            goto label_31ea20;
        }
    }
    ctx->pc = 0x31E9F0u;
label_31e9f0:
    // 0x31e9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e9f4:
    // 0x31e9f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31E9F4u;
    SET_GPR_U32(ctx, 31, 0x31E9FCu);
    ctx->pc = 0x31E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E9F4u;
    // 0x31e9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31E9F4u, 0x31E9FCu)) {
        return;
    }
    ctx->pc = 0x31E9FCu;
label_31e9fc:
    // 0x31e9fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea04: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EA04u;
    SET_GPR_U32(ctx, 31, 0x31EA0Cu);
    ctx->pc = 0x31EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA04u;
    // 0x31ea08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EA04u, 0x31EA0Cu)) {
        return;
    }
    ctx->pc = 0x31EA0Cu;
label_31ea0c:
    // 0x31ea0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea10: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x31EA10u;
    SET_GPR_U32(ctx, 31, 0x31EA18u);
    ctx->pc = 0x31EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA10u;
    // 0x31ea14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x31EA10u, 0x31EA18u)) {
        return;
    }
    ctx->pc = 0x31EA18u;
label_31ea18:
    // 0x31ea18: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x31EA18u;
    {
        const bool branch_taken_0x31ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA18u;
        // 0x31ea1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea18) {
            ctx->pc = 0x31ED88u;
            goto label_31ed88;
        }
    }
    ctx->pc = 0x31EA20u;
label_31ea20:
    // 0x31ea20: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31EA20u;
    {
        const bool branch_taken_0x31ea20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA20u;
        // 0x31ea24: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea20) {
            ctx->pc = 0x31EA4Cu;
            goto label_31ea4c;
        }
    }
    ctx->pc = 0x31EA28u;
    // 0x31ea28: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x31ea28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x31ea2c: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x31EA2Cu;
    {
        const bool branch_taken_0x31ea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA2Cu;
        // 0x31ea30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea2c) {
            ctx->pc = 0x31ED84u;
            goto label_31ed84;
        }
    }
    ctx->pc = 0x31EA34u;
    // 0x31ea34: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x31ea34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x31ea38: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x31EA38u;
    {
        const bool branch_taken_0x31ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea38) {
            ctx->pc = 0x31EA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EA38u;
            // 0x31ea3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31ED84u;
            goto label_31ed84;
        }
    }
    ctx->pc = 0x31EA40u;
    // 0x31ea40: 0x110a00ba  beq         $t0, $t2, . + 4 + (0xBA << 2)
    ctx->pc = 0x31EA40u;
    {
        const bool branch_taken_0x31ea40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x31EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA40u;
        // 0x31ea44: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea40) {
            ctx->pc = 0x31ED2Cu;
            goto label_31ed2c;
        }
    }
    ctx->pc = 0x31EA48u;
    // 0x31ea48: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_31ea4c:
    // 0x31ea4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ea50: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31ea50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31ea54: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31EA54u;
    {
        const bool branch_taken_0x31ea54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ea54) {
            ctx->pc = 0x31EA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EA54u;
            // 0x31ea58: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EAB8u;
            goto label_31eab8;
        }
    }
    ctx->pc = 0x31EA5Cu;
    // 0x31ea5c: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x31EA5Cu;
    {
        const bool branch_taken_0x31ea5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA5Cu;
        // 0x31ea60: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea5c) {
            ctx->pc = 0x31EA90u;
            goto label_31ea90;
        }
    }
    ctx->pc = 0x31EA64u;
    // 0x31ea64: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x31ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x31ea68: 0x19c00014  blez        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x31EA68u;
    {
        const bool branch_taken_0x31ea68 = (GPR_S64(ctx, 14) <= 0);
        ctx->pc = 0x31EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA68u;
        // 0x31ea6c: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea68) {
            ctx->pc = 0x31EABCu;
            goto label_31eabc;
        }
    }
    ctx->pc = 0x31EA70u;
label_31ea70:
    // 0x31ea70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31ea74: 0x0  nop
    ctx->pc = 0x31ea74u;
    // NOP
    // 0x31ea78: 0x0  nop
    ctx->pc = 0x31ea78u;
    // NOP
    // 0x31ea7c: 0x0  nop
    ctx->pc = 0x31ea7cu;
    // NOP
    // 0x31ea80: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31EA80u;
    {
        const bool branch_taken_0x31ea80 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA80u;
        // 0x31ea84: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea80) {
            ctx->pc = 0x31EA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea70;
        }
    }
    ctx->pc = 0x31EA88u;
    // 0x31ea88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31EA88u;
    {
        const bool branch_taken_0x31ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA88u;
        // 0x31ea8c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea88) {
            ctx->pc = 0x31EAC0u;
            goto label_31eac0;
        }
    }
    ctx->pc = 0x31EA90u;
label_31ea90:
    // 0x31ea90: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31EA90u;
    {
        const bool branch_taken_0x31ea90 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x31EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA90u;
        // 0x31ea94: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea90) {
            ctx->pc = 0x31EABCu;
            goto label_31eabc;
        }
    }
    ctx->pc = 0x31EA98u;
label_31ea98:
    // 0x31ea98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31ea9c: 0x0  nop
    ctx->pc = 0x31ea9cu;
    // NOP
    // 0x31eaa0: 0x0  nop
    ctx->pc = 0x31eaa0u;
    // NOP
    // 0x31eaa4: 0x0  nop
    ctx->pc = 0x31eaa4u;
    // NOP
    // 0x31eaa8: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31EAA8u;
    {
        const bool branch_taken_0x31eaa8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAA8u;
        // 0x31eaac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaa8) {
            ctx->pc = 0x31EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea98;
        }
    }
    ctx->pc = 0x31EAB0u;
    // 0x31eab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EAB0u;
    {
        const bool branch_taken_0x31eab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAB0u;
        // 0x31eab4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eab0) {
            ctx->pc = 0x31EAC0u;
            goto label_31eac0;
        }
    }
    ctx->pc = 0x31EAB8u;
label_31eab8:
    // 0x31eab8: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x31eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_31eabc:
    // 0x31eabc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_31eac0:
    // 0x31eac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eac4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x31eac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x31eac8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31EAC8u;
    {
        const bool branch_taken_0x31eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAC8u;
        // 0x31eacc: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eac8) {
            ctx->pc = 0x31EB38u;
            goto label_31eb38;
        }
    }
    ctx->pc = 0x31EAD0u;
    // 0x31ead0: 0x1520000d  bnez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x31EAD0u;
    {
        const bool branch_taken_0x31ead0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD0u;
        // 0x31ead4: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ead0) {
            ctx->pc = 0x31EB08u;
            goto label_31eb08;
        }
    }
    ctx->pc = 0x31EAD8u;
    // 0x31ead8: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x31ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x31eadc: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x31eadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eae0: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x31EAE0u;
    {
        const bool branch_taken_0x31eae0 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x31EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAE0u;
        // 0x31eae4: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eae0) {
            ctx->pc = 0x31EB40u;
            goto label_31eb40;
        }
    }
    ctx->pc = 0x31EAE8u;
label_31eae8:
    // 0x31eae8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31eaec: 0x0  nop
    ctx->pc = 0x31eaecu;
    // NOP
    // 0x31eaf0: 0x0  nop
    ctx->pc = 0x31eaf0u;
    // NOP
    // 0x31eaf4: 0x0  nop
    ctx->pc = 0x31eaf4u;
    // NOP
    // 0x31eaf8: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31EAF8u;
    {
        const bool branch_taken_0x31eaf8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAF8u;
        // 0x31eafc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaf8) {
            ctx->pc = 0x31EAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31eae8;
        }
    }
    ctx->pc = 0x31EB00u;
    // 0x31eb00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31EB00u;
    {
        const bool branch_taken_0x31eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb00) {
            ctx->pc = 0x31EB40u;
            goto label_31eb40;
        }
    }
    ctx->pc = 0x31EB08u;
label_31eb08:
    // 0x31eb08: 0x912c0  sll         $v0, $t1, 11
    ctx->pc = 0x31eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x31eb0c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31EB0Cu;
    {
        const bool branch_taken_0x31eb0c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x31EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB0Cu;
        // 0x31eb10: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb0c) {
            ctx->pc = 0x31EB40u;
            goto label_31eb40;
        }
    }
    ctx->pc = 0x31EB14u;
    // 0x31eb14: 0x0  nop
    ctx->pc = 0x31eb14u;
    // NOP
label_31eb18:
    // 0x31eb18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31eb1c: 0x0  nop
    ctx->pc = 0x31eb1cu;
    // NOP
    // 0x31eb20: 0x0  nop
    ctx->pc = 0x31eb20u;
    // NOP
    // 0x31eb24: 0x0  nop
    ctx->pc = 0x31eb24u;
    // NOP
    // 0x31eb28: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31EB28u;
    {
        const bool branch_taken_0x31eb28 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB28u;
        // 0x31eb2c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb28) {
            ctx->pc = 0x31EB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31eb18;
        }
    }
    ctx->pc = 0x31EB30u;
    // 0x31eb30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EB30u;
    {
        const bool branch_taken_0x31eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb30) {
            ctx->pc = 0x31EB40u;
            goto label_31eb40;
        }
    }
    ctx->pc = 0x31EB38u;
label_31eb38:
    // 0x31eb38: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x31eb38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x31eb3c: 0x2444fc01  addiu       $a0, $v0, -0x3FF
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_31eb40:
    // 0x31eb40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EB40u;
    {
        const bool branch_taken_0x31eb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB40u;
        // 0x31eb44: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb40) {
            ctx->pc = 0x31EB60u;
            goto label_31eb60;
        }
    }
    ctx->pc = 0x31EB48u;
    // 0x31eb48: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x31eb4c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x31eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x31eb50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eb54: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x31eb58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31EB58u;
    {
        const bool branch_taken_0x31eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB58u;
        // 0x31eb5c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb58) {
            ctx->pc = 0x31EB8Cu;
            goto label_31eb8c;
        }
    }
    ctx->pc = 0x31EB60u;
label_31eb60:
    // 0x31eb60: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31eb64: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x31eb64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31eb68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EB68u;
    {
        const bool branch_taken_0x31eb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB68u;
        // 0x31eb6c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb68) {
            ctx->pc = 0x31EB84u;
            goto label_31eb84;
        }
    }
    ctx->pc = 0x31EB70u;
    // 0x31eb70: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x31eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x31eb74: 0x4e1006  srlv        $v0, $t6, $v0
    ctx->pc = 0x31eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x31eb78: 0xce4004  sllv        $t0, $t6, $a2
    ctx->pc = 0x31eb78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x31eb7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EB7Cu;
    {
        const bool branch_taken_0x31eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB7Cu;
        // 0x31eb80: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb7c) {
            ctx->pc = 0x31EB8Cu;
            goto label_31eb8c;
        }
    }
    ctx->pc = 0x31EB84u;
label_31eb84:
    // 0x31eb84: 0xce3804  sllv        $a3, $t6, $a2
    ctx->pc = 0x31eb84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x31eb88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31eb88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31eb8c:
    // 0x31eb8c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x31eb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x31eb90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EB90u;
    {
        const bool branch_taken_0x31eb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB90u;
        // 0x31eb94: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb90) {
            ctx->pc = 0x31EBB0u;
            goto label_31ebb0;
        }
    }
    ctx->pc = 0x31EB98u;
    // 0x31eb98: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x31eb9c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x31eba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31eba4: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x31eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x31eba8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31EBA8u;
    {
        const bool branch_taken_0x31eba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBA8u;
        // 0x31ebac: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eba8) {
            ctx->pc = 0x31EBDCu;
            goto label_31ebdc;
        }
    }
    ctx->pc = 0x31EBB0u;
label_31ebb0:
    // 0x31ebb0: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x31ebb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31ebb4: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x31ebb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31ebb8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EBB8u;
    {
        const bool branch_taken_0x31ebb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBB8u;
        // 0x31ebbc: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebb8) {
            ctx->pc = 0x31EBD4u;
            goto label_31ebd4;
        }
    }
    ctx->pc = 0x31EBC0u;
    // 0x31ebc0: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x31ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x31ebc4: 0x4f1006  srlv        $v0, $t7, $v0
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x31ebc8: 0xcf5004  sllv        $t2, $t7, $a2
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x31ebcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31EBCCu;
    {
        const bool branch_taken_0x31ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBCCu;
        // 0x31ebd0: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebcc) {
            ctx->pc = 0x31EBDCu;
            goto label_31ebdc;
        }
    }
    ctx->pc = 0x31EBD4u;
label_31ebd4:
    // 0x31ebd4: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x31ebd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x31ebd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31ebd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ebdc:
    // 0x31ebdc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31EBDCu;
    {
        const bool branch_taken_0x31ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBDCu;
        // 0x31ebe0: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebdc) {
            ctx->pc = 0x31EC28u;
            goto label_31ec28;
        }
    }
    ctx->pc = 0x31EBE4u;
    // 0x31ebe4: 0x0  nop
    ctx->pc = 0x31ebe4u;
    // NOP
label_31ebe8:
    // 0x31ebe8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x31ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31ebec: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x31ebecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x31ebf0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x31ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ebf4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EBF4u;
    {
        const bool branch_taken_0x31ebf4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x31EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBF4u;
        // 0x31ebf8: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebf4) {
            ctx->pc = 0x31EC10u;
            goto label_31ec10;
        }
    }
    ctx->pc = 0x31EBFCu;
    // 0x31ebfc: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x31ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x31ec00: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x31ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31ec04: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x31ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ec08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31EC08u;
    {
        const bool branch_taken_0x31ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC08u;
        // 0x31ec0c: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec08) {
            ctx->pc = 0x31EC28u;
            goto label_31ec28;
        }
    }
    ctx->pc = 0x31EC10u;
label_31ec10:
    // 0x31ec10: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x31ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x31ec14: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x31EC14u;
    {
        const bool branch_taken_0x31ec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC14u;
        // 0x31ec18: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec14) {
            ctx->pc = 0x31ED28u;
            goto label_31ed28;
        }
    }
    ctx->pc = 0x31EC1Cu;
    // 0x31ec1c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x31ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31ec20: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x31ec20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ec24: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x31ec24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_31ec28:
    // 0x31ec28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31ec28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec2c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31EC2Cu;
    {
        const bool branch_taken_0x31ec2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC2Cu;
        // 0x31ec30: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec2c) {
            ctx->pc = 0x31EBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ebe8;
        }
    }
    ctx->pc = 0x31EC34u;
    // 0x31ec34: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x31ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31ec38: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x31ec38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x31ec3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x31ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ec40: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EC40u;
    {
        const bool branch_taken_0x31ec40 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x31EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC40u;
        // 0x31ec44: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec40) {
            ctx->pc = 0x31EC50u;
            goto label_31ec50;
        }
    }
    ctx->pc = 0x31EC48u;
    // 0x31ec48: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x31ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec4c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x31ec4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ec50:
    // 0x31ec50: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x31ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x31ec54: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31EC54u;
    {
        const bool branch_taken_0x31ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC54u;
        // 0x31ec58: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec54) {
            ctx->pc = 0x31ED2Cu;
            goto label_31ed2c;
        }
    }
    ctx->pc = 0x31EC5Cu;
    // 0x31ec5c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x31ec60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ec64: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x31ec64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31ec68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31EC68u;
    {
        const bool branch_taken_0x31ec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC68u;
        // 0x31ec6c: 0x2882fc02  slti        $v0, $a0, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec68) {
            ctx->pc = 0x31EC98u;
            goto label_31ec98;
        }
    }
    ctx->pc = 0x31EC70u;
    // 0x31ec70: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x31ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x31ec74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x31ec74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31ec78:
    // 0x31ec78: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31ec7c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x31ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x31ec80: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x31ec80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ec84: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31ec88: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x31ec88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31ec8c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31EC8Cu;
    {
        const bool branch_taken_0x31ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC8Cu;
        // 0x31ec90: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec8c) {
            ctx->pc = 0x31EC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ec78;
        }
    }
    ctx->pc = 0x31EC94u;
    // 0x31ec94: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x31ec94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_31ec98:
    // 0x31ec98: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31EC98u;
    {
        const bool branch_taken_0x31ec98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC98u;
        // 0x31ec9c: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec98) {
            ctx->pc = 0x31ECE8u;
            goto label_31ece8;
        }
    }
    ctx->pc = 0x31ECA0u;
    // 0x31eca0: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x31eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x31eca4: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x31eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x31eca8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x31eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x31ecac: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x31ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x31ecb0: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x31ecb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31ecb4: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x31ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x31ecb8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ecbc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31ecbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31ecc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ecc4: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x31ecc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x31ecc8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x31ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31eccc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x31ecccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x31ecd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ecd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31ecd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31ecd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ecdc: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x31ecdcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x31ece0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31ECE0u;
    {
        const bool branch_taken_0x31ece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECE0u;
        // 0x31ece4: 0x1638825  or          $s1, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ece0) {
            ctx->pc = 0x31ED80u;
            goto label_31ed80;
        }
    }
    ctx->pc = 0x31ECE8u;
label_31ece8:
    // 0x31ece8: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31ecec: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x31ececu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x31ecf0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31ECF0u;
    {
        const bool branch_taken_0x31ecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECF0u;
        // 0x31ecf4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ecf0) {
            ctx->pc = 0x31ED0Cu;
            goto label_31ed0c;
        }
    }
    ctx->pc = 0x31ECF8u;
    // 0x31ecf8: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x31ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x31ecfc: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x31ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x31ed00: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x31ed00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ed04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31ED04u;
    {
        const bool branch_taken_0x31ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED04u;
        // 0x31ed08: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed04) {
            ctx->pc = 0x31ED4Cu;
            goto label_31ed4c;
        }
    }
    ctx->pc = 0x31ED0Cu;
label_31ed0c:
    // 0x31ed0c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x31ed0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31ed10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31ED10u;
    {
        const bool branch_taken_0x31ed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED10u;
        // 0x31ed14: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed10) {
            ctx->pc = 0x31ED44u;
            goto label_31ed44;
        }
    }
    ctx->pc = 0x31ED18u;
    // 0x31ed18: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x31ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x31ed1c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x31ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x31ed20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31ED20u;
    {
        const bool branch_taken_0x31ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED20u;
        // 0x31ed24: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed20) {
            ctx->pc = 0x31ED48u;
            goto label_31ed48;
        }
    }
    ctx->pc = 0x31ED28u;
label_31ed28:
    // 0x31ed28: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_31ed2c:
    // 0x31ed2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31ed30: 0x244222b8  addiu       $v0, $v0, 0x22B8
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8888));
    // 0x31ed34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31ed38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ed3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31ED3Cu;
    {
        const bool branch_taken_0x31ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED3Cu;
        // 0x31ed40: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed3c) {
            ctx->pc = 0x31ED84u;
            goto label_31ed84;
        }
    }
    ctx->pc = 0x31ED44u;
label_31ed44:
    // 0x31ed44: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x31ed44u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_31ed48:
    // 0x31ed48: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x31ed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_31ed4c:
    // 0x31ed4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ed50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed54: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x31ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x31ed58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed5c: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x31ed5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x31ed60: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x31ed60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x31ed64: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x31ed64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31ed68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ed6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed74: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x31ed74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x31ed78: 0x1838825  or          $s1, $t4, $v1
    ctx->pc = 0x31ed78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x31ed7c: 0x0  nop
    ctx->pc = 0x31ed7cu;
    // NOP
label_31ed80:
    // 0x31ed80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31ed80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ed84:
    // 0x31ed84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31ed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31ed88:
    // 0x31ed88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31ed88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ed8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31ed8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ed90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ed94: 0x3e00008  jr          $ra
    ctx->pc = 0x31ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED94u;
        // 0x31ed98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ED9Cu;
    // 0x31ed9c: 0x0  nop
    ctx->pc = 0x31ed9cu;
    // NOP
    ctx->pc = 0x31eda0u;
}
