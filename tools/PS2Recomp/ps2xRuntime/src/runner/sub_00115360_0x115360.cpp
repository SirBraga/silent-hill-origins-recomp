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

// Function: sub_00115360
// Address: 0x115360 - 0x1158d0
void sub_00115360_0x115360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115360_0x115360");
#endif

    switch (ctx->pc) {
        case 0x1153c4u: goto label_1153c4;
        case 0x115428u: goto label_115428;
        case 0x115498u: goto label_115498;
        case 0x1154dcu: goto label_1154dc;
        case 0x115510u: goto label_115510;
        case 0x11555cu: goto label_11555c;
        case 0x11559cu: goto label_11559c;
        case 0x1155e0u: goto label_1155e0;
        case 0x115640u: goto label_115640;
        case 0x1156acu: goto label_1156ac;
        case 0x1157bcu: goto label_1157bc;
        case 0x1157d4u: goto label_1157d4;
        case 0x11581cu: goto label_11581c;
        default: break;
    }

    ctx->pc = 0x115360u;

    // 0x115360: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x115360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x115364: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x115364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x115368: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x115368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x11536c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11536cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115370: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x115370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x115374: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x115374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115378: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x115378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x11537c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11537cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115380: 0xe7be0110  swc1        $f30, 0x110($sp)
    ctx->pc = 0x115380u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x115384: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115388: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x115388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x11538c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115390: 0xe7bd0108  swc1        $f29, 0x108($sp)
    ctx->pc = 0x115390u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x115394: 0xe7bc0100  swc1        $f28, 0x100($sp)
    ctx->pc = 0x115394u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x115398: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x115398u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x11539c: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x11539cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1153a0: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x1153a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1153a4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1153a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1153a8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1153a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1153ac: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1153acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1153b0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1153b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1153b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1153b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1153b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1153b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1153bc: 0xc0a182e  jal         func_2860B8
    ctx->pc = 0x1153BCu;
    SET_GPR_U32(ctx, 31, 0x1153C4u);
    ctx->pc = 0x1153C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153BCu;
    // 0x1153c0: 0x8e44022c  lw          $a0, 0x22C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2860B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2860B8u, 0x1153BCu, 0x1153C4u)) {
        return;
    }
    ctx->pc = 0x1153C4u;
label_1153c4:
    // 0x1153c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1153c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1153c8: 0x0  nop
    ctx->pc = 0x1153c8u;
    // NOP
    // 0x1153cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1153ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1153d0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1153d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1153d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1153d8: 0xae420108  sw          $v0, 0x108($s2)
    ctx->pc = 0x1153d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 2));
    // 0x1153dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1153dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1153e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1153e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1153e4: 0x4600a783  div.s       $f30, $f20, $f0
    ctx->pc = 0x1153e4u;
    ctx->f[30] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x1153e8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1153e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1153ec: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x1153ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1153f0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1153f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1153f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1153f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1153f8: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x1153f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1153fc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1153fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x115400: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x115400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115404: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x115404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x115408: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x115408u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11540c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11540cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x115410: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x115410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x115414: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x115414u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x115418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x115418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11541c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x11541cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x115420: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115420u;
    SET_GPR_U32(ctx, 31, 0x115428u);
    ctx->pc = 0x115424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115420u;
    // 0x115424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115420u, 0x115428u)) {
        return;
    }
    ctx->pc = 0x115428u;
label_115428:
    // 0x115428: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x115428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x11542c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x11542cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x115430: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x115430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x115434: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x115434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115438: 0x4600a706  mov.s       $f28, $f20
    ctx->pc = 0x115438u;
    ctx->f[28] = FPU_MOV_S(ctx->f[20]);
    // 0x11543c: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x11543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115440: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x115440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115444: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x115444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115448: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x115448u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
    // 0x11544c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115450: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x115450u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
    // 0x115454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x115454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115458: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x115458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11545c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11545cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x115460: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x115460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115464: 0xe6570234  swc1        $f23, 0x234($s2)
    ctx->pc = 0x115464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 564), bits); }
    // 0x115468: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x115468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11546c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x11546cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x115470: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x115470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x115474: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x115474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x115478: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x115478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x11547c: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x11547cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
    // 0x115480: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x115480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x115484: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x115484u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x115488: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x115488u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11548c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11548cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x115490: 0xe7b70010  swc1        $f23, 0x10($sp)
    ctx->pc = 0x115490u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x115494: 0x46000747  neg.s       $f29, $f0
    ctx->pc = 0x115494u;
    ctx->f[29] = FPU_NEG_S(ctx->f[0]);
