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

// Function: sub_001D3F90
// Address: 0x1d3f90 - 0x1d40e0
void sub_001D3F90_0x1d3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3F90_0x1d3f90");
#endif

    switch (ctx->pc) {
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3f9cu: goto label_1d3f9c;
        case 0x1d3fa0u: goto label_1d3fa0;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d3fa8u: goto label_1d3fa8;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb0u: goto label_1d3fb0;
        case 0x1d3fb4u: goto label_1d3fb4;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fbcu: goto label_1d3fbc;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fc4u: goto label_1d3fc4;
        case 0x1d3fc8u: goto label_1d3fc8;
        case 0x1d3fccu: goto label_1d3fcc;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fd4u: goto label_1d3fd4;
        case 0x1d3fd8u: goto label_1d3fd8;
        case 0x1d3fdcu: goto label_1d3fdc;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d3fe4u: goto label_1d3fe4;
        case 0x1d3fe8u: goto label_1d3fe8;
        case 0x1d3fecu: goto label_1d3fec;
        case 0x1d3ff0u: goto label_1d3ff0;
        case 0x1d3ff4u: goto label_1d3ff4;
        case 0x1d3ff8u: goto label_1d3ff8;
        case 0x1d3ffcu: goto label_1d3ffc;
        case 0x1d4000u: goto label_1d4000;
        case 0x1d4004u: goto label_1d4004;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d400cu: goto label_1d400c;
        case 0x1d4010u: goto label_1d4010;
        case 0x1d4014u: goto label_1d4014;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d401cu: goto label_1d401c;
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        default: break;
    }

    ctx->pc = 0x1d3f90u;

label_1d3f90:
    // 0x1d3f90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d3f94:
    // 0x1d3f94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d3f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d3f98:
    // 0x1d3f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d3f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d3f9c:
    // 0x1d3f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fa0:
    // 0x1d3fa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d3fa4:
    // 0x1d3fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3fa8:
    // 0x1d3fa8: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_1d3fac:
    if (ctx->pc == 0x1D3FACu) {
        ctx->pc = 0x1D3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA8u;
        // 0x1d3fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FB0u;
        goto label_1d3fb0;
    }
    ctx->pc = 0x1D3FA8u;
    {
        const bool branch_taken_0x1d3fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fa8) {
            ctx->pc = 0x1D3FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FA8u;
            // 0x1d3fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D3FB0u;
label_1d3fb0:
    // 0x1d3fb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d3fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fb4:
    // 0x1d3fb4: 0xc0bc6d2  jal         func_2F1B48
label_1d3fb8:
    if (ctx->pc == 0x1D3FB8u) {
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FBCu;
        goto label_1d3fbc;
    }
    ctx->pc = 0x1D3FB4u;
    SET_GPR_U32(ctx, 31, 0x1D3FBCu);
    ctx->pc = 0x1D3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3FB4u;
    // 0x1d3fb8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1B48u, 0x1D3FB4u, 0x1D3FBCu)) {
        return;
    }
    ctx->pc = 0x1D3FBCu;
label_1d3fbc:
    // 0x1d3fbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d3fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fc0:
    // 0x1d3fc0: 0x50c00039  beql        $a2, $zero, . + 4 + (0x39 << 2)
label_1d3fc4:
    if (ctx->pc == 0x1D3FC4u) {
        ctx->pc = 0x1D3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FC0u;
        // 0x1d3fc4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FC8u;
        goto label_1d3fc8;
    }
    ctx->pc = 0x1D3FC0u;
    {
        const bool branch_taken_0x1d3fc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fc0) {
            ctx->pc = 0x1D3FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FC0u;
            // 0x1d3fc4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40A8u;
            goto label_1d40a8;
        }
    }
    ctx->pc = 0x1D3FC8u;
label_1d3fc8:
    // 0x1d3fc8: 0x1cc00006  bgtz        $a2, . + 4 + (0x6 << 2)
label_1d3fcc:
    if (ctx->pc == 0x1D3FCCu) {
        ctx->pc = 0x1D3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FC8u;
        // 0x1d3fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FD0u;
        goto label_1d3fd0;
    }
    ctx->pc = 0x1D3FC8u;
    {
        const bool branch_taken_0x1d3fc8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x1D3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FC8u;
        // 0x1d3fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fc8) {
            ctx->pc = 0x1D3FE4u;
            goto label_1d3fe4;
        }
    }
    ctx->pc = 0x1D3FD0u;
