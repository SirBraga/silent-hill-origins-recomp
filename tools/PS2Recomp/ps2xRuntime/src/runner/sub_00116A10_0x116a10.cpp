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

// Function: sub_00116A10
// Address: 0x116a10 - 0x1172b0
void sub_00116A10_0x116a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116A10_0x116a10");
#endif

    switch (ctx->pc) {
        case 0x116a98u: goto label_116a98;
        case 0x116aecu: goto label_116aec;
        case 0x116b2cu: goto label_116b2c;
        case 0x116b80u: goto label_116b80;
        case 0x116bc0u: goto label_116bc0;
        case 0x116c98u: goto label_116c98;
        case 0x116cd8u: goto label_116cd8;
        case 0x116d38u: goto label_116d38;
        case 0x116d70u: goto label_116d70;
        case 0x116df0u: goto label_116df0;
        case 0x116e20u: goto label_116e20;
        case 0x116e60u: goto label_116e60;
        case 0x116ee8u: goto label_116ee8;
        case 0x116f1cu: goto label_116f1c;
        case 0x116f64u: goto label_116f64;
        case 0x116fa4u: goto label_116fa4;
        case 0x116fdcu: goto label_116fdc;
        case 0x117188u: goto label_117188;
        case 0x1171d0u: goto label_1171d0;
        case 0x117228u: goto label_117228;
        case 0x117264u: goto label_117264;
        default: break;
    }

    ctx->pc = 0x116a10u;

    // 0x116a10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x116a14: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x116a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x116a18: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x116a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x116a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a20: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x116a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x116a24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a28: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x116a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x116a2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x116a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a30: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x116a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x116a34: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x116a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x116a38: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x116a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x116a3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x116a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x116a40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x116a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x116a44: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x116a44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x116a48: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x116a48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x116a4c: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x116a4cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x116a50: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x116a50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x116a54: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x116a54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x116a58: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x116a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x116a5c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x116a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x116a60: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x116a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116a64: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x116a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116a68: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x116a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116a6c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x116a6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116a70: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x116a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116a74: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x116a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116a78: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x116a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116a7c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x116a7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x116a80: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x116a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x116a84: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116a88: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x116a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x116a8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x116a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x116a90: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x116A90u;
    SET_GPR_U32(ctx, 31, 0x116A98u);
    ctx->pc = 0x116A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A90u;
    // 0x116a94: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x116A90u, 0x116A98u)) {
        return;
    }
    ctx->pc = 0x116A98u;
label_116a98:
    // 0x116a98: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x116a98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x116a9c: 0xc6140230  lwc1        $f20, 0x230($s0)
    ctx->pc = 0x116a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x116aa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116aa4: 0x0  nop
    ctx->pc = 0x116aa4u;
    // NOP
    // 0x116aa8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x116aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116aac: 0x0  nop
    ctx->pc = 0x116aacu;
    // NOP
    // 0x116ab0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116AB0u;
    {
        const bool branch_taken_0x116ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ab0) {
            ctx->pc = 0x116AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AB0u;
            // 0x116ab4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AB8u;
            goto label_116ab8;
        }
    }
    ctx->pc = 0x116AB8u;
label_116ab8:
    // 0x116ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116ac0: 0x0  nop
    ctx->pc = 0x116ac0u;
    // NOP
    // 0x116ac4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x116ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116ac8: 0x0  nop
    ctx->pc = 0x116ac8u;
    // NOP
    // 0x116acc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116ACCu;
    {
        const bool branch_taken_0x116acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116acc) {
            ctx->pc = 0x116AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116ACCu;
            // 0x116ad0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AD4u;
            goto label_116ad4;
        }
    }
    ctx->pc = 0x116AD4u;
label_116ad4:
    // 0x116ad4: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116ad8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116adc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x116adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x116ae0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x116ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ae4: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116AE4u;
    SET_GPR_U32(ctx, 31, 0x116AECu);
    ctx->pc = 0x116AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AE4u;
    // 0x116ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116AE4u, 0x116AECu)) {
        return;
    }
    ctx->pc = 0x116AECu;
label_116aec:
    // 0x116aec: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x116af0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x116af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x116af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116af8: 0x0  nop
    ctx->pc = 0x116af8u;
    // NOP
    // 0x116afc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x116afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116b00: 0x0  nop
    ctx->pc = 0x116b00u;
    // NOP
    // 0x116b04: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x116B04u;
    {
        const bool branch_taken_0x116b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B04u;
        // 0x116b08: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b04) {
            ctx->pc = 0x116B60u;
            goto label_116b60;
        }
    }
    ctx->pc = 0x116B0Cu;
    // 0x116b0c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x116b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x116b10: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x116b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x116b14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x116b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116b18: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116b1c: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116b20: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x116b20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x116b24: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116B24u;
    SET_GPR_U32(ctx, 31, 0x116B2Cu);
    ctx->pc = 0x116B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B24u;
    // 0x116b28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116B24u, 0x116B2Cu)) {
        return;
    }
    ctx->pc = 0x116B2Cu;
