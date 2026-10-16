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

// Function: sub_002B3678
// Address: 0x2b3678 - 0x2b3818
void sub_002B3678_0x2b3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3678_0x2b3678");
#endif

    ctx->pc = 0x2b3678u;

    // 0x2b3678: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b3678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b367c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b367cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b3680: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x2b3680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3684: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3688: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x2b3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b368c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3690: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x2b3690u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2b3694: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x2b3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b3698: 0x46003a81  sub.s       $f10, $f7, $f0
    ctx->pc = 0x2b3698u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2b369c: 0x460242c1  sub.s       $f11, $f8, $f2
    ctx->pc = 0x2b369cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x2b36a0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b36a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b36a4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x2b36a4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2b36a8: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x2b36a8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2b36ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b36acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b36b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b36b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b36b4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2b36b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b36b8: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2b36b8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b36bc: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2b36bcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2b36c0: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x2b36c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b36c4: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x2b36c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b36c8: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x2b36c8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b36cc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b36ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b36d0: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2b36d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2b36d4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2b36d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b36d8: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x2b36d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2b36dc: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x2b36dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b36e0: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2b36e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b36e4: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x2b36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b36e8: 0x46002b85  abs.s       $f14, $f5
    ctx->pc = 0x2b36e8u;
    ctx->f[14] = FPU_ABS_S(ctx->f[5]);
    // 0x2b36ec: 0xc4cf0010  lwc1        $f15, 0x10($a2)
    ctx->pc = 0x2b36ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b36f0: 0x46007845  abs.s       $f1, $f15
    ctx->pc = 0x2b36f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[15]);
    // 0x2b36f4: 0xc4d00020  lwc1        $f16, 0x20($a2)
    ctx->pc = 0x2b36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b36f8: 0x46008005  abs.s       $f0, $f16
    ctx->pc = 0x2b36f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[16]);
    // 0x2b36fc: 0x460e6b82  mul.s       $f14, $f13, $f14
    ctx->pc = 0x2b36fcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x2b3700: 0xc4d30004  lwc1        $f19, 0x4($a2)
    ctx->pc = 0x2b3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2b3704: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2b3704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2b3708: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2b3708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2b370c: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x2b370cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x2b3710: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x2b3710u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x2b3714: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x2b3714u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b3718: 0x46009b05  abs.s       $f12, $f19
    ctx->pc = 0x2b3718u;
    ctx->f[12] = FPU_ABS_S(ctx->f[19]);
    // 0x2b371c: 0xc4d10014  lwc1        $f17, 0x14($a2)
    ctx->pc = 0x2b371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2b3720: 0x46008845  abs.s       $f1, $f17
    ctx->pc = 0x2b3720u;
    ctx->f[1] = FPU_ABS_S(ctx->f[17]);
    // 0x2b3724: 0xc4d20024  lwc1        $f18, 0x24($a2)
    ctx->pc = 0x2b3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b3728: 0x46009005  abs.s       $f0, $f18
    ctx->pc = 0x2b3728u;
    ctx->f[0] = FPU_ABS_S(ctx->f[18]);
    // 0x2b372c: 0x460c6b02  mul.s       $f12, $f13, $f12
    ctx->pc = 0x2b372cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x2b3730: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2b3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b3734: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2b3734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2b3738: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2b3738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2b373c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2b373cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2b3740: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2b3740u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2b3744: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2b3744u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b3748: 0x46001a45  abs.s       $f9, $f3
    ctx->pc = 0x2b3748u;
    ctx->f[9] = FPU_ABS_S(ctx->f[3]);
    // 0x2b374c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x2b374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3750: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x2b3750u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x2b3754: 0xc4c60028  lwc1        $f6, 0x28($a2)
    ctx->pc = 0x2b3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b3758: 0x46003005  abs.s       $f0, $f6
    ctx->pc = 0x2b3758u;
    ctx->f[0] = FPU_ABS_S(ctx->f[6]);
    // 0x2b375c: 0x46096b42  mul.s       $f13, $f13, $f9
    ctx->pc = 0x2b375cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x2b3760: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x2b3760u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x2b3764: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2b3764u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2b3768: 0x460a6b40  add.s       $f13, $f13, $f10
    ctx->pc = 0x2b3768u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x2b376c: 0x460b6b40  add.s       $f13, $f13, $f11
    ctx->pc = 0x2b376cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x2b3770: 0xe7ad0028  swc1        $f13, 0x28($sp)
    ctx->pc = 0x2b3770u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b3774: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x2b3774u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2b3778: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2b3778u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b377c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2b377cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2b3780: 0x460f3bc2  mul.s       $f15, $f7, $f15
    ctx->pc = 0x2b3780u;
    ctx->f[15] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x2b3784: 0x46132102  mul.s       $f4, $f4, $f19
    ctx->pc = 0x2b3784u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[19]);
    // 0x2b3788: 0x461139c2  mul.s       $f7, $f7, $f17
    ctx->pc = 0x2b3788u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[17]);
    // 0x2b378c: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x2b378cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2b3790: 0x46104402  mul.s       $f16, $f8, $f16
    ctx->pc = 0x2b3790u;
    ctx->f[16] = FPU_MUL_S(ctx->f[8], ctx->f[16]);
    // 0x2b3794: 0x460f2940  add.s       $f5, $f5, $f15
    ctx->pc = 0x2b3794u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[15]);
    // 0x2b3798: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2b3798u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b379c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2b379cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2b37a0: 0x46124202  mul.s       $f8, $f8, $f18
    ctx->pc = 0x2b37a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[18]);
    // 0x2b37a4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2b37a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2b37a8: 0x46102940  add.s       $f5, $f5, $f16
    ctx->pc = 0x2b37a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[16]);
    // 0x2b37ac: 0x46082100  add.s       $f4, $f4, $f8
    ctx->pc = 0x2b37acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
    // 0x2b37b0: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2b37b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b37b4: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2b37b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b37b8: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2b37b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b37bc: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x2b37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b37c0: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x2b37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b37c4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b37c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b37c8: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x2b37c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b37cc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b37ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2b37d0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b37d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b37d4: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x2b37d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b37d8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2b37d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b37dc: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2b37dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b37e0: 0x460e2801  sub.s       $f0, $f5, $f14
    ctx->pc = 0x2b37e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
    // 0x2b37e4: 0x460c2081  sub.s       $f2, $f4, $f12
    ctx->pc = 0x2b37e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2b37e8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2b37e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b37ec: 0x460d1841  sub.s       $f1, $f3, $f13
    ctx->pc = 0x2b37ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x2b37f0: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2b37f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b37f4: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b37f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b37f8: 0x460e2940  add.s       $f5, $f5, $f14
    ctx->pc = 0x2b37f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[14]);
    // 0x2b37fc: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x2b37fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2b3800: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x2b3800u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b3804: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2b3804u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2b3808: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2b3808u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b380c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2b380cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b3810: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3810u;
        // 0x2b3814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3818u;
}