label_115498:
    // 0x115498: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x115498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11549c: 0x0  nop
    ctx->pc = 0x11549cu;
    // NOP
    // 0x1154a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1154A0u;
    {
        const bool branch_taken_0x1154a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154A0u;
        // 0x1154a4: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154a0) {
            ctx->pc = 0x1154ACu;
            goto label_1154ac;
        }
    }
    ctx->pc = 0x1154A8u;
    // 0x1154a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1154a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1154ac:
    // 0x1154ac: 0x0  nop
    ctx->pc = 0x1154acu;
    // NOP
    // 0x1154b0: 0x4614e034  c.lt.s      $f28, $f20
    ctx->pc = 0x1154b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1154b4: 0x0  nop
    ctx->pc = 0x1154b4u;
    // NOP
    // 0x1154b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1154B8u;
    {
        const bool branch_taken_0x1154b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1154BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154B8u;
        // 0x1154bc: 0x8e44022c  lw          $a0, 0x22C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154b8) {
            ctx->pc = 0x1154C8u;
            goto label_1154c8;
        }
    }
    ctx->pc = 0x1154C0u;
    // 0x1154c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1154c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1154c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1154c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1154c8:
    // 0x1154c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1154c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1154cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1154ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1154d0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1154d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1154d4: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x1154D4u;
    SET_GPR_U32(ctx, 31, 0x1154DCu);
    ctx->pc = 0x1154D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154D4u;
    // 0x1154d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x1154D4u, 0x1154DCu)) {
        return;
    }
    ctx->pc = 0x1154DCu;
label_1154dc:
    // 0x1154dc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1154dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1154e0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1154e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1154e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1154e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1154e8: 0x0  nop
    ctx->pc = 0x1154e8u;
    // NOP
    // 0x1154ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1154ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1154f0: 0x0  nop
    ctx->pc = 0x1154f0u;
    // NOP
    // 0x1154f4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1154F4u;
    {
        const bool branch_taken_0x1154f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154F4u;
        // 0x1154f8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154f4) {
            ctx->pc = 0x115548u;
            goto label_115548;
        }
    }
    ctx->pc = 0x1154FCu;
    // 0x1154fc: 0x461ba300  add.s       $f12, $f20, $f27
    ctx->pc = 0x1154fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[27]);
    // 0x115500: 0x8e44022c  lw          $a0, 0x22C($s2)
    ctx->pc = 0x115500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    // 0x115504: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x115504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x115508: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x115508u;
    SET_GPR_U32(ctx, 31, 0x115510u);
    ctx->pc = 0x11550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115508u;
    // 0x11550c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x115508u, 0x115510u)) {
        return;
    }
    ctx->pc = 0x115510u;
label_115510:
    // 0x115510: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x115510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115514: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x115514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115518: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x115518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11551c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x11551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115520: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x115520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115524: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x115524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115528: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x115528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11552c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x11552cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x115530: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x115530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x115534: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x115534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x115538: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x115538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x11553c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11553Cu;
    {
        const bool branch_taken_0x11553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11553Cu;
        // 0x115540: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11553c) {
            ctx->pc = 0x115590u;
            goto label_115590;
        }
    }
    ctx->pc = 0x115544u;
    // 0x115544: 0x0  nop
    ctx->pc = 0x115544u;
    // NOP
label_115548:
    // 0x115548: 0x461ba301  sub.s       $f12, $f20, $f27
    ctx->pc = 0x115548u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[27]);
    // 0x11554c: 0x8e44022c  lw          $a0, 0x22C($s2)
    ctx->pc = 0x11554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    // 0x115550: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x115550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x115554: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x115554u;
    SET_GPR_U32(ctx, 31, 0x11555Cu);
    ctx->pc = 0x115558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115554u;
    // 0x115558: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x115554u, 0x11555Cu)) {
        return;
    }
    ctx->pc = 0x11555Cu;
label_11555c:
    // 0x11555c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x11555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115560: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x115560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115564: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x115564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115568: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x115568u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11556c: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x11556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115570: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x115570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115574: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x115574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115578: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x115578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11557c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x11557cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x115580: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x115580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x115584: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x115584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x115588: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x115588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x11558c: 0x0  nop
    ctx->pc = 0x11558cu;
    // NOP