label_116b2c:
    // 0x116b2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x116b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116b30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x116b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116b34: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x116b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116b38: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x116b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116b3c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x116b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116b40: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x116b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116b44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116b48: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x116b48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x116b4c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x116b4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x116b50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x116b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x116b54: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x116b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x116b58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x116B58u;
    {
        const bool branch_taken_0x116b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B58u;
        // 0x116b5c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b58) {
            ctx->pc = 0x116BB0u;
            goto label_116bb0;
        }
    }
    ctx->pc = 0x116B60u;
label_116b60:
    // 0x116b60: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x116b64: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x116b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x116b68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x116b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116b6c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116b70: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116b74: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x116b74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x116b78: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116B78u;
    SET_GPR_U32(ctx, 31, 0x116B80u);
    ctx->pc = 0x116B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B78u;
    // 0x116b7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116B78u, 0x116B80u)) {
        return;
    }
    ctx->pc = 0x116B80u;
label_116b80:
    // 0x116b80: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x116b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116b84: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x116b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116b88: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x116b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116b8c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x116b8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x116b90: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x116b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116b94: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x116b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116b98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x116b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116b9c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116ba0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x116ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x116ba4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x116ba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x116ba8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x116ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x116bac: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x116bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_116bb0:
    // 0x116bb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116bb4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x116bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116bb8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x116BB8u;
    SET_GPR_U32(ctx, 31, 0x116BC0u);
    ctx->pc = 0x116BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BB8u;
    // 0x116bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x116BB8u, 0x116BC0u)) {
        return;
    }
    ctx->pc = 0x116BC0u;
label_116bc0:
    // 0x116bc0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x116bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116bc4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x116bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116bc8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x116bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116bcc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x116bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116bd0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x116bd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x116bd4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x116bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116bd8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x116bd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x116bdc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x116bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116be0: 0xc6040090  lwc1        $f4, 0x90($s0)
    ctx->pc = 0x116be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116be4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x116be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x116be8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x116be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x116bec: 0x46172034  c.lt.s      $f4, $f23
    ctx->pc = 0x116becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116bf0: 0x0  nop
    ctx->pc = 0x116bf0u;
    // NOP
    // 0x116bf4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x116BF4u;
    {
        const bool branch_taken_0x116bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF4u;
        // 0x116bf8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bf4) {
            ctx->pc = 0x116C20u;
            goto label_116c20;
        }
    }
    ctx->pc = 0x116BFCu;
    // 0x116bfc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x116bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116c00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x116c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x116c04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x116c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116c08: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x116C08u;
    {
        const bool branch_taken_0x116c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C08u;
        // 0x116c0c: 0xc6010234  lwc1        $f1, 0x234($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c08) {
            ctx->pc = 0x116C3Cu;
            goto label_116c3c;
        }
    }
    ctx->pc = 0x116C10u;
    // 0x116c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116c14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x116c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116C18u;
    {
        const bool branch_taken_0x116c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C18u;
        // 0x116c1c: 0x27b60060  addiu       $s6, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c18) {
            ctx->pc = 0x116C40u;
            goto label_116c40;
        }
    }
    ctx->pc = 0x116C20u;
