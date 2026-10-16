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

// Function: sub_0031EDA0
// Address: 0x31eda0 - 0x31f3b8
void sub_0031EDA0_0x31eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EDA0_0x31eda0");
#endif

    switch (ctx->pc) {
        case 0x31ee30u: goto label_31ee30;
        case 0x31ee58u: goto label_31ee58;
        case 0x31eec4u: goto label_31eec4;
        case 0x31eee8u: goto label_31eee8;
        case 0x31ef08u: goto label_31ef08;
        case 0x31ef2cu: goto label_31ef2c;
        case 0x31ef54u: goto label_31ef54;
        case 0x31ef60u: goto label_31ef60;
        case 0x31ef70u: goto label_31ef70;
        case 0x31ef98u: goto label_31ef98;
        case 0x31efa8u: goto label_31efa8;
        case 0x31efb4u: goto label_31efb4;
        case 0x31efd0u: goto label_31efd0;
        case 0x31eff4u: goto label_31eff4;
        case 0x31f01cu: goto label_31f01c;
        case 0x31f028u: goto label_31f028;
        case 0x31f034u: goto label_31f034;
        case 0x31f04cu: goto label_31f04c;
        case 0x31f058u: goto label_31f058;
        case 0x31f064u: goto label_31f064;
        case 0x31f074u: goto label_31f074;
        case 0x31f090u: goto label_31f090;
        case 0x31f0c4u: goto label_31f0c4;
        case 0x31f0ecu: goto label_31f0ec;
        case 0x31f0f8u: goto label_31f0f8;
        case 0x31f11cu: goto label_31f11c;
        case 0x31f128u: goto label_31f128;
        case 0x31f150u: goto label_31f150;
        case 0x31f174u: goto label_31f174;
        case 0x31f180u: goto label_31f180;
        case 0x31f1a4u: goto label_31f1a4;
        case 0x31f1b0u: goto label_31f1b0;
        case 0x31f1d4u: goto label_31f1d4;
        case 0x31f1e0u: goto label_31f1e0;
        case 0x31f1ecu: goto label_31f1ec;
        case 0x31f204u: goto label_31f204;
        case 0x31f210u: goto label_31f210;
        case 0x31f224u: goto label_31f224;
        case 0x31f230u: goto label_31f230;
        case 0x31f23cu: goto label_31f23c;
        case 0x31f264u: goto label_31f264;
        case 0x31f274u: goto label_31f274;
        case 0x31f280u: goto label_31f280;
        case 0x31f2a8u: goto label_31f2a8;
        case 0x31f2b4u: goto label_31f2b4;
        case 0x31f2c0u: goto label_31f2c0;
        case 0x31f2ccu: goto label_31f2cc;
        case 0x31f2fcu: goto label_31f2fc;
        case 0x31f30cu: goto label_31f30c;
        case 0x31f318u: goto label_31f318;
        case 0x31f340u: goto label_31f340;
        case 0x31f34cu: goto label_31f34c;
        case 0x31f358u: goto label_31f358;
        case 0x31f368u: goto label_31f368;
        case 0x31f374u: goto label_31f374;
        case 0x31f384u: goto label_31f384;
        default: break;
    }

    ctx->pc = 0x31eda0u;

    // 0x31eda0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31eda4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x31eda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eda8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31edac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31edb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31edb4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31edb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31edb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31edbc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31edbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31edc0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31edc4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31edc8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x31edc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x31edcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31edd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31edd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edd4: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x31edd4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31edd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eddc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31eddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31ede0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x31ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x31ede4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ede8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x31ede8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x31edec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31EDECu;
    {
        const bool branch_taken_0x31edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDECu;
        // 0x31edf0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31edec) {
            ctx->pc = 0x31EE38u;
            goto label_31ee38;
        }
    }
    ctx->pc = 0x31EDF4u;
    // 0x31edf4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x31edf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31edfc: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x31edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x31ee00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ee04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EE04u;
    {
        const bool branch_taken_0x31ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE04u;
        // 0x31ee08: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee04) {
            ctx->pc = 0x31EE18u;
            goto label_31ee18;
        }
    }
    ctx->pc = 0x31EE0Cu;
    // 0x31ee0c: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x31EE0Cu;
    {
        const bool branch_taken_0x31ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE0Cu;
        // 0x31ee10: 0xdc622320  ld          $v0, 0x2320($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee0c) {
            ctx->pc = 0x31F384u;
            goto label_31f384;
        }
    }
    ctx->pc = 0x31EE14u;
    // 0x31ee14: 0x0  nop
    ctx->pc = 0x31ee14u;
    // NOP
