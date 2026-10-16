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

// Function: sub_0024FF28
// Address: 0x24ff28 - 0x250138
void sub_0024FF28_0x24ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FF28_0x24ff28");
#endif

    switch (ctx->pc) {
        case 0x24ff28u: goto label_24ff28;
        case 0x24ff2cu: goto label_24ff2c;
        case 0x24ff30u: goto label_24ff30;
        case 0x24ff34u: goto label_24ff34;
        case 0x24ff38u: goto label_24ff38;
        case 0x24ff3cu: goto label_24ff3c;
        case 0x24ff40u: goto label_24ff40;
        case 0x24ff44u: goto label_24ff44;
        case 0x24ff48u: goto label_24ff48;
        case 0x24ff4cu: goto label_24ff4c;
        case 0x24ff50u: goto label_24ff50;
        case 0x24ff54u: goto label_24ff54;
        case 0x24ff58u: goto label_24ff58;
        case 0x24ff5cu: goto label_24ff5c;
        case 0x24ff60u: goto label_24ff60;
        case 0x24ff64u: goto label_24ff64;
        case 0x24ff68u: goto label_24ff68;
        case 0x24ff6cu: goto label_24ff6c;
        case 0x24ff70u: goto label_24ff70;
        case 0x24ff74u: goto label_24ff74;
        case 0x24ff78u: goto label_24ff78;
        case 0x24ff7cu: goto label_24ff7c;
        case 0x24ff80u: goto label_24ff80;
        case 0x24ff84u: goto label_24ff84;
        case 0x24ff88u: goto label_24ff88;
        case 0x24ff8cu: goto label_24ff8c;
        case 0x24ff90u: goto label_24ff90;
        case 0x24ff94u: goto label_24ff94;
        case 0x24ff98u: goto label_24ff98;
        case 0x24ff9cu: goto label_24ff9c;
        case 0x24ffa0u: goto label_24ffa0;
        case 0x24ffa4u: goto label_24ffa4;
        case 0x24ffa8u: goto label_24ffa8;
        case 0x24ffacu: goto label_24ffac;
        case 0x24ffb0u: goto label_24ffb0;
        case 0x24ffb4u: goto label_24ffb4;
        case 0x24ffb8u: goto label_24ffb8;
        case 0x24ffbcu: goto label_24ffbc;
        case 0x24ffc0u: goto label_24ffc0;
        case 0x24ffc4u: goto label_24ffc4;
        case 0x24ffc8u: goto label_24ffc8;
        case 0x24ffccu: goto label_24ffcc;
        case 0x24ffd0u: goto label_24ffd0;
        case 0x24ffd4u: goto label_24ffd4;
        case 0x24ffd8u: goto label_24ffd8;
        case 0x24ffdcu: goto label_24ffdc;
        case 0x24ffe0u: goto label_24ffe0;
        case 0x24ffe4u: goto label_24ffe4;
        case 0x24ffe8u: goto label_24ffe8;
        case 0x24ffecu: goto label_24ffec;
        case 0x24fff0u: goto label_24fff0;
        case 0x24fff4u: goto label_24fff4;
        case 0x24fff8u: goto label_24fff8;
        case 0x24fffcu: goto label_24fffc;
        case 0x250000u: goto label_250000;
        case 0x250004u: goto label_250004;
        case 0x250008u: goto label_250008;
        case 0x25000cu: goto label_25000c;
        case 0x250010u: goto label_250010;
        case 0x250014u: goto label_250014;
        case 0x250018u: goto label_250018;
        case 0x25001cu: goto label_25001c;
        case 0x250020u: goto label_250020;
        case 0x250024u: goto label_250024;
        case 0x250028u: goto label_250028;
        case 0x25002cu: goto label_25002c;
        case 0x250030u: goto label_250030;
        case 0x250034u: goto label_250034;
        case 0x250038u: goto label_250038;
        case 0x25003cu: goto label_25003c;
        case 0x250040u: goto label_250040;
        case 0x250044u: goto label_250044;
        case 0x250048u: goto label_250048;
        case 0x25004cu: goto label_25004c;
        case 0x250050u: goto label_250050;
        case 0x250054u: goto label_250054;
        case 0x250058u: goto label_250058;
        case 0x25005cu: goto label_25005c;
        case 0x250060u: goto label_250060;
        case 0x250064u: goto label_250064;
        case 0x250068u: goto label_250068;
        case 0x25006cu: goto label_25006c;
        case 0x250070u: goto label_250070;
        case 0x250074u: goto label_250074;
        case 0x250078u: goto label_250078;
        case 0x25007cu: goto label_25007c;
        case 0x250080u: goto label_250080;
        case 0x250084u: goto label_250084;
        case 0x250088u: goto label_250088;
        case 0x25008cu: goto label_25008c;
        case 0x250090u: goto label_250090;
        case 0x250094u: goto label_250094;
        case 0x250098u: goto label_250098;
        case 0x25009cu: goto label_25009c;
        case 0x2500a0u: goto label_2500a0;
        case 0x2500a4u: goto label_2500a4;
        case 0x2500a8u: goto label_2500a8;
        case 0x2500acu: goto label_2500ac;
        case 0x2500b0u: goto label_2500b0;
        case 0x2500b4u: goto label_2500b4;
        case 0x2500b8u: goto label_2500b8;
        case 0x2500bcu: goto label_2500bc;
        case 0x2500c0u: goto label_2500c0;
        case 0x2500c4u: goto label_2500c4;
        case 0x2500c8u: goto label_2500c8;
        case 0x2500ccu: goto label_2500cc;
        case 0x2500d0u: goto label_2500d0;
        case 0x2500d4u: goto label_2500d4;
        case 0x2500d8u: goto label_2500d8;
        case 0x2500dcu: goto label_2500dc;
        case 0x2500e0u: goto label_2500e0;
        case 0x2500e4u: goto label_2500e4;
        case 0x2500e8u: goto label_2500e8;
        case 0x2500ecu: goto label_2500ec;
        case 0x2500f0u: goto label_2500f0;
        case 0x2500f4u: goto label_2500f4;
        case 0x2500f8u: goto label_2500f8;
        case 0x2500fcu: goto label_2500fc;
        case 0x250100u: goto label_250100;
        case 0x250104u: goto label_250104;
        case 0x250108u: goto label_250108;
        case 0x25010cu: goto label_25010c;
        case 0x250110u: goto label_250110;
        case 0x250114u: goto label_250114;
        case 0x250118u: goto label_250118;
        case 0x25011cu: goto label_25011c;
        case 0x250120u: goto label_250120;
        case 0x250124u: goto label_250124;
        case 0x250128u: goto label_250128;
        case 0x25012cu: goto label_25012c;
        case 0x250130u: goto label_250130;
        case 0x250134u: goto label_250134;
        default: break;
    }

    ctx->pc = 0x24ff28u;

