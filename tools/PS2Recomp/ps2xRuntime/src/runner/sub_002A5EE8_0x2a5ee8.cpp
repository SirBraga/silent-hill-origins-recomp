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

// Function: sub_002A5EE8
// Address: 0x2a5ee8 - 0x2a61c0
void sub_002A5EE8_0x2a5ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5EE8_0x2a5ee8");
#endif

    ctx->pc = 0x2a5ee8u;

    // 0x2a5ee8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a5ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a5eec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5ef0: 0xe7bf0098  swc1        $f31, 0x98($sp)
    ctx->pc = 0x2a5ef0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a5ef4: 0xe7be0090  swc1        $f30, 0x90($sp)
    ctx->pc = 0x2a5ef4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a5ef8: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x2a5ef8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a5efc: 0xe7bc0080  swc1        $f28, 0x80($sp)
    ctx->pc = 0x2a5efcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a5f00: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x2a5f00u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a5f04: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x2a5f04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a5f08: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x2a5f08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a5f0c: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x2a5f0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a5f10: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2a5f10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a5f14: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2a5f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a5f18: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2a5f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a5f1c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2a5f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a5f20: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f24: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a5f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5f28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a5f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5f2c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2a5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a5f30: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2a5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a5f34: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x2a5f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a5f38: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2a5f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a5f3c: 0xc4860014  lwc1        $f6, 0x14($a0)
    ctx->pc = 0x2a5f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a5f40: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f44: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a5f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5f48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a5f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a5f4c: 0xc487001c  lwc1        $f7, 0x1C($a0)
    ctx->pc = 0x2a5f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a5f50: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x2a5f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a5f54: 0xc4890024  lwc1        $f9, 0x24($a0)
    ctx->pc = 0x2a5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a5f58: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2a5f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a5f5c: 0xc48a0028  lwc1        $f10, 0x28($a0)
    ctx->pc = 0x2a5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a5f60: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f64: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x2a5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5f68: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a5f68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a5f6c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2a5f6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a5f70: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f74: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a5f74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a5f78: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x2a5f78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a5f7c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f80: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a5f80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a5f84: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x2a5f84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2a5f88: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f8c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2a5f8cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2a5f90: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x2a5f90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2a5f94: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a5f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a5f9c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2a5f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2a5fa0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fa4: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2a5fa4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a5fa8: 0xe487001c  swc1        $f7, 0x1C($a0)
    ctx->pc = 0x2a5fa8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2a5fac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fb0: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2a5fb0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2a5fb4: 0xe4880020  swc1        $f8, 0x20($a0)
    ctx->pc = 0x2a5fb4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2a5fb8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fbc: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2a5fbcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2a5fc0: 0xe4890024  swc1        $f9, 0x24($a0)
    ctx->pc = 0x2a5fc0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2a5fc4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fc8: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2a5fc8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2a5fcc: 0xe48a0028  swc1        $f10, 0x28($a0)
    ctx->pc = 0x2a5fccu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2a5fd0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2a5fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fd4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a5fd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a5fd8: 0xe482002c  swc1        $f2, 0x2C($a0)
    ctx->pc = 0x2a5fd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2a5fdc: 0xc4890030  lwc1        $f9, 0x30($a0)
    ctx->pc = 0x2a5fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a5fe0: 0xc4b10004  lwc1        $f17, 0x4($a1)
    ctx->pc = 0x2a5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a5fe4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5fe8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fec: 0x46114f02  mul.s       $f28, $f9, $f17
    ctx->pc = 0x2a5fecu;
    ctx->f[28] = FPU_MUL_S(ctx->f[9], ctx->f[17]);
    // 0x2a5ff0: 0xc4850034  lwc1        $f5, 0x34($a0)
    ctx->pc = 0x2a5ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a5ff4: 0x46014e02  mul.s       $f24, $f9, $f1
    ctx->pc = 0x2a5ff4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a5ff8: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x2a5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a5ffc: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2a5ffcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2a6000: 0xc4aa0010  lwc1        $f10, 0x10($a1)
    ctx->pc = 0x2a6000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a6004: 0x46002ec2  mul.s       $f27, $f5, $f0
    ctx->pc = 0x2a6004u;
    ctx->f[27] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a6008: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x2a6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a600c: 0x46001e82  mul.s       $f26, $f3, $f0
    ctx->pc = 0x2a600cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a6010: 0xc484003c  lwc1        $f4, 0x3C($a0)
    ctx->pc = 0x2a6010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6014: 0x46012d82  mul.s       $f22, $f5, $f1
    ctx->pc = 0x2a6014u;
    ctx->f[22] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2a6018: 0xc482004c  lwc1        $f2, 0x4C($a0)
    ctx->pc = 0x2a6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a601c: 0x46112942  mul.s       $f5, $f5, $f17
    ctx->pc = 0x2a601cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x2a6020: 0xc4b20014  lwc1        $f18, 0x14($a1)
    ctx->pc = 0x2a6020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2a6024: 0x46012642  mul.s       $f25, $f4, $f1
    ctx->pc = 0x2a6024u;
    ctx->f[25] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a6028: 0xc4880040  lwc1        $f8, 0x40($a0)
    ctx->pc = 0x2a6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a602c: 0x460c12c2  mul.s       $f11, $f2, $f12
    ctx->pc = 0x2a602cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2a6030: 0xc4870044  lwc1        $f7, 0x44($a0)
    ctx->pc = 0x2a6030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a6034: 0x460a1742  mul.s       $f29, $f2, $f10
    ctx->pc = 0x2a6034u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2a6038: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a6038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a603c: 0xc4860048  lwc1        $f6, 0x48($a0)
    ctx->pc = 0x2a603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a6040: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x2a6040u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x2a6044: 0xc4b70028  lwc1        $f23, 0x28($a1)
    ctx->pc = 0x2a6044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a6048: 0x46112102  mul.s       $f4, $f4, $f17
    ctx->pc = 0x2a6048u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x2a604c: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x2a604cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a6050: 0x460c47c2  mul.s       $f31, $f8, $f12
    ctx->pc = 0x2a6050u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x2a6054: 0xc4ab0020  lwc1        $f11, 0x20($a1)
    ctx->pc = 0x2a6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a6058: 0x460c3f82  mul.s       $f30, $f7, $f12
    ctx->pc = 0x2a6058u;
    ctx->f[30] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x2a605c: 0xc48d0050  lwc1        $f13, 0x50($a0)
    ctx->pc = 0x2a605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a6060: 0x460a44c2  mul.s       $f19, $f8, $f10
    ctx->pc = 0x2a6060u;
    ctx->f[19] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2a6064: 0xc48e0054  lwc1        $f14, 0x54($a0)
    ctx->pc = 0x2a6064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a6068: 0x460a3d02  mul.s       $f20, $f7, $f10
    ctx->pc = 0x2a6068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x2a606c: 0xc490005c  lwc1        $f16, 0x5C($a0)
    ctx->pc = 0x2a606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a6070: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x2a6070u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x2a6074: 0xc48f0058  lwc1        $f15, 0x58($a0)
    ctx->pc = 0x2a6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a6078: 0x460a3282  mul.s       $f10, $f6, $f10
    ctx->pc = 0x2a6078u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x2a607c: 0xc4b50024  lwc1        $f21, 0x24($a1)
    ctx->pc = 0x2a607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a6080: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a6080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a6084: 0x46124202  mul.s       $f8, $f8, $f18
    ctx->pc = 0x2a6084u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[18]);
    // 0x2a6088: 0x461239c2  mul.s       $f7, $f7, $f18
    ctx->pc = 0x2a6088u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[18]);
    // 0x2a608c: 0x46123182  mul.s       $f6, $f6, $f18
    ctx->pc = 0x2a608cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[18]);
    // 0x2a6090: 0x461118c2  mul.s       $f3, $f3, $f17
    ctx->pc = 0x2a6090u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x2a6094: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a6094u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a6098: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2a6098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a609c: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2a609cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2a60a0: 0x4608e700  add.s       $f28, $f28, $f8
    ctx->pc = 0x2a60a0u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[8]);
    // 0x2a60a4: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2a60a4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2a60a8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2a60a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2a60ac: 0x460cd680  add.s       $f26, $f26, $f12
    ctx->pc = 0x2a60acu;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[12]);
    // 0x2a60b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a60b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a60b4: 0x46178302  mul.s       $f12, $f16, $f23
    ctx->pc = 0x2a60b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x2a60b8: 0x460b81c2  mul.s       $f7, $f16, $f11
    ctx->pc = 0x2a60b8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[16], ctx->f[11]);
    // 0x2a60bc: 0x46176a02  mul.s       $f8, $f13, $f23
    ctx->pc = 0x2a60bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[23]);
    // 0x2a60c0: 0x46177282  mul.s       $f10, $f14, $f23
    ctx->pc = 0x2a60c0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[23]);
    // 0x2a60c4: 0x460b6882  mul.s       $f2, $f13, $f11
    ctx->pc = 0x2a60c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x2a60c8: 0x460b7182  mul.s       $f6, $f14, $f11
    ctx->pc = 0x2a60c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[11]);
    // 0x2a60cc: 0x46177dc2  mul.s       $f23, $f15, $f23
    ctx->pc = 0x2a60ccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[15], ctx->f[23]);
    // 0x2a60d0: 0x460b7ac2  mul.s       $f11, $f15, $f11
    ctx->pc = 0x2a60d0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[15], ctx->f[11]);
    // 0x2a60d4: 0x4613c600  add.s       $f24, $f24, $f19
    ctx->pc = 0x2a60d4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[19]);
    // 0x2a60d8: 0x46158402  mul.s       $f16, $f16, $f21
    ctx->pc = 0x2a60d8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[21]);
    // 0x2a60dc: 0x46156b42  mul.s       $f13, $f13, $f21
    ctx->pc = 0x2a60dcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x2a60e0: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x2a60e0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x2a60e4: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x2a60e4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x2a60e8: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x2a60e8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x2a60ec: 0x461dce40  add.s       $f25, $f25, $f29
    ctx->pc = 0x2a60ecu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[29]);
    // 0x2a60f0: 0x461f4a40  add.s       $f9, $f9, $f31
    ctx->pc = 0x2a60f0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[31]);
    // 0x2a60f4: 0x461edec0  add.s       $f27, $f27, $f30
    ctx->pc = 0x2a60f4u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[30]);
    // 0x2a60f8: 0x4602c600  add.s       $f24, $f24, $f2
    ctx->pc = 0x2a60f8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x2a60fc: 0x4606b580  add.s       $f22, $f22, $f6
    ctx->pc = 0x2a60fcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[6]);
    // 0x2a6100: 0x4607ce40  add.s       $f25, $f25, $f7
    ctx->pc = 0x2a6100u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[7]);
    // 0x2a6104: 0x460de700  add.s       $f28, $f28, $f13
    ctx->pc = 0x2a6104u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[13]);
    // 0x2a6108: 0xe4980030  swc1        $f24, 0x30($a0)
    ctx->pc = 0x2a6108u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2a610c: 0x460adec0  add.s       $f27, $f27, $f10
    ctx->pc = 0x2a610cu;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[10]);
    // 0x2a6110: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x2a6110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a6114: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2a6114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2a6118: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x2a6118u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a611c: 0x460e2940  add.s       $f5, $f5, $f14
    ctx->pc = 0x2a611cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[14]);
    // 0x2a6120: 0xe7b9000c  swc1        $f25, 0xC($sp)
    ctx->pc = 0x2a6120u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a6124: 0x460f18c0  add.s       $f3, $f3, $f15
    ctx->pc = 0x2a6124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[15]);
    // 0x2a6128: 0xe7bc0010  swc1        $f28, 0x10($sp)
    ctx->pc = 0x2a6128u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a612c: 0x46102100  add.s       $f4, $f4, $f16
    ctx->pc = 0x2a612cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[16]);
    // 0x2a6130: 0xe7bb0024  swc1        $f27, 0x24($sp)
    ctx->pc = 0x2a6130u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a6134: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x2a6134u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x2a6138: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a6138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a613c: 0x4617d680  add.s       $f26, $f26, $f23
    ctx->pc = 0x2a613cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[23]);
    // 0x2a6140: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2a6140u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a6144: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2a6144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2a6148: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2a6148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a614c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2a614cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a6150: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x2a6150u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a6154: 0xe7ba0028  swc1        $f26, 0x28($sp)
    ctx->pc = 0x2a6154u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a6158: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a6158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a615c: 0xe4960034  swc1        $f22, 0x34($a0)
    ctx->pc = 0x2a615cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2a6160: 0xe499003c  swc1        $f25, 0x3C($a0)
    ctx->pc = 0x2a6160u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2a6164: 0xe49c0040  swc1        $f28, 0x40($a0)
    ctx->pc = 0x2a6164u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2a6168: 0xe49b0054  swc1        $f27, 0x54($a0)
    ctx->pc = 0x2a6168u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x2a616c: 0xe49a0058  swc1        $f26, 0x58($a0)
    ctx->pc = 0x2a616cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2a6170: 0xc7bf0098  lwc1        $f31, 0x98($sp)
    ctx->pc = 0x2a6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2a6174: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x2a6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2a6178: 0xc7bd0088  lwc1        $f29, 0x88($sp)
    ctx->pc = 0x2a6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2a617c: 0xc7bc0080  lwc1        $f28, 0x80($sp)
    ctx->pc = 0x2a617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2a6180: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x2a6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a6184: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x2a6184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a6188: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x2a6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a618c: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x2a618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a6190: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2a6190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a6194: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2a6194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a6198: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2a6198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a619c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a61a0: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x2a61a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x2a61a4: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x2a61a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2a61a8: 0xe4850044  swc1        $f5, 0x44($a0)
    ctx->pc = 0x2a61a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2a61ac: 0xe4830048  swc1        $f3, 0x48($a0)
    ctx->pc = 0x2a61acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2a61b0: 0xe484004c  swc1        $f4, 0x4C($a0)
    ctx->pc = 0x2a61b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2a61b4: 0xe4890050  swc1        $f9, 0x50($a0)
    ctx->pc = 0x2a61b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2a61b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A61B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A61B8u;
        // 0x2a61bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A61B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A61C0u;
}