label_116c20:
    // 0x116c20: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x116c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116c28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x116c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x116c2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x116C2Cu;
    {
        const bool branch_taken_0x116c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C2Cu;
        // 0x116c30: 0xc6010234  lwc1        $f1, 0x234($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c2c) {
            ctx->pc = 0x116C3Cu;
            goto label_116c3c;
        }
    }
    ctx->pc = 0x116C34u;
    // 0x116c34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x116c38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x116c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_116c3c:
    // 0x116c3c: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_116c40:
    // 0x116c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116c44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x116c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x116c48: 0x261100f8  addiu       $s1, $s0, 0xF8
    ctx->pc = 0x116c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x116c4c: 0xc6000270  lwc1        $f0, 0x270($s0)
    ctx->pc = 0x116c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116c50: 0x0  nop
    ctx->pc = 0x116c50u;
    // NOP
    // 0x116c54: 0x0  nop
    ctx->pc = 0x116c54u;
    // NOP
    // 0x116c58: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x116c58u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[1]);
    // 0x116c5c: 0xc602021c  lwc1        $f2, 0x21C($s0)
    ctx->pc = 0x116c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116c60: 0xc6030230  lwc1        $f3, 0x230($s0)
    ctx->pc = 0x116c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116c64: 0x46001582  mul.s       $f22, $f2, $f0
    ctx->pc = 0x116c64u;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x116c68: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x116c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x116c6c: 0x46160e42  mul.s       $f25, $f1, $f22
    ctx->pc = 0x116c6cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x116c70: 0x4614c802  mul.s       $f0, $f25, $f20
    ctx->pc = 0x116c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x116c74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x116C74u;
    {
        const bool branch_taken_0x116c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C74u;
        // 0x116c78: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c74) {
            ctx->pc = 0x116CF0u;
            goto label_116cf0;
        }
    }
    ctx->pc = 0x116C7Cu;
    // 0x116c7c: 0x460c2034  c.lt.s      $f4, $f12
    ctx->pc = 0x116c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116c80: 0x0  nop
    ctx->pc = 0x116c80u;
    // NOP
    // 0x116c84: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x116C84u;
    {
        const bool branch_taken_0x116c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116c84) {
            ctx->pc = 0x116CB0u;
            goto label_116cb0;
        }
    }
    ctx->pc = 0x116C8Cu;
    // 0x116c8c: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x116c8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
    // 0x116c90: 0x46046301  sub.s       $f12, $f12, $f4
    ctx->pc = 0x116c90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x116c94: 0x0  nop
    ctx->pc = 0x116c94u;
    // NOP
label_116c98:
    // 0x116c98: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x116c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116c9c: 0x0  nop
    ctx->pc = 0x116c9cu;
    // NOP
    // 0x116ca0: 0x0  nop
    ctx->pc = 0x116ca0u;
    // NOP
    // 0x116ca4: 0x0  nop
    ctx->pc = 0x116ca4u;
    // NOP
    // 0x116ca8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x116CA8u;
    {
        const bool branch_taken_0x116ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ca8) {
            ctx->pc = 0x116CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CA8u;
            // 0x116cac: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116c98;
        }
    }
    ctx->pc = 0x116CB0u;
label_116cb0:
    // 0x116cb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116cb4: 0x0  nop
    ctx->pc = 0x116cb4u;
    // NOP
    // 0x116cb8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x116cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116cbc: 0x0  nop
    ctx->pc = 0x116cbcu;
    // NOP
    // 0x116cc0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x116CC0u;
    {
        const bool branch_taken_0x116cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116cc0) {
            ctx->pc = 0x116CF0u;
            goto label_116cf0;
        }
    }
    ctx->pc = 0x116CC8u;
    // 0x116cc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116cd0: 0x0  nop
    ctx->pc = 0x116cd0u;
    // NOP
    // 0x116cd4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x116cd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_116cd8:
    // 0x116cd8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x116cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116cdc: 0x0  nop
    ctx->pc = 0x116cdcu;
    // NOP
    // 0x116ce0: 0x0  nop
    ctx->pc = 0x116ce0u;
    // NOP
    // 0x116ce4: 0x0  nop
    ctx->pc = 0x116ce4u;
    // NOP
    // 0x116ce8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x116CE8u;
    {
        const bool branch_taken_0x116ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ce8) {
            ctx->pc = 0x116CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CE8u;
            // 0x116cec: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116cd8;
        }
    }
    ctx->pc = 0x116CF0u;
label_116cf0:
    // 0x116cf0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x116cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x116cf4: 0x0  nop
    ctx->pc = 0x116cf4u;
    // NOP
    // 0x116cf8: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x116cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116cfc: 0x0  nop
    ctx->pc = 0x116cfcu;
    // NOP
    // 0x116d00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116D00u;
    {
        const bool branch_taken_0x116d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116d00) {
            ctx->pc = 0x116D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D00u;
            // 0x116d04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D08u;
            goto label_116d08;
        }
    }
    ctx->pc = 0x116D08u;
label_116d08:
    // 0x116d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116d10: 0x0  nop
    ctx->pc = 0x116d10u;
    // NOP
    // 0x116d14: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x116d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116d18: 0x0  nop
    ctx->pc = 0x116d18u;
    // NOP
    // 0x116d1c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116D1Cu;
    {
        const bool branch_taken_0x116d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116d1c) {
            ctx->pc = 0x116D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D1Cu;
            // 0x116d20: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D24u;
            goto label_116d24;
        }
    }
    ctx->pc = 0x116D24u;