label_115590:
    // 0x115590: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x115590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115594: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x115594u;
    SET_GPR_U32(ctx, 31, 0x11559Cu);
    ctx->pc = 0x115598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115594u;
    // 0x115598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x115594u, 0x11559Cu)) {
        return;
    }
    ctx->pc = 0x11559Cu;
label_11559c:
    // 0x11559c: 0x4616c034  c.lt.s      $f24, $f22
    ctx->pc = 0x11559cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1155a0: 0x0  nop
    ctx->pc = 0x1155a0u;
    // NOP
    // 0x1155a4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1155A4u;
    {
        const bool branch_taken_0x1155a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A4u;
        // 0x1155a8: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155a4) {
            ctx->pc = 0x1155F0u;
            goto label_1155f0;
        }
    }
    ctx->pc = 0x1155ACu;
    // 0x1155ac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1155acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1155b0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1155b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1155b4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1155b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1155b8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1155b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1155bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1155bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1155c0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1155c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1155c4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1155c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1155c8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1155c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1155cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1155ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1155d0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1155d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1155d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1155d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1155d8: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x1155D8u;
    SET_GPR_U32(ctx, 31, 0x1155E0u);
    ctx->pc = 0x1155DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155D8u;
    // 0x1155dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x1155D8u, 0x1155E0u)) {
        return;
    }
    ctx->pc = 0x1155E0u;
label_1155e0:
    // 0x1155e0: 0xc6410234  lwc1        $f1, 0x234($s2)
    ctx->pc = 0x1155e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1155e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1155e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1155e8: 0xe6410234  swc1        $f1, 0x234($s2)
    ctx->pc = 0x1155e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 564), bits); }
    // 0x1155ec: 0x0  nop
    ctx->pc = 0x1155ecu;
    // NOP
label_1155f0:
    // 0x1155f0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1155f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1155f4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1155f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1155f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1155fc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1155fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115600: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x115600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x115604: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x115604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x115608: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x115608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11560c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x11560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115610: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x115610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115614: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x115614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x115618: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x115618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11561c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x11561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115620: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x115620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115624: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x115624u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x115628: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x115628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11562c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11562cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x115630: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x115630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115634: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x115634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x115638: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x115638u;
    SET_GPR_U32(ctx, 31, 0x115640u);
    ctx->pc = 0x11563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115638u;
    // 0x11563c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x115638u, 0x115640u)) {
        return;
    }
    ctx->pc = 0x115640u;
label_115640:
    // 0x115640: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x115640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x115644: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x115644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115648: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x115648u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11564c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x11564cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115650: 0x0  nop
    ctx->pc = 0x115650u;
    // NOP
    // 0x115654: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x115654u;
    {
        const bool branch_taken_0x115654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115654) {
            ctx->pc = 0x115658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115654u;
            // 0x115658: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115660u;
            goto label_115660;
        }
    }
    ctx->pc = 0x11565Cu;
    // 0x11565c: 0x0  nop
    ctx->pc = 0x11565cu;
    // NOP
label_115660:
    // 0x115660: 0x16600010  bnez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x115660u;
    {
        const bool branch_taken_0x115660 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115660) {
            ctx->pc = 0x1156A4u;
            goto label_1156a4;
        }
    }
    ctx->pc = 0x115668u;
    // 0x115668: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x115668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11566c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115670: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x115670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115674: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x115674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115678: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11567c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x11567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115680: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x115680u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x115684: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x115684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115688: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x115688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11568c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11568cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x115690: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115694: 0x461d0840  add.s       $f1, $f1, $f29
    ctx->pc = 0x115694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[29]);
    // 0x115698: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x115698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11569c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11569Cu;
    {
        const bool branch_taken_0x11569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11569c) {
            ctx->pc = 0x11574Cu;
            goto label_11574c;
        }
    }
    ctx->pc = 0x1156A4u;
label_1156a4:
    // 0x1156a4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1156A4u;
    SET_GPR_U32(ctx, 31, 0x1156ACu);
    ctx->pc = 0x1156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A4u;
    // 0x1156a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1156A4u, 0x1156ACu)) {
        return;
    }
    ctx->pc = 0x1156ACu;
