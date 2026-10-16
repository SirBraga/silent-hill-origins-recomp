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

// Function: sub_0020FF10
// Address: 0x20ff10 - 0x2100d0
void sub_0020FF10_0x20ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FF10_0x20ff10");
#endif

    switch (ctx->pc) {
        case 0x20ff10u: goto label_20ff10;
        case 0x20ff14u: goto label_20ff14;
        case 0x20ff18u: goto label_20ff18;
        case 0x20ff1cu: goto label_20ff1c;
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff24u: goto label_20ff24;
        case 0x20ff28u: goto label_20ff28;
        case 0x20ff2cu: goto label_20ff2c;
        case 0x20ff30u: goto label_20ff30;
        case 0x20ff34u: goto label_20ff34;
        case 0x20ff38u: goto label_20ff38;
        case 0x20ff3cu: goto label_20ff3c;
        case 0x20ff40u: goto label_20ff40;
        case 0x20ff44u: goto label_20ff44;
        case 0x20ff48u: goto label_20ff48;
        case 0x20ff4cu: goto label_20ff4c;
        case 0x20ff50u: goto label_20ff50;
        case 0x20ff54u: goto label_20ff54;
        case 0x20ff58u: goto label_20ff58;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff60u: goto label_20ff60;
        case 0x20ff64u: goto label_20ff64;
        case 0x20ff68u: goto label_20ff68;
        case 0x20ff6cu: goto label_20ff6c;
        case 0x20ff70u: goto label_20ff70;
        case 0x20ff74u: goto label_20ff74;
        case 0x20ff78u: goto label_20ff78;
        case 0x20ff7cu: goto label_20ff7c;
        case 0x20ff80u: goto label_20ff80;
        case 0x20ff84u: goto label_20ff84;
        case 0x20ff88u: goto label_20ff88;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff90u: goto label_20ff90;
        case 0x20ff94u: goto label_20ff94;
        case 0x20ff98u: goto label_20ff98;
        case 0x20ff9cu: goto label_20ff9c;
        case 0x20ffa0u: goto label_20ffa0;
        case 0x20ffa4u: goto label_20ffa4;
        case 0x20ffa8u: goto label_20ffa8;
        case 0x20ffacu: goto label_20ffac;
        case 0x20ffb0u: goto label_20ffb0;
        case 0x20ffb4u: goto label_20ffb4;
        case 0x20ffb8u: goto label_20ffb8;
        case 0x20ffbcu: goto label_20ffbc;
        case 0x20ffc0u: goto label_20ffc0;
        case 0x20ffc4u: goto label_20ffc4;
        case 0x20ffc8u: goto label_20ffc8;
        case 0x20ffccu: goto label_20ffcc;
        case 0x20ffd0u: goto label_20ffd0;
        case 0x20ffd4u: goto label_20ffd4;
        case 0x20ffd8u: goto label_20ffd8;
        case 0x20ffdcu: goto label_20ffdc;
        case 0x20ffe0u: goto label_20ffe0;
        case 0x20ffe4u: goto label_20ffe4;
        case 0x20ffe8u: goto label_20ffe8;
        case 0x20ffecu: goto label_20ffec;
        case 0x20fff0u: goto label_20fff0;
        case 0x20fff4u: goto label_20fff4;
        case 0x20fff8u: goto label_20fff8;
        case 0x20fffcu: goto label_20fffc;
        case 0x210000u: goto label_210000;
        case 0x210004u: goto label_210004;
        case 0x210008u: goto label_210008;
        case 0x21000cu: goto label_21000c;
        case 0x210010u: goto label_210010;
        case 0x210014u: goto label_210014;
        case 0x210018u: goto label_210018;
        case 0x21001cu: goto label_21001c;
        case 0x210020u: goto label_210020;
        case 0x210024u: goto label_210024;
        case 0x210028u: goto label_210028;
        case 0x21002cu: goto label_21002c;
        case 0x210030u: goto label_210030;
        case 0x210034u: goto label_210034;
        case 0x210038u: goto label_210038;
        case 0x21003cu: goto label_21003c;
        case 0x210040u: goto label_210040;
        case 0x210044u: goto label_210044;
        case 0x210048u: goto label_210048;
        case 0x21004cu: goto label_21004c;
        case 0x210050u: goto label_210050;
        case 0x210054u: goto label_210054;
        case 0x210058u: goto label_210058;
        case 0x21005cu: goto label_21005c;
        case 0x210060u: goto label_210060;
        case 0x210064u: goto label_210064;
        case 0x210068u: goto label_210068;
        case 0x21006cu: goto label_21006c;
        case 0x210070u: goto label_210070;
        case 0x210074u: goto label_210074;
        case 0x210078u: goto label_210078;
        case 0x21007cu: goto label_21007c;
        case 0x210080u: goto label_210080;
        case 0x210084u: goto label_210084;
        case 0x210088u: goto label_210088;
        case 0x21008cu: goto label_21008c;
        case 0x210090u: goto label_210090;
        case 0x210094u: goto label_210094;
        case 0x210098u: goto label_210098;
        case 0x21009cu: goto label_21009c;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100acu: goto label_2100ac;
        case 0x2100b0u: goto label_2100b0;
        case 0x2100b4u: goto label_2100b4;
        case 0x2100b8u: goto label_2100b8;
        case 0x2100bcu: goto label_2100bc;
        case 0x2100c0u: goto label_2100c0;
        case 0x2100c4u: goto label_2100c4;
        case 0x2100c8u: goto label_2100c8;
        case 0x2100ccu: goto label_2100cc;
        default: break;
    }

    ctx->pc = 0x20ff10u;