label_24ff28:
    // 0x24ff28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_24ff2c:
    // 0x24ff2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_24ff30:
    // 0x24ff30: 0x8c4241a0  lw          $v0, 0x41A0($v0)
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16800)));
label_24ff34:
    // 0x24ff34: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x24ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_24ff38:
    // 0x24ff38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24ff3c:
    // 0x24ff3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_24ff40:
    // 0x24ff40: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24ff40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24ff44:
    // 0x24ff44: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x24ff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_24ff48:
    // 0x24ff48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24ff48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24ff4c:
    // 0x24ff4c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x24ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_24ff50:
    // 0x24ff50: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x24ff50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24ff54:
    // 0x24ff54: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x24ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_24ff58:
    // 0x24ff58: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x24ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_24ff5c:
    // 0x24ff5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24ff60:
    // 0x24ff60: 0xc0927be  jal         func_249EF8
label_24ff64:
    if (ctx->pc == 0x24FF64u) {
        ctx->pc = 0x24FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF60u;
        // 0x24ff64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF68u;
        goto label_24ff68;
    }
    ctx->pc = 0x24FF60u;
    SET_GPR_U32(ctx, 31, 0x24FF68u);
    ctx->pc = 0x24FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF60u;
    // 0x24ff64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x24FF60u, 0x24FF68u)) {
        return;
    }
    ctx->pc = 0x24FF68u;
