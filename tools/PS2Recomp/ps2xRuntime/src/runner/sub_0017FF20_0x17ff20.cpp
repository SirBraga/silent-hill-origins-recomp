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

// Function: sub_0017FF20
// Address: 0x17ff20 - 0x180158
void sub_0017FF20_0x17ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FF20_0x17ff20");
#endif

    switch (ctx->pc) {
        case 0x17ff4cu: goto label_17ff4c;
        case 0x17ff60u: goto label_17ff60;
        case 0x17ff80u: goto label_17ff80;
        case 0x17ff94u: goto label_17ff94;
        case 0x17ffb0u: goto label_17ffb0;
        case 0x17ffc4u: goto label_17ffc4;
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17fff4u: goto label_17fff4;
        case 0x180010u: goto label_180010;
        case 0x180024u: goto label_180024;
        case 0x180040u: goto label_180040;
        case 0x180054u: goto label_180054;
        case 0x180070u: goto label_180070;
        case 0x180078u: goto label_180078;
        case 0x180094u: goto label_180094;
        case 0x18009cu: goto label_18009c;
        case 0x1800dcu: goto label_1800dc;
        case 0x180108u: goto label_180108;
        case 0x180130u: goto label_180130;
        case 0x180144u: goto label_180144;
        default: break;
    }

    ctx->pc = 0x17ff20u;

    // 0x17ff20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ff24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17ff28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ff2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ff30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ff30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff34: 0x8c62f9e8  lw          $v0, -0x618($v1)
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BF9E8u));
    // 0x17ff38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ff3c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17FF3Cu;
    {
        const bool branch_taken_0x17ff3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF3Cu;
        // 0x17ff40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff3c) {
            ctx->pc = 0x17FF68u;
            goto label_17ff68;
        }
    }
    ctx->pc = 0x17FF44u;
    // 0x17ff44: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17FF44u;
    SET_GPR_U32(ctx, 31, 0x17FF4Cu);
    ctx->pc = 0x17F570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F570u, 0x17FF44u, 0x17FF4Cu)) {
        return;
    }
    ctx->pc = 0x17FF4Cu;
label_17ff4c:
    // 0x17ff4c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x17ff50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17ff50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17ff54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ff54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ff58: 0xc05fdaa  jal         func_17F6A8
    ctx->pc = 0x17FF58u;
    SET_GPR_U32(ctx, 31, 0x17FF60u);
    ctx->pc = 0x17FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF58u;
    // 0x17ff5c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6A8u, 0x17FF58u, 0x17FF60u)) {
        return;
    }
    ctx->pc = 0x17FF60u;
label_17ff60:
    // 0x17ff60: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x17FF60u;
    {
        const bool branch_taken_0x17ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF60u;
        // 0x17ff64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff60) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x17FF68u;
label_17ff68:
    // 0x17ff68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17ff6c: 0x8c43f9f0  lw          $v1, -0x610($v0)
    ctx->pc = 0x17ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF9F0u));
    // 0x17ff70: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FF70u;
    {
        const bool branch_taken_0x17ff70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF70u;
        // 0x17ff74: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff70) {
            ctx->pc = 0x17FF9Cu;
            goto label_17ff9c;
        }
    }
    ctx->pc = 0x17FF78u;
    // 0x17ff78: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17FF78u;
    SET_GPR_U32(ctx, 31, 0x17FF80u);
    ctx->pc = 0x17F570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F570u, 0x17FF78u, 0x17FF80u)) {
        return;
    }
    ctx->pc = 0x17FF80u;
label_17ff80:
    // 0x17ff80: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x17ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x17ff84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17ff84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17ff88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ff88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ff8c: 0xc05fdaa  jal         func_17F6A8
    ctx->pc = 0x17FF8Cu;
    SET_GPR_U32(ctx, 31, 0x17FF94u);
    ctx->pc = 0x17FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF8Cu;
    // 0x17ff90: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6A8u, 0x17FF8Cu, 0x17FF94u)) {
        return;
    }
    ctx->pc = 0x17FF94u;