label_1d3fd0:
    // 0x1d3fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3fd4:
    // 0x1d3fd4: 0x50c20007  beql        $a2, $v0, . + 4 + (0x7 << 2)
label_1d3fd8:
    if (ctx->pc == 0x1D3FD8u) {
        ctx->pc = 0x1D3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD4u;
        // 0x1d3fd8: 0x8e030090  lw          $v1, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FDCu;
        goto label_1d3fdc;
    }
    ctx->pc = 0x1D3FD4u;
    {
        const bool branch_taken_0x1d3fd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d3fd4) {
            ctx->pc = 0x1D3FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FD4u;
            // 0x1d3fd8: 0x8e030090  lw          $v1, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3FF4u;
            goto label_1d3ff4;
        }
    }
    ctx->pc = 0x1D3FDCu;
label_1d3fdc:
    // 0x1d3fdc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d3fe0:
    if (ctx->pc == 0x1D3FE0u) {
        ctx->pc = 0x1D3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FDCu;
        // 0x1d3fe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FE4u;
        goto label_1d3fe4;
    }
    ctx->pc = 0x1D3FDCu;
    {
        const bool branch_taken_0x1d3fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FDCu;
        // 0x1d3fe0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fdc) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D3FE4u;
label_1d3fe4:
    // 0x1d3fe4: 0x10c20035  beq         $a2, $v0, . + 4 + (0x35 << 2)
label_1d3fe8:
    if (ctx->pc == 0x1D3FE8u) {
        ctx->pc = 0x1D3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FE4u;
        // 0x1d3fe8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FECu;
        goto label_1d3fec;
    }
    ctx->pc = 0x1D3FE4u;
    {
        const bool branch_taken_0x1d3fe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FE4u;
        // 0x1d3fe8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fe4) {
            ctx->pc = 0x1D40BCu;
            goto label_1d40bc;
        }
    }
    ctx->pc = 0x1D3FECu;
label_1d3fec:
    // 0x1d3fec: 0x10000037  b           . + 4 + (0x37 << 2)
label_1d3ff0:
    if (ctx->pc == 0x1D3FF0u) {
        ctx->pc = 0x1D3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FECu;
        // 0x1d3ff0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FF4u;
        goto label_1d3ff4;
    }
    ctx->pc = 0x1D3FECu;
    {
        const bool branch_taken_0x1d3fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FECu;
        // 0x1d3ff0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fec) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D3FF4u;
label_1d3ff4:
    // 0x1d3ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3ff8:
    // 0x1d3ff8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1d3ffc:
    if (ctx->pc == 0x1D3FFCu) {
        ctx->pc = 0x1D3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FF8u;
        // 0x1d3ffc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4000u;
        goto label_1d4000;
    }
    ctx->pc = 0x1D3FF8u;
    {
        const bool branch_taken_0x1d3ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FF8u;
        // 0x1d3ffc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ff8) {
            ctx->pc = 0x1D4028u;
            goto label_1d4028;
        }
    }
    ctx->pc = 0x1D4000u;