label_24ff68:
    // 0x24ff68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_24ff6c:
    if (ctx->pc == 0x24FF6Cu) {
        ctx->pc = 0x24FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF68u;
        // 0x24ff6c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF70u;
        goto label_24ff70;
    }
    ctx->pc = 0x24FF68u;
    {
        const bool branch_taken_0x24ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF68u;
        // 0x24ff6c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff68) {
            ctx->pc = 0x24FFA8u;
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x24FF70u;
label_24ff70:
    // 0x24ff70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x24ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_24ff74:
    // 0x24ff74: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
label_24ff78:
    if (ctx->pc == 0x24FF78u) {
        ctx->pc = 0x24FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF74u;
        // 0x24ff78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF7Cu;
        goto label_24ff7c;
    }
    ctx->pc = 0x24FF74u;
    {
        const bool branch_taken_0x24ff74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF74u;
        // 0x24ff78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff74) {
            ctx->pc = 0x250114u;
            goto label_250114;
        }
    }
    ctx->pc = 0x24FF7Cu;
label_24ff7c:
    // 0x24ff7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ff80:
    // 0x24ff80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ff84:
    // 0x24ff84: 0xc0927be  jal         func_249EF8
label_24ff88:
    if (ctx->pc == 0x24FF88u) {
        ctx->pc = 0x24FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF84u;
        // 0x24ff88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF8Cu;
        goto label_24ff8c;
    }
    ctx->pc = 0x24FF84u;
    SET_GPR_U32(ctx, 31, 0x24FF8Cu);
    ctx->pc = 0x24FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF84u;
    // 0x24ff88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x24FF84u, 0x24FF8Cu)) {
        return;
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24ff90:
    if (ctx->pc == 0x24FF90u) {
        ctx->pc = 0x24FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF8Cu;
        // 0x24ff90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF94u;
        goto label_24ff94;
    }
    ctx->pc = 0x24FF8Cu;
    {
        const bool branch_taken_0x24ff8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF8Cu;
        // 0x24ff90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff8c) {
            ctx->pc = 0x24FFA8u;
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x24FF94u;
label_24ff94:
    // 0x24ff94: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x24ff94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_24ff98:
    // 0x24ff98: 0xc0927be  jal         func_249EF8
label_24ff9c:
    if (ctx->pc == 0x24FF9Cu) {
        ctx->pc = 0x24FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF98u;
        // 0x24ff9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFA0u;
        goto label_24ffa0;
    }
    ctx->pc = 0x24FF98u;
    SET_GPR_U32(ctx, 31, 0x24FFA0u);
    ctx->pc = 0x24FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF98u;
    // 0x24ff9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x24FF98u, 0x24FFA0u)) {
        return;
    }
    ctx->pc = 0x24FFA0u;
label_24ffa0:
    // 0x24ffa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24ffa4:
    if (ctx->pc == 0x24FFA4u) {
        ctx->pc = 0x24FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA0u;
        // 0x24ffa4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFA8u;
        goto label_24ffa8;
    }
    ctx->pc = 0x24FFA0u;
    {
        const bool branch_taken_0x24ffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA0u;
        // 0x24ffa4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffa0) {
            ctx->pc = 0x24FFB0u;
            goto label_24ffb0;
        }
    }
    ctx->pc = 0x24FFA8u;
label_24ffa8:
    // 0x24ffa8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_24ffac:
    if (ctx->pc == 0x24FFACu) {
        ctx->pc = 0x24FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA8u;
        // 0x24ffac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFB0u;
        goto label_24ffb0;
    }
    ctx->pc = 0x24FFA8u;
    {
        const bool branch_taken_0x24ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA8u;
        // 0x24ffac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffa8) {
            ctx->pc = 0x250114u;
            goto label_250114;
        }
    }
    ctx->pc = 0x24FFB0u;
label_24ffb0:
    // 0x24ffb0: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
label_24ffb4:
    if (ctx->pc == 0x24FFB4u) {
        ctx->pc = 0x24FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFB0u;
        // 0x24ffb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFB8u;
        goto label_24ffb8;
    }
    ctx->pc = 0x24FFB0u;
    {
        const bool branch_taken_0x24ffb0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFB0u;
        // 0x24ffb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffb0) {
            ctx->pc = 0x250110u;
            goto label_250110;
        }
    }
    ctx->pc = 0x24FFB8u;
label_24ffb8:
    // 0x24ffb8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x24ffb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_24ffbc:
    // 0x24ffbc: 0xc0927be  jal         func_249EF8
label_24ffc0:
    if (ctx->pc == 0x24FFC0u) {
        ctx->pc = 0x24FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFBCu;
        // 0x24ffc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFC4u;
        goto label_24ffc4;
    }
    ctx->pc = 0x24FFBCu;
    SET_GPR_U32(ctx, 31, 0x24FFC4u);
    ctx->pc = 0x24FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFBCu;
    // 0x24ffc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x24FFBCu, 0x24FFC4u)) {
        return;
    }
    ctx->pc = 0x24FFC4u;
