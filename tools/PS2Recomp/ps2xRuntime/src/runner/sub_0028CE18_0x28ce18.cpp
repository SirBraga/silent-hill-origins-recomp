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

// Function: sub_0028CE18
// Address: 0x28ce18 - 0x28d0d0
void sub_0028CE18_0x28ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CE18_0x28ce18");
#endif

    switch (ctx->pc) {
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        default: break;
    }

    ctx->pc = 0x28ce18u;

label_28ce18:
    // 0x28ce18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28ce1c:
    // 0x28ce1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28ce20:
    // 0x28ce20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28ce24:
    // 0x28ce24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ce24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ce28:
    // 0x28ce28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28ce2c:
    // 0x28ce2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ce30:
    // 0x28ce30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28ce34:
    // 0x28ce34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28ce34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28ce38:
    // 0x28ce38: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28ce3c:
    if (ctx->pc == 0x28CE3Cu) {
        ctx->pc = 0x28CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE38u;
        // 0x28ce3c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE40u;
        goto label_28ce40;
    }
    ctx->pc = 0x28CE38u;
    {
        const bool branch_taken_0x28ce38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE38u;
        // 0x28ce3c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce38) {
            ctx->pc = 0x28CE70u;
            goto label_28ce70;
        }
    }
    ctx->pc = 0x28CE40u;
label_28ce40:
    // 0x28ce40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28ce40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28ce44:
    // 0x28ce44: 0xc093546  jal         func_24D518
label_28ce48:
    if (ctx->pc == 0x28CE48u) {
        ctx->pc = 0x28CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE44u;
        // 0x28ce48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE4Cu;
        goto label_28ce4c;
    }
    ctx->pc = 0x28CE44u;
    SET_GPR_U32(ctx, 31, 0x28CE4Cu);
    ctx->pc = 0x28CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE44u;
    // 0x28ce48: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28CE44u, 0x28CE4Cu)) {
        return;
    }
    ctx->pc = 0x28CE4Cu;
label_28ce4c:
    // 0x28ce4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28ce50:
    // 0x28ce50: 0x14430097  bne         $v0, $v1, . + 4 + (0x97 << 2)
label_28ce54:
    if (ctx->pc == 0x28CE54u) {
        ctx->pc = 0x28CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE50u;
        // 0x28ce54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE58u;
        goto label_28ce58;
    }
    ctx->pc = 0x28CE50u;
    {
        const bool branch_taken_0x28ce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE50u;
        // 0x28ce54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce50) {
            ctx->pc = 0x28D0B0u;
            goto label_28d0b0;
        }
    }
    ctx->pc = 0x28CE58u;
label_28ce58:
    // 0x28ce58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28ce5c:
    // 0x28ce5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28ce60:
    // 0x28ce60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28ce64:
    // 0x28ce64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28ce68:
    // 0x28ce68: 0x10000004  b           . + 4 + (0x4 << 2)
label_28ce6c:
    if (ctx->pc == 0x28CE6Cu) {
        ctx->pc = 0x28CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE68u;
        // 0x28ce6c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE70u;
        goto label_28ce70;
    }
    ctx->pc = 0x28CE68u;
    {
        const bool branch_taken_0x28ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE68u;
        // 0x28ce6c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce68) {
            ctx->pc = 0x28CE7Cu;
            goto label_28ce7c;
        }
    }
    ctx->pc = 0x28CE70u;
label_28ce70:
    // 0x28ce70: 0xc0a312a  jal         func_28C4A8
label_28ce74:
    if (ctx->pc == 0x28CE74u) {
        ctx->pc = 0x28CE78u;
        goto label_28ce78;
    }
    ctx->pc = 0x28CE70u;
    SET_GPR_U32(ctx, 31, 0x28CE78u);
    ctx->pc = 0x28C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28C4A8u, 0x28CE70u, 0x28CE78u)) {
        return;
    }
    ctx->pc = 0x28CE78u;
label_28ce78:
    // 0x28ce78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28ce78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ce7c:
    // 0x28ce7c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28ce80:
    // 0x28ce80: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x28ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_28ce84:
    // 0x28ce84: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28ce88:
    // 0x28ce88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28ce8c:
    // 0x28ce8c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x28ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_28ce90:
    // 0x28ce90: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x28ce90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_28ce94:
    // 0x28ce94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_28ce98:
    if (ctx->pc == 0x28CE98u) {
        ctx->pc = 0x28CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE94u;
        // 0x28ce98: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CE9Cu;
        goto label_28ce9c;
    }
    ctx->pc = 0x28CE94u;
    {
        const bool branch_taken_0x28ce94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE94u;
        // 0x28ce98: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce94) {
            ctx->pc = 0x28CEA4u;
            goto label_28cea4;
        }
    }
    ctx->pc = 0x28CE9Cu;