label_17ff94:
    // 0x17ff94: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x17FF94u;
    {
        const bool branch_taken_0x17ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF94u;
        // 0x17ff98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff94) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x17FF9Cu;
label_17ff9c:
    // 0x17ff9c: 0x8c43f9f8  lw          $v1, -0x608($v0)
    ctx->pc = 0x17ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965752)));
    // 0x17ffa0: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FFA0u;
    {
        const bool branch_taken_0x17ffa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA0u;
        // 0x17ffa4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffa0) {
            ctx->pc = 0x17FFCCu;
            goto label_17ffcc;
        }
    }
    ctx->pc = 0x17FFA8u;
    // 0x17ffa8: 0xc05fd66  jal         func_17F598
    ctx->pc = 0x17FFA8u;
    SET_GPR_U32(ctx, 31, 0x17FFB0u);
    ctx->pc = 0x17F598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F598u, 0x17FFA8u, 0x17FFB0u)) {
        return;
    }
    ctx->pc = 0x17FFB0u;
label_17ffb0:
    // 0x17ffb0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x17ffb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x17ffb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17ffb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17ffb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ffb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ffbc: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x17FFBCu;
    SET_GPR_U32(ctx, 31, 0x17FFC4u);
    ctx->pc = 0x17FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFBCu;
    // 0x17ffc0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6D0u, 0x17FFBCu, 0x17FFC4u)) {
        return;
    }
    ctx->pc = 0x17FFC4u;
label_17ffc4:
    // 0x17ffc4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17FFC4u;
    {
        const bool branch_taken_0x17ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFC4u;
        // 0x17ffc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffc4) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x17FFCCu;
label_17ffcc:
    // 0x17ffcc: 0x8c43fa00  lw          $v1, -0x600($v0)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965760)));
    // 0x17ffd0: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FFD0u;
    {
        const bool branch_taken_0x17ffd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD0u;
        // 0x17ffd4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd0) {
            ctx->pc = 0x17FFFCu;
            goto label_17fffc;
        }
    }
    ctx->pc = 0x17FFD8u;
    // 0x17ffd8: 0xc05fd66  jal         func_17F598
    ctx->pc = 0x17FFD8u;
    SET_GPR_U32(ctx, 31, 0x17FFE0u);
    ctx->pc = 0x17F598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F598u, 0x17FFD8u, 0x17FFE0u)) {
        return;
    }
    ctx->pc = 0x17FFE0u;
label_17ffe0:
    // 0x17ffe0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x17ffe4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17ffe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17ffe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ffe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ffec: 0xc05fdb4  jal         func_17F6D0
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x17FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFECu;
    // 0x17fff0: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6D0u, 0x17FFECu, 0x17FFF4u)) {
        return;
    }
    ctx->pc = 0x17FFF4u;
label_17fff4:
    // 0x17fff4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x17FFF4u;
    {
        const bool branch_taken_0x17fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFF4u;
        // 0x17fff8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff4) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x17FFFCu;
label_17fffc:
    // 0x17fffc: 0x8c43fa08  lw          $v1, -0x5F8($v0)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965768)));
    // 0x180000: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x180000u;
    {
        const bool branch_taken_0x180000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x180004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180000u;
        // 0x180004: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180000) {
            ctx->pc = 0x18002Cu;
            goto label_18002c;
        }
    }
    ctx->pc = 0x180008u;
    // 0x180008: 0xc05fd70  jal         func_17F5C0
    ctx->pc = 0x180008u;
    SET_GPR_U32(ctx, 31, 0x180010u);
    ctx->pc = 0x17F5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F5C0u, 0x180008u, 0x180010u)) {
        return;
    }
    ctx->pc = 0x180010u;
label_180010:
    // 0x180010: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x180010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x180014: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180018: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x180018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18001c: 0xc05fdbe  jal         func_17F6F8
    ctx->pc = 0x18001Cu;
    SET_GPR_U32(ctx, 31, 0x180024u);
    ctx->pc = 0x180020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18001Cu;
    // 0x180020: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6F8u, 0x18001Cu, 0x180024u)) {
        return;
    }
    ctx->pc = 0x180024u;