label_20ff10:
    // 0x20ff10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20ff14:
    // 0x20ff14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ff18:
    // 0x20ff18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20ff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20ff1c:
    // 0x20ff1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_20ff20:
    // 0x20ff20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ff20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ff24:
    // 0x20ff24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20ff28:
    // 0x20ff28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_20ff2c:
    // 0x20ff2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ff30:
    // 0x20ff30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_20ff34:
    // 0x20ff34: 0x8e3301cc  lw          $s3, 0x1CC($s1)
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_20ff38:
    // 0x20ff38: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_20ff3c:
    // 0x20ff3c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x20ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20ff40:
    // 0x20ff40: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20ff44:
    // 0x20ff44: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x20ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_20ff48:
    // 0x20ff48: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
label_20ff4c:
    if (ctx->pc == 0x20FF4Cu) {
        ctx->pc = 0x20FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF48u;
        // 0x20ff4c: 0xae240084  sw          $a0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF50u;
        goto label_20ff50;
    }
    ctx->pc = 0x20FF48u;
    {
        const bool branch_taken_0x20ff48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF48u;
        // 0x20ff4c: 0xae240084  sw          $a0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff48) {
            ctx->pc = 0x20FF94u;
            goto label_20ff94;
        }
    }
    ctx->pc = 0x20FF50u;
label_20ff50:
    // 0x20ff50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_20ff54:
    if (ctx->pc == 0x20FF54u) {
        ctx->pc = 0x20FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF50u;
        // 0x20ff54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF58u;
        goto label_20ff58;
    }
    ctx->pc = 0x20FF50u;
    {
        const bool branch_taken_0x20ff50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF50u;
        // 0x20ff54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff50) {
            ctx->pc = 0x20FF68u;
            goto label_20ff68;
        }
    }
    ctx->pc = 0x20FF58u;
label_20ff58:
    // 0x20ff58: 0x10a20023  beq         $a1, $v0, . + 4 + (0x23 << 2)
label_20ff5c:
    if (ctx->pc == 0x20FF5Cu) {
        ctx->pc = 0x20FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF58u;
        // 0x20ff5c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF60u;
        goto label_20ff60;
    }
    ctx->pc = 0x20FF58u;
    {
        const bool branch_taken_0x20ff58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF58u;
        // 0x20ff5c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff58) {
            ctx->pc = 0x20FFE8u;
            goto label_20ffe8;
        }
    }
    ctx->pc = 0x20FF60u;
label_20ff60:
    // 0x20ff60: 0x1000004d  b           . + 4 + (0x4D << 2)
label_20ff64:
    if (ctx->pc == 0x20FF64u) {
        ctx->pc = 0x20FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF60u;
        // 0x20ff64: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF68u;
        goto label_20ff68;
    }
    ctx->pc = 0x20FF60u;
    {
        const bool branch_taken_0x20ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF60u;
        // 0x20ff64: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff60) {
            ctx->pc = 0x210098u;
            goto label_210098;
        }
    }
    ctx->pc = 0x20FF68u;