label_24ffc4:
    // 0x24ffc4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_24ffc8:
    if (ctx->pc == 0x24FFC8u) {
        ctx->pc = 0x24FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFC4u;
        // 0x24ffc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFCCu;
        goto label_24ffcc;
    }
    ctx->pc = 0x24FFC4u;
    {
        const bool branch_taken_0x24ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFC4u;
        // 0x24ffc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffc4) {
            ctx->pc = 0x24FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x24FFCCu;
label_24ffcc:
    // 0x24ffcc: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x24ffccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_24ffd0:
    // 0x24ffd0: 0xc0927be  jal         func_249EF8
label_24ffd4:
    if (ctx->pc == 0x24FFD4u) {
        ctx->pc = 0x24FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFD0u;
        // 0x24ffd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFD8u;
        goto label_24ffd8;
    }
    ctx->pc = 0x24FFD0u;
    SET_GPR_U32(ctx, 31, 0x24FFD8u);
    ctx->pc = 0x24FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FFD0u;
    // 0x24ffd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x24FFD0u, 0x24FFD8u)) {
        return;
    }
    ctx->pc = 0x24FFD8u;
label_24ffd8:
    // 0x24ffd8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_24ffdc:
    if (ctx->pc == 0x24FFDCu) {
        ctx->pc = 0x24FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFD8u;
        // 0x24ffdc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFE0u;
        goto label_24ffe0;
    }
    ctx->pc = 0x24FFD8u;
    {
        const bool branch_taken_0x24ffd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFD8u;
        // 0x24ffdc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffd8) {
            ctx->pc = 0x24FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x24FFE0u;
label_24ffe0:
    // 0x24ffe0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_24ffe4:
    // 0x24ffe4: 0x8c8441a4  lw          $a0, 0x41A4($a0)
    ctx->pc = 0x24ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16804)));
label_24ffe8:
    // 0x24ffe8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24ffe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24ffec:
    // 0x24ffec: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x24ffecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24fff0:
    // 0x24fff0: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x24fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_24fff4:
    // 0x24fff4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24fff8:
    // 0x24fff8: 0x40f809  jalr        $v0
label_24fffc:
    if (ctx->pc == 0x24FFFCu) {
        ctx->pc = 0x24FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFF8u;
        // 0x24fffc: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250000u;
        goto label_250000;
    }
    ctx->pc = 0x24FFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250000u);
        ctx->pc = 0x24FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFF8u;
        // 0x24fffc: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FFF8u, 0x250000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250000u;
label_250000:
    // 0x250000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x250000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250004:
    // 0x250004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250008:
    // 0x250008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x250008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25000c:
    // 0x25000c: 0xc0c493d  jal         func_3124F4
label_250010:
    if (ctx->pc == 0x250010u) {
        ctx->pc = 0x250010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25000Cu;
        // 0x250010: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250014u;
        goto label_250014;
    }
    ctx->pc = 0x25000Cu;
    SET_GPR_U32(ctx, 31, 0x250014u);
    ctx->pc = 0x250010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25000Cu;
    // 0x250010: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x25000Cu, 0x250014u)) {
        return;
    }
    ctx->pc = 0x250014u;
label_250014:
    // 0x250014: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
label_250018:
    if (ctx->pc == 0x250018u) {
        ctx->pc = 0x250018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250014u;
        // 0x250018: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25001Cu;
        goto label_25001c;
    }
    ctx->pc = 0x250014u;
    {
        const bool branch_taken_0x250014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x250018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250014u;
        // 0x250018: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250014) {
            ctx->pc = 0x25010Cu;
            goto label_25010c;
        }
    }
    ctx->pc = 0x25001Cu;
label_25001c:
    // 0x25001c: 0xc09d8e0  jal         func_276380
label_250020:
    if (ctx->pc == 0x250020u) {
        ctx->pc = 0x250020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25001Cu;
        // 0x250020: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250024u;
        goto label_250024;
    }
    ctx->pc = 0x25001Cu;
    SET_GPR_U32(ctx, 31, 0x250024u);
    ctx->pc = 0x250020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25001Cu;
    // 0x250020: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x25001Cu, 0x250024u)) {
        return;
    }
    ctx->pc = 0x250024u;