label_1156ac:
    // 0x1156ac: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1156acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1156b0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x1156b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1156b4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1156b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1156b8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1156b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1156bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1156bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1156c0: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x1156c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1156c4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1156c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1156c8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1156c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1156cc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1156ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1156d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1156d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1156d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1156d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1156d8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1156d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1156dc: 0x0  nop
    ctx->pc = 0x1156dcu;
    // NOP
    // 0x1156e0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1156E0u;
    {
        const bool branch_taken_0x1156e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1156e0) {
            ctx->pc = 0x1156E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1156E0u;
            // 0x1156e4: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115708u;
            goto label_115708;
        }
    }
    ctx->pc = 0x1156E8u;
    // 0x1156e8: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1156e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1156ec: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1156ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1156f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1156f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1156f4: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1156f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1156f8: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1156f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1156fc: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1156fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x115700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x115700u;
    {
        const bool branch_taken_0x115700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115700u;
        // 0x115704: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115700) {
            ctx->pc = 0x115720u;
            goto label_115720;
        }
    }
    ctx->pc = 0x115708u;
label_115708:
    // 0x115708: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x115708u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x11570c: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x11570cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x115710: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x115710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x115714: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x115714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x115718: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x115718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11571c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x11571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115720:
    // 0x115720: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x115720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115724: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x115724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115728: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x115728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11572c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11572cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115730: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x115730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115734: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x115734u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x115738: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x115738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11573c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x11573cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x115740: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x115740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x115744: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x115744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x115748: 0x4601c034  c.lt.s      $f24, $f1
    ctx->pc = 0x115748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11574c:
    // 0x11574c: 0x0  nop
    ctx->pc = 0x11574cu;
    // NOP
    // 0x115750: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x115750u;
    {
        const bool branch_taken_0x115750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115750) {
            ctx->pc = 0x115754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115750u;
            // 0x115754: 0x461aa500  add.s       $f20, $f20, $f26 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115758u;
            goto label_115758;
        }
    }
    ctx->pc = 0x115758u;
label_115758:
    // 0x115758: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x115758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11575c: 0x0  nop
    ctx->pc = 0x11575cu;
    // NOP
    // 0x115760: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x115760u;
    {
        const bool branch_taken_0x115760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115760) {
            ctx->pc = 0x115764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115760u;
            // 0x115764: 0x461eb580  add.s       $f22, $f22, $f30 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[30]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115774u;
            goto label_115774;
        }
    }
    ctx->pc = 0x115768u;
    // 0x115768: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x115768u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
    // 0x11576c: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x11576cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x115770: 0x461eb580  add.s       $f22, $f22, $f30
    ctx->pc = 0x115770u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[30]);
label_115774:
    // 0x115774: 0x461cb034  c.lt.s      $f22, $f28
    ctx->pc = 0x115774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115778: 0x0  nop
    ctx->pc = 0x115778u;
    // NOP
    // 0x11577c: 0x4501ff46  bc1t        . + 4 + (-0xBA << 2)
    ctx->pc = 0x11577Cu;
    {
        const bool branch_taken_0x11577c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x115780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11577Cu;
        // 0x115780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11577c) {
            ctx->pc = 0x115498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115498;
        }
    }
    ctx->pc = 0x115784u;
    // 0x115784: 0xc654021c  lwc1        $f20, 0x21C($s2)
    ctx->pc = 0x115784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x115788: 0x265100d4  addiu       $s1, $s2, 0xD4
    ctx->pc = 0x115788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
    // 0x11578c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x11578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x115790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115794: 0x265001f4  addiu       $s0, $s2, 0x1F4
    ctx->pc = 0x115794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 500));
    // 0x115798: 0x8e530258  lw          $s3, 0x258($s2)
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x11579c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11579cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1157a0: 0xe6570230  swc1        $f23, 0x230($s2)
    ctx->pc = 0x1157a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 560), bits); }
    // 0x1157a4: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x1157a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
    // 0x1157a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1157a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1157acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1157b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1157b4: 0xc045a84  jal         func_116A10
    ctx->pc = 0x1157B4u;
    SET_GPR_U32(ctx, 31, 0x1157BCu);
    ctx->pc = 0x1157B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157B4u;
    // 0x1157b8: 0xe640021c  swc1        $f0, 0x21C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x116A10u, 0x1157B4u, 0x1157BCu)) {
        return;
    }
    ctx->pc = 0x1157BCu;