label_31ee18:
    // 0x31ee18: 0x6600037  bltz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x31EE18u;
    {
        const bool branch_taken_0x31ee18 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x31EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE18u;
        // 0x31ee1c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee18) {
            ctx->pc = 0x31EEF8u;
            goto label_31eef8;
        }
    }
    ctx->pc = 0x31EE20u;
    // 0x31ee20: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x31ee20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x31ee24: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31ee24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31ee28: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EE28u;
    SET_GPR_U32(ctx, 31, 0x31EE30u);
    ctx->pc = 0x31EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE28u;
    // 0x31ee2c: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EE28u, 0x31EE30u)) {
        return;
    }
    ctx->pc = 0x31EE30u;
label_31ee30:
    // 0x31ee30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31ee30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee34: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x31ee34u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
label_31ee38:
    // 0x31ee38: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x31ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x31ee3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ee40: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x31ee40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x31ee44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EE44u;
    {
        const bool branch_taken_0x31ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE44u;
        // 0x31ee48: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee44) {
            ctx->pc = 0x31EE60u;
            goto label_31ee60;
        }
    }
    ctx->pc = 0x31EE4Cu;
    // 0x31ee4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x31ee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee50: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31EE50u;
    SET_GPR_U32(ctx, 31, 0x31EE58u);
    ctx->pc = 0x31EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE50u;
    // 0x31ee54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31EE50u, 0x31EE58u)) {
        return;
    }
    ctx->pc = 0x31EE58u;
label_31ee58:
    // 0x31ee58: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x31EE58u;
    {
        const bool branch_taken_0x31ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE58u;
        // 0x31ee5c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee58) {
            ctx->pc = 0x31F388u;
            goto label_31f388;
        }
    }
    ctx->pc = 0x31EE60u;
label_31ee60:
    // 0x31ee60: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x31ee60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x31ee64: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x31ee64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x31ee68: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x31ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x31ee6c: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x31ee6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x31ee70: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x31ee70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x31ee74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x31ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x31ee78: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x31ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x31ee7c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x31ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x31ee80: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x31ee80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ee84: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x31ee84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x31ee88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x31ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee8c: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x31ee90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ee94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ee98: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x31ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x31ee9c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x31ee9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31eea0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x31eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x31eea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31eea8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x31eea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31eeac: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x31eeacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x31eeb0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x31eeb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31eeb4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31eeb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31eeb8: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x31eeb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x31eebc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31EEBCu;
    SET_GPR_U32(ctx, 31, 0x31EEC4u);
    ctx->pc = 0x31EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEBCu;
    // 0x31eec0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31EEBCu, 0x31EEC4u)) {
        return;
    }
    ctx->pc = 0x31EEC4u;
label_31eec4:
    // 0x31eec4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31eec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eec8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x31eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x31eecc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x31eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x31eed0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x31eed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31eed4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x31EED4u;
    {
        const bool branch_taken_0x31eed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EED4u;
        // 0x31eed8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eed4) {
            ctx->pc = 0x31F03Cu;
            goto label_31f03c;
        }
    }
    ctx->pc = 0x31EEDCu;
    // 0x31eedc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31eedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eee0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31EEE0u;
    SET_GPR_U32(ctx, 31, 0x31EEE8u);
    ctx->pc = 0x31EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEE0u;
    // 0x31eee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31EEE0u, 0x31EEE8u)) {
        return;
    }
    ctx->pc = 0x31EEE8u;
label_31eee8:
    // 0x31eee8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31EEE8u;
    {
        const bool branch_taken_0x31eee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEE8u;
        // 0x31eeec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eee8) {
            ctx->pc = 0x31EF68u;
            goto label_31ef68;
        }
    }
    ctx->pc = 0x31EEF0u;
    // 0x31eef0: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EEF0u;
    {
        const bool branch_taken_0x31eef0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eef0) {
            ctx->pc = 0x31EF00u;
            goto label_31ef00;
        }
    }
    ctx->pc = 0x31EEF8u;