label_20ff68:
    // 0x20ff68: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_20ff6c:
    // 0x20ff6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ff70:
    // 0x20ff70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_20ff74:
    if (ctx->pc == 0x20FF74u) {
        ctx->pc = 0x20FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF70u;
        // 0x20ff74: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF78u;
        goto label_20ff78;
    }
    ctx->pc = 0x20FF70u;
    {
        const bool branch_taken_0x20ff70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF70u;
        // 0x20ff74: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff70) {
            ctx->pc = 0x20FF88u;
            goto label_20ff88;
        }
    }
    ctx->pc = 0x20FF78u;
label_20ff78:
    // 0x20ff78: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20ff7c:
    // 0x20ff7c: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
label_20ff80:
    // 0x20ff80: 0x1000004b  b           . + 4 + (0x4B << 2)
label_20ff84:
    if (ctx->pc == 0x20FF84u) {
        ctx->pc = 0x20FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF80u;
        // 0x20ff84: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF88u;
        goto label_20ff88;
    }
    ctx->pc = 0x20FF80u;
    {
        const bool branch_taken_0x20ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF80u;
        // 0x20ff84: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff80) {
            ctx->pc = 0x2100B0u;
            goto label_2100b0;
        }
    }
    ctx->pc = 0x20FF88u;
label_20ff88:
    // 0x20ff88: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
label_20ff8c:
    // 0x20ff8c: 0x10000048  b           . + 4 + (0x48 << 2)
label_20ff90:
    if (ctx->pc == 0x20FF90u) {
        ctx->pc = 0x20FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF8Cu;
        // 0x20ff90: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF94u;
        goto label_20ff94;
    }
    ctx->pc = 0x20FF8Cu;
    {
        const bool branch_taken_0x20ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF8Cu;
        // 0x20ff90: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff8c) {
            ctx->pc = 0x2100B0u;
            goto label_2100b0;
        }
    }
    ctx->pc = 0x20FF94u;
label_20ff94:
    // 0x20ff94: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_20ff98:
    // 0x20ff98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ff9c:
    // 0x20ff9c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_20ffa0:
    if (ctx->pc == 0x20FFA0u) {
        ctx->pc = 0x20FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF9Cu;
        // 0x20ffa0: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFA4u;
        goto label_20ffa4;
    }
    ctx->pc = 0x20FF9Cu;
    {
        const bool branch_taken_0x20ff9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ff9c) {
            ctx->pc = 0x20FFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FF9Cu;
            // 0x20ffa0: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FFB0u;
            goto label_20ffb0;
        }
    }
    ctx->pc = 0x20FFA4u;
label_20ffa4:
    // 0x20ffa4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20ffa8:
    // 0x20ffa8: 0x10000002  b           . + 4 + (0x2 << 2)
label_20ffac:
    if (ctx->pc == 0x20FFACu) {
        ctx->pc = 0x20FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA8u;
        // 0x20ffac: 0x244204e8  addiu       $v0, $v0, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFB0u;
        goto label_20ffb0;
    }
    ctx->pc = 0x20FFA8u;
    {
        const bool branch_taken_0x20ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA8u;
        // 0x20ffac: 0x244204e8  addiu       $v0, $v0, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa8) {
            ctx->pc = 0x20FFB4u;
            goto label_20ffb4;
        }
    }
    ctx->pc = 0x20FFB0u;
label_20ffb0:
    // 0x20ffb0: 0x24420390  addiu       $v0, $v0, 0x390
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
label_20ffb4:
    // 0x20ffb4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x20ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_20ffb8:
    // 0x20ffb8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x20ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_20ffbc:
    // 0x20ffbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20ffc0:
    if (ctx->pc == 0x20FFC0u) {
        ctx->pc = 0x20FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFBCu;
        // 0x20ffc0: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFC4u;
        goto label_20ffc4;
    }
    ctx->pc = 0x20FFBCu;
    {
        const bool branch_taken_0x20ffbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFBCu;
        // 0x20ffc0: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffbc) {
            ctx->pc = 0x20FFCCu;
            goto label_20ffcc;
        }
    }
    ctx->pc = 0x20FFC4u;
label_20ffc4:
    // 0x20ffc4: 0xc083e2e  jal         func_20F8B8
label_20ffc8:
    if (ctx->pc == 0x20FFC8u) {
        ctx->pc = 0x20FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC4u;
        // 0x20ffc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFCCu;
        goto label_20ffcc;
    }
    ctx->pc = 0x20FFC4u;
    SET_GPR_U32(ctx, 31, 0x20FFCCu);
    ctx->pc = 0x20FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFC4u;
    // 0x20ffc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F8B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F8B8u, 0x20FFC4u, 0x20FFCCu)) {
        return;
    }
    ctx->pc = 0x20FFCCu;
