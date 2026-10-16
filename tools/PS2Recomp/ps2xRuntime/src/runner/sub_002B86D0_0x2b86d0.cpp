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

// Function: sub_002B86D0
// Address: 0x2b86d0 - 0x2b8978
void sub_002B86D0_0x2b86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B86D0_0x2b86d0");
#endif

    ctx->pc = 0x2b86d0u;

    // 0x2b86d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b86d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b86d4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b86d8: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x2b86d8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b86dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b86dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86e0: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x2b86e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b86e4: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2b86e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b86e8: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2b86e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b86ec: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2b86ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b86f0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2b86f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b86f4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2b86f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b86f8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b86f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b86fc: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b8700: 0xc4cd0010  lwc1        $f13, 0x10($a2)
    ctx->pc = 0x2b8700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b8704: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x2b8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2b8708: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x2b8708u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b870c: 0xc4b00018  lwc1        $f16, 0x18($a1)
    ctx->pc = 0x2b870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b8710: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x2b8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b8714: 0x460b0942  mul.s       $f5, $f1, $f11
    ctx->pc = 0x2b8714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2b8718: 0xc4cc0014  lwc1        $f12, 0x14($a2)
    ctx->pc = 0x2b8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b871c: 0x46106e42  mul.s       $f25, $f13, $f16
    ctx->pc = 0x2b871cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
    // 0x2b8720: 0xc4b30010  lwc1        $f19, 0x10($a1)
    ctx->pc = 0x2b8720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2b8724: 0x460b4242  mul.s       $f9, $f8, $f11
    ctx->pc = 0x2b8724u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x2b8728: 0xc4ca0008  lwc1        $f10, 0x8($a2)
    ctx->pc = 0x2b8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2b872c: 0x46106602  mul.s       $f24, $f12, $f16
    ctx->pc = 0x2b872cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[12], ctx->f[16]);
    // 0x2b8730: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2b8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8734: 0x46136ec2  mul.s       $f27, $f13, $f19
    ctx->pc = 0x2b8734u;
    ctx->f[27] = FPU_MUL_S(ctx->f[13], ctx->f[19]);
    // 0x2b8738: 0xc4b50004  lwc1        $f21, 0x4($a1)
    ctx->pc = 0x2b8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b873c: 0x46045182  mul.s       $f6, $f10, $f4
    ctx->pc = 0x2b873cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2b8740: 0xc4b60014  lwc1        $f22, 0x14($a1)
    ctx->pc = 0x2b8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b8744: 0x46101402  mul.s       $f16, $f2, $f16
    ctx->pc = 0x2b8744u;
    ctx->f[16] = FPU_MUL_S(ctx->f[2], ctx->f[16]);
    // 0x2b8748: 0x461315c2  mul.s       $f23, $f2, $f19
    ctx->pc = 0x2b8748u;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
    // 0x2b874c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2b874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8750: 0x460b52c2  mul.s       $f11, $f10, $f11
    ctx->pc = 0x2b8750u;
    ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x2b8754: 0xc4af0020  lwc1        $f15, 0x20($a1)
    ctx->pc = 0x2b8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b8758: 0x461364c2  mul.s       $f19, $f12, $f19
    ctx->pc = 0x2b8758u;
    ctx->f[19] = FPU_MUL_S(ctx->f[12], ctx->f[19]);
    // 0x2b875c: 0xc4d10028  lwc1        $f17, 0x28($a2)
    ctx->pc = 0x2b875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2b8760: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x2b8760u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x2b8764: 0xc4b20028  lwc1        $f18, 0x28($a1)
    ctx->pc = 0x2b8764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b8768: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x2b8768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2b876c: 0xc4ce0024  lwc1        $f14, 0x24($a2)
    ctx->pc = 0x2b876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b8770: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x2b8770u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x2b8774: 0xc4b40024  lwc1        $f20, 0x24($a1)
    ctx->pc = 0x2b8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8778: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x2b8778u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x2b877c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2b877cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x2b8780: 0x461509c2  mul.s       $f7, $f1, $f21
    ctx->pc = 0x2b8780u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2b8784: 0x46132100  add.s       $f4, $f4, $f19
    ctx->pc = 0x2b8784u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[19]);
    // 0x2b8788: 0x46025280  add.s       $f10, $f10, $f2
    ctx->pc = 0x2b8788u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[2]);
    // 0x2b878c: 0x46166e82  mul.s       $f26, $f13, $f22
    ctx->pc = 0x2b878cu;
    ctx->f[26] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x2b8790: 0x460f8cc2  mul.s       $f19, $f17, $f15
    ctx->pc = 0x2b8790u;
    ctx->f[19] = FPU_MUL_S(ctx->f[17], ctx->f[15]);
    // 0x2b8794: 0x46105ac0  add.s       $f11, $f11, $f16
    ctx->pc = 0x2b8794u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[16]);
    // 0x2b8798: 0x460f0082  mul.s       $f2, $f0, $f15
    ctx->pc = 0x2b8798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2b879c: 0x46128d42  mul.s       $f21, $f17, $f18
    ctx->pc = 0x2b879cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[17], ctx->f[18]);
    // 0x2b87a0: 0x46127402  mul.s       $f16, $f14, $f18
    ctx->pc = 0x2b87a0u;
    ctx->f[16] = FPU_MUL_S(ctx->f[14], ctx->f[18]);
    // 0x2b87a4: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x2b87a4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x2b87a8: 0x460f73c2  mul.s       $f15, $f14, $f15
    ctx->pc = 0x2b87a8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x2b87ac: 0x461b18c0  add.s       $f3, $f3, $f27
    ctx->pc = 0x2b87acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[27]);
    // 0x2b87b0: 0x461a39c0  add.s       $f7, $f7, $f26
    ctx->pc = 0x2b87b0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[26]);
    // 0x2b87b4: 0x46192940  add.s       $f5, $f5, $f25
    ctx->pc = 0x2b87b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[25]);
    // 0x2b87b8: 0x46184a40  add.s       $f9, $f9, $f24
    ctx->pc = 0x2b87b8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[24]);
    // 0x2b87bc: 0x46173180  add.s       $f6, $f6, $f23
    ctx->pc = 0x2b87bcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    // 0x2b87c0: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2b87c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b87c4: 0x46120482  mul.s       $f18, $f0, $f18
    ctx->pc = 0x2b87c4u;
    ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x2b87c8: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x2b87c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x2b87cc: 0x46148c42  mul.s       $f17, $f17, $f20
    ctx->pc = 0x2b87ccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[20]);
    // 0x2b87d0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b87d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b87d4: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x2b87d4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x2b87d8: 0x46122940  add.s       $f5, $f5, $f18
    ctx->pc = 0x2b87d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[18]);
    // 0x2b87dc: 0x460f2100  add.s       $f4, $f4, $f15
    ctx->pc = 0x2b87dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[15]);
    // 0x2b87e0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2b87e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b87e4: 0x460e4200  add.s       $f8, $f8, $f14
    ctx->pc = 0x2b87e4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[14]);
    // 0x2b87e8: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2b87e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b87ec: 0x46104a40  add.s       $f9, $f9, $f16
    ctx->pc = 0x2b87ecu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[16]);
    // 0x2b87f0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2b87f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b87f4: 0x46133180  add.s       $f6, $f6, $f19
    ctx->pc = 0x2b87f4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[19]);
    // 0x2b87f8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2b87f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b87fc: 0x46115280  add.s       $f10, $f10, $f17
    ctx->pc = 0x2b87fcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[17]);
    // 0x2b8800: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x2b8800u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b8804: 0x46155ac0  add.s       $f11, $f11, $f21
    ctx->pc = 0x2b8804u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[21]);
    // 0x2b8808: 0xe7a90018  swc1        $f9, 0x18($sp)
    ctx->pc = 0x2b8808u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b880c: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2b880cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b8810: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x2b8810u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b8814: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x2b8814u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b8818: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b8818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b881c: 0x460d3b42  mul.s       $f13, $f7, $f13
    ctx->pc = 0x2b881cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x2b8820: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2b8820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b8824: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x2b8824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x2b8828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b8828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b882c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2b882cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b8830: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8834: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x2b8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8838: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b8838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b883c: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2b883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8840: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2b8840u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2b8844: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2b8844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b8848: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b8848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b884c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b884cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8850: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b8850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b8854: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8858: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2b8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b885c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b885cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b8860: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8864: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2b8864u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2b8868: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b8868u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b886c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2b886cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2b8870: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2b8870u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2b8874: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b8874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b8878: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b887c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2b887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8880: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b8880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b8884: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2b8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8888: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2b8888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2b888c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2b888cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2b8890: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b8890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8898: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b8898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2b889c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b88a0: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x2b88a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b88a4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2b88a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2b88a8: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b88a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b88ac: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2b88acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2b88b0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2b88b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2b88b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b88b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b88b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b88b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b88bc: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x2b88bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2b88c0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2b88c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b88c4: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2b88c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b88c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b88c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b88cc: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2b88ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b88d0: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2b88d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2b88d4: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x2b88d4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2b88d8: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2b88d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2b88dc: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x2b88dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x2b88e0: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x2b88e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2b88e4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b88e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b88e8: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2b88e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b88ec: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2b88ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b88f0: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2b88f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b88f4: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x2b88f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2b88f8: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2b88f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2b88fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b88fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8900: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8904: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2b8904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2b8908: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b8908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b890c: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x2b890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8910: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2b8910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2b8914: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2b8914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8918: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x2b8918u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2b891c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2b891cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2b8920: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b8920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b8924: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b8924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8928: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x2b8928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2b892c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2b892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8930: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2b8930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8934: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b8934u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b8938: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2b8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b893c: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x2b893cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2b8940: 0x46015ac2  mul.s       $f11, $f11, $f1
    ctx->pc = 0x2b8940u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2b8944: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2b8944u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2b8948: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x2b8948u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x2b894c: 0xe4460028  swc1        $f6, 0x28($v0)
    ctx->pc = 0x2b894cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2b8950: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x2b8950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b8954: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x2b8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b8958: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2b8958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b895c: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2b895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b8960: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2b8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b8964: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2b8964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b8968: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2b8968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b896c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b8970: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8970u;
        // 0x2b8974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8978u;
}