label_28ce9c:
    // 0x28ce9c: 0x10000056  b           . + 4 + (0x56 << 2)
label_28cea0:
    if (ctx->pc == 0x28CEA0u) {
        ctx->pc = 0x28CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE9Cu;
        // 0x28cea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEA4u;
        goto label_28cea4;
    }
    ctx->pc = 0x28CE9Cu;
    {
        const bool branch_taken_0x28ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE9Cu;
        // 0x28cea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce9c) {
            ctx->pc = 0x28CFF8u;
            goto label_28cff8;
        }
    }
    ctx->pc = 0x28CEA4u;
label_28cea4:
    // 0x28cea4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28cea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28cea8:
    // 0x28cea8: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28ceac:
    // 0x28ceac: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x28ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28ceb0:
    // 0x28ceb0: 0x40f809  jalr        $v0
label_28ceb4:
    if (ctx->pc == 0x28CEB4u) {
        ctx->pc = 0x28CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEB0u;
        // 0x28ceb4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEB8u;
        goto label_28ceb8;
    }
    ctx->pc = 0x28CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28CEB8u);
        ctx->pc = 0x28CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEB0u;
        // 0x28ceb4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CEB0u, 0x28CEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28CEB8u;
label_28ceb8:
    // 0x28ceb8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28ceb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cebc:
    // 0x28cebc: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_28cec0:
    if (ctx->pc == 0x28CEC0u) {
        ctx->pc = 0x28CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEBCu;
        // 0x28cec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEC4u;
        goto label_28cec4;
    }
    ctx->pc = 0x28CEBCu;
    {
        const bool branch_taken_0x28cebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEBCu;
        // 0x28cec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cebc) {
            ctx->pc = 0x28CFF4u;
            goto label_28cff4;
        }
    }
    ctx->pc = 0x28CEC4u;
label_28cec4:
    // 0x28cec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cec8:
    // 0x28cec8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28cec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28cecc:
    // 0x28cecc: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_28ced0:
    if (ctx->pc == 0x28CED0u) {
        ctx->pc = 0x28CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CECCu;
        // 0x28ced0: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CED4u;
        goto label_28ced4;
    }
    ctx->pc = 0x28CECCu;
    {
        const bool branch_taken_0x28cecc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x28CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CECCu;
        // 0x28ced0: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cecc) {
            ctx->pc = 0x28CF40u;
            goto label_28cf40;
        }
    }
    ctx->pc = 0x28CED4u;
label_28ced4:
    // 0x28ced4: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_28ced8:
    if (ctx->pc == 0x28CED8u) {
        ctx->pc = 0x28CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CED4u;
        // 0x28ced8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEDCu;
        goto label_28cedc;
    }
    ctx->pc = 0x28CED4u;
    {
        const bool branch_taken_0x28ced4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ced4) {
            ctx->pc = 0x28CED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CED4u;
            // 0x28ced8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CF74u;
            goto label_28cf74;
        }
    }
    ctx->pc = 0x28CEDCu;
label_28cedc:
    // 0x28cedc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28cedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_28cee0:
    // 0x28cee0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_28cee4:
    if (ctx->pc == 0x28CEE4u) {
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEE0u;
        // 0x28cee4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEE8u;
        goto label_28cee8;
    }
    ctx->pc = 0x28CEE0u;
    {
        const bool branch_taken_0x28cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cee0) {
            ctx->pc = 0x28CEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CEE0u;
            // 0x28cee4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CF44u;
            goto label_28cf44;
        }
    }
    ctx->pc = 0x28CEE8u;
label_28cee8:
    // 0x28cee8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28cee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28ceec:
    // 0x28ceec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_28cef0:
    if (ctx->pc == 0x28CEF0u) {
        ctx->pc = 0x28CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEECu;
        // 0x28cef0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CEF4u;
        goto label_28cef4;
    }
    ctx->pc = 0x28CEECu;
    {
        const bool branch_taken_0x28ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ceec) {
            ctx->pc = 0x28CEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CEECu;
            // 0x28cef0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CF1Cu;
            goto label_28cf1c;
        }
    }
    ctx->pc = 0x28CEF4u;
