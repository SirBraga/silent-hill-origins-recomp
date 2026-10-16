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

// Function: sub_002D5790
// Address: 0x2d5790 - 0x2d5a30
void sub_002D5790_0x2d5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5790_0x2d5790");
#endif

    ctx->pc = 0x2d5790u;

    // 0x2d5790: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x2d5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d5794: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5798: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d5798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d579c: 0xc4d30010  lwc1        $f19, 0x10($a2)
    ctx->pc = 0x2d579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2d57a0: 0xc4cb0004  lwc1        $f11, 0x4($a2)
    ctx->pc = 0x2d57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2d57a4: 0xc4d20014  lwc1        $f18, 0x14($a2)
    ctx->pc = 0x2d57a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2d57a8: 0x461310c2  mul.s       $f3, $f2, $f19
    ctx->pc = 0x2d57a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
    // 0x2d57ac: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x2d57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d57b0: 0x460b3242  mul.s       $f9, $f6, $f11
    ctx->pc = 0x2d57b0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x2d57b4: 0x46121042  mul.s       $f1, $f2, $f18
    ctx->pc = 0x2d57b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x2d57b8: 0xc4cd0008  lwc1        $f13, 0x8($a2)
    ctx->pc = 0x2d57b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d57bc: 0x46073202  mul.s       $f8, $f6, $f7
    ctx->pc = 0x2d57bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2d57c0: 0xc4ce0018  lwc1        $f14, 0x18($a2)
    ctx->pc = 0x2d57c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2d57c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d57c8: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x2d57c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x2d57cc: 0xc4d10020  lwc1        $f17, 0x20($a2)
    ctx->pc = 0x2d57ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2d57d0: 0x460e1082  mul.s       $f2, $f2, $f14
    ctx->pc = 0x2d57d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x2d57d4: 0xc4ca0028  lwc1        $f10, 0x28($a2)
    ctx->pc = 0x2d57d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2d57d8: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x2d57d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2d57dc: 0xc4cf0024  lwc1        $f15, 0x24($a2)
    ctx->pc = 0x2d57dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2d57e0: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x2d57e0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x2d57e4: 0x461100c2  mul.s       $f3, $f0, $f17
    ctx->pc = 0x2d57e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x2d57e8: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x2d57e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2d57ec: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x2d57ecu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2d57f0: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x2d57f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2d57f4: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x2d57f4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2d57f8: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2d57f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x2d57fc: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2d57fcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2d5800: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2d5800u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d5804: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x2d5804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d5808: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d5808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d580c: 0x460b2302  mul.s       $f12, $f4, $f11
    ctx->pc = 0x2d580cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x2d5810: 0x460d2402  mul.s       $f16, $f4, $f13
    ctx->pc = 0x2d5810u;
    ctx->f[16] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2d5814: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2d5814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5818: 0x46120082  mul.s       $f2, $f0, $f18
    ctx->pc = 0x2d5818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x2d581c: 0x460e0142  mul.s       $f5, $f0, $f14
    ctx->pc = 0x2d581cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2d5820: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x2d5820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x2d5824: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2d5824u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2d5828: 0x460f08c2  mul.s       $f3, $f1, $f15
    ctx->pc = 0x2d5828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2d582c: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x2d582cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2d5830: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d5830u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d5834: 0x460a0802  mul.s       $f0, $f1, $f10
    ctx->pc = 0x2d5834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2d5838: 0x46058400  add.s       $f16, $f16, $f5
    ctx->pc = 0x2d5838u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[5]);
    // 0x2d583c: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x2d583cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2d5840: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x2d5840u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x2d5844: 0x46008400  add.s       $f16, $f16, $f0
    ctx->pc = 0x2d5844u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[0]);
    // 0x2d5848: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2d5848u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2d584c: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x2d584cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d5850: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x2d5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d5854: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2d5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5858: 0x460d1b42  mul.s       $f13, $f3, $f13
    ctx->pc = 0x2d5858u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x2d585c: 0x460b1ac2  mul.s       $f11, $f3, $f11
    ctx->pc = 0x2d585cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x2d5860: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2d5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5864: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x2d5864u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2d5868: 0x46120482  mul.s       $f18, $f0, $f18
    ctx->pc = 0x2d5868u;
    ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x2d586c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2d586cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2d5870: 0x46130002  mul.s       $f0, $f0, $f19
    ctx->pc = 0x2d5870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x2d5874: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x2d5874u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2d5878: 0x460f0bc2  mul.s       $f15, $f1, $f15
    ctx->pc = 0x2d5878u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x2d587c: 0x460e6b40  add.s       $f13, $f13, $f14
    ctx->pc = 0x2d587cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x2d5880: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d5880u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d5884: 0x46125ac0  add.s       $f11, $f11, $f18
    ctx->pc = 0x2d5884u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[18]);
    // 0x2d5888: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x2d5888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2d588c: 0x460a6b40  add.s       $f13, $f13, $f10
    ctx->pc = 0x2d588cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x2d5890: 0x460f5ac0  add.s       $f11, $f11, $f15
    ctx->pc = 0x2d5890u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[15]);
    // 0x2d5894: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d5894u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d5898: 0xe7ad0028  swc1        $f13, 0x28($sp)
    ctx->pc = 0x2d5898u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d589c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2d589cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d58a0: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x2d58a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d58a4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d58a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d58a8: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2d58a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d58ac: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x2d58acu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d58b0: 0xe7b00024  swc1        $f16, 0x24($sp)
    ctx->pc = 0x2d58b0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d58b4: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x2d58b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2d58b8: 0x461324c2  mul.s       $f19, $f4, $f19
    ctx->pc = 0x2d58b8u;
    ctx->f[19] = FPU_MUL_S(ctx->f[4], ctx->f[19]);
    // 0x2d58bc: 0x46111c42  mul.s       $f17, $f3, $f17
    ctx->pc = 0x2d58bcu;
    ctx->f[17] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x2d58c0: 0x461339c0  add.s       $f7, $f7, $f19
    ctx->pc = 0x2d58c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[19]);
    // 0x2d58c4: 0x461139c0  add.s       $f7, $f7, $f17
    ctx->pc = 0x2d58c4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[17]);
    // 0x2d58c8: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x2d58c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d58cc: 0xc4ca0004  lwc1        $f10, 0x4($a2)
    ctx->pc = 0x2d58ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2d58d0: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2d58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d58d4: 0x460a4282  mul.s       $f10, $f8, $f10
    ctx->pc = 0x2d58d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2d58d8: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2d58d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d58dc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2d58dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d58e0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2d58e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d58e4: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x2d58e4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x2d58e8: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2d58e8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2d58ec: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x2d58ecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d58f0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d58f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d58f4: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2d58f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d58f8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2d58f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2d58fc: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2d58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5900: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2d5900u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d5904: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2d5904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d5908: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2d5908u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2d590c: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x2d590cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x2d5910: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x2d5910u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d5914: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x2d5914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d5918: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x2d5918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d591c: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x2d591cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x2d5920: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2d5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5924: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2d5924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2d5928: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2d5928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2d592c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2d592cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2d5930: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d5930u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d5934: 0xe485000c  swc1        $f5, 0xC($a0)
    ctx->pc = 0x2d5934u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d5938: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d593c: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x2d593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5940: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2d5940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2d5944: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2d5944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5948: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2d5948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2d594c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2d594cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2d5950: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d5950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d5954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5958: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2d5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d595c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2d595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5960: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2d5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5964: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x2d5964u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2d5968: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2d5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d596c: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x2d596cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2d5970: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2d5970u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2d5974: 0x460c4a40  add.s       $f9, $f9, $f12
    ctx->pc = 0x2d5974u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[12]);
    // 0x2d5978: 0x460b4a40  add.s       $f9, $f9, $f11
    ctx->pc = 0x2d5978u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
    // 0x2d597c: 0xe4890014  swc1        $f9, 0x14($a0)
    ctx->pc = 0x2d597cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d5980: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2d5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d5984: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x2d5984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5988: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x2d5988u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2d598c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2d598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5990: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x2d5990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2d5994: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2d5994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2d5998: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2d5998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2d599c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d599cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d59a0: 0xe4840018  swc1        $f4, 0x18($a0)
    ctx->pc = 0x2d59a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d59a4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2d59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d59a8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2d59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d59ac: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2d59acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2d59b0: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2d59b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d59b4: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x2d59b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x2d59b8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x2d59b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2d59bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2d59bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d59c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d59c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d59c4: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x2d59c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2d59c8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d59cc: 0xc4c30018  lwc1        $f3, 0x18($a2)
    ctx->pc = 0x2d59ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d59d0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2d59d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d59d4: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x2d59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d59d8: 0x46038402  mul.s       $f16, $f16, $f3
    ctx->pc = 0x2d59d8u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x2d59dc: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2d59dcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2d59e0: 0x46103180  add.s       $f6, $f6, $f16
    ctx->pc = 0x2d59e0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[16]);
    // 0x2d59e4: 0x460d3180  add.s       $f6, $f6, $f13
    ctx->pc = 0x2d59e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2d59e8: 0xe4860020  swc1        $f6, 0x20($a0)
    ctx->pc = 0x2d59e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2d59ec: 0x46055280  add.s       $f10, $f10, $f5
    ctx->pc = 0x2d59ecu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x2d59f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d59f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d59f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d59f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d59f8: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x2d59f8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x2d59fc: 0x46024a40  add.s       $f9, $f9, $f2
    ctx->pc = 0x2d59fcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x2d5a00: 0x46005282  mul.s       $f10, $f10, $f0
    ctx->pc = 0x2d5a00u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x2d5a04: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x2d5a04u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2d5a08: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x2d5a08u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2d5a0c: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x2d5a0cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d5a10: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x2d5a10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d5a14: 0xe4890014  swc1        $f9, 0x14($a0)
    ctx->pc = 0x2d5a14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2d5a18: 0xe48a000c  swc1        $f10, 0xC($a0)
    ctx->pc = 0x2d5a18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d5a1c: 0xe4880018  swc1        $f8, 0x18($a0)
    ctx->pc = 0x2d5a1cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2d5a20: 0xe489001c  swc1        $f9, 0x1C($a0)
    ctx->pc = 0x2d5a20u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2d5a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A24u;
        // 0x2d5a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A2Cu;
    // 0x2d5a2c: 0x0  nop
    ctx->pc = 0x2d5a2cu;
    // NOP
    ctx->pc = 0x2d5a30u;
}