label_31eef8:
    // 0x31eef8: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x31EEF8u;
    {
        const bool branch_taken_0x31eef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEF8u;
        // 0x31eefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eef8) {
            ctx->pc = 0x31F384u;
            goto label_31f384;
        }
    }
    ctx->pc = 0x31EF00u;
label_31ef00:
    // 0x31ef00: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31EF00u;
    SET_GPR_U32(ctx, 31, 0x31EF08u);
    ctx->pc = 0x31EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF00u;
    // 0x31ef04: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31EF00u, 0x31EF08u)) {
        return;
    }
    ctx->pc = 0x31EF08u;
label_31ef08:
    // 0x31ef08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31ef08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef0c: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x31ef0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x31ef10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31ef10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31ef14: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x31ef14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x31ef18: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31ef18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31ef1c: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x31ef1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x31ef20: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31ef20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31ef24: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EF24u;
    SET_GPR_U32(ctx, 31, 0x31EF2Cu);
    ctx->pc = 0x31EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF24u;
    // 0x31ef28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EF24u, 0x31EF2Cu)) {
        return;
    }
    ctx->pc = 0x31EF2Cu;
label_31ef2c:
    // 0x31ef2c: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x31ef2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x31ef30: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31ef30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31ef34: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x31ef34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x31ef38: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31ef38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31ef3c: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x31ef3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x31ef40: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31ef40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31ef44: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x31ef44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x31ef48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ef48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef4c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EF4Cu;
    SET_GPR_U32(ctx, 31, 0x31EF54u);
    ctx->pc = 0x31EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF4Cu;
    // 0x31ef50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EF4Cu, 0x31EF54u)) {
        return;
    }
    ctx->pc = 0x31EF54u;
label_31ef54:
    // 0x31ef54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef58: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31EF58u;
    SET_GPR_U32(ctx, 31, 0x31EF60u);
    ctx->pc = 0x31EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF58u;
    // 0x31ef5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31EF58u, 0x31EF60u)) {
        return;
    }
    ctx->pc = 0x31EF60u;
label_31ef60:
    // 0x31ef60: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x31EF60u;
    {
        const bool branch_taken_0x31ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF60u;
        // 0x31ef64: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef60) {
            ctx->pc = 0x31F388u;
            goto label_31f388;
        }
    }
    ctx->pc = 0x31EF68u;
label_31ef68:
    // 0x31ef68: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EF68u;
    SET_GPR_U32(ctx, 31, 0x31EF70u);
    ctx->pc = 0x31EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF68u;
    // 0x31ef6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EF68u, 0x31EF70u)) {
        return;
    }
    ctx->pc = 0x31EF70u;
label_31ef70:
    // 0x31ef70: 0x3405ff55  ori         $a1, $zero, 0xFF55
    ctx->pc = 0x31ef70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65365);
    // 0x31ef74: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31ef74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31ef78: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x31ef78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x31ef7c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31ef7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31ef80: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x31ef80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x31ef84: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31ef84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31ef88: 0x34a51555  ori         $a1, $a1, 0x1555
    ctx->pc = 0x31ef88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5461);
    // 0x31ef8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef90: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EF90u;
    SET_GPR_U32(ctx, 31, 0x31EF98u);
    ctx->pc = 0x31EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF90u;
    // 0x31ef94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EF90u, 0x31EF98u)) {
        return;
    }
    ctx->pc = 0x31EF98u;
label_31ef98:
    // 0x31ef98: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x31ef98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x31ef9c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x31ef9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x31efa0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31EFA0u;
    SET_GPR_U32(ctx, 31, 0x31EFA8u);
    ctx->pc = 0x31EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFA0u;
    // 0x31efa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31EFA0u, 0x31EFA8u)) {
        return;
    }
    ctx->pc = 0x31EFA8u;
label_31efa8:
    // 0x31efa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31efa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efac: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EFACu;
    SET_GPR_U32(ctx, 31, 0x31EFB4u);
    ctx->pc = 0x31EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFACu;
    // 0x31efb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EFACu, 0x31EFB4u)) {
        return;
    }
    ctx->pc = 0x31EFB4u;
label_31efb4:
    // 0x31efb4: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EFB4u;
    {
        const bool branch_taken_0x31efb4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFB4u;
        // 0x31efb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efb4) {
            ctx->pc = 0x31EFC8u;
            goto label_31efc8;
        }
    }
    ctx->pc = 0x31EFBCu;
    // 0x31efbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efc0: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x31EFC0u;
    {
        const bool branch_taken_0x31efc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFC0u;
        // 0x31efc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efc0) {
            ctx->pc = 0x31F37Cu;
            goto label_31f37c;
        }
    }
    ctx->pc = 0x31EFC8u;