label_116d24:
    // 0x116d24: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116d28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116d2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x116d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116d30: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116D30u;
    SET_GPR_U32(ctx, 31, 0x116D38u);
    ctx->pc = 0x116D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D30u;
    // 0x116d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116D30u, 0x116D38u)) {
        return;
    }
    ctx->pc = 0x116D38u;
label_116d38:
    // 0x116d38: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x116d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116d3c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x116d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116d40: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x116d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116d44: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x116d44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116d48: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x116d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116d4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x116d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116d50: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x116d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116d54: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x116d54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x116d58: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x116d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x116d5c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116d60: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x116d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x116d64: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x116d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x116d68: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x116D68u;
    SET_GPR_U32(ctx, 31, 0x116D70u);
    ctx->pc = 0x116D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D68u;
    // 0x116d6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x116D68u, 0x116D70u)) {
        return;
    }
    ctx->pc = 0x116D70u;
label_116d70:
    // 0x116d70: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x116d70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d74: 0x3c0133d6  lui         $at, 0x33D6
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13270 << 16));
    // 0x116d78: 0x3421bf95  ori         $at, $at, 0xBF95
    ctx->pc = 0x116d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49045);
    // 0x116d7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x116d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x116d80: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x116d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116d84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x116d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x116d88: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x116d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x116d8c: 0x342123f0  ori         $at, $at, 0x23F0
    ctx->pc = 0x116d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9200);
    // 0x116d90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x116d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x116d94: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x116d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x116d98: 0xc6180230  lwc1        $f24, 0x230($s0)
    ctx->pc = 0x116d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x116d9c: 0x0  nop
    ctx->pc = 0x116d9cu;
    // NOP
    // 0x116da0: 0x0  nop
    ctx->pc = 0x116da0u;
    // NOP
    // 0x116da4: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x116da4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[0]);
    // 0x116da8: 0x46030dc0  add.s       $f23, $f1, $f3
    ctx->pc = 0x116da8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x116dac: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x116dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116db0: 0x0  nop
    ctx->pc = 0x116db0u;
    // NOP
    // 0x116db4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x116DB4u;
    {
        const bool branch_taken_0x116db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DB4u;
        // 0x116db8: 0x46190582  mul.s       $f22, $f0, $f25 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116db4) {
            ctx->pc = 0x116DC0u;
            goto label_116dc0;
        }
    }
    ctx->pc = 0x116DBCu;
    // 0x116dbc: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x116dbcu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
label_116dc0:
    // 0x116dc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x116dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x116dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116dc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x116dc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dcc: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x116dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
    // 0x116dd0: 0x3421967f  ori         $at, $at, 0x967F
    ctx->pc = 0x116dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38527);
    // 0x116dd4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x116dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x116dd8: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x116dd8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x116ddc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x116ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x116de0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x116de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x116de4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x116de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x116de8: 0x4614b002  mul.s       $f0, $f22, $f20
    ctx->pc = 0x116de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x116dec: 0x4600c540  add.s       $f21, $f24, $f0
    ctx->pc = 0x116decu;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_116df0:
    // 0x116df0: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x116df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x116df4: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x116df4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x116df8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x116DF8u;
    {
        const bool branch_taken_0x116df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DF8u;
        // 0x116dfc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116df8) {
            ctx->pc = 0x116E78u;
            goto label_116e78;
        }
    }
    ctx->pc = 0x116E00u;
    // 0x116e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116e08: 0x0  nop
    ctx->pc = 0x116e08u;
    // NOP
    // 0x116e0c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x116e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e10: 0x0  nop
    ctx->pc = 0x116e10u;
    // NOP
    // 0x116e14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x116E14u;
    {
        const bool branch_taken_0x116e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e14) {
            ctx->pc = 0x116E38u;
            goto label_116e38;
        }
    }
    ctx->pc = 0x116E1Cu;
    // 0x116e1c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x116e1cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_116e20:
    // 0x116e20: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x116e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e24: 0x0  nop
    ctx->pc = 0x116e24u;
    // NOP
    // 0x116e28: 0x0  nop
    ctx->pc = 0x116e28u;
    // NOP
    // 0x116e2c: 0x0  nop
    ctx->pc = 0x116e2cu;
    // NOP
    // 0x116e30: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x116E30u;
    {
        const bool branch_taken_0x116e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e30) {
            ctx->pc = 0x116E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E30u;
            // 0x116e34: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e20;
        }
    }
    ctx->pc = 0x116E38u;
