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

// Function: sub_002242D0
// Address: 0x2242d0 - 0x2244a8
void sub_002242D0_0x2242d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002242D0_0x2242d0");
#endif

    switch (ctx->pc) {
        case 0x224494u: goto label_224494;
        default: break;
    }

    ctx->pc = 0x2242d0u;

    // 0x2242d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2242d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2242d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2242d8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2242d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2242dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2242dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2242e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2242e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2242e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2242e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2242e8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2242e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2242ec: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2242f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2242f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2242f4: 0x46070202  mul.s       $f8, $f0, $f7
    ctx->pc = 0x2242f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2242f8: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x2242f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2242fc: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x2242fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224300: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x224300u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x224304: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x224304u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224308: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x224308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22430c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x22430cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x224310: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x224310u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224314: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x224314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224318: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x224318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x22431c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22431cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224320: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x224320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224324: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x224324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x224328: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x224328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x22432c: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x22432cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x224330: 0x46013201  sub.s       $f8, $f6, $f1
    ctx->pc = 0x224330u;
    ctx->f[8] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x224334: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224338: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x22433c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x22433cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x224340: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x224340u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x224344: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x224344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224348: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x22434c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x22434cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x224350: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x224350u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224354: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x224354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224358: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x22435c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x22435cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x224360: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x224360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224364: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x224364u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x224368: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x224368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x22436c: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x22436cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x224370: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x224370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224374: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x224374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224378: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x224378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x22437c: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x22437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224380: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x224380u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x224384: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x224384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x224388: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x224388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x22438c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22438cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224390: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x224390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x224394: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x224394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x224398: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x224398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x22439c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x22439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2243a0: 0x46070a02  mul.s       $f8, $f1, $f7
    ctx->pc = 0x2243a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2243a4: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2243a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2243a8: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x2243a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x2243ac: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2243acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2243b0: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x2243b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2243b4: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x2243b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x2243b8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2243b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2243bc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x2243bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2243c0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x2243c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2243c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2243c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2243c8: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x2243c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2243cc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x2243ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2243d0: 0x46060a00  add.s       $f8, $f1, $f6
    ctx->pc = 0x2243d0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2243d4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2243d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243d8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2243d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2243dc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2243dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2243e0: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2243e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2243e4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2243e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243e8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2243e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2243ec: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2243ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2243f0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2243f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2243f4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2243f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243f8: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2243f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2243fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2243fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x224400: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x224400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x224404: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x224404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x224408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22440c: 0xe4c30014  swc1        $f3, 0x14($a2)
    ctx->pc = 0x22440cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x224410: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x224410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224414: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x224414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x224418: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x224418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22441c: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x22441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224420: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x224420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x224424: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x224424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224428: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x224428u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x22442c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22442cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x224430: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x224430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x224434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224438: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x224438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x22443c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x22443cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x224440: 0xe4c60034  swc1        $f6, 0x34($a2)
    ctx->pc = 0x224440u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x224444: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x224444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224448: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x224448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x22444c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224450: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x224450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x224454: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x224454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224458: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x224458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x22445c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x22445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224460: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x224460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224464: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x224464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224468: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x224468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22446c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22446cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x224470: 0xc4640028  lwc1        $f4, 0x28($v1)
    ctx->pc = 0x224470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224474: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x224474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x224478: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x224478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22447c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x22447cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x224480: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x224484: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224484u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224488: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x224488u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x22448c: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x22448Cu;
    SET_GPR_U32(ctx, 31, 0x224494u);
    ctx->pc = 0x224490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22448Cu;
    // 0x224490: 0xe4c10038  swc1        $f1, 0x38($a2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x22448Cu, 0x224494u)) {
        return;
    }
    ctx->pc = 0x224494u;
label_224494:
    // 0x224494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22449c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22449cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2244a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2244A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2244A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244A0u;
        // 0x2244a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2244A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2244A8u;
}