label_31efc8:
    // 0x31efc8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31EFC8u;
    SET_GPR_U32(ctx, 31, 0x31EFD0u);
    ctx->pc = 0x31EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFC8u;
    // 0x31efcc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31EFC8u, 0x31EFD0u)) {
        return;
    }
    ctx->pc = 0x31EFD0u;
label_31efd0:
    // 0x31efd0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31efd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31efd4: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x31efd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x31efd8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31efd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31efdc: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x31efdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x31efe0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31efe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31efe4: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x31efe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x31efe8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31efe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31efec: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31EFECu;
    SET_GPR_U32(ctx, 31, 0x31EFF4u);
    ctx->pc = 0x31EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFECu;
    // 0x31eff0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31EFECu, 0x31EFF4u)) {
        return;
    }
    ctx->pc = 0x31EFF4u;
label_31eff4:
    // 0x31eff4: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x31eff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x31eff8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31eff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31effc: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x31effcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x31f000: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f004: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x31f004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x31f008: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31f008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31f00c: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x31f00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x31f010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f014: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F014u;
    SET_GPR_U32(ctx, 31, 0x31F01Cu);
    ctx->pc = 0x31F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F014u;
    // 0x31f018: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F014u, 0x31F01Cu)) {
        return;
    }
    ctx->pc = 0x31F01Cu;
label_31f01c:
    // 0x31f01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f020: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F020u;
    SET_GPR_U32(ctx, 31, 0x31F028u);
    ctx->pc = 0x31F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F020u;
    // 0x31f024: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F020u, 0x31F028u)) {
        return;
    }
    ctx->pc = 0x31F028u;
label_31f028:
    // 0x31f028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f02c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F02Cu;
    SET_GPR_U32(ctx, 31, 0x31F034u);
    ctx->pc = 0x31F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F02Cu;
    // 0x31f030: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F02Cu, 0x31F034u)) {
        return;
    }
    ctx->pc = 0x31F034u;
label_31f034:
    // 0x31f034: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x31F034u;
    {
        const bool branch_taken_0x31f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F034u;
        // 0x31f038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f034) {
            ctx->pc = 0x31F378u;
            goto label_31f378;
        }
    }
    ctx->pc = 0x31F03Cu;
label_31f03c:
    // 0x31f03c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x31f03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31f040: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31f040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31f044: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F044u;
    SET_GPR_U32(ctx, 31, 0x31F04Cu);
    ctx->pc = 0x31F048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F044u;
    // 0x31f048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F044u, 0x31F04Cu)) {
        return;
    }
    ctx->pc = 0x31F04Cu;
label_31f04c:
    // 0x31f04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f050: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x31F050u;
    SET_GPR_U32(ctx, 31, 0x31F058u);
    ctx->pc = 0x31F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F050u;
    // 0x31f054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x31F050u, 0x31F058u)) {
        return;
    }
    ctx->pc = 0x31F058u;
label_31f058:
    // 0x31f058: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x31f058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f05c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31F05Cu;
    SET_GPR_U32(ctx, 31, 0x31F064u);
    ctx->pc = 0x31F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F05Cu;
    // 0x31f060: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31F05Cu, 0x31F064u)) {
        return;
    }
    ctx->pc = 0x31F064u;
label_31f064:
    // 0x31f064: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f068: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31f068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f06c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F06Cu;
    SET_GPR_U32(ctx, 31, 0x31F074u);
    ctx->pc = 0x31F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F06Cu;
    // 0x31f070: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F06Cu, 0x31F074u)) {
        return;
    }
    ctx->pc = 0x31F074u;
label_31f074:
    // 0x31f074: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x31f074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x31f078: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31f078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f07c: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x31f07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x31f080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f084: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x31f084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x31f088: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F088u;
    SET_GPR_U32(ctx, 31, 0x31F090u);
    ctx->pc = 0x31F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F088u;
    // 0x31f08c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F088u, 0x31F090u)) {
        return;
    }
    ctx->pc = 0x31F090u;