label_116e38:
    // 0x116e38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x116e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116e3c: 0x0  nop
    ctx->pc = 0x116e3cu;
    // NOP
    // 0x116e40: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x116e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e44: 0x0  nop
    ctx->pc = 0x116e44u;
    // NOP
    // 0x116e48: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x116E48u;
    {
        const bool branch_taken_0x116e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e48) {
            ctx->pc = 0x116E78u;
            goto label_116e78;
        }
    }
    ctx->pc = 0x116E50u;
    // 0x116e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116e58: 0x0  nop
    ctx->pc = 0x116e58u;
    // NOP
    // 0x116e5c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x116e5cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_116e60:
    // 0x116e60: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x116e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e64: 0x0  nop
    ctx->pc = 0x116e64u;
    // NOP
    // 0x116e68: 0x0  nop
    ctx->pc = 0x116e68u;
    // NOP
    // 0x116e6c: 0x0  nop
    ctx->pc = 0x116e6cu;
    // NOP
    // 0x116e70: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x116E70u;
    {
        const bool branch_taken_0x116e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e70) {
            ctx->pc = 0x116E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E70u;
            // 0x116e74: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e60;
        }
    }
    ctx->pc = 0x116E78u;
label_116e78:
    // 0x116e78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x116e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x116e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116e80: 0x0  nop
    ctx->pc = 0x116e80u;
    // NOP
    // 0x116e84: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x116e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116e88: 0x0  nop
    ctx->pc = 0x116e88u;
    // NOP
    // 0x116e8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116E8Cu;
    {
        const bool branch_taken_0x116e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116e8c) {
            ctx->pc = 0x116E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E8Cu;
            // 0x116e90: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116E94u;
label_116e94:
    // 0x116e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x116e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116e98: 0x0  nop
    ctx->pc = 0x116e98u;
    // NOP
    // 0x116e9c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x116e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116ea0: 0x0  nop
    ctx->pc = 0x116ea0u;
    // NOP
    // 0x116ea4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116EA4u;
    {
        const bool branch_taken_0x116ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ea4) {
            ctx->pc = 0x116EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EA4u;
            // 0x116ea8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116EACu;
            goto label_116eac;
        }
    }
    ctx->pc = 0x116EACu;
label_116eac:
    // 0x116eac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x116eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116eb0: 0x0  nop
    ctx->pc = 0x116eb0u;
    // NOP
    // 0x116eb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x116EB4u;
    {
        const bool branch_taken_0x116eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EB4u;
        // 0x116eb8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116eb4) {
            ctx->pc = 0x116EC0u;
            goto label_116ec0;
        }
    }
    ctx->pc = 0x116EBCu;
    // 0x116ebc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x116ebcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_116ec0:
    // 0x116ec0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x116ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116ec4: 0x0  nop
    ctx->pc = 0x116ec4u;
    // NOP
    // 0x116ec8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x116EC8u;
    {
        const bool branch_taken_0x116ec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ec8) {
            ctx->pc = 0x116ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EC8u;
            // 0x116ecc: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ED0u;
            goto label_116ed0;
        }
    }
    ctx->pc = 0x116ED0u;
label_116ed0:
    // 0x116ed0: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116ed4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116ed8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x116ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x116edc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x116edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116ee0: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116EE0u;
    SET_GPR_U32(ctx, 31, 0x116EE8u);
    ctx->pc = 0x116EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116EE0u;
    // 0x116ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116EE0u, 0x116EE8u)) {
        return;
    }
    ctx->pc = 0x116EE8u;
label_116ee8:
    // 0x116ee8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x116ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x116eec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x116ef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116ef4: 0x0  nop
    ctx->pc = 0x116ef4u;
    // NOP
    // 0x116ef8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x116ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116efc: 0x0  nop
    ctx->pc = 0x116efcu;
    // NOP
    // 0x116f00: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x116F00u;
    {
        const bool branch_taken_0x116f00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F00u;
        // 0x116f04: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f00) {
            ctx->pc = 0x116F50u;
            goto label_116f50;
        }
    }
    ctx->pc = 0x116F08u;
    // 0x116f08: 0x4619a300  add.s       $f12, $f20, $f25
    ctx->pc = 0x116f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x116f0c: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116f10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116f14: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116F14u;
    SET_GPR_U32(ctx, 31, 0x116F1Cu);
    ctx->pc = 0x116F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F14u;
    // 0x116f18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116F14u, 0x116F1Cu)) {
        return;
    }
    ctx->pc = 0x116F1Cu;