label_28cef4:
    // 0x28cef4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x28cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cef8:
    // 0x28cef8: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x28cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_28cefc:
    // 0x28cefc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x28cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28cf00:
    // 0x28cf00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cf04:
    // 0x28cf04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28cf08:
    // 0x28cf08: 0x88430007  lwl         $v1, 0x7($v0)
    ctx->pc = 0x28cf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_28cf0c:
    // 0x28cf0c: 0x98430004  lwr         $v1, 0x4($v0)
    ctx->pc = 0x28cf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_28cf10:
    // 0x28cf10: 0xa9030003  swl         $v1, 0x3($t0)
    ctx->pc = 0x28cf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf14:
    // 0x28cf14: 0xb9030000  swr         $v1, 0x0($t0)
    ctx->pc = 0x28cf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf18:
    // 0x28cf18: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cf1c:
    // 0x28cf1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28cf20:
    // 0x28cf20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cf24:
    // 0x28cf24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28cf28:
    // 0x28cf28: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_28cf2c:
    // 0x28cf2c: 0x886b0007  lwl         $t3, 0x7($v1)
    ctx->pc = 0x28cf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_28cf30:
    // 0x28cf30: 0x986b0004  lwr         $t3, 0x4($v1)
    ctx->pc = 0x28cf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_28cf34:
    // 0x28cf34: 0xa88b0003  swl         $t3, 0x3($a0)
    ctx->pc = 0x28cf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf38:
    // 0x28cf38: 0xb88b0000  swr         $t3, 0x0($a0)
    ctx->pc = 0x28cf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf3c:
    // 0x28cf3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_28cf40:
    // 0x28cf40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cf44:
    // 0x28cf44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28cf48:
    // 0x28cf48: 0xd1382b  sltu        $a3, $a2, $s1
    ctx->pc = 0x28cf48u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28cf4c:
    // 0x28cf4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cf50:
    // 0x28cf50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28cf54:
    // 0x28cf54: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_28cf58:
    // 0x28cf58: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x28cf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_28cf5c:
    // 0x28cf5c: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x28cf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_28cf60:
    // 0x28cf60: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x28cf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf64:
    // 0x28cf64: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x28cf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf68:
    // 0x28cf68: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_28cf6c:
    if (ctx->pc == 0x28CF6Cu) {
        ctx->pc = 0x28CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF68u;
        // 0x28cf6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CF70u;
        goto label_28cf70;
    }
    ctx->pc = 0x28CF68u;
    {
        const bool branch_taken_0x28cf68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF68u;
        // 0x28cf6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf68) {
            ctx->pc = 0x28CFF4u;
            goto label_28cff4;
        }
    }
    ctx->pc = 0x28CF70u;
label_28cf70:
    // 0x28cf70: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cf74:
    // 0x28cf74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_28cf78:
    // 0x28cf78: 0xd1382b  sltu        $a3, $a2, $s1
    ctx->pc = 0x28cf78u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28cf7c:
    // 0x28cf7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cf80:
    // 0x28cf80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28cf84:
    // 0x28cf84: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x28cf84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_28cf88:
    // 0x28cf88: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x28cf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_28cf8c:
    // 0x28cf8c: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x28cf8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf90:
    // 0x28cf90: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x28cf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cf94:
    // 0x28cf94: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cf98:
    // 0x28cf98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cf9c:
    // 0x28cf9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28cfa0:
    // 0x28cfa0: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x28cfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_28cfa4:
    // 0x28cfa4: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x28cfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_28cfa8:
    // 0x28cfa8: 0xa88a0007  swl         $t2, 0x7($a0)
    ctx->pc = 0x28cfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfac:
    // 0x28cfac: 0xb88a0004  swr         $t2, 0x4($a0)
    ctx->pc = 0x28cfacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfb0:
    // 0x28cfb0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cfb4:
    // 0x28cfb4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cfb8:
    // 0x28cfb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28cfbc:
    // 0x28cfbc: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x28cfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_28cfc0:
    // 0x28cfc0: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x28cfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_28cfc4:
    // 0x28cfc4: 0xa88a000b  swl         $t2, 0xB($a0)
    ctx->pc = 0x28cfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfc8:
    // 0x28cfc8: 0xb88a0008  swr         $t2, 0x8($a0)
    ctx->pc = 0x28cfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfcc:
    // 0x28cfcc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x28cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28cfd0:
    // 0x28cfd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28cfd4:
    // 0x28cfd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28cfd8:
    // 0x28cfd8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_28cfdc:
    // 0x28cfdc: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x28cfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_28cfe0:
    // 0x28cfe0: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x28cfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_28cfe4:
    // 0x28cfe4: 0xa88a000f  swl         $t2, 0xF($a0)
    ctx->pc = 0x28cfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfe8:
    // 0x28cfe8: 0xb88a000c  swr         $t2, 0xC($a0)
    ctx->pc = 0x28cfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28cfec:
    // 0x28cfec: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