label_180024:
    // 0x180024: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x180024u;
    {
        const bool branch_taken_0x180024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180024u;
        // 0x180028: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180024) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x18002Cu;
label_18002c:
    // 0x18002c: 0x8c43fa10  lw          $v1, -0x5F0($v0)
    ctx->pc = 0x18002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965776)));
    // 0x180030: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x180030u;
    {
        const bool branch_taken_0x180030 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x180034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180030u;
        // 0x180034: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180030) {
            ctx->pc = 0x18005Cu;
            goto label_18005c;
        }
    }
    ctx->pc = 0x180038u;
    // 0x180038: 0xc05fd70  jal         func_17F5C0
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 31, 0x180040u);
    ctx->pc = 0x17F5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F5C0u, 0x180038u, 0x180040u)) {
        return;
    }
    ctx->pc = 0x180040u;
label_180040:
    // 0x180040: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x180044: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x180048: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x180048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18004c: 0xc05fdbe  jal         func_17F6F8
    ctx->pc = 0x18004Cu;
    SET_GPR_U32(ctx, 31, 0x180054u);
    ctx->pc = 0x180050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18004Cu;
    // 0x180050: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F6F8u, 0x18004Cu, 0x180054u)) {
        return;
    }
    ctx->pc = 0x180054u;
label_180054:
    // 0x180054: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x180054u;
    {
        const bool branch_taken_0x180054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180054u;
        // 0x180058: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180054) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x18005Cu;
label_18005c:
    // 0x18005c: 0x8c4386d0  lw          $v1, -0x7930($v0)
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936272)));
    // 0x180060: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180060u;
    {
        const bool branch_taken_0x180060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x180064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180060u;
        // 0x180064: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180060) {
            ctx->pc = 0x180080u;
            goto label_180080;
        }
    }
    ctx->pc = 0x180068u;
    // 0x180068: 0xc05fab8  jal         func_17EAE0
    ctx->pc = 0x180068u;
    SET_GPR_U32(ctx, 31, 0x180070u);
    ctx->pc = 0x17EAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17EAE0u, 0x180068u, 0x180070u)) {
        return;
    }
    ctx->pc = 0x180070u;
label_180070:
    // 0x180070: 0xc05f922  jal         func_17E488
    ctx->pc = 0x180070u;
    SET_GPR_U32(ctx, 31, 0x180078u);
    ctx->pc = 0x17E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E488u, 0x180070u, 0x180078u)) {
        return;
    }
    ctx->pc = 0x180078u;
label_180078:
    // 0x180078: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x180078u;
    {
        const bool branch_taken_0x180078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180078u;
        // 0x18007c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180078) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x180080u;
label_180080:
    // 0x180080: 0x8c4386c8  lw          $v1, -0x7938($v0)
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
    // 0x180084: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180084u;
    {
        const bool branch_taken_0x180084 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x180088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180084u;
        // 0x180088: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180084) {
            ctx->pc = 0x1800A4u;
            goto label_1800a4;
        }
    }
    ctx->pc = 0x18008Cu;
    // 0x18008c: 0xc05fc3c  jal         func_17F0F0
    ctx->pc = 0x18008Cu;
    SET_GPR_U32(ctx, 31, 0x180094u);
    ctx->pc = 0x17F0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F0F0u, 0x18008Cu, 0x180094u)) {
        return;
    }
    ctx->pc = 0x180094u;
label_180094:
    // 0x180094: 0xc05f94c  jal         func_17E530
    ctx->pc = 0x180094u;
    SET_GPR_U32(ctx, 31, 0x18009Cu);
    ctx->pc = 0x17E530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E530u, 0x180094u, 0x18009Cu)) {
        return;
    }
    ctx->pc = 0x18009Cu;