label_250024:
    // 0x250024: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x250024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_250028:
    // 0x250028: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x250028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_25002c:
    // 0x25002c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x25002cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_250030:
    // 0x250030: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x250030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_250034:
    // 0x250034: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x250034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_250038:
    // 0x250038: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x250038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25003c:
    // 0x25003c: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x25003cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
label_250040:
    // 0x250040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_250044:
    if (ctx->pc == 0x250044u) {
        ctx->pc = 0x250044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250040u;
        // 0x250044: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250048u;
        goto label_250048;
    }
    ctx->pc = 0x250040u;
    {
        const bool branch_taken_0x250040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250040u;
        // 0x250044: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250040) {
            ctx->pc = 0x250054u;
            goto label_250054;
        }
    }
    ctx->pc = 0x250048u;
label_250048:
    // 0x250048: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x250048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_25004c:
    // 0x25004c: 0x1000000e  b           . + 4 + (0xE << 2)
label_250050:
    if (ctx->pc == 0x250050u) {
        ctx->pc = 0x250050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25004Cu;
        // 0x250050: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250054u;
        goto label_250054;
    }
    ctx->pc = 0x25004Cu;
    {
        const bool branch_taken_0x25004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25004Cu;
        // 0x250050: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25004c) {
            ctx->pc = 0x250088u;
            goto label_250088;
        }
    }
    ctx->pc = 0x250054u;
label_250054:
    // 0x250054: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x250054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_250058:
    // 0x250058: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25005c:
    // 0x25005c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_250060:
    // 0x250060: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x250060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_250064:
    // 0x250064: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x250064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_250068:
    // 0x250068: 0x40f809  jalr        $v0
label_25006c:
    if (ctx->pc == 0x25006Cu) {
        ctx->pc = 0x25006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250068u;
        // 0x25006c: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250070u;
        goto label_250070;
    }
    ctx->pc = 0x250068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250070u);
        ctx->pc = 0x25006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250068u;
        // 0x25006c: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250068u, 0x250070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250070u;
label_250070:
    // 0x250070: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x250070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_250074:
    // 0x250074: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x250074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_250078:
    // 0x250078: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x250078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_25007c:
    // 0x25007c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x25007cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_250080:
    // 0x250080: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x250080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_250084:
    // 0x250084: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x250084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_250088:
    // 0x250088: 0x26a30fc8  addiu       $v1, $s5, 0xFC8
    ctx->pc = 0x250088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4040));
label_25008c:
    // 0x25008c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x25008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_250090:
    // 0x250090: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x250090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_250094:
    // 0x250094: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x250094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_250098:
    // 0x250098: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x250098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25009c:
    // 0x25009c: 0x40f809  jalr        $v0
label_2500a0:
    if (ctx->pc == 0x2500A0u) {
        ctx->pc = 0x2500A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25009Cu;
        // 0x2500a0: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500A4u;
        goto label_2500a4;
    }
    ctx->pc = 0x25009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2500A4u);
        ctx->pc = 0x2500A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25009Cu;
        // 0x2500a0: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25009Cu, 0x2500A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2500A4u;
label_2500a4:
    // 0x2500a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2500a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2500a8:
    // 0x2500a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2500a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2500ac:
    // 0x2500ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2500acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2500b0:
    // 0x2500b0: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_2500b4:
    if (ctx->pc == 0x2500B4u) {
        ctx->pc = 0x2500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500B0u;
        // 0x2500b4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500B8u;
        goto label_2500b8;
    }
    ctx->pc = 0x2500B0u;
    {
        const bool branch_taken_0x2500b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500B0u;
        // 0x2500b4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500b0) {
            ctx->pc = 0x25010Cu;
            goto label_25010c;
        }
    }
    ctx->pc = 0x2500B8u;
label_2500b8:
    // 0x2500b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2500b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2500bc:
    // 0x2500bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2500bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2500c0:
    // 0x2500c0: 0xc0927be  jal         func_249EF8
label_2500c4:
    if (ctx->pc == 0x2500C4u) {
        ctx->pc = 0x2500C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C0u;
        // 0x2500c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500C8u;
        goto label_2500c8;
    }
    ctx->pc = 0x2500C0u;
    SET_GPR_U32(ctx, 31, 0x2500C8u);
    ctx->pc = 0x2500C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500C0u;
    // 0x2500c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2500C0u, 0x2500C8u)) {
        return;
    }
    ctx->pc = 0x2500C8u;
