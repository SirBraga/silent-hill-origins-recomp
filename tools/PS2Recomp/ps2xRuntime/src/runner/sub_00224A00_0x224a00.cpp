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

// Function: sub_00224A00
// Address: 0x224a00 - 0x224bd8
void sub_00224A00_0x224a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A00_0x224a00");
#endif

    switch (ctx->pc) {
        case 0x224bc0u: goto label_224bc0;
        default: break;
    }

    ctx->pc = 0x224a00u;

    // 0x224a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224a04: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x224a08: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x224a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x224a0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x224a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a18: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x224a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x224a1c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x224a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x224a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224a24: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x224a24u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x224a28: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x224a2c: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x224a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224a30: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x224a30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x224a34: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x224a34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224a38: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x224a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224a3c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x224a3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x224a40: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x224a40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224a44: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x224a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224a48: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x224a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x224a4c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x224a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224a50: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x224a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224a54: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x224a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x224a58: 0x46000a07  neg.s       $f8, $f1
    ctx->pc = 0x224a58u;
    ctx->f[8] = FPU_NEG_S(ctx->f[1]);
    // 0x224a5c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a60: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224a64: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x224a64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x224a68: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x224a68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224a6c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x224a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a70: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224a74: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x224a74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x224a78: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x224a78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224a7c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x224a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224a80: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224a84: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x224a84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x224a88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x224a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224a8c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x224a8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x224a90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x224a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x224a94: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x224a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x224a98: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x224a98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x224a9c: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x224a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x224aa0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x224aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224aa4: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x224aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224aa8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x224aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x224aac: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x224aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224ab0: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x224ab0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x224ab4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x224ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x224ab8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x224ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x224abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224ac0: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x224ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x224ac4: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x224ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x224ac8: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x224ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x224acc: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x224accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224ad0: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x224ad0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x224ad4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x224ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224ad8: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x224ad8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x224adc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x224adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224ae0: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x224ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224ae4: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x224ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x224ae8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x224ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224aec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x224aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224af0: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x224af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x224af4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x224af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224af8: 0xc604007c  lwc1        $f4, 0x7C($s0)
    ctx->pc = 0x224af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224afc: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x224afcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x224b00: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b04: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224b08: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x224b08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x224b0c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x224b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224b10: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x224b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b14: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224b18: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x224b18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x224b1c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x224b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224b20: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x224b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b24: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224b28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224b2c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x224b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224b30: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x224b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x224b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b38: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x224b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x224b3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x224b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b40: 0xe4c10024  swc1        $f1, 0x24($a2)
    ctx->pc = 0x224b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x224b44: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x224b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b48: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x224b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224b4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x224b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x224b50: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x224b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224b54: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x224b54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x224b58: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x224b58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x224b5c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x224b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x224b60: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x224b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x224b64: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x224b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x224b68: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x224b68u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x224b6c: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x224b6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x224b70: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b74: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x224b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x224b78: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x224b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224b7c: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x224b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x224b80: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x224b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b84: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x224b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x224b88: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224b8c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x224b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224b90: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x224b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224b94: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x224b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224b98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x224b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x224b9c: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x224b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224ba0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x224ba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x224ba4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x224ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224ba8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x224ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x224bac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x224bb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224bb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x224bb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x224bb8: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x224BB8u;
    SET_GPR_U32(ctx, 31, 0x224BC0u);
    ctx->pc = 0x224BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BB8u;
    // 0x224bbc: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x224BB8u, 0x224BC0u)) {
        return;
    }
    ctx->pc = 0x224BC0u;
label_224bc0:
    // 0x224bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224bc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x224BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BCCu;
        // 0x224bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224BD4u;
    // 0x224bd4: 0x0  nop
    ctx->pc = 0x224bd4u;
    // NOP
    ctx->pc = 0x224bd8u;
}