label_116f1c:
    // 0x116f1c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x116f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116f20: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x116f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116f24: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x116f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116f28: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x116f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116f2c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x116f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116f30: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x116f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x116f34: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116f38: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x116f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x116f3c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x116f3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x116f40: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x116f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116f44: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x116f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x116f48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x116F48u;
    {
        const bool branch_taken_0x116f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F48u;
        // 0x116f4c: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f48) {
            ctx->pc = 0x116F98u;
            goto label_116f98;
        }
    }
    ctx->pc = 0x116F50u;
label_116f50:
    // 0x116f50: 0x4619a301  sub.s       $f12, $f20, $f25
    ctx->pc = 0x116f50u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
    // 0x116f54: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x116f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x116f58: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x116f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116f5c: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x116F5Cu;
    SET_GPR_U32(ctx, 31, 0x116F64u);
    ctx->pc = 0x116F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F5Cu;
    // 0x116f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x116F5Cu, 0x116F64u)) {
        return;
    }
    ctx->pc = 0x116F64u;
label_116f64:
    // 0x116f64: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x116f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116f68: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x116f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116f6c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x116f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116f70: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x116f70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x116f74: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x116f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116f78: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x116f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116f7c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x116f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116f80: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116f84: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x116f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x116f88: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x116f88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x116f8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x116f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x116f90: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x116f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x116f94: 0x0  nop
    ctx->pc = 0x116f94u;
    // NOP
label_116f98:
    // 0x116f98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x116f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x116f9c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x116F9Cu;
    SET_GPR_U32(ctx, 31, 0x116FA4u);
    ctx->pc = 0x116FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F9Cu;
    // 0x116fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x116F9Cu, 0x116FA4u)) {
        return;
    }
    ctx->pc = 0x116FA4u;
label_116fa4:
    // 0x116fa4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x116fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116fa8: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x116fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116fac: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x116facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x116fb0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x116fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x116fb4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x116fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x116fb8: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x116fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x116fbc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x116fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116fc0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x116fc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x116fc4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x116fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x116fc8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x116fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x116fcc: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x116fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x116fd0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x116fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x116fd4: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x116FD4u;
    SET_GPR_U32(ctx, 31, 0x116FDCu);
    ctx->pc = 0x116FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116FD4u;
    // 0x116fd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x116FD4u, 0x116FDCu)) {
        return;
    }
    ctx->pc = 0x116FDCu;
label_116fdc:
    // 0x116fdc: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x116fdcu;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x116fe0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x116fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x116fe4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x116fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116fe8: 0x46003941  sub.s       $f5, $f7, $f0
    ctx->pc = 0x116fe8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x116fec: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x116fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x116ff0: 0x0  nop
    ctx->pc = 0x116ff0u;
    // NOP
    // 0x116ff4: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x116FF4u;
    {
        const bool branch_taken_0x116ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x116ff4) {
            ctx->pc = 0x116FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FF4u;
            // 0x116ff8: 0x46002947  neg.s       $f5, $f5 (Delay Slot)
            ctx->f[5] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117000u;
            goto label_117000;
        }
    }
    ctx->pc = 0x116FFCu;
    // 0x116ffc: 0x0  nop
    ctx->pc = 0x116ffcu;
    // NOP
label_117000:
    // 0x117000: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x117000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117004: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x117004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x117008: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x117008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11700c: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x11700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x117010: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x117010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x117014: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x117014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117018: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x117018u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11701c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x11701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117020: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x117020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x117024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x117024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x117028: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x117028u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x11702c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11702Cu;
    {
        const bool branch_taken_0x11702c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11702Cu;
        // 0x117030: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11702c) {
            ctx->pc = 0x117054u;
            goto label_117054;
        }
    }
    ctx->pc = 0x117034u;
    // 0x117034: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x117034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117038: 0x0  nop
    ctx->pc = 0x117038u;
    // NOP
    // 0x11703c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x11703Cu;
    {
        const bool branch_taken_0x11703c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x117040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11703Cu;
        // 0x117040: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11703c) {
            ctx->pc = 0x117048u;
            goto label_117048;
        }
    }
    ctx->pc = 0x117044u;
    // 0x117044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x117044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117048:
    // 0x117048: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x117048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x11704c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x11704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x117050: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x117050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_117054:
    // 0x117054: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x117054u;
    {
        const bool branch_taken_0x117054 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x117054) {
            ctx->pc = 0x117074u;
            goto label_117074;
        }
    }
    ctx->pc = 0x11705Cu;
    // 0x11705c: 0x46172834  c.lt.s      $f5, $f23
    ctx->pc = 0x11705cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117060: 0x0  nop
    ctx->pc = 0x117060u;
    // NOP
    // 0x117064: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x117064u;
    {
        const bool branch_taken_0x117064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x117068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117064u;
        // 0x117068: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117064) {
            ctx->pc = 0x117098u;
            goto label_117098;
        }
    }
    ctx->pc = 0x11706Cu;
    // 0x11706c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11706Cu;
    {
        const bool branch_taken_0x11706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11706Cu;
        // 0x117070: 0x46002dc6  mov.s       $f23, $f5 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11706c) {
            ctx->pc = 0x117094u;
            goto label_117094;
        }
    }
    ctx->pc = 0x117074u;