label_1157bc:
    // 0x1157bc: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x1157bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1157c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1157c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1157c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1157c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157cc: 0xc045a84  jal         func_116A10
    ctx->pc = 0x1157CCu;
    SET_GPR_U32(ctx, 31, 0x1157D4u);
    ctx->pc = 0x1157D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157CCu;
    // 0x1157d0: 0xe640021c  swc1        $f0, 0x21C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x116A10u, 0x1157CCu, 0x1157D4u)) {
        return;
    }
    ctx->pc = 0x1157D4u;
label_1157d4:
    // 0x1157d4: 0xc64c0230  lwc1        $f12, 0x230($s2)
    ctx->pc = 0x1157d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1157d8: 0x46156034  c.lt.s      $f12, $f21
    ctx->pc = 0x1157d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1157dc: 0x0  nop
    ctx->pc = 0x1157dcu;
    // NOP
    // 0x1157e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1157E0u;
    {
        const bool branch_taken_0x1157e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1157E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E0u;
        // 0x1157e4: 0xe654021c  swc1        $f20, 0x21C($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e0) {
            ctx->pc = 0x1157ECu;
            goto label_1157ec;
        }
    }
    ctx->pc = 0x1157E8u;
    // 0x1157e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1157e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1157ec:
    // 0x1157ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1157ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1157f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1157f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1157f4: 0x0  nop
    ctx->pc = 0x1157f4u;
    // NOP
    // 0x1157f8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1157f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1157fc: 0x0  nop
    ctx->pc = 0x1157fcu;
    // NOP
    // 0x115800: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x115800u;
    {
        const bool branch_taken_0x115800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115800) {
            ctx->pc = 0x115804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115800u;
            // 0x115804: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115808u;
            goto label_115808;
        }
    }
    ctx->pc = 0x115808u;
label_115808:
    // 0x115808: 0x8e44022c  lw          $a0, 0x22C($s2)
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    // 0x11580c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x115810: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x115810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x115814: 0xc0a1670  jal         func_2859C0
    ctx->pc = 0x115814u;
    SET_GPR_U32(ctx, 31, 0x11581Cu);
    ctx->pc = 0x115818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115814u;
    // 0x115818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2859C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2859C0u, 0x115814u, 0x11581Cu)) {
        return;
    }
    ctx->pc = 0x11581Cu;
label_11581c:
    // 0x11581c: 0xc6420210  lwc1        $f2, 0x210($s2)
    ctx->pc = 0x11581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115820: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x115820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115824: 0xc6440214  lwc1        $f4, 0x214($s2)
    ctx->pc = 0x115824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x115828: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x115828u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11582c: 0xc6410218  lwc1        $f1, 0x218($s2)
    ctx->pc = 0x11582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115830: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x115830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115834: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x115834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115838: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x115838u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x11583c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x11583cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x115840: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x115840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x115844: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x115844u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x115848: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x115848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11584c: 0xc64300f8  lwc1        $f3, 0xF8($s2)
    ctx->pc = 0x11584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x115850: 0xc64500fc  lwc1        $f5, 0xFC($s2)
    ctx->pc = 0x115850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x115854: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x115854u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x115858: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x115858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11585c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x11585cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x115860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x115860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115864: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x115864u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x115868: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x115868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11586c: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x11586cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115870: 0x0  nop
    ctx->pc = 0x115870u;
    // NOP
    // 0x115874: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x115874u;
    {
        const bool branch_taken_0x115874 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x115878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115874u;
        // 0x115878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115874) {
            ctx->pc = 0x115880u;
            goto label_115880;
        }
    }
    ctx->pc = 0x11587Cu;
    // 0x11587c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11587cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115880:
    // 0x115880: 0xae530258  sw          $s3, 0x258($s2)
    ctx->pc = 0x115880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 19));
    // 0x115884: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x115884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
    // 0x115888: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x115888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11588c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x11588cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115890: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x115890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115894: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x115894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115898: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11589c: 0xc7be0110  lwc1        $f30, 0x110($sp)
    ctx->pc = 0x11589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1158a0: 0xc7bd0108  lwc1        $f29, 0x108($sp)
    ctx->pc = 0x1158a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1158a4: 0xc7bc0100  lwc1        $f28, 0x100($sp)
    ctx->pc = 0x1158a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1158a8: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x1158a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1158ac: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x1158acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1158b0: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x1158b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1158b4: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x1158b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1158b8: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1158b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1158bc: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1158bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1158c0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1158c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1158c4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1158c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1158c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1158C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1158CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C8u;
        // 0x1158cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1158D0u;
}
