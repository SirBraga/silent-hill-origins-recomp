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

// Function: sub_002A2FB8
// Address: 0x2a2fb8 - 0x2a30e8
void sub_002A2FB8_0x2a2fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2FB8_0x2a2fb8");
#endif

    switch (ctx->pc) {
        case 0x2a2fb8u: goto label_2a2fb8;
        case 0x2a2fbcu: goto label_2a2fbc;
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2fc8u: goto label_2a2fc8;
        case 0x2a2fccu: goto label_2a2fcc;
        case 0x2a2fd0u: goto label_2a2fd0;
        case 0x2a2fd4u: goto label_2a2fd4;
        case 0x2a2fd8u: goto label_2a2fd8;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2fe0u: goto label_2a2fe0;
        case 0x2a2fe4u: goto label_2a2fe4;
        case 0x2a2fe8u: goto label_2a2fe8;
        case 0x2a2fecu: goto label_2a2fec;
        case 0x2a2ff0u: goto label_2a2ff0;
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a2ffcu: goto label_2a2ffc;
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3004u: goto label_2a3004;
        case 0x2a3008u: goto label_2a3008;
        case 0x2a300cu: goto label_2a300c;
        case 0x2a3010u: goto label_2a3010;
        case 0x2a3014u: goto label_2a3014;
        case 0x2a3018u: goto label_2a3018;
        case 0x2a301cu: goto label_2a301c;
        case 0x2a3020u: goto label_2a3020;
        case 0x2a3024u: goto label_2a3024;
        case 0x2a3028u: goto label_2a3028;
        case 0x2a302cu: goto label_2a302c;
        case 0x2a3030u: goto label_2a3030;
        case 0x2a3034u: goto label_2a3034;
        case 0x2a3038u: goto label_2a3038;
        case 0x2a303cu: goto label_2a303c;
        case 0x2a3040u: goto label_2a3040;
        case 0x2a3044u: goto label_2a3044;
        case 0x2a3048u: goto label_2a3048;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3050u: goto label_2a3050;
        case 0x2a3054u: goto label_2a3054;
        case 0x2a3058u: goto label_2a3058;
        case 0x2a305cu: goto label_2a305c;
        case 0x2a3060u: goto label_2a3060;
        case 0x2a3064u: goto label_2a3064;
        case 0x2a3068u: goto label_2a3068;
        case 0x2a306cu: goto label_2a306c;
        case 0x2a3070u: goto label_2a3070;
        case 0x2a3074u: goto label_2a3074;
        case 0x2a3078u: goto label_2a3078;
        case 0x2a307cu: goto label_2a307c;
        case 0x2a3080u: goto label_2a3080;
        case 0x2a3084u: goto label_2a3084;
        case 0x2a3088u: goto label_2a3088;
        case 0x2a308cu: goto label_2a308c;
        case 0x2a3090u: goto label_2a3090;
        case 0x2a3094u: goto label_2a3094;
        case 0x2a3098u: goto label_2a3098;
        case 0x2a309cu: goto label_2a309c;
        case 0x2a30a0u: goto label_2a30a0;
        case 0x2a30a4u: goto label_2a30a4;
        case 0x2a30a8u: goto label_2a30a8;
        case 0x2a30acu: goto label_2a30ac;
        case 0x2a30b0u: goto label_2a30b0;
        case 0x2a30b4u: goto label_2a30b4;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30bcu: goto label_2a30bc;
        case 0x2a30c0u: goto label_2a30c0;
        case 0x2a30c4u: goto label_2a30c4;
        case 0x2a30c8u: goto label_2a30c8;
        case 0x2a30ccu: goto label_2a30cc;
        case 0x2a30d0u: goto label_2a30d0;
        case 0x2a30d4u: goto label_2a30d4;
        case 0x2a30d8u: goto label_2a30d8;
        case 0x2a30dcu: goto label_2a30dc;
        case 0x2a30e0u: goto label_2a30e0;
        case 0x2a30e4u: goto label_2a30e4;
        default: break;
    }

    ctx->pc = 0x2a2fb8u;

