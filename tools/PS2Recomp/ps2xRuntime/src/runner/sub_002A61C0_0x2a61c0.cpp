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

// Function: sub_002A61C0
// Address: 0x2a61c0 - 0x2a6338
void sub_002A61C0_0x2a61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A61C0_0x2a61c0");
#endif

    ctx->pc = 0x2a61c0u;

    // 0x2a61c0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a61c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a61c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a61c8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a61cc: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x2a61ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a61d0: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x2a61d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a61d4: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x2a61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a61d8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2a61d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2a61dc: 0xc4a80014  lwc1        $f8, 0x14($a1)
    ctx->pc = 0x2a61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a61e0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2a61e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a61e4: 0xc4a90018  lwc1        $f9, 0x18($a1)
    ctx->pc = 0x2a61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a61e8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2a61e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a61ec: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x2a61ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a61f0: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x2a61f0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2a61f4: 0xc4aa001c  lwc1        $f10, 0x1C($a1)
    ctx->pc = 0x2a61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a61f8: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x2a61f8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2a61fc: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2a61fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a6200: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a6200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a6204: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x2a6204u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2a6208: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a620c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a620cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a6210: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2a6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6214: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6218: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2a6218u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2a621c: 0xc4ab0028  lwc1        $f11, 0x28($a1)
    ctx->pc = 0x2a621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a6220: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a6220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a6224: 0xc4b2002c  lwc1        $f18, 0x2C($a1)
    ctx->pc = 0x2a6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2a6228: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a6228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a622c: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x2a622cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2a6230: 0xc4ad0030  lwc1        $f13, 0x30($a1)
    ctx->pc = 0x2a6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a6234: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x2a6234u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x2a6238: 0xc4ae0034  lwc1        $f14, 0x34($a1)
    ctx->pc = 0x2a6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a623c: 0x460939c0  add.s       $f7, $f7, $f9
    ctx->pc = 0x2a623cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2a6240: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x2a6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6244: 0xc4af0038  lwc1        $f15, 0x38($a1)
    ctx->pc = 0x2a6244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a6248: 0x46029482  mul.s       $f18, $f18, $f2
    ctx->pc = 0x2a6248u;
    ctx->f[18] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x2a624c: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2a624cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2a6250: 0xc4b3003c  lwc1        $f19, 0x3C($a1)
    ctx->pc = 0x2a6250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2a6254: 0x46036b42  mul.s       $f13, $f13, $f3
    ctx->pc = 0x2a6254u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x2a6258: 0xc4c80014  lwc1        $f8, 0x14($a2)
    ctx->pc = 0x2a6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a625c: 0x46037382  mul.s       $f14, $f14, $f3
    ctx->pc = 0x2a625cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x2a6260: 0xc4b00040  lwc1        $f16, 0x40($a1)
    ctx->pc = 0x2a6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a6264: 0x46037bc2  mul.s       $f15, $f15, $f3
    ctx->pc = 0x2a6264u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[3]);
    // 0x2a6268: 0xc4ac0044  lwc1        $f12, 0x44($a1)
    ctx->pc = 0x2a6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a626c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a626cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a6270: 0xc4aa0048  lwc1        $f10, 0x48($a1)
    ctx->pc = 0x2a6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a6274: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2a6274u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2a6278: 0xc4b1004c  lwc1        $f17, 0x4C($a1)
    ctx->pc = 0x2a6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a627c: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x2a627cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x2a6280: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2a6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6284: 0x46039cc2  mul.s       $f19, $f19, $f3
    ctx->pc = 0x2a6284u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[3]);
    // 0x2a6288: 0xc4ab0050  lwc1        $f11, 0x50($a1)
    ctx->pc = 0x2a6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a628c: 0x46122100  add.s       $f4, $f4, $f18
    ctx->pc = 0x2a628cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[18]);
    // 0x2a6290: 0xc4a90054  lwc1        $f9, 0x54($a1)
    ctx->pc = 0x2a6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a6294: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x2a6294u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
    // 0x2a6298: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x2a6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a629c: 0x460e3180  add.s       $f6, $f6, $f14
    ctx->pc = 0x2a629cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[14]);
    // 0x2a62a0: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x2a62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a62a4: 0x460f39c0  add.s       $f7, $f7, $f15
    ctx->pc = 0x2a62a4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[15]);
    // 0x2a62a8: 0x46088402  mul.s       $f16, $f16, $f8
    ctx->pc = 0x2a62a8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
    // 0x2a62ac: 0x46086302  mul.s       $f12, $f12, $f8
    ctx->pc = 0x2a62acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x2a62b0: 0x46085282  mul.s       $f10, $f10, $f8
    ctx->pc = 0x2a62b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x2a62b4: 0x46132100  add.s       $f4, $f4, $f19
    ctx->pc = 0x2a62b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[19]);
    // 0x2a62b8: 0x46088c42  mul.s       $f17, $f17, $f8
    ctx->pc = 0x2a62b8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[8]);
    // 0x2a62bc: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2a62bcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2a62c0: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2a62c0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2a62c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a62c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a62c8: 0x46102940  add.s       $f5, $f5, $f16
    ctx->pc = 0x2a62c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[16]);
    // 0x2a62cc: 0x460c3180  add.s       $f6, $f6, $f12
    ctx->pc = 0x2a62ccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
    // 0x2a62d0: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2a62d0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2a62d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a62d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a62d8: 0x46112100  add.s       $f4, $f4, $f17
    ctx->pc = 0x2a62d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[17]);
    // 0x2a62dc: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x2a62dcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x2a62e0: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x2a62e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x2a62e4: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x2a62e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x2a62e8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a62e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2a62ec: 0xe7a70008  swc1        $f7, 0x8($sp)
    ctx->pc = 0x2a62ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a62f0: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2a62f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a62f4: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2a62f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a62f8: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2a62f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a62fc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6300: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2a6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a6304: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2a6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6308: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2a6308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2a630c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2a630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6310: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a6310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2a6314: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2a6314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2a6318: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2a6318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2a631c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2a631cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a6320: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2a6320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a6324: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2a6324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a6328: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2a6328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a632c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A632Cu;
        // 0x2a6330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6334u;
    // 0x2a6334: 0x0  nop
    ctx->pc = 0x2a6334u;
    // NOP
    ctx->pc = 0x2a6338u;
}
