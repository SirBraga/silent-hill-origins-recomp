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

// Function: sub_002B3818
// Address: 0x2b3818 - 0x2b39b8
void sub_002B3818_0x2b3818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3818_0x2b3818");
#endif

    ctx->pc = 0x2b3818u;

    // 0x2b3818: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b3818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b381c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b381cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b3820: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x2b3820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3824: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2b3824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3828: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x2b3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b382c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2b382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3830: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x2b3830u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2b3834: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x2b3834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b3838: 0x46002a41  sub.s       $f9, $f5, $f0
    ctx->pc = 0x2b3838u;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2b383c: 0x46023281  sub.s       $f10, $f6, $f2
    ctx->pc = 0x2b383cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2b3840: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2b3840u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2b3844: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2b3844u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2b3848: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2b3848u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2b384c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b384cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b3850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3854: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2b3854u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2b3858: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2b3858u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2b385c: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2b385cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b3860: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x2b3860u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b3864: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x2b3864u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b3868: 0xe7aa0018  swc1        $f10, 0x18($sp)
    ctx->pc = 0x2b3868u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b386c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2b386cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b3870: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2b3870u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2b3874: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2b3874u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b3878: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2b3878u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2b387c: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2b387cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b3880: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2b3880u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b3884: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x2b3884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b3888: 0x46003b85  abs.s       $f14, $f7
    ctx->pc = 0x2b3888u;
    ctx->f[14] = FPU_ABS_S(ctx->f[7]);
    // 0x2b388c: 0xc4cf0004  lwc1        $f15, 0x4($a2)
    ctx->pc = 0x2b388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b3890: 0x46007845  abs.s       $f1, $f15
    ctx->pc = 0x2b3890u;
    ctx->f[1] = FPU_ABS_S(ctx->f[15]);
    // 0x2b3894: 0xc4d00008  lwc1        $f16, 0x8($a2)
    ctx->pc = 0x2b3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2b3898: 0x46008005  abs.s       $f0, $f16
    ctx->pc = 0x2b3898u;
    ctx->f[0] = FPU_ABS_S(ctx->f[16]);
    // 0x2b389c: 0x460e6b82  mul.s       $f14, $f13, $f14
    ctx->pc = 0x2b389cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x2b38a0: 0xc4d30010  lwc1        $f19, 0x10($a2)
    ctx->pc = 0x2b38a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2b38a4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2b38a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2b38a8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2b38a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b38ac: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x2b38acu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x2b38b0: 0x46007380  add.s       $f14, $f14, $f0
    ctx->pc = 0x2b38b0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x2b38b4: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x2b38b4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b38b8: 0x46009ac5  abs.s       $f11, $f19
    ctx->pc = 0x2b38b8u;
    ctx->f[11] = FPU_ABS_S(ctx->f[19]);
    // 0x2b38bc: 0xc4d10014  lwc1        $f17, 0x14($a2)
    ctx->pc = 0x2b38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2b38c0: 0x46008845  abs.s       $f1, $f17
    ctx->pc = 0x2b38c0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[17]);
    // 0x2b38c4: 0xc4d20018  lwc1        $f18, 0x18($a2)
    ctx->pc = 0x2b38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2b38c8: 0x46009005  abs.s       $f0, $f18
    ctx->pc = 0x2b38c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[18]);
    // 0x2b38cc: 0x460b6ac2  mul.s       $f11, $f13, $f11
    ctx->pc = 0x2b38ccu;
    ctx->f[11] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x2b38d0: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x2b38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b38d4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x2b38d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2b38d8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x2b38d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b38dc: 0x46015ac0  add.s       $f11, $f11, $f1
    ctx->pc = 0x2b38dcu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x2b38e0: 0x46005ac0  add.s       $f11, $f11, $f0
    ctx->pc = 0x2b38e0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
    // 0x2b38e4: 0xe7ab0024  swc1        $f11, 0x24($sp)
    ctx->pc = 0x2b38e4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b38e8: 0x46001885  abs.s       $f2, $f3
    ctx->pc = 0x2b38e8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[3]);
    // 0x2b38ec: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x2b38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2b38f0: 0x46004045  abs.s       $f1, $f8
    ctx->pc = 0x2b38f0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[8]);
    // 0x2b38f4: 0xc4cc0028  lwc1        $f12, 0x28($a2)
    ctx->pc = 0x2b38f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b38f8: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x2b38f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x2b38fc: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x2b38fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x2b3900: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x2b3900u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2b3904: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2b3904u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2b3908: 0x46096b40  add.s       $f13, $f13, $f9
    ctx->pc = 0x2b3908u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x2b390c: 0x460a6b40  add.s       $f13, $f13, $f10
    ctx->pc = 0x2b390cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x2b3910: 0xe7ad0028  swc1        $f13, 0x28($sp)
    ctx->pc = 0x2b3910u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b3914: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x2b3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3918: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x2b3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b391c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2b391cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2b3920: 0xc4c10034  lwc1        $f1, 0x34($a2)
    ctx->pc = 0x2b3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3924: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x2b3924u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x2b3928: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2b3928u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2b392c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2b392cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b3930: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x2b3930u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b3934: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2b3934u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b3938: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x2b3938u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2b393c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2b393cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b3940: 0x46082a02  mul.s       $f8, $f5, $f8
    ctx->pc = 0x2b3940u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2b3944: 0x460f2bc2  mul.s       $f15, $f5, $f15
    ctx->pc = 0x2b3944u;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x2b3948: 0x46132102  mul.s       $f4, $f4, $f19
    ctx->pc = 0x2b3948u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[19]);
    // 0x2b394c: 0x46112942  mul.s       $f5, $f5, $f17
    ctx->pc = 0x2b394cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x2b3950: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x2b3950u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x2b3954: 0x46103402  mul.s       $f16, $f6, $f16
    ctx->pc = 0x2b3954u;
    ctx->f[16] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x2b3958: 0x460f39c0  add.s       $f7, $f7, $f15
    ctx->pc = 0x2b3958u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[15]);
    // 0x2b395c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2b395cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2b3960: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2b3960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2b3964: 0x46123182  mul.s       $f6, $f6, $f18
    ctx->pc = 0x2b3964u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[18]);
    // 0x2b3968: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x2b3968u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2b396c: 0x461039c0  add.s       $f7, $f7, $f16
    ctx->pc = 0x2b396cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[16]);
    // 0x2b3970: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x2b3970u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2b3974: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2b3974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b3978: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2b3978u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b397c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2b397cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b3980: 0x460e3801  sub.s       $f0, $f7, $f14
    ctx->pc = 0x2b3980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[14]);
    // 0x2b3984: 0x460b2081  sub.s       $f2, $f4, $f11
    ctx->pc = 0x2b3984u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x2b3988: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2b3988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b398c: 0x460d1841  sub.s       $f1, $f3, $f13
    ctx->pc = 0x2b398cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x2b3990: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2b3990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b3994: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b3994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b3998: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x2b3998u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x2b399c: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x2b399cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x2b39a0: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x2b39a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b39a4: 0x460d18c0  add.s       $f3, $f3, $f13
    ctx->pc = 0x2b39a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2b39a8: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x2b39a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b39ac: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2b39acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b39b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B39B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39B0u;
        // 0x2b39b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B39B8u;
}