label_20ffcc:
    // 0x20ffcc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x20ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_20ffd0:
    // 0x20ffd0: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_20ffd4:
    if (ctx->pc == 0x20FFD4u) {
        ctx->pc = 0x20FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFD0u;
        // 0x20ffd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFD8u;
        goto label_20ffd8;
    }
    ctx->pc = 0x20FFD0u;
    {
        const bool branch_taken_0x20ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFD0u;
        // 0x20ffd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffd0) {
            ctx->pc = 0x2100B4u;
            goto label_2100b4;
        }
    }
    ctx->pc = 0x20FFD8u;
label_20ffd8:
    // 0x20ffd8: 0xc083ebe  jal         func_20FAF8
label_20ffdc:
    if (ctx->pc == 0x20FFDCu) {
        ctx->pc = 0x20FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFD8u;
        // 0x20ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFE0u;
        goto label_20ffe0;
    }
    ctx->pc = 0x20FFD8u;
    SET_GPR_U32(ctx, 31, 0x20FFE0u);
    ctx->pc = 0x20FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFD8u;
    // 0x20ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FAF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20FAF8u, 0x20FFD8u, 0x20FFE0u)) {
        return;
    }
    ctx->pc = 0x20FFE0u;
label_20ffe0:
    // 0x20ffe0: 0x10000034  b           . + 4 + (0x34 << 2)
label_20ffe4:
    if (ctx->pc == 0x20FFE4u) {
        ctx->pc = 0x20FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFE0u;
        // 0x20ffe4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFE8u;
        goto label_20ffe8;
    }
    ctx->pc = 0x20FFE0u;
    {
        const bool branch_taken_0x20ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFE0u;
        // 0x20ffe4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffe0) {
            ctx->pc = 0x2100B4u;
            goto label_2100b4;
        }
    }
    ctx->pc = 0x20FFE8u;
label_20ffe8:
    // 0x20ffe8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_20ffec:
    // 0x20ffec: 0x2442fce8  addiu       $v0, $v0, -0x318
    ctx->pc = 0x20ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
label_20fff0:
    // 0x20fff0: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x20fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_20fff4:
    // 0x20fff4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_20fff8:
    if (ctx->pc == 0x20FFF8u) {
        ctx->pc = 0x20FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFF4u;
        // 0x20fff8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFFCu;
        goto label_20fffc;
    }
    ctx->pc = 0x20FFF4u;
    {
        const bool branch_taken_0x20fff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFF4u;
        // 0x20fff8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fff4) {
            ctx->pc = 0x210050u;
            goto label_210050;
        }
    }
    ctx->pc = 0x20FFFCu;
label_20fffc:
    // 0x20fffc: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x20fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_210000:
    // 0x210000: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210004:
    // 0x210004: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x210004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_210008:
    // 0x210008: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x210008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_21000c:
    // 0x21000c: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x21000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_210010:
    // 0x210010: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_210014:
    if (ctx->pc == 0x210014u) {
        ctx->pc = 0x210014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210010u;
        // 0x210014: 0x2a040  sll         $s4, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210018u;
        goto label_210018;
    }
    ctx->pc = 0x210010u;
    {
        const bool branch_taken_0x210010 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x210014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210010u;
        // 0x210014: 0x2a040  sll         $s4, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210010) {
            ctx->pc = 0x210050u;
            goto label_210050;
        }
    }
    ctx->pc = 0x210018u;
label_210018:
    // 0x210018: 0x24900044  addiu       $s0, $a0, 0x44
    ctx->pc = 0x210018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_21001c:
    // 0x21001c: 0x0  nop
    ctx->pc = 0x21001cu;
    // NOP
label_210020:
    // 0x210020: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x210020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_210024:
    // 0x210024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210028:
    // 0x210028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21002c:
    // 0x21002c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21002cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210030:
    // 0x210030: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x210030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_210034:
    // 0x210034: 0x40f809  jalr        $v0
label_210038:
    if (ctx->pc == 0x210038u) {
        ctx->pc = 0x210038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210034u;
        // 0x210038: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21003Cu;
        goto label_21003c;
    }
    ctx->pc = 0x210034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21003Cu);
        ctx->pc = 0x210038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210034u;
        // 0x210038: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210034u, 0x21003Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21003Cu;