label_2a2fb8:
    // 0x2a2fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a2fbc:
    // 0x2a2fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2fc0:
    // 0x2a2fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a2fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a2fc4:
    // 0x2a2fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2fc8:
    // 0x2a2fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2fcc:
    // 0x2a2fcc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2a2fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2a2fd0:
    // 0x2a2fd0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2a2fd4:
    if (ctx->pc == 0x2A2FD4u) {
        ctx->pc = 0x2A2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FD0u;
        // 0x2a2fd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FD8u;
        goto label_2a2fd8;
    }
    ctx->pc = 0x2A2FD0u;
    {
        const bool branch_taken_0x2a2fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2fd0) {
            ctx->pc = 0x2A2FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2FD0u;
            // 0x2a2fd4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2FF0u;
            goto label_2a2ff0;
        }
    }
    ctx->pc = 0x2A2FD8u;
label_2a2fd8:
    // 0x2a2fd8: 0xc0c489a  jal         func_312268
label_2a2fdc:
    if (ctx->pc == 0x2A2FDCu) {
        ctx->pc = 0x2A2FE0u;
        goto label_2a2fe0;
    }
    ctx->pc = 0x2A2FD8u;
    SET_GPR_U32(ctx, 31, 0x2A2FE0u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A2FD8u, 0x2A2FE0u)) {
        return;
    }
    ctx->pc = 0x2A2FE0u;
label_2a2fe0:
    // 0x2a2fe0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a2fe4:
    // 0x2a2fe4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a2fe8:
    // 0x2a2fe8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2a2fec:
    if (ctx->pc == 0x2A2FECu) {
        ctx->pc = 0x2A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FE8u;
        // 0x2a2fec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FF0u;
        goto label_2a2ff0;
    }
    ctx->pc = 0x2A2FE8u;
    {
        const bool branch_taken_0x2a2fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FE8u;
        // 0x2a2fec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fe8) {
            ctx->pc = 0x2A30D4u;
            goto label_2a30d4;
        }
    }
    ctx->pc = 0x2A2FF0u;
label_2a2ff0:
    // 0x2a2ff0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a2ff4:
    // 0x2a2ff4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2a2ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a2ff8:
    // 0x2a2ff8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a2ffc:
    if (ctx->pc == 0x2A2FFCu) {
        ctx->pc = 0x2A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FF8u;
        // 0x2a2ffc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3000u;
        goto label_2a3000;
    }
    ctx->pc = 0x2A2FF8u;
    {
        const bool branch_taken_0x2a2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ff8) {
            ctx->pc = 0x2A2FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2FF8u;
            // 0x2a2ffc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3008u;
            goto label_2a3008;
        }
    }
    ctx->pc = 0x2A3000u;
label_2a3000:
    // 0x2a3000: 0x10000034  b           . + 4 + (0x34 << 2)
label_2a3004:
    if (ctx->pc == 0x2A3004u) {
        ctx->pc = 0x2A3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3000u;
        // 0x2a3004: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3008u;
        goto label_2a3008;
    }
    ctx->pc = 0x2A3000u;
    {
        const bool branch_taken_0x2a3000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3000u;
        // 0x2a3004: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3000) {
            ctx->pc = 0x2A30D4u;
            goto label_2a30d4;
        }
    }
    ctx->pc = 0x2A3008u;
label_2a3008:
    // 0x2a3008: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2a300c:
    if (ctx->pc == 0x2A300Cu) {
        ctx->pc = 0x2A300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3008u;
        // 0x2a300c: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3010u;
        goto label_2a3010;
    }
    ctx->pc = 0x2A3008u;
    {
        const bool branch_taken_0x2a3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3008u;
        // 0x2a300c: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3008) {
            ctx->pc = 0x2A3020u;
            goto label_2a3020;
        }
    }
    ctx->pc = 0x2A3010u;
label_2a3010:
    // 0x2a3010: 0xc0a7302  jal         func_29CC08