label_31f090:
    // 0x31f090: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x31f090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x31f094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f098: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x31f098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x31f09c: 0x3405ff0e  ori         $a1, $zero, 0xFF0E
    ctx->pc = 0x31f09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65294);
    // 0x31f0a0: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f0a4: 0x34a5d04e  ori         $a1, $a1, 0xD04E
    ctx->pc = 0x31f0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53326);
    // 0x31f0a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f0ac: 0x34a583c6  ori         $a1, $a1, 0x83C6
    ctx->pc = 0x31f0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33734);
    // 0x31f0b0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f0b4: 0x34a5069f  ori         $a1, $a1, 0x69F
    ctx->pc = 0x31f0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1695);
    // 0x31f0b8: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x31f0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x31f0bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F0BCu;
    SET_GPR_U32(ctx, 31, 0x31F0C4u);
    ctx->pc = 0x31F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0BCu;
    // 0x31f0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F0BCu, 0x31F0C4u)) {
        return;
    }
    ctx->pc = 0x31F0C4u;
label_31f0c4:
    // 0x31f0c4: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x31f0c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x31f0c8: 0x3405ff31  ori         $a1, $zero, 0xFF31
    ctx->pc = 0x31f0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65329);
    // 0x31f0cc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f0d0: 0x34a5c714  ori         $a1, $a1, 0xC714
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50964);
    // 0x31f0d4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f0d8: 0x34a5ec73  ori         $a1, $a1, 0xEC73
    ctx->pc = 0x31f0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60531);
    // 0x31f0dc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f0e0: 0x34a518af  ori         $a1, $a1, 0x18AF
    ctx->pc = 0x31f0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6319);
    // 0x31f0e4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F0E4u;
    SET_GPR_U32(ctx, 31, 0x31F0ECu);
    ctx->pc = 0x31F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0E4u;
    // 0x31f0e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F0E4u, 0x31F0ECu)) {
        return;
    }
    ctx->pc = 0x31F0ECu;
label_31f0ec:
    // 0x31f0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f0f0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F0F0u;
    SET_GPR_U32(ctx, 31, 0x31F0F8u);
    ctx->pc = 0x31F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F0F0u;
    // 0x31f0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F0F0u, 0x31F0F8u)) {
        return;
    }
    ctx->pc = 0x31F0F8u;
label_31f0f8:
    // 0x31f0f8: 0x3405ff66  ori         $a1, $zero, 0xFF66
    ctx->pc = 0x31f0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65382);
    // 0x31f0fc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f100: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x31f100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x31f104: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f108: 0x34a5ccbf  ori         $a1, $a1, 0xCCBF
    ctx->pc = 0x31f108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52415);
    // 0x31f10c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f110: 0x34a51a04  ori         $a1, $a1, 0x1A04
    ctx->pc = 0x31f110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6660);
    // 0x31f114: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F114u;
    SET_GPR_U32(ctx, 31, 0x31F11Cu);
    ctx->pc = 0x31F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F114u;
    // 0x31f118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F114u, 0x31F11Cu)) {
        return;
    }
    ctx->pc = 0x31F11Cu;
label_31f11c:
    // 0x31f11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f120: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F120u;
    SET_GPR_U32(ctx, 31, 0x31F128u);
    ctx->pc = 0x31F124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F120u;
    // 0x31f124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F120u, 0x31F128u)) {
        return;
    }
    ctx->pc = 0x31F128u;
label_31f128:
    // 0x31f128: 0x3405ff0b  ori         $a1, $zero, 0xFF0B
    ctx->pc = 0x31f128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65291);
    // 0x31f12c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f130: 0x34a5c44b  ori         $a1, $a1, 0xC44B
    ctx->pc = 0x31f130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50251);
    // 0x31f134: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f138: 0x34a5f9f2  ori         $a1, $a1, 0xF9F2
    ctx->pc = 0x31f138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63986);
    // 0x31f13c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f140: 0x34a51244  ori         $a1, $a1, 0x1244
    ctx->pc = 0x31f140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4676);
    // 0x31f144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f148: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F148u;
    SET_GPR_U32(ctx, 31, 0x31F150u);
    ctx->pc = 0x31F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F148u;
    // 0x31f14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F148u, 0x31F150u)) {
        return;
    }
    ctx->pc = 0x31F150u;
