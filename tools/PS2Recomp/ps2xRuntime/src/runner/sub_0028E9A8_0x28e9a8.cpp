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

// Function: sub_0028E9A8
// Address: 0x28e9a8 - 0x28ebf0
void sub_0028E9A8_0x28e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E9A8_0x28e9a8");
#endif

    ctx->pc = 0x28e9a8u;

    // 0x28e9a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28e9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9ac: 0xc5080000  lwc1        $f8, 0x0($t0)
    ctx->pc = 0x28e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28e9b0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x28e9b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28e9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28e9b8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x28e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9bc: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x28e9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e9c0: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x28e9c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x28e9c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x28e9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28e9c8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x28e9c8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x28e9cc: 0x46044229  min.s       $f8, $f8, $f4
    ctx->pc = 0x28e9ccu;
    ctx->f[8] = std::min(ctx->f[8], ctx->f[4]);
    // 0x28e9d0: 0x46034228  max.s       $f8, $f8, $f3
    ctx->pc = 0x28e9d0u;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[3]);
    // 0x28e9d4: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x28e9d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28e9d8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x28e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9dc: 0xc5070004  lwc1        $f7, 0x4($t0)
    ctx->pc = 0x28e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28e9e0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x28e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e9e4: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x28e9e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28e9e8: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x28e9e8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x28e9ec: 0x460439e9  min.s       $f7, $f7, $f4
    ctx->pc = 0x28e9ecu;
    ctx->f[7] = std::min(ctx->f[7], ctx->f[4]);
    // 0x28e9f0: 0x460339e8  max.s       $f7, $f7, $f3
    ctx->pc = 0x28e9f0u;
    ctx->f[7] = std::max(ctx->f[7], ctx->f[3]);
    // 0x28e9f4: 0xe4470004  swc1        $f7, 0x4($v0)
    ctx->pc = 0x28e9f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28e9f8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x28e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e9fc: 0xc5060008  lwc1        $f6, 0x8($t0)
    ctx->pc = 0x28e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28ea00: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x28ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea04: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x28ea04u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x28ea08: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x28ea08u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x28ea0c: 0x460431a9  min.s       $f6, $f6, $f4
    ctx->pc = 0x28ea0cu;
    ctx->f[6] = std::min(ctx->f[6], ctx->f[4]);
    // 0x28ea10: 0x460331a8  max.s       $f6, $f6, $f3
    ctx->pc = 0x28ea10u;
    ctx->f[6] = std::max(ctx->f[6], ctx->f[3]);
    // 0x28ea14: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x28ea14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28ea18: 0xc505000c  lwc1        $f5, 0xC($t0)
    ctx->pc = 0x28ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28ea1c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x28ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea20: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x28ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea24: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x28ea24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x28ea28: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x28ea28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x28ea2c: 0x46042969  min.s       $f5, $f5, $f4
    ctx->pc = 0x28ea2cu;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[4]);
    // 0x28ea30: 0x46032968  max.s       $f5, $f5, $f3
    ctx->pc = 0x28ea30u;
    ctx->f[5] = std::max(ctx->f[5], ctx->f[3]);
    // 0x28ea34: 0xe445000c  swc1        $f5, 0xC($v0)
    ctx->pc = 0x28ea34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28ea38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x28ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea3c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x28ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea40: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x28ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ea44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28ea44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ea48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ea48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ea4c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28ea4cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28ea50: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28ea50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28ea54: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x28ea54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x28ea58: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x28ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea5c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x28ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea60: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x28ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ea64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28ea64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ea68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28ea68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28ea6c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28ea6cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28ea70: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28ea70u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28ea74: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x28ea74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x28ea78: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x28ea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea7c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x28ea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ea80: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x28ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ea84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28ea84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ea88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28ea88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28ea8c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28ea8cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28ea90: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28ea90u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28ea94: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x28ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x28ea98: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x28ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ea9c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x28ea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eaa0: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x28eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eaa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28eaa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eaa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28eaa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28eaac: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28eaacu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28eab0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28eab0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28eab4: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x28eab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x28eab8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eabc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x28eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eac0: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x28eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eac4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28eac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28eac8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28eac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28eacc: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28eaccu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28ead0: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28ead0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28ead4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x28ead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x28ead8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x28ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eadc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eae0: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x28eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eae4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28eae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eae8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28eae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28eaec: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28eaecu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28eaf0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28eaf0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28eaf4: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x28eaf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x28eaf8: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x28eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eafc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28eafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb00: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x28eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eb04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28eb04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28eb08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28eb08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28eb0c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28eb0cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28eb10: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28eb10u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28eb14: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x28eb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x28eb18: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x28eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb1c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x28eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb20: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x28eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eb24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28eb24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eb28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28eb28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28eb2c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28eb2cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28eb30: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28eb30u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28eb34: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x28eb34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x28eb38: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb3c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x28eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb40: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x28eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eb44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28eb44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28eb48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28eb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28eb4c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28eb4cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28eb50: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28eb50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28eb54: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x28eb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x28eb58: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x28eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb5c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x28eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb60: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x28eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eb64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28eb64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eb68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28eb68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28eb6c: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28eb6cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28eb70: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28eb70u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28eb74: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x28eb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x28eb78: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x28eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb7c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x28eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb80: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x28eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28eb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28eb88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x28eb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28eb8c: 0x46040029  min.s       $f0, $f0, $f4
    ctx->pc = 0x28eb8cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[4]);
    // 0x28eb90: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x28eb90u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x28eb94: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x28eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x28eb98: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x28eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb9c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x28eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eba0: 0xc542000c  lwc1        $f2, 0xC($t2)
    ctx->pc = 0x28eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28eba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28eba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28eba8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x28eba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x28ebac: 0x46040869  min.s       $f1, $f1, $f4
    ctx->pc = 0x28ebacu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[4]);
    // 0x28ebb0: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x28ebb0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x28ebb4: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x28ebb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x28ebb8: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ebb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ebbc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28ebbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28ebc0: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ebc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ebc4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x28ebc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28ebc8: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x28ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ebcc: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ebccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ebd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28ebd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28ebd4: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ebd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ebd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28ebd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28ebdc: 0xa0450061  sb          $a1, 0x61($v0)
    ctx->pc = 0x28ebdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 5));
    // 0x28ebe0: 0xa0440062  sb          $a0, 0x62($v0)
    ctx->pc = 0x28ebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 4));
    // 0x28ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBE4u;
        // 0x28ebe8: 0xa0430063  sb          $v1, 0x63($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBECu;
    // 0x28ebec: 0x0  nop
    ctx->pc = 0x28ebecu;
    // NOP
    ctx->pc = 0x28ebf0u;
}