label_2500c8:
    // 0x2500c8: 0x1040ffb7  beqz        $v0, . + 4 + (-0x49 << 2)
label_2500cc:
    if (ctx->pc == 0x2500CCu) {
        ctx->pc = 0x2500CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C8u;
        // 0x2500cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500D0u;
        goto label_2500d0;
    }
    ctx->pc = 0x2500C8u;
    {
        const bool branch_taken_0x2500c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500C8u;
        // 0x2500cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500c8) {
            ctx->pc = 0x24FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x2500D0u;
label_2500d0:
    // 0x2500d0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2500d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2500d4:
    // 0x2500d4: 0xc0927be  jal         func_249EF8
label_2500d8:
    if (ctx->pc == 0x2500D8u) {
        ctx->pc = 0x2500D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500D4u;
        // 0x2500d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500DCu;
        goto label_2500dc;
    }
    ctx->pc = 0x2500D4u;
    SET_GPR_U32(ctx, 31, 0x2500DCu);
    ctx->pc = 0x2500D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500D4u;
    // 0x2500d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2500D4u, 0x2500DCu)) {
        return;
    }
    ctx->pc = 0x2500DCu;
label_2500dc:
    // 0x2500dc: 0x1040ffb2  beqz        $v0, . + 4 + (-0x4E << 2)
label_2500e0:
    if (ctx->pc == 0x2500E0u) {
        ctx->pc = 0x2500E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500DCu;
        // 0x2500e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500E4u;
        goto label_2500e4;
    }
    ctx->pc = 0x2500DCu;
    {
        const bool branch_taken_0x2500dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500DCu;
        // 0x2500e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500dc) {
            ctx->pc = 0x24FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x2500E4u;
label_2500e4:
    // 0x2500e4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2500e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2500e8:
    // 0x2500e8: 0xc0927be  jal         func_249EF8
label_2500ec:
    if (ctx->pc == 0x2500ECu) {
        ctx->pc = 0x2500ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500E8u;
        // 0x2500ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500F0u;
        goto label_2500f0;
    }
    ctx->pc = 0x2500E8u;
    SET_GPR_U32(ctx, 31, 0x2500F0u);
    ctx->pc = 0x2500ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500E8u;
    // 0x2500ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2500E8u, 0x2500F0u)) {
        return;
    }
    ctx->pc = 0x2500F0u;
label_2500f0:
    // 0x2500f0: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_2500f4:
    if (ctx->pc == 0x2500F4u) {
        ctx->pc = 0x2500F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500F0u;
        // 0x2500f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2500F8u;
        goto label_2500f8;
    }
    ctx->pc = 0x2500F0u;
    {
        const bool branch_taken_0x2500f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2500F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500F0u;
        // 0x2500f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500f0) {
            ctx->pc = 0x24FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffa8;
        }
    }
    ctx->pc = 0x2500F8u;
label_2500f8:
    // 0x2500f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2500f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2500fc:
    // 0x2500fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2500fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_250100:
    // 0x250100: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x250100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_250104:
    // 0x250104: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_250108:
    if (ctx->pc == 0x250108u) {
        ctx->pc = 0x250108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250104u;
        // 0x250108: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25010Cu;
        goto label_25010c;
    }
    ctx->pc = 0x250104u;
    {
        const bool branch_taken_0x250104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250104u;
        // 0x250108: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250104) {
            ctx->pc = 0x2500B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2500b8;
        }
    }
    ctx->pc = 0x25010Cu;
label_25010c:
    // 0x25010c: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x25010cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_250110:
    // 0x250110: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x250110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_250114:
    // 0x250114: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x250114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_250118:
    // 0x250118: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x250118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25011c:
    // 0x25011c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25011cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_250120:
    // 0x250120: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x250120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_250124:
    // 0x250124: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x250124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_250128:
    // 0x250128: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x250128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25012c:
    // 0x25012c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_250130:
    // 0x250130: 0x3e00008  jr          $ra
label_250134:
    if (ctx->pc == 0x250134u) {
        ctx->pc = 0x250134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250130u;
        // 0x250134: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250138u;
        goto label_fallthrough_0x250130;
    }
    ctx->pc = 0x250130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250130u;
        // 0x250134: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250130:
    ctx->pc = 0x250138u;
}