label_31f150:
    // 0x31f150: 0x3405ff1d  ori         $a1, $zero, 0xFF1D
    ctx->pc = 0x31f150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65309);
    // 0x31f154: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x31f154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x31f158: 0x34a5cc92  ori         $a1, $a1, 0xCC92
    ctx->pc = 0x31f158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52370);
    // 0x31f15c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f160: 0x34a5d960  ori         $a1, $a1, 0xD960
    ctx->pc = 0x31f160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55648);
    // 0x31f164: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x31f164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x31f168: 0x34a503de  ori         $a1, $a1, 0x3DE
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)990);
    // 0x31f16c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F16Cu;
    SET_GPR_U32(ctx, 31, 0x31F174u);
    ctx->pc = 0x31F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F16Cu;
    // 0x31f170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F16Cu, 0x31F174u)) {
        return;
    }
    ctx->pc = 0x31F174u;
label_31f174:
    // 0x31f174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f178: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F178u;
    SET_GPR_U32(ctx, 31, 0x31F180u);
    ctx->pc = 0x31F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F178u;
    // 0x31f17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F178u, 0x31F180u)) {
        return;
    }
    ctx->pc = 0x31F180u;
label_31f180:
    // 0x31f180: 0x3405ff49  ori         $a1, $zero, 0xFF49
    ctx->pc = 0x31f180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65353);
    // 0x31f184: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x31f184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x31f188: 0x34a59249  ori         $a1, $a1, 0x9249
    ctx->pc = 0x31f188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37449);
    // 0x31f18c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f190: 0x34a58452  ori         $a1, $a1, 0x8452
    ctx->pc = 0x31f190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33874);
    // 0x31f194: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x31f194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x31f198: 0x34a50359  ori         $a1, $a1, 0x359
    ctx->pc = 0x31f198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)857);
    // 0x31f19c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F19Cu;
    SET_GPR_U32(ctx, 31, 0x31F1A4u);
    ctx->pc = 0x31F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F19Cu;
    // 0x31f1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F19Cu, 0x31F1A4u)) {
        return;
    }
    ctx->pc = 0x31F1A4u;
label_31f1a4:
    // 0x31f1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1a8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F1A8u;
    SET_GPR_U32(ctx, 31, 0x31F1B0u);
    ctx->pc = 0x31F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1A8u;
    // 0x31f1ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F1A8u, 0x31F1B0u)) {
        return;
    }
    ctx->pc = 0x31F1B0u;
label_31f1b0:
    // 0x31f1b0: 0x3405ff95  ori         $a1, $zero, 0xFF95
    ctx->pc = 0x31f1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65429);
    // 0x31f1b4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x31f1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x31f1b8: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x31f1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x31f1bc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f1c0: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x31f1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x31f1c4: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x31f1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x31f1c8: 0x34a51593  ori         $a1, $a1, 0x1593
    ctx->pc = 0x31f1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5523);
    // 0x31f1cc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F1CCu;
    SET_GPR_U32(ctx, 31, 0x31F1D4u);
    ctx->pc = 0x31F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1CCu;
    // 0x31f1d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F1CCu, 0x31F1D4u)) {
        return;
    }
    ctx->pc = 0x31F1D4u;
label_31f1d4:
    // 0x31f1d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1d8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F1D8u;
    SET_GPR_U32(ctx, 31, 0x31F1E0u);
    ctx->pc = 0x31F1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1D8u;
    // 0x31f1dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F1D8u, 0x31F1E0u)) {
        return;
    }
    ctx->pc = 0x31F1E0u;
label_31f1e0:
    // 0x31f1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f1e4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F1E4u;
    SET_GPR_U32(ctx, 31, 0x31F1ECu);
    ctx->pc = 0x31F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1E4u;
    // 0x31f1e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F1E4u, 0x31F1ECu)) {
        return;
    }
    ctx->pc = 0x31F1ECu;
label_31f1ec:
    // 0x31f1ec: 0x1a800039  blez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x31F1ECu;
    {
        const bool branch_taken_0x31f1ec = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x31F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1ECu;
        // 0x31f1f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1ec) {
            ctx->pc = 0x31F2D4u;
            goto label_31f2d4;
        }
    }
    ctx->pc = 0x31F1F4u;
    // 0x31f1f4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x31f1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x31f1f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31f1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31f1fc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F1FCu;
    SET_GPR_U32(ctx, 31, 0x31F204u);
    ctx->pc = 0x31F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F1FCu;
    // 0x31f200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F1FCu, 0x31F204u)) {
        return;
    }
    ctx->pc = 0x31F204u;