label_18009c:
    // 0x18009c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18009Cu;
    {
        const bool branch_taken_0x18009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18009Cu;
        // 0x1800a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18009c) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x1800A4u;
label_1800a4:
    // 0x1800a4: 0x8c43fa18  lw          $v1, -0x5E8($v0)
    ctx->pc = 0x1800a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965784)));
    // 0x1800a8: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1800A8u;
    {
        const bool branch_taken_0x1800a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1800ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800A8u;
        // 0x1800ac: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800a8) {
            ctx->pc = 0x1800E4u;
            goto label_1800e4;
        }
    }
    ctx->pc = 0x1800B0u;
    // 0x1800b0: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1800b4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1800B4u;
    {
        const bool branch_taken_0x1800b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1800B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B4u;
        // 0x1800b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800b4) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x1800BCu;
    // 0x1800bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1800bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1800c0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1800c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1800c4: 0xacc20044  sw          $v0, 0x44($a2)
    ctx->pc = 0x1800c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
    // 0x1800c8: 0x24c40038  addiu       $a0, $a2, 0x38
    ctx->pc = 0x1800c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x1800cc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1800ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1800d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1800d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1800D4u;
    SET_GPR_U32(ctx, 31, 0x1800DCu);
    ctx->pc = 0x1800D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800D4u;
    // 0x1800d8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1800D4u, 0x1800DCu)) {
        return;
    }
    ctx->pc = 0x1800DCu;
label_1800dc:
    // 0x1800dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1800DCu;
    {
        const bool branch_taken_0x1800dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800DCu;
        // 0x1800e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800dc) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0x8c43fa20  lw          $v1, -0x5E0($v0)
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
    // 0x1800e8: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1800E8u;
    {
        const bool branch_taken_0x1800e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1800ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800E8u;
        // 0x1800ec: 0x8cc20044  lw          $v0, 0x44($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800e8) {
            ctx->pc = 0x180110u;
            goto label_180110;
        }
    }
    ctx->pc = 0x1800F0u;
    // 0x1800f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1800F0u;
    {
        const bool branch_taken_0x1800f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800F0u;
        // 0x1800f4: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800f0) {
            ctx->pc = 0x180144u;
            goto label_180144;
        }
    }
    ctx->pc = 0x1800F8u;
    // 0x1800f8: 0x24c40038  addiu       $a0, $a2, 0x38
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x1800fc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x180100: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x180100u;
    SET_GPR_U32(ctx, 31, 0x180108u);
    ctx->pc = 0x180104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180100u;
    // 0x180104: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x180100u, 0x180108u)) {
        return;
    }
    ctx->pc = 0x180108u;
label_180108:
    // 0x180108: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x180108u;
    {
        const bool branch_taken_0x180108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180108u;
        // 0x18010c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180108) {
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x180110u;
label_180110:
    // 0x180110: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x180110u;
    {
        const bool branch_taken_0x180110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180110u;
        // 0x180114: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180110) {
            ctx->pc = 0x180144u;
            goto label_180144;
        }
    }
    ctx->pc = 0x180118u;
    // 0x180118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18011c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x18011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x180120: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x180120u;
    {
        const bool branch_taken_0x180120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180120) {
            ctx->pc = 0x180124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180120u;
            // 0x180124: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180148u;
            goto label_180148;
        }
    }
    ctx->pc = 0x180128u;
    // 0x180128: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x180128u;
    SET_GPR_U32(ctx, 31, 0x180130u);
    ctx->pc = 0x18012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180128u;
    // 0x18012c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x180128u, 0x180130u)) {
        return;
    }
    ctx->pc = 0x180130u;
label_180130:
    // 0x180130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x180130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x180134: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x180134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180138: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x180138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18013c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x18013Cu;
    SET_GPR_U32(ctx, 31, 0x180144u);
    ctx->pc = 0x180140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18013Cu;
    // 0x180140: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x18013Cu, 0x180144u)) {
        return;
    }
    ctx->pc = 0x180144u;
label_180144:
    // 0x180144: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180148:
    // 0x180148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18014c: 0x3e00008  jr          $ra
    ctx->pc = 0x18014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18014Cu;
        // 0x180150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180154u;
    // 0x180154: 0x0  nop
    ctx->pc = 0x180154u;
    // NOP
    ctx->pc = 0x180158u;
}
