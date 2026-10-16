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

// Function: sub_002BDF78
// Address: 0x2bdf78 - 0x2be0f8
void sub_002BDF78_0x2bdf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDF78_0x2bdf78");
#endif

    switch (ctx->pc) {
        case 0x2be008u: goto label_2be008;
        case 0x2be014u: goto label_2be014;
        default: break;
    }

    ctx->pc = 0x2bdf78u;

    // 0x2bdf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bdf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bdf7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bdf80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bdf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bdf84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf88: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2bdf88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bdf8c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bdf8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bdf90: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2bdf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdf94: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2bdf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bdf98: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2bdf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2bdf9c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2bdf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdfa0: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x2bdfa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2bdfa4: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2bdfa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2bdfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdfac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bdfacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bdfb0: 0x46000084  c1          0x84
    ctx->pc = 0x2bdfb0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bdfb4: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x2bdfb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x2bdfb8: 0xc7808204  lwc1        $f0, -0x7DFC($gp)
    ctx->pc = 0x2bdfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdfbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdfc0: 0x0  nop
    ctx->pc = 0x2bdfc0u;
    // NOP
    // 0x2bdfc4: 0x45030046  bc1tl       . + 4 + (0x46 << 2)
    ctx->pc = 0x2BDFC4u;
    {
        const bool branch_taken_0x2bdfc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdfc4) {
            ctx->pc = 0x2BDFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDFC4u;
            // 0x2bdfc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE0E0u;
            goto label_2be0e0;
        }
    }
    ctx->pc = 0x2BDFCCu;
    // 0x2bdfcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdfd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdfd4: 0x460c1502  mul.s       $f20, $f2, $f12
    ctx->pc = 0x2bdfd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2bdfd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bdfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bdfdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bdfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdfe0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2bdfe0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x2bdfe4: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2bdfe4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2bdfe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bdfe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bdfec: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2bdfecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdff0: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x2bdff0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2bdff4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2bdff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2bdff8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2bdff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bdffc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2bdffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2be000: 0xc09b164  jal         func_26C590
    ctx->pc = 0x2BE000u;
    SET_GPR_U32(ctx, 31, 0x2BE008u);
    ctx->pc = 0x2BE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE000u;
    // 0x2be004: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x2BE000u, 0x2BE008u)) {
        return;
    }
    ctx->pc = 0x2BE008u;
label_2be008:
    // 0x2be008: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2be008u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2be00c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x2BE00Cu;
    SET_GPR_U32(ctx, 31, 0x2BE014u);
    ctx->pc = 0x2BE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE00Cu;
    // 0x2be010: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x2BE00Cu, 0x2BE014u)) {
        return;
    }
    ctx->pc = 0x2BE014u;
label_2be014:
    // 0x2be014: 0xc60b0000  lwc1        $f11, 0x0($s0)
    ctx->pc = 0x2be014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2be018: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2be018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2be01c: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x2be01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2be020: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2be020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2be024: 0x460a5842  mul.s       $f1, $f11, $f10
    ctx->pc = 0x2be024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2be028: 0xc6090008  lwc1        $f9, 0x8($s0)
    ctx->pc = 0x2be028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2be02c: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x2be02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x2be030: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x2be030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2be034: 0xc608000c  lwc1        $f8, 0xC($s0)
    ctx->pc = 0x2be034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2be038: 0x460748c2  mul.s       $f3, $f9, $f7
    ctx->pc = 0x2be038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x2be03c: 0xe7ab0020  swc1        $f11, 0x20($sp)
    ctx->pc = 0x2be03cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2be040: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2be040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2be044: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2be044u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2be048: 0x46004382  mul.s       $f14, $f8, $f0
    ctx->pc = 0x2be048u;
    ctx->f[14] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2be04c: 0xe7a90028  swc1        $f9, 0x28($sp)
    ctx->pc = 0x2be04cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2be050: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2be050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2be054: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2be054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2be058: 0x46017381  sub.s       $f14, $f14, $f1
    ctx->pc = 0x2be058u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x2be05c: 0x46096942  mul.s       $f5, $f13, $f9
    ctx->pc = 0x2be05cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2be060: 0x460c38c2  mul.s       $f3, $f7, $f12
    ctx->pc = 0x2be060u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x2be064: 0x460b3982  mul.s       $f6, $f7, $f11
    ctx->pc = 0x2be064u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x2be068: 0x46095082  mul.s       $f2, $f10, $f9
    ctx->pc = 0x2be068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x2be06c: 0x460c5102  mul.s       $f4, $f10, $f12
    ctx->pc = 0x2be06cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[12]);
    // 0x2be070: 0x460b6842  mul.s       $f1, $f13, $f11
    ctx->pc = 0x2be070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x2be074: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2be074u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2be078: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2be078u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2be07c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2be07cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2be080: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2be080u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2be084: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2be084u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2be088: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x2be088u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2be08c: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x2be08cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x2be090: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x2be090u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2be094: 0xe60e000c  swc1        $f14, 0xC($s0)
    ctx->pc = 0x2be094u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2be098: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x2be098u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2be09c: 0x460a4282  mul.s       $f10, $f8, $f10
    ctx->pc = 0x2be09cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2be0a0: 0x460b02c2  mul.s       $f11, $f0, $f11
    ctx->pc = 0x2be0a0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2be0a4: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x2be0a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x2be0a8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2be0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2be0ac: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x2be0acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x2be0b0: 0x4605a942  mul.s       $f5, $f21, $f5
    ctx->pc = 0x2be0b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
    // 0x2be0b4: 0x460b5280  add.s       $f10, $f10, $f11
    ctx->pc = 0x2be0b4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[11]);
    // 0x2be0b8: 0x460939c0  add.s       $f7, $f7, $f9
    ctx->pc = 0x2be0b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2be0bc: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2be0bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2be0c0: 0x4606ad42  mul.s       $f21, $f21, $f6
    ctx->pc = 0x2be0c0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[6]);
    // 0x2be0c4: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x2be0c4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x2be0c8: 0x46055280  add.s       $f10, $f10, $f5
    ctx->pc = 0x2be0c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x2be0cc: 0x46154200  add.s       $f8, $f8, $f21
    ctx->pc = 0x2be0ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[21]);
    // 0x2be0d0: 0xe6070008  swc1        $f7, 0x8($s0)
    ctx->pc = 0x2be0d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2be0d4: 0xe60a0000  swc1        $f10, 0x0($s0)
    ctx->pc = 0x2be0d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2be0d8: 0xe6080004  swc1        $f8, 0x4($s0)
    ctx->pc = 0x2be0d8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2be0dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2be0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2be0e0:
    // 0x2be0e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2be0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be0e4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2be0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be0e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2be0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0ECu;
        // 0x2be0f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE0F4u;
    // 0x2be0f4: 0x0  nop
    ctx->pc = 0x2be0f4u;
    // NOP
    ctx->pc = 0x2be0f8u;
}