label_1d4000:
    // 0x1d4000: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_1d4004:
    if (ctx->pc == 0x1D4004u) {
        ctx->pc = 0x1D4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4000u;
        // 0x1d4004: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4008u;
        goto label_1d4008;
    }
    ctx->pc = 0x1D4000u;
    {
        const bool branch_taken_0x1d4000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4000) {
            ctx->pc = 0x1D4004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4000u;
            // 0x1d4004: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D4008u;
label_1d4008:
    // 0x1d4008: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
label_1d400c:
    if (ctx->pc == 0x1D400Cu) {
        ctx->pc = 0x1D400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4008u;
        // 0x1d400c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4010u;
        goto label_1d4010;
    }
    ctx->pc = 0x1D4008u;
    {
        const bool branch_taken_0x1d4008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4008) {
            ctx->pc = 0x1D400Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4008u;
            // 0x1d400c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D4010u;
label_1d4010:
    // 0x1d4010: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1d4010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d4014:
    // 0x1d4014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4018:
    // 0x1d4018: 0xc075038  jal         func_1D40E0
label_1d401c:
    if (ctx->pc == 0x1D401Cu) {
        ctx->pc = 0x1D401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4018u;
        // 0x1d401c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4020u;
        goto label_1d4020;
    }
    ctx->pc = 0x1D4018u;
    SET_GPR_U32(ctx, 31, 0x1D4020u);
    ctx->pc = 0x1D401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4018u;
    // 0x1d401c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D40E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D40E0u, 0x1D4018u, 0x1D4020u)) {
        return;
    }
    ctx->pc = 0x1D4020u;
label_1d4020:
    // 0x1d4020: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1d4024:
    if (ctx->pc == 0x1D4024u) {
        ctx->pc = 0x1D4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4020u;
        // 0x1d4024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4028u;
        goto label_1d4028;
    }
    ctx->pc = 0x1D4020u;
    {
        const bool branch_taken_0x1d4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4020u;
        // 0x1d4024: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4020) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D4028u;
label_1d4028:
    // 0x1d4028: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d402c:
    // 0x1d402c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d402cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1d4030:
    // 0x1d4030: 0xac439b88  sw          $v1, -0x6478($v0)
    ctx->pc = 0x1d4030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941576), GPR_U32(ctx, 3));
label_1d4034:
    // 0x1d4034: 0x24a510a0  addiu       $a1, $a1, 0x10A0
    ctx->pc = 0x1d4034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
label_1d4038:
    // 0x1d4038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d403c:
    // 0x1d403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4040:
    // 0x1d4040: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d4044:
    // 0x1d4044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4048:
    // 0x1d4048: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d4048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d404c:
    // 0x1d404c: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_1d4050:
    // 0x1d4050: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d4054:
    // 0x1d4054: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d4058:
    // 0x1d4058: 0x40f809  jalr        $v0
label_1d405c:
    if (ctx->pc == 0x1D405Cu) {
        ctx->pc = 0x1D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4058u;
        // 0x1d405c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4060u;
        goto label_1d4060;
    }
    ctx->pc = 0x1D4058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4060u);
        ctx->pc = 0x1D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4058u;
        // 0x1d405c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4058u, 0x1D4060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4060u;
label_1d4060:
    // 0x1d4060: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1d4060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1d4064:
    // 0x1d4064: 0x8e248800  lw          $a0, -0x7800($s1)
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936576)));
label_1d4068:
    // 0x1d4068: 0xc0bc6e6  jal         func_2F1B98
label_1d406c:
    if (ctx->pc == 0x1D406Cu) {
        ctx->pc = 0x1D406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4068u;
        // 0x1d406c: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4070u;
        goto label_1d4070;
    }
    ctx->pc = 0x1D4068u;
    SET_GPR_U32(ctx, 31, 0x1D4070u);
    ctx->pc = 0x1D406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4068u;
    // 0x1d406c: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1B98u, 0x1D4068u, 0x1D4070u)) {
        return;
    }
    ctx->pc = 0x1D4070u;
label_1d4070:
    // 0x1d4070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4074:
    // 0x1d4074: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1d4074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1d4078:
    // 0x1d4078: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1d4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1d407c:
    // 0x1d407c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1d4080:
    if (ctx->pc == 0x1D4080u) {
        ctx->pc = 0x1D4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D407Cu;
        // 0x1d4080: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4084u;
        goto label_1d4084;
    }
    ctx->pc = 0x1D407Cu;
    {
        const bool branch_taken_0x1d407c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D407Cu;
        // 0x1d4080: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d407c) {
            ctx->pc = 0x1D4098u;
            goto label_1d4098;
        }
    }
    ctx->pc = 0x1D4084u;
label_1d4084:
    // 0x1d4084: 0xc0bc380  jal         func_2F0E00
label_1d4088:
    if (ctx->pc == 0x1D4088u) {
        ctx->pc = 0x1D4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4084u;
        // 0x1d4088: 0x8e248800  lw          $a0, -0x7800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D408Cu;
        goto label_1d408c;
    }
    ctx->pc = 0x1D4084u;
    SET_GPR_U32(ctx, 31, 0x1D408Cu);
    ctx->pc = 0x1D4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4084u;
    // 0x1d4088: 0x8e248800  lw          $a0, -0x7800($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0E00u, 0x1D4084u, 0x1D408Cu)) {
        return;
    }
    ctx->pc = 0x1D408Cu;