label_117074:
    // 0x117074: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x117074u;
    {
        const bool branch_taken_0x117074 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x117074) {
            ctx->pc = 0x117098u;
            goto label_117098;
        }
    }
    ctx->pc = 0x11707Cu;
    // 0x11707c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x11707cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x117080: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x117080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117084: 0x0  nop
    ctx->pc = 0x117084u;
    // NOP
    // 0x117088: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x117088u;
    {
        const bool branch_taken_0x117088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x117088) {
            ctx->pc = 0x117098u;
            goto label_117098;
        }
    }
    ctx->pc = 0x117090u;
    // 0x117090: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x117090u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_117094:
    // 0x117094: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x117094u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
label_117098:
    // 0x117098: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x117098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11709c: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x11709Cu;
    {
        const bool branch_taken_0x11709c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11709c) {
            ctx->pc = 0x1170A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11709Cu;
            // 0x1170a0: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117108u;
            goto label_117108;
        }
    }
    ctx->pc = 0x1170A4u;
    // 0x1170a4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x1170a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1170a8: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1170a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1170ac: 0x0  nop
    ctx->pc = 0x1170acu;
    // NOP
    // 0x1170b0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1170B0u;
    {
        const bool branch_taken_0x1170b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1170b0) {
            ctx->pc = 0x1170DCu;
            goto label_1170dc;
        }
    }
    ctx->pc = 0x1170B8u;
    // 0x1170b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1170b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1170bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1170bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1170c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1170c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1170c4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1170C4u;
    {
        const bool branch_taken_0x1170c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1170c4) {
            ctx->pc = 0x1170F8u;
            goto label_1170f8;
        }
    }
    ctx->pc = 0x1170CCu;
    // 0x1170cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1170ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1170d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1170d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1170d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1170D4u;
    {
        const bool branch_taken_0x1170d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1170d4) {
            ctx->pc = 0x1170F8u;
            goto label_1170f8;
        }
    }
    ctx->pc = 0x1170DCu;
label_1170dc:
    // 0x1170dc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1170dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1170e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1170e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1170e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1170e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1170E8u;
    {
        const bool branch_taken_0x1170e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1170e8) {
            ctx->pc = 0x1170F8u;
            goto label_1170f8;
        }
    }
    ctx->pc = 0x1170F0u;
    // 0x1170f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1170f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1170f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1170f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1170f8:
    // 0x1170f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1170f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1170fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1170fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117100: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117100u;
    {
        const bool branch_taken_0x117100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117100u;
        // 0x117104: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117100) {
            ctx->pc = 0x117120u;
            goto label_117120;
        }
    }
    ctx->pc = 0x117108u;
label_117108:
    // 0x117108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11710c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11710cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117110: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117110u;
    {
        const bool branch_taken_0x117110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117110) {
            ctx->pc = 0x117114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117110u;
            // 0x117114: 0x4601b002  mul.s       $f0, $f22, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117128u;
            goto label_117128;
        }
    }
    ctx->pc = 0x117118u;
    // 0x117118: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x117118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11711c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11711cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_117120:
    // 0x117120: 0x0  nop
    ctx->pc = 0x117120u;
    // NOP
    // 0x117124: 0x4601b002  mul.s       $f0, $f22, $f1
    ctx->pc = 0x117124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_117128:
    // 0x117128: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x117128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11712c: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x11712cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x117130: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x117130u;
    {
        const bool branch_taken_0x117130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117130u;
        // 0x117134: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117130) {
            ctx->pc = 0x116DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116df0;
        }
    }
    ctx->pc = 0x117138u;
    // 0x117138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x117138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11713c: 0x4600c506  mov.s       $f20, $f24
    ctx->pc = 0x11713cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[24]);
    // 0x117140: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x117140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117144: 0x0  nop
    ctx->pc = 0x117144u;
    // NOP
    // 0x117148: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x117148u;
    {
        const bool branch_taken_0x117148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117148u;
        // 0x11714c: 0xe6180230  swc1        $f24, 0x230($s0) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117148) {
            ctx->pc = 0x117154u;
            goto label_117154;
        }
    }
    ctx->pc = 0x117150u;
    // 0x117150: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x117150u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_117154:
    // 0x117154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11715c: 0x0  nop
    ctx->pc = 0x11715cu;
    // NOP
    // 0x117160: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x117160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x117164: 0x0  nop
    ctx->pc = 0x117164u;
    // NOP
    // 0x117168: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x117168u;
    {
        const bool branch_taken_0x117168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x117168) {
            ctx->pc = 0x11716Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117168u;
            // 0x11716c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x117170u;
            goto label_117170;
        }
    }
    ctx->pc = 0x117170u;