label_28cff0:
    if (ctx->pc == 0x28CFF0u) {
        ctx->pc = 0x28CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFECu;
        // 0x28cff0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28CFF4u;
        goto label_28cff4;
    }
    ctx->pc = 0x28CFECu;
    {
        const bool branch_taken_0x28cfec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFECu;
        // 0x28cff0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfec) {
            ctx->pc = 0x28CF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28cf70;
        }
    }
    ctx->pc = 0x28CFF4u;
label_28cff4:
    // 0x28cff4: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x28cff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28cff8:
    // 0x28cff8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28cffc:
    if (ctx->pc == 0x28CFFCu) {
        ctx->pc = 0x28CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFF8u;
        // 0x28cffc: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D000u;
        goto label_28d000;
    }
    ctx->pc = 0x28CFF8u;
    {
        const bool branch_taken_0x28cff8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFF8u;
        // 0x28cffc: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cff8) {
            ctx->pc = 0x28D014u;
            goto label_28d014;
        }
    }
    ctx->pc = 0x28D000u;
label_28d000:
    // 0x28d000: 0xae5300b0  sw          $s3, 0xB0($s2)
    ctx->pc = 0x28d000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 19));
label_28d004:
    // 0x28d004: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28d008:
    // 0x28d008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28d00c:
    // 0x28d00c: 0x10000012  b           . + 4 + (0x12 << 2)
label_28d010:
    if (ctx->pc == 0x28D010u) {
        ctx->pc = 0x28D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D00Cu;
        // 0x28d010: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D014u;
        goto label_28d014;
    }
    ctx->pc = 0x28D00Cu;
    {
        const bool branch_taken_0x28d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D00Cu;
        // 0x28d010: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d00c) {
            ctx->pc = 0x28D058u;
            goto label_28d058;
        }
    }
    ctx->pc = 0x28D014u;
label_28d014:
    // 0x28d014: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28d014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28d018:
    // 0x28d018: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28d01c:
    // 0x28d01c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28d020:
    // 0x28d020: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28d024:
    // 0x28d024: 0x40f809  jalr        $v0
label_28d028:
    if (ctx->pc == 0x28D028u) {
        ctx->pc = 0x28D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D024u;
        // 0x28d028: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D02Cu;
        goto label_28d02c;
    }
    ctx->pc = 0x28D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28D02Cu);
        ctx->pc = 0x28D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D024u;
        // 0x28d028: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D024u, 0x28D02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D02Cu;
label_28d02c:
    // 0x28d02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d030:
    // 0x28d030: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28d030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28d034:
    // 0x28d034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d038:
    // 0x28d038: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28d03c:
    // 0x28d03c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x28d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_28d040:
    // 0x28d040: 0xc092858  jal         func_24A160
label_28d044:
    if (ctx->pc == 0x28D044u) {
        ctx->pc = 0x28D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D040u;
        // 0x28d044: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D048u;
        goto label_28d048;
    }
    ctx->pc = 0x28D040u;
    SET_GPR_U32(ctx, 31, 0x28D048u);
    ctx->pc = 0x28D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D040u;
    // 0x28d044: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x28D040u, 0x28D048u)) {
        return;
    }
    ctx->pc = 0x28D048u;
label_28d048:
    // 0x28d048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28d048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28d04c:
    // 0x28d04c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_28d050:
    // 0x28d050: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x28d050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
label_28d054:
    // 0x28d054: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x28d054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_28d058:
    // 0x28d058: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28d05c:
    // 0x28d05c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28d060:
    // 0x28d060: 0xc089892  jal         func_226248