label_1d408c:
    // 0x1d408c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4090:
    // 0x1d4090: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d4094:
    if (ctx->pc == 0x1D4094u) {
        ctx->pc = 0x1D4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4090u;
        // 0x1d4094: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4098u;
        goto label_1d4098;
    }
    ctx->pc = 0x1D4090u;
    {
        const bool branch_taken_0x1d4090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4090u;
        // 0x1d4094: 0xae030090  sw          $v1, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4090) {
            ctx->pc = 0x1D40C8u;
            goto label_1d40c8;
        }
    }
    ctx->pc = 0x1D4098u;
label_1d4098:
    // 0x1d4098: 0xc0754a0  jal         func_1D5280
label_1d409c:
    if (ctx->pc == 0x1D409Cu) {
        ctx->pc = 0x1D409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4098u;
        // 0x1d409c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40A0u;
        goto label_1d40a0;
    }
    ctx->pc = 0x1D4098u;
    SET_GPR_U32(ctx, 31, 0x1D40A0u);
    ctx->pc = 0x1D409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4098u;
    // 0x1d409c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5280u, 0x1D4098u, 0x1D40A0u)) {
        return;
    }
    ctx->pc = 0x1D40A0u;
label_1d40a0:
    // 0x1d40a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d40a4:
    if (ctx->pc == 0x1D40A4u) {
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A0u;
        // 0x1d40a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40A8u;
        goto label_1d40a8;
    }
    ctx->pc = 0x1D40A0u;
    {
        const bool branch_taken_0x1d40a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A0u;
        // 0x1d40a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a0) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D40A8u;
label_1d40a8:
    // 0x1d40a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d40a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d40ac:
    // 0x1d40ac: 0xc07592e  jal         func_1D64B8
label_1d40b0:
    if (ctx->pc == 0x1D40B0u) {
        ctx->pc = 0x1D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40ACu;
        // 0x1d40b0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40B4u;
        goto label_1d40b4;
    }
    ctx->pc = 0x1D40ACu;
    SET_GPR_U32(ctx, 31, 0x1D40B4u);
    ctx->pc = 0x1D40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40ACu;
    // 0x1d40b0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D64B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D64B8u, 0x1D40ACu, 0x1D40B4u)) {
        return;
    }
    ctx->pc = 0x1D40B4u;
label_1d40b4:
    // 0x1d40b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d40b8:
    if (ctx->pc == 0x1D40B8u) {
        ctx->pc = 0x1D40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40B4u;
        // 0x1d40b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40BCu;
        goto label_1d40bc;
    }
    ctx->pc = 0x1D40B4u;
    {
        const bool branch_taken_0x1d40b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40B4u;
        // 0x1d40b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40b4) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D40BCu;
label_1d40bc:
    // 0x1d40bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d40c0:
    // 0x1d40c0: 0xc0754a0  jal         func_1D5280
label_1d40c4:
    if (ctx->pc == 0x1D40C4u) {
        ctx->pc = 0x1D40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40C0u;
        // 0x1d40c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40C8u;
        goto label_1d40c8;
    }
    ctx->pc = 0x1D40C0u;
    SET_GPR_U32(ctx, 31, 0x1D40C8u);
    ctx->pc = 0x1D40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40C0u;
    // 0x1d40c4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5280u, 0x1D40C0u, 0x1D40C8u)) {
        return;
    }
    ctx->pc = 0x1D40C8u;
label_1d40c8:
    // 0x1d40c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d40c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d40cc:
    // 0x1d40cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d40ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d40d0:
    // 0x1d40d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d40d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d40d4:
    // 0x1d40d4: 0x3e00008  jr          $ra
label_1d40d8:
    if (ctx->pc == 0x1D40D8u) {
        ctx->pc = 0x1D40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D4u;
        // 0x1d40d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40DCu;
        goto label_1d40dc;
    }
    ctx->pc = 0x1D40D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D4u;
        // 0x1d40d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D40D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D40DCu;
label_1d40dc:
    // 0x1d40dc: 0x0  nop
    ctx->pc = 0x1d40dcu;
    // NOP
    ctx->pc = 0x1d40e0u;
}