label_117170:
    // 0x117170: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x117170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x117174: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x117174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x117178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11717c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11717cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117180: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x117180u;
    SET_GPR_U32(ctx, 31, 0x117188u);
    ctx->pc = 0x117184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117180u;
    // 0x117184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x117180u, 0x117188u)) {
        return;
    }
    ctx->pc = 0x117188u;
label_117188:
    // 0x117188: 0x52200037  beql        $s1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x117188u;
    {
        const bool branch_taken_0x117188 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x117188) {
            ctx->pc = 0x11718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117188u;
            // 0x11718c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117268u;
            goto label_117268;
        }
    }
    ctx->pc = 0x117190u;
    // 0x117190: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x117194: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x117194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x117198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11719c: 0x0  nop
    ctx->pc = 0x11719cu;
    // NOP
    // 0x1171a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1171a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1171a4: 0x0  nop
    ctx->pc = 0x1171a4u;
    // NOP
    // 0x1171a8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1171A8u;
    {
        const bool branch_taken_0x1171a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1171ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171A8u;
        // 0x1171ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171a8) {
            ctx->pc = 0x117208u;
            goto label_117208;
        }
    }
    ctx->pc = 0x1171B0u;
    // 0x1171b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1171b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1171b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1171b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1171b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1171bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1171bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1171c0: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x1171c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1171c4: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x1171c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x1171c8: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x1171C8u;
    SET_GPR_U32(ctx, 31, 0x1171D0u);
    ctx->pc = 0x1171CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171C8u;
    // 0x1171cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x1171C8u, 0x1171D0u)) {
        return;
    }
    ctx->pc = 0x1171D0u;
label_1171d0:
    // 0x1171d0: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x1171d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1171d4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1171d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1171d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1171d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1171dc: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1171dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1171e0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1171e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1171e4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1171e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1171e8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1171e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1171ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1171ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1171f0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1171f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1171f4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1171f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1171f8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1171f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1171fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1171FCu;
    {
        const bool branch_taken_0x1171fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171FCu;
        // 0x117200: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171fc) {
            ctx->pc = 0x117258u;
            goto label_117258;
        }
    }
    ctx->pc = 0x117204u;
    // 0x117204: 0x0  nop
    ctx->pc = 0x117204u;
    // NOP
label_117208:
    // 0x117208: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x117208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x11720c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x11720cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x117210: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117214: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x117214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x117218: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x117218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x11721c: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x11721cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x117220: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x117220u;
    SET_GPR_U32(ctx, 31, 0x117228u);
    ctx->pc = 0x117224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117220u;
    // 0x117224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x117220u, 0x117228u)) {
        return;
    }
    ctx->pc = 0x117228u;
label_117228:
    // 0x117228: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x117228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11722c: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x11722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117230: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x117230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x117234: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x117234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x117238: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x117238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11723c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117240: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x117240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x117244: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x117244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x117248: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x117248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x11724c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x11724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117250: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x117250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x117254: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x117254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_117258:
    // 0x117258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11725c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11725Cu;
    SET_GPR_U32(ctx, 31, 0x117264u);
    ctx->pc = 0x117260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11725Cu;
    // 0x117260: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11725Cu, 0x117264u)) {
        return;
    }
    ctx->pc = 0x117264u;
label_117264:
    // 0x117264: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x117264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_117268:
    // 0x117268: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x117268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11726c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x11726cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x117270: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x117270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x117274: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x117274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x117278: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x117278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11727c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x11727cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117280: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x117280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117284: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x117284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117288: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x117288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x11728c: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x11728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x117290: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x117290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x117294: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x117294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x117298: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x117298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11729c: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x11729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1172a0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1172a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1172a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1172A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1172A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1172ACu;
    // 0x1172ac: 0x0  nop
    ctx->pc = 0x1172acu;
    // NOP
    ctx->pc = 0x1172b0u;
}