label_28d064:
    if (ctx->pc == 0x28D064u) {
        ctx->pc = 0x28D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D060u;
        // 0x28d064: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D068u;
        goto label_28d068;
    }
    ctx->pc = 0x28D060u;
    SET_GPR_U32(ctx, 31, 0x28D068u);
    ctx->pc = 0x28D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D060u;
    // 0x28d064: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x28D060u, 0x28D068u)) {
        return;
    }
    ctx->pc = 0x28D068u;
label_28d068:
    // 0x28d068: 0xc0a1da0  jal         func_287680
label_28d06c:
    if (ctx->pc == 0x28D06Cu) {
        ctx->pc = 0x28D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D068u;
        // 0x28d06c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D070u;
        goto label_28d070;
    }
    ctx->pc = 0x28D068u;
    SET_GPR_U32(ctx, 31, 0x28D070u);
    ctx->pc = 0x28D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D068u;
    // 0x28d06c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287680u, 0x28D068u, 0x28D070u)) {
        return;
    }
    ctx->pc = 0x28D070u;
label_28d070:
    // 0x28d070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d074:
    // 0x28d074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28d074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d078:
    // 0x28d078: 0xc0899e8  jal         func_2267A0
label_28d07c:
    if (ctx->pc == 0x28D07Cu) {
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D078u;
        // 0x28d07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D080u;
        goto label_28d080;
    }
    ctx->pc = 0x28D078u;
    SET_GPR_U32(ctx, 31, 0x28D080u);
    ctx->pc = 0x28D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D078u;
    // 0x28d07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x28D078u, 0x28D080u)) {
        return;
    }
    ctx->pc = 0x28D080u;
label_28d080:
    // 0x28d080: 0xc0954b8  jal         func_2552E0
label_28d084:
    if (ctx->pc == 0x28D084u) {
        ctx->pc = 0x28D088u;
        goto label_28d088;
    }
    ctx->pc = 0x28D080u;
    SET_GPR_U32(ctx, 31, 0x28D088u);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x28D080u, 0x28D088u)) {
        return;
    }
    ctx->pc = 0x28D088u;
label_28d088:
    // 0x28d088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28d088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d08c:
    // 0x28d08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28d08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28d090:
    // 0x28d090: 0xc0957f0  jal         func_255FC0
label_28d094:
    if (ctx->pc == 0x28D094u) {
        ctx->pc = 0x28D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D090u;
        // 0x28d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D098u;
        goto label_28d098;
    }
    ctx->pc = 0x28D090u;
    SET_GPR_U32(ctx, 31, 0x28D098u);
    ctx->pc = 0x28D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D090u;
    // 0x28d094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x28D090u, 0x28D098u)) {
        return;
    }
    ctx->pc = 0x28D098u;
label_28d098:
    // 0x28d098: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x28d098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28d09c:
    // 0x28d09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d0a0:
    // 0x28d0a0: 0xc095502  jal         func_255408
label_28d0a4:
    if (ctx->pc == 0x28D0A4u) {
        ctx->pc = 0x28D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A0u;
        // 0x28d0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0A8u;
        goto label_28d0a8;
    }
    ctx->pc = 0x28D0A0u;
    SET_GPR_U32(ctx, 31, 0x28D0A8u);
    ctx->pc = 0x28D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0A0u;
    // 0x28d0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255408u, 0x28D0A0u, 0x28D0A8u)) {
        return;
    }
    ctx->pc = 0x28D0A8u;
label_28d0a8:
    // 0x28d0a8: 0xae5000b8  sw          $s0, 0xB8($s2)
    ctx->pc = 0x28d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 16));
label_28d0ac:
    // 0x28d0ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28d0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d0b0:
    // 0x28d0b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d0b4:
    // 0x28d0b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d0b8:
    // 0x28d0b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d0b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d0bc:
    // 0x28d0bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28d0bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d0c0:
    // 0x28d0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28d0c4:
    // 0x28d0c4: 0x3e00008  jr          $ra
label_28d0c8:
    if (ctx->pc == 0x28D0C8u) {
        ctx->pc = 0x28D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C4u;
        // 0x28d0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D0CCu;
        goto label_28d0cc;
    }
    ctx->pc = 0x28D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0C4u;
        // 0x28d0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D0CCu;
label_28d0cc:
    // 0x28d0cc: 0x0  nop
    ctx->pc = 0x28d0ccu;
    // NOP
    ctx->pc = 0x28d0d0u;
}