label_2a3014:
    if (ctx->pc == 0x2A3014u) {
        ctx->pc = 0x2A3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3010u;
        // 0x2a3014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3018u;
        goto label_2a3018;
    }
    ctx->pc = 0x2A3010u;
    SET_GPR_U32(ctx, 31, 0x2A3018u);
    ctx->pc = 0x2A3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3010u;
    // 0x2a3014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CC08u, 0x2A3010u, 0x2A3018u)) {
        return;
    }
    ctx->pc = 0x2A3018u;
label_2a3018:
    // 0x2a3018: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a301c:
    // 0x2a301c: 0x30620202  andi        $v0, $v1, 0x202
    ctx->pc = 0x2a301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_2a3020:
    // 0x2a3020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a3024:
    if (ctx->pc == 0x2A3024u) {
        ctx->pc = 0x2A3028u;
        goto label_2a3028;
    }
    ctx->pc = 0x2A3020u;
    {
        const bool branch_taken_0x2a3020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3020) {
            ctx->pc = 0x2A3030u;
            goto label_2a3030;
        }
    }
    ctx->pc = 0x2A3028u;
label_2a3028:
    // 0x2a3028: 0xc0a74bc  jal         func_29D2F0
label_2a302c:
    if (ctx->pc == 0x2A302Cu) {
        ctx->pc = 0x2A3030u;
        goto label_2a3030;
    }
    ctx->pc = 0x2A3028u;
    SET_GPR_U32(ctx, 31, 0x2A3030u);
    ctx->pc = 0x29D2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D2F0u, 0x2A3028u, 0x2A3030u)) {
        return;
    }
    ctx->pc = 0x2A3030u;
label_2a3030:
    // 0x2a3030: 0xc0a71c2  jal         func_29C708
label_2a3034:
    if (ctx->pc == 0x2A3034u) {
        ctx->pc = 0x2A3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3030u;
        // 0x2a3034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3038u;
        goto label_2a3038;
    }
    ctx->pc = 0x2A3030u;
    SET_GPR_U32(ctx, 31, 0x2A3038u);
    ctx->pc = 0x2A3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3030u;
    // 0x2a3034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C708u, 0x2A3030u, 0x2A3038u)) {
        return;
    }
    ctx->pc = 0x2A3038u;
label_2a3038:
    // 0x2a3038: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2a3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a303c:
    // 0x2a303c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a303cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3040:
    // 0x2a3040: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x2a3040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a3044:
    // 0x2a3044: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2a3044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2a3048:
    // 0x2a3048: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a3048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a304c:
    // 0x2a304c: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x2a304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_2a3050:
    // 0x2a3050: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x2a3050u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2a3054:
    // 0x2a3054: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2a3054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2a3058:
    // 0x2a3058: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a3058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2a305c:
    // 0x2a305c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2a3060:
    // 0x2a3060: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2a3060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_2a3064:
    // 0x2a3064: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a3064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2a3068:
    // 0x2a3068: 0x40f809  jalr        $v0
label_2a306c:
    if (ctx->pc == 0x2A306Cu) {
        ctx->pc = 0x2A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3068u;
        // 0x2a306c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3070u;
        goto label_2a3070;
    }
    ctx->pc = 0x2A3068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3070u);
        ctx->pc = 0x2A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3068u;
        // 0x2a306c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3068u, 0x2A3070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3070u;
label_2a3070:
    // 0x2a3070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3074:
    // 0x2a3074: 0x5c800009  bgtzl       $a0, . + 4 + (0x9 << 2)
label_2a3078:
    if (ctx->pc == 0x2A3078u) {
        ctx->pc = 0x2A3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3074u;
        // 0x2a3078: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A307Cu;
        goto label_2a307c;
    }
    ctx->pc = 0x2A3074u;
    {
        const bool branch_taken_0x2a3074 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2a3074) {
            ctx->pc = 0x2A3078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3074u;
            // 0x2a3078: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A309Cu;
            goto label_2a309c;
        }
    }
    ctx->pc = 0x2A307Cu;