label_31f204:
    // 0x31f204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f208: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F208u;
    SET_GPR_U32(ctx, 31, 0x31F210u);
    ctx->pc = 0x31F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F208u;
    // 0x31f20c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F208u, 0x31F210u)) {
        return;
    }
    ctx->pc = 0x31F210u;
label_31f210:
    // 0x31f210: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x31F210u;
    {
        const bool branch_taken_0x31f210 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F210u;
        // 0x31f214: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f210) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F218u;
    // 0x31f218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31f218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f21c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F21Cu;
    SET_GPR_U32(ctx, 31, 0x31F224u);
    ctx->pc = 0x31F220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F21Cu;
    // 0x31f220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F21Cu, 0x31F224u)) {
        return;
    }
    ctx->pc = 0x31F224u;
label_31f224:
    // 0x31f224: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f228: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F228u;
    SET_GPR_U32(ctx, 31, 0x31F230u);
    ctx->pc = 0x31F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F228u;
    // 0x31f22c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F228u, 0x31F230u)) {
        return;
    }
    ctx->pc = 0x31F230u;
label_31f230:
    // 0x31f230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f234: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F234u;
    SET_GPR_U32(ctx, 31, 0x31F23Cu);
    ctx->pc = 0x31F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F234u;
    // 0x31f238: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F234u, 0x31F23Cu)) {
        return;
    }
    ctx->pc = 0x31F23Cu;
label_31f23c:
    // 0x31f23c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x31F23Cu;
    {
        const bool branch_taken_0x31f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F23Cu;
        // 0x31f240: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f23c) {
            ctx->pc = 0x31F378u;
            goto label_31f378;
        }
    }
    ctx->pc = 0x31F244u;
label_31f244:
    // 0x31f244: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x31f244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x31f248: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f24c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x31f24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x31f250: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f254: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x31f254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x31f258: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31f258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31f25c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F25Cu;
    SET_GPR_U32(ctx, 31, 0x31F264u);
    ctx->pc = 0x31F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F25Cu;
    // 0x31f260: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F25Cu, 0x31F264u)) {
        return;
    }
    ctx->pc = 0x31F264u;
label_31f264:
    // 0x31f264: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31f268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f26c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F26Cu;
    SET_GPR_U32(ctx, 31, 0x31F274u);
    ctx->pc = 0x31F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F26Cu;
    // 0x31f270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F26Cu, 0x31F274u)) {
        return;
    }
    ctx->pc = 0x31F274u;
label_31f274:
    // 0x31f274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f278: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F278u;
    SET_GPR_U32(ctx, 31, 0x31F280u);
    ctx->pc = 0x31F27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F278u;
    // 0x31f27c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F278u, 0x31F280u)) {
        return;
    }
    ctx->pc = 0x31F280u;
label_31f280:
    // 0x31f280: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x31f280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x31f284: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f288: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x31f288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x31f28c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f290: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x31f290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x31f294: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31f294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31f298: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x31f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x31f29c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2a0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F2A0u;
    SET_GPR_U32(ctx, 31, 0x31F2A8u);
    ctx->pc = 0x31F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2A0u;
    // 0x31f2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F2A0u, 0x31F2A8u)) {
        return;
    }
    ctx->pc = 0x31F2A8u;
label_31f2a8:
    // 0x31f2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2ac: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x31F2ACu;
    SET_GPR_U32(ctx, 31, 0x31F2B4u);
    ctx->pc = 0x31F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2ACu;
    // 0x31f2b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x31F2ACu, 0x31F2B4u)) {
        return;
    }
    ctx->pc = 0x31F2B4u;
label_31f2b4:
    // 0x31f2b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2b8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F2B8u;
    SET_GPR_U32(ctx, 31, 0x31F2C0u);
    ctx->pc = 0x31F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2B8u;
    // 0x31f2bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F2B8u, 0x31F2C0u)) {
        return;
    }
    ctx->pc = 0x31F2C0u;
label_31f2c0:
    // 0x31f2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f2c4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F2C4u;
    SET_GPR_U32(ctx, 31, 0x31F2CCu);
    ctx->pc = 0x31F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2C4u;
    // 0x31f2c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F2C4u, 0x31F2CCu)) {
        return;
    }
    ctx->pc = 0x31F2CCu;