label_21003c:
    // 0x21003c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_210040:
    // 0x210040: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x210040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_210044:
    // 0x210044: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x210044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_210048:
    // 0x210048: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_21004c:
    if (ctx->pc == 0x21004Cu) {
        ctx->pc = 0x21004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210048u;
        // 0x21004c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210050u;
        goto label_210050;
    }
    ctx->pc = 0x210048u;
    {
        const bool branch_taken_0x210048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210048u;
        // 0x21004c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210048) {
            ctx->pc = 0x210020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210020;
        }
    }
    ctx->pc = 0x210050u;
label_210050:
    // 0x210050: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_210054:
    // 0x210054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210058:
    // 0x210058: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_21005c:
    // 0x21005c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_210060:
    // 0x210060: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_210064:
    if (ctx->pc == 0x210064u) {
        ctx->pc = 0x210064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210060u;
        // 0x210064: 0x2a040  sll         $s4, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210068u;
        goto label_210068;
    }
    ctx->pc = 0x210060u;
    {
        const bool branch_taken_0x210060 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x210064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210060u;
        // 0x210064: 0x2a040  sll         $s4, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210060) {
            ctx->pc = 0x2100B0u;
            goto label_2100b0;
        }
    }
    ctx->pc = 0x210068u;
label_210068:
    // 0x210068: 0x26700044  addiu       $s0, $s3, 0x44
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_21006c:
    // 0x21006c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x21006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210070:
    // 0x210070: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x210070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210074:
    // 0x210074: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210078:
    // 0x210078: 0xc08489c  jal         func_212270
label_21007c:
    if (ctx->pc == 0x21007Cu) {
        ctx->pc = 0x21007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210078u;
        // 0x21007c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210080u;
        goto label_210080;
    }
    ctx->pc = 0x210078u;
    SET_GPR_U32(ctx, 31, 0x210080u);
    ctx->pc = 0x21007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210078u;
    // 0x21007c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x210078u, 0x210080u)) {
        return;
    }
    ctx->pc = 0x210080u;
label_210080:
    // 0x210080: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x210080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_210084:
    // 0x210084: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x210084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_210088:
    // 0x210088: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_21008c:
    if (ctx->pc == 0x21008Cu) {
        ctx->pc = 0x21008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210088u;
        // 0x21008c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210090u;
        goto label_210090;
    }
    ctx->pc = 0x210088u;
    {
        const bool branch_taken_0x210088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210088) {
            ctx->pc = 0x21008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210088u;
            // 0x21008c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210070;
        }
    }
    ctx->pc = 0x210090u;
label_210090:
    // 0x210090: 0x10000008  b           . + 4 + (0x8 << 2)
label_210094:
    if (ctx->pc == 0x210094u) {
        ctx->pc = 0x210094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210090u;
        // 0x210094: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210098u;
        goto label_210098;
    }
    ctx->pc = 0x210090u;
    {
        const bool branch_taken_0x210090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210090u;
        // 0x210094: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210090) {
            ctx->pc = 0x2100B4u;
            goto label_2100b4;
        }
    }
    ctx->pc = 0x210098u;
label_210098:
    // 0x210098: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x210098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21009c:
    // 0x21009c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21009cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2100a0:
    // 0x2100a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2100a4:
    // 0x2100a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2100a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2100a8:
    // 0x2100a8: 0x60f809  jalr        $v1
label_2100ac:
    if (ctx->pc == 0x2100ACu) {
        ctx->pc = 0x2100ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100A8u;
        // 0x2100ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100B0u;
        goto label_2100b0;
    }
    ctx->pc = 0x2100A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2100B0u);
        ctx->pc = 0x2100ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100A8u;
        // 0x2100ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100A8u, 0x2100B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2100B0u;
label_2100b0:
    // 0x2100b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2100b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2100b4:
    // 0x2100b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2100b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2100b8:
    // 0x2100b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2100b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2100bc:
    // 0x2100bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2100bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2100c0:
    // 0x2100c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2100c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2100c4:
    // 0x2100c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2100c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2100c8:
    // 0x2100c8: 0x3e00008  jr          $ra
label_2100cc:
    if (ctx->pc == 0x2100CCu) {
        ctx->pc = 0x2100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C8u;
        // 0x2100cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100D0u;
        goto label_fallthrough_0x2100c8;
    }
    ctx->pc = 0x2100C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C8u;
        // 0x2100cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2100c8:
    ctx->pc = 0x2100D0u;
}