label_2a307c:
    // 0x2a307c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2a3080:
    if (ctx->pc == 0x2A3080u) {
        ctx->pc = 0x2A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A307Cu;
        // 0x2a3080: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3084u;
        goto label_2a3084;
    }
    ctx->pc = 0x2A307Cu;
    {
        const bool branch_taken_0x2a307c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A307Cu;
        // 0x2a3080: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a307c) {
            ctx->pc = 0x2A308Cu;
            goto label_2a308c;
        }
    }
    ctx->pc = 0x2A3084u;
label_2a3084:
    // 0x2a3084: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3088:
    if (ctx->pc == 0x2A3088u) {
        ctx->pc = 0x2A3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3084u;
        // 0x2a3088: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A308Cu;
        goto label_2a308c;
    }
    ctx->pc = 0x2A3084u;
    {
        const bool branch_taken_0x2a3084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3084u;
        // 0x2a3088: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3084) {
            ctx->pc = 0x2A3094u;
            goto label_2a3094;
        }
    }
    ctx->pc = 0x2A308Cu;
label_2a308c:
    // 0x2a308c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3090:
    // 0x2a3090: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2a3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_2a3094:
    // 0x2a3094: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a3098:
    // 0x2a3098: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a309c:
    // 0x2a309c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2a309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_2a30a0:
    // 0x2a30a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2a30a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2a30a4:
    // 0x2a30a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a30a8:
    // 0x2a30a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2a30ac:
    if (ctx->pc == 0x2A30ACu) {
        ctx->pc = 0x2A30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30A8u;
        // 0x2a30ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30B0u;
        goto label_2a30b0;
    }
    ctx->pc = 0x2A30A8u;
    {
        const bool branch_taken_0x2a30a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30A8u;
        // 0x2a30ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30a8) {
            ctx->pc = 0x2A30B8u;
            goto label_2a30b8;
        }
    }
    ctx->pc = 0x2A30B0u;
label_2a30b0:
    // 0x2a30b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a30b4:
    if (ctx->pc == 0x2A30B4u) {
        ctx->pc = 0x2A30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30B0u;
        // 0x2a30b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30B8u;
        goto label_2a30b8;
    }
    ctx->pc = 0x2A30B0u;
    {
        const bool branch_taken_0x2a30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30B0u;
        // 0x2a30b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30b0) {
            ctx->pc = 0x2A30D4u;
            goto label_2a30d4;
        }
    }
    ctx->pc = 0x2A30B8u;
label_2a30b8:
    // 0x2a30b8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x2a30b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_2a30bc:
    // 0x2a30bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a30c0:
    // 0x2a30c0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2a30c4:
    if (ctx->pc == 0x2A30C4u) {
        ctx->pc = 0x2A30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30C0u;
        // 0x2a30c4: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30C8u;
        goto label_2a30c8;
    }
    ctx->pc = 0x2A30C0u;
    {
        const bool branch_taken_0x2a30c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30C0u;
        // 0x2a30c4: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30c0) {
            ctx->pc = 0x2A30CCu;
            goto label_2a30cc;
        }
    }
    ctx->pc = 0x2A30C8u;
label_2a30c8:
    // 0x2a30c8: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2a30c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_2a30cc:
    // 0x2a30cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2a30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a30d0:
    // 0x2a30d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a30d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a30d4:
    // 0x2a30d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a30d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a30d8:
    // 0x2a30d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a30d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a30dc:
    // 0x2a30dc: 0x3e00008  jr          $ra
label_2a30e0:
    if (ctx->pc == 0x2A30E0u) {
        ctx->pc = 0x2A30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30DCu;
        // 0x2a30e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A30E4u;
        goto label_2a30e4;
    }
    ctx->pc = 0x2A30DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A30DCu;
        // 0x2a30e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A30DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A30E4u;
label_2a30e4:
    // 0x2a30e4: 0x0  nop
    ctx->pc = 0x2a30e4u;
    // NOP
    ctx->pc = 0x2a30e8u;
}