label_31f2cc:
    // 0x31f2cc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31F2CCu;
    {
        const bool branch_taken_0x31f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2CCu;
        // 0x31f2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2cc) {
            ctx->pc = 0x31F378u;
            goto label_31f378;
        }
    }
    ctx->pc = 0x31F2D4u;
label_31f2d4:
    // 0x31f2d4: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x31F2D4u;
    {
        const bool branch_taken_0x31f2d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2D4u;
        // 0x31f2d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2d4) {
            ctx->pc = 0x31F360u;
            goto label_31f360;
        }
    }
    ctx->pc = 0x31F2DCu;
    // 0x31f2dc: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x31f2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x31f2e0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f2e4: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x31f2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x31f2e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f2ec: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x31f2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x31f2f0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31f2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31f2f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F2F4u;
    SET_GPR_U32(ctx, 31, 0x31F2FCu);
    ctx->pc = 0x31F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2F4u;
    // 0x31f2f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F2F4u, 0x31F2FCu)) {
        return;
    }
    ctx->pc = 0x31F2FCu;
label_31f2fc:
    // 0x31f2fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f304: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F304u;
    SET_GPR_U32(ctx, 31, 0x31F30Cu);
    ctx->pc = 0x31F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F304u;
    // 0x31f308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F304u, 0x31F30Cu)) {
        return;
    }
    ctx->pc = 0x31F30Cu;
label_31f30c:
    // 0x31f30c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f310: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F310u;
    SET_GPR_U32(ctx, 31, 0x31F318u);
    ctx->pc = 0x31F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F310u;
    // 0x31f314: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F310u, 0x31F318u)) {
        return;
    }
    ctx->pc = 0x31F318u;
label_31f318:
    // 0x31f318: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x31f318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x31f31c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f320: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x31f320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x31f324: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f328: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x31f328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x31f32c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x31f32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x31f330: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x31f330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x31f334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f338: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F338u;
    SET_GPR_U32(ctx, 31, 0x31F340u);
    ctx->pc = 0x31F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F338u;
    // 0x31f33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F338u, 0x31F340u)) {
        return;
    }
    ctx->pc = 0x31F340u;
label_31f340:
    // 0x31f340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31f340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f344: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F344u;
    SET_GPR_U32(ctx, 31, 0x31F34Cu);
    ctx->pc = 0x31F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F344u;
    // 0x31f348: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F344u, 0x31F34Cu)) {
        return;
    }
    ctx->pc = 0x31F34Cu;
label_31f34c:
    // 0x31f34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f350: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F350u;
    SET_GPR_U32(ctx, 31, 0x31F358u);
    ctx->pc = 0x31F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F350u;
    // 0x31f354: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F350u, 0x31F358u)) {
        return;
    }
    ctx->pc = 0x31F358u;
label_31f358:
    // 0x31f358: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F358u;
    {
        const bool branch_taken_0x31f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F358u;
        // 0x31f35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f358) {
            ctx->pc = 0x31F378u;
            goto label_31f378;
        }
    }
    ctx->pc = 0x31F360u;
label_31f360:
    // 0x31f360: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F360u;
    SET_GPR_U32(ctx, 31, 0x31F368u);
    ctx->pc = 0x31F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F360u;
    // 0x31f364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F360u, 0x31F368u)) {
        return;
    }
    ctx->pc = 0x31F368u;
label_31f368:
    // 0x31f368: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f36c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x31F36Cu;
    SET_GPR_U32(ctx, 31, 0x31F374u);
    ctx->pc = 0x31F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F36Cu;
    // 0x31f370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x31F36Cu, 0x31F374u)) {
        return;
    }
    ctx->pc = 0x31F374u;
label_31f374:
    // 0x31f374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f378:
    // 0x31f378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f37c:
    // 0x31f37c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31F37Cu;
    SET_GPR_U32(ctx, 31, 0x31F384u);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31F37Cu, 0x31F384u)) {
        return;
    }
    ctx->pc = 0x31F384u;
label_31f384:
    // 0x31f384: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31f384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31f388:
    // 0x31f388: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31f388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31f38c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31f38cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31f390: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31f390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31f394: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31f394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31f398: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31f398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31f39c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31f39cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f3a0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31f3a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f3a4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x31f3a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3ACu;
        // 0x31f3b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F3B4u;
    // 0x31f3b4: 0x0  nop
    ctx->pc = 0x31f3b4u;
    // NOP
    ctx->pc = 0x31f3b8u;
}
