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

// Function: sub_002E27D8
// Address: 0x2e27d8 - 0x2e2d00
void sub_002E27D8_0x2e27d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E27D8_0x2e27d8");
#endif

    switch (ctx->pc) {
        case 0x2e28b8u: goto label_2e28b8;
        case 0x2e28f8u: goto label_2e28f8;
        case 0x2e2a0cu: goto label_2e2a0c;
        case 0x2e2a6cu: goto label_2e2a6c;
        default: break;
    }

    ctx->pc = 0x2e27d8u;

    // 0x2e27d8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e27d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e27dc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2e27e0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e27e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2e27e4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e27e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2e27e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e27e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27ec: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2e27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2e27f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e27f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2e27f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2e27f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e27fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e27fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e2800: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e2800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2804: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e2804u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e2808: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e2808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e280c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e280cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e2810: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e2810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2e2814: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2818: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e281c: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x2e281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2e2820: 0xc6150044  lwc1        $f21, 0x44($s0)
    ctx->pc = 0x2e2820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2824: 0x26340064  addiu       $s4, $s1, 0x64
    ctx->pc = 0x2e2824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x2e2828: 0xc616003c  lwc1        $f22, 0x3C($s0)
    ctx->pc = 0x2e2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e282c: 0x26350070  addiu       $s5, $s1, 0x70
    ctx->pc = 0x2e282cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e2830: 0xc6140040  lwc1        $f20, 0x40($s0)
    ctx->pc = 0x2e2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2834: 0xc6270040  lwc1        $f7, 0x40($s1)
    ctx->pc = 0x2e2834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2e2838: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x2e2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e283c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2e283cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2e2840: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x2e2840u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e2844: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e2844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2848: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x2e2848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2e284c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2e284cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2e2850: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2e2850u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e2854: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2858: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x2e2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e285c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2e285cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2e2860: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2e2860u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e2864: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2e2864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2868: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x2e2868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e286c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2e286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2870: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e2870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e2874: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x2e2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2878: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2e2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e287c: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x2e287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2880: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2e2880u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2e2884: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2e2884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e2888: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2e2888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2e288c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2e288cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e2890: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e2890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e2894: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2e2894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2e2898: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x2e2898u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2e289c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e289cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e28a0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2e28a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2e28a4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2e28a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e28a8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e28a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e28ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e28acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e28b0: 0xc0b83b0  jal         func_2E0EC0
    ctx->pc = 0x2E28B0u;
    SET_GPR_U32(ctx, 31, 0x2E28B8u);
    ctx->pc = 0x2E28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E28B0u;
    // 0x2e28b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0EC0u, 0x2E28B0u, 0x2E28B8u)) {
        return;
    }
    ctx->pc = 0x2E28B8u;
label_2e28b8:
    // 0x2e28b8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2e28b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28bc: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x2e28bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28c0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2e28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e28c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e28c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e28c8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2e28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e28cc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e28ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e28d0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2e28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2e28d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e28d8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2e28d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e28dc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2e28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28e0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2e28e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e28e4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2e28e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e28e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e28e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e28ec: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2e28ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2e28f0: 0xc0b83b0  jal         func_2E0EC0
    ctx->pc = 0x2E28F0u;
    SET_GPR_U32(ctx, 31, 0x2E28F8u);
    ctx->pc = 0x2E28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E28F0u;
    // 0x2e28f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0EC0u, 0x2E28F0u, 0x2E28F8u)) {
        return;
    }
    ctx->pc = 0x2E28F8u;
label_2e28f8:
    // 0x2e28f8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28fc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2900: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2e2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2e2904: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e290c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e290cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2910: 0x0  nop
    ctx->pc = 0x2e2910u;
    // NOP
    // 0x2e2914: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2914u;
    {
        const bool branch_taken_0x2e2914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2914u;
        // 0x2e2918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2914) {
            ctx->pc = 0x2E2928u;
            goto label_2e2928;
        }
    }
    ctx->pc = 0x2E291Cu;
    // 0x2e291c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E291Cu;
    {
        const bool branch_taken_0x2e291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E291Cu;
        // 0x2e2920: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e291c) {
            ctx->pc = 0x2E2940u;
            goto label_2e2940;
        }
    }
    ctx->pc = 0x2E2924u;
    // 0x2e2924: 0x0  nop
    ctx->pc = 0x2e2924u;
    // NOP
label_2e2928:
    // 0x2e2928: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x2e292c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e292cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e2930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2934: 0x0  nop
    ctx->pc = 0x2e2934u;
    // NOP
    // 0x2e2938: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2938u;
    {
        const bool branch_taken_0x2e2938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2938) {
            ctx->pc = 0x2E293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2938u;
            // 0x2e293c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2940u;
            goto label_2e2940;
        }
    }
    ctx->pc = 0x2E2940u;
label_2e2940:
    // 0x2e2940: 0x3c0143aa  lui         $at, 0x43AA
    ctx->pc = 0x2e2940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17322 << 16));
    // 0x2e2944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2948: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e2948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e294c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2e294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2950: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2e2950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e2954: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2958: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e2958u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2e295c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2e295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2e2960: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x2e2960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2964: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2e2964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2968: 0x0  nop
    ctx->pc = 0x2e2968u;
    // NOP
    // 0x2e296c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E296Cu;
    {
        const bool branch_taken_0x2e296c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e296c) {
            ctx->pc = 0x2E2970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E296Cu;
            // 0x2e2970: 0xc6410018  lwc1        $f1, 0x18($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E297Cu;
            goto label_2e297c;
        }
    }
    ctx->pc = 0x2E2974u;
    // 0x2e2974: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2974u;
    {
        const bool branch_taken_0x2e2974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2974u;
        // 0x2e2978: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2974) {
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E297Cu;
label_2e297c:
    // 0x2e297c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2e297cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2988: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2988u;
    {
        const bool branch_taken_0x2e2988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2988) {
            ctx->pc = 0x2E298Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2988u;
            // 0x2e298c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E2990u;
    // 0x2e2990: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2e2990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2e2994: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2e2994u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e2998: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x2e2998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2e299c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e29a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2e29a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e29a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2e29a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2e29a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e29a8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2e29ac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2e29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2e29b0:
    // 0x2e29b0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e29b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e29b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e29b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e29b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e29bc: 0x0  nop
    ctx->pc = 0x2e29bcu;
    // NOP
    // 0x2e29c0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E29C0u;
    {
        const bool branch_taken_0x2e29c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29C0u;
        // 0x2e29c4: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29c0) {
            ctx->pc = 0x2E2A04u;
            goto label_2e2a04;
        }
    }
    ctx->pc = 0x2E29C8u;
    // 0x2e29c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e29c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e29cc: 0x0  nop
    ctx->pc = 0x2e29ccu;
    // NOP
    // 0x2e29d0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E29D0u;
    {
        const bool branch_taken_0x2e29d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29D0u;
        // 0x2e29d4: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29d0) {
            ctx->pc = 0x2E2A04u;
            goto label_2e2a04;
        }
    }
    ctx->pc = 0x2E29D8u;
    // 0x2e29d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e29d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e29dc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E29DCu;
    {
        const bool branch_taken_0x2e29dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e29dc) {
            ctx->pc = 0x2E2A04u;
            goto label_2e2a04;
        }
    }
    ctx->pc = 0x2E29E4u;
    // 0x2e29e4: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x2e29e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e29e8: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x2e29e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e29ec: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e29f0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2e29f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e29f4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2e29f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e29f8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2e29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2e29fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E29FCu;
    {
        const bool branch_taken_0x2e29fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29FCu;
        // 0x2e2a00: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29fc) {
            ctx->pc = 0x2E2A14u;
            goto label_2e2a14;
        }
    }
    ctx->pc = 0x2E2A04u;
label_2e2a04:
    // 0x2e2a04: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x2E2A04u;
    SET_GPR_U32(ctx, 31, 0x2E2A0Cu);
    ctx->pc = 0x2E2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A04u;
    // 0x2e2a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x2E2A04u, 0x2E2A0Cu)) {
        return;
    }
    ctx->pc = 0x2E2A0Cu;
label_2e2a0c:
    // 0x2e2a0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2a14:
    // 0x2e2a14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2a18: 0x0  nop
    ctx->pc = 0x2e2a18u;
    // NOP
    // 0x2e2a1c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2A1Cu;
    {
        const bool branch_taken_0x2e2a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A1Cu;
        // 0x2e2a20: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a1c) {
            ctx->pc = 0x2E2A60u;
            goto label_2e2a60;
        }
    }
    ctx->pc = 0x2E2A24u;
    // 0x2e2a24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2a24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2a28: 0x0  nop
    ctx->pc = 0x2e2a28u;
    // NOP
    // 0x2e2a2c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E2A2Cu;
    {
        const bool branch_taken_0x2e2a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A2Cu;
        // 0x2e2a30: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a2c) {
            ctx->pc = 0x2E2A60u;
            goto label_2e2a60;
        }
    }
    ctx->pc = 0x2E2A34u;
    // 0x2e2a34: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2a34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2a38: 0x0  nop
    ctx->pc = 0x2e2a38u;
    // NOP
    // 0x2e2a3c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2A3Cu;
    {
        const bool branch_taken_0x2e2a3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A3Cu;
        // 0x2e2a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a3c) {
            ctx->pc = 0x2E2A64u;
            goto label_2e2a64;
        }
    }
    ctx->pc = 0x2E2A44u;
    // 0x2e2a44: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x2e2a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e2a48: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x2e2a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e2a4c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2e2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e2a50: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2e2a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2a54: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2e2a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e2a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2A58u;
    {
        const bool branch_taken_0x2e2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A58u;
        // 0x2e2a5c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a58) {
            ctx->pc = 0x2E2A6Cu;
            goto label_2e2a6c;
        }
    }
    ctx->pc = 0x2E2A60u;
label_2e2a60:
    // 0x2e2a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e2a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e2a64:
    // 0x2e2a64: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x2E2A64u;
    SET_GPR_U32(ctx, 31, 0x2E2A6Cu);
    ctx->pc = 0x2E2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A64u;
    // 0x2e2a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x2E2A64u, 0x2E2A6Cu)) {
        return;
    }
    ctx->pc = 0x2E2A6Cu;
label_2e2a6c:
    // 0x2e2a6c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2e2a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2a70: 0xc6a40004  lwc1        $f4, 0x4($s5)
    ctx->pc = 0x2e2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2a74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a78: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2e2a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2a7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2a80: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2e2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2a84: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2e2a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2e2a88: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2e2a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2a8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2a90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2e2a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e2a94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2e2a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e2a98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2a9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2aa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e2aa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2aa4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e2aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e2aa8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2e2aa8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2e2aac: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2e2aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2ab0: 0x0  nop
    ctx->pc = 0x2e2ab0u;
    // NOP
    // 0x2e2ab4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2AB4u;
    {
        const bool branch_taken_0x2e2ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AB4u;
        // 0x2e2ab8: 0xe6640008  swc1        $f4, 0x8($s3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ab4) {
            ctx->pc = 0x2E2AC4u;
            goto label_2e2ac4;
        }
    }
    ctx->pc = 0x2E2ABCu;
    // 0x2e2abc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2ABCu;
    {
        const bool branch_taken_0x2e2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ABCu;
        // 0x2e2ac0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2abc) {
            ctx->pc = 0x2E2ADCu;
            goto label_2e2adc;
        }
    }
    ctx->pc = 0x2E2AC4u;
label_2e2ac4:
    // 0x2e2ac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2acc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2e2accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2ad0: 0x0  nop
    ctx->pc = 0x2e2ad0u;
    // NOP
    // 0x2e2ad4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2AD4u;
    {
        const bool branch_taken_0x2e2ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2ad4) {
            ctx->pc = 0x2E2AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2AD4u;
            // 0x2e2ad8: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2ADCu;
            goto label_2e2adc;
        }
    }
    ctx->pc = 0x2E2ADCu;
label_2e2adc:
    // 0x2e2adc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2e2adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2e2ae0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ae4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e2ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ae8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2e2ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2aec: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2e2aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2af0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2af4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x2e2af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2af8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e2af8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e2afc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2e2afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2b00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2b04: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2b08: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2e2b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e2b0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2b10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e2b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2b14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e2b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e2b1c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2e2b1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e2b20: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2e2b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2b24: 0x0  nop
    ctx->pc = 0x2e2b24u;
    // NOP
    // 0x2e2b28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2B28u;
    {
        const bool branch_taken_0x2e2b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B28u;
        // 0x2e2b2c: 0xe663000c  swc1        $f3, 0xC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b28) {
            ctx->pc = 0x2E2B38u;
            goto label_2e2b38;
        }
    }
    ctx->pc = 0x2E2B30u;
    // 0x2e2b30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2B30u;
    {
        const bool branch_taken_0x2e2b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B30u;
        // 0x2e2b34: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b30) {
            ctx->pc = 0x2E2B50u;
            goto label_2e2b50;
        }
    }
    ctx->pc = 0x2E2B38u;
label_2e2b38:
    // 0x2e2b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2b40: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e2b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2b44: 0x0  nop
    ctx->pc = 0x2e2b44u;
    // NOP
    // 0x2e2b48: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2B48u;
    {
        const bool branch_taken_0x2e2b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2b48) {
            ctx->pc = 0x2E2B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B48u;
            // 0x2e2b4c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B50u;
            goto label_2e2b50;
        }
    }
    ctx->pc = 0x2E2B50u;
label_2e2b50:
    // 0x2e2b50: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x2e2b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2e2b54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b58: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2e2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2b5c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x2e2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2b60: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2e2b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2b64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b68: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x2e2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2b6c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e2b6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e2b70: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2e2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2b74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2b78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2b7c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2e2b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e2b80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2b84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e2b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2b88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e2b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2b8c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e2b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e2b90: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x2e2b90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e2b94: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2e2b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2b98: 0x0  nop
    ctx->pc = 0x2e2b98u;
    // NOP
    // 0x2e2b9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2B9Cu;
    {
        const bool branch_taken_0x2e2b9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B9Cu;
        // 0x2e2ba0: 0xe6610010  swc1        $f1, 0x10($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b9c) {
            ctx->pc = 0x2E2BACu;
            goto label_2e2bac;
        }
    }
    ctx->pc = 0x2E2BA4u;
    // 0x2e2ba4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2BA4u;
    {
        const bool branch_taken_0x2e2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BA4u;
        // 0x2e2ba8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ba4) {
            ctx->pc = 0x2E2BC4u;
            goto label_2e2bc4;
        }
    }
    ctx->pc = 0x2E2BACu;
label_2e2bac:
    // 0x2e2bac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2bb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e2bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2bb8: 0x0  nop
    ctx->pc = 0x2e2bb8u;
    // NOP
    // 0x2e2bbc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2BBCu;
    {
        const bool branch_taken_0x2e2bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2bbc) {
            ctx->pc = 0x2E2BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2BBCu;
            // 0x2e2bc0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2BC4u;
            goto label_2e2bc4;
        }
    }
    ctx->pc = 0x2E2BC4u;
label_2e2bc4:
    // 0x2e2bc4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2e2bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2e2bc8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2bcc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2bd0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2e2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2bd4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2e2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2bd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2bd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2bdc: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x2e2bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2be0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e2be0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e2be4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2e2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2be8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2bec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2bf0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2e2bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e2bf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e2bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e2bf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e2bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2bfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e2bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2c00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e2c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e2c04: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x2e2c04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e2c08: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2e2c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2c0c: 0x0  nop
    ctx->pc = 0x2e2c0cu;
    // NOP
    // 0x2e2c10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2C10u;
    {
        const bool branch_taken_0x2e2c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C10u;
        // 0x2e2c14: 0xe6610014  swc1        $f1, 0x14($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c10) {
            ctx->pc = 0x2E2C20u;
            goto label_2e2c20;
        }
    }
    ctx->pc = 0x2E2C18u;
    // 0x2e2c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2C18u;
    {
        const bool branch_taken_0x2e2c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C18u;
        // 0x2e2c1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c18) {
            ctx->pc = 0x2E2C38u;
            goto label_2e2c38;
        }
    }
    ctx->pc = 0x2E2C20u;
label_2e2c20:
    // 0x2e2c20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2c28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e2c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2c2c: 0x0  nop
    ctx->pc = 0x2e2c2cu;
    // NOP
    // 0x2e2c30: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2C30u;
    {
        const bool branch_taken_0x2e2c30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2c30) {
            ctx->pc = 0x2E2C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2C30u;
            // 0x2e2c34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2C38u;
            goto label_2e2c38;
        }
    }
    ctx->pc = 0x2E2C38u;
label_2e2c38:
    // 0x2e2c38: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x2e2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2e2c3c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2e2c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e2c40: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E2C40u;
    {
        const bool branch_taken_0x2e2c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C40u;
        // 0x2e2c44: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c40) {
            ctx->pc = 0x2E2CCCu;
            goto label_2e2ccc;
        }
    }
    ctx->pc = 0x2E2C48u;
    // 0x2e2c48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2e2c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e2c50: 0x2442f5b0  addiu       $v0, $v0, -0xA50
    ctx->pc = 0x2e2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964656));
    // 0x2e2c54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e2c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2c5c: 0x800008  jr          $a0
    ctx->pc = 0x2E2C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E2C64u: goto label_2e2c64;
            case 0x2E2C98u: goto label_2e2c98;
            case 0x2E2CCCu: goto label_2e2ccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2C5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E2C64u;
label_2e2c64:
    // 0x2e2c64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2c6c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2e2c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2c70: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x2e2c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2c74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e2c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2c78: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2e2c78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e2c7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e2c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2c80: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e2c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e2c84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e2c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2c88: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2e2c88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e2c8c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2e2c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2e2c90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E2C90u;
    {
        const bool branch_taken_0x2e2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C90u;
        // 0x2e2c94: 0xe6620010  swc1        $f2, 0x10($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c90) {
            ctx->pc = 0x2E2CCCu;
            goto label_2e2ccc;
        }
    }
    ctx->pc = 0x2E2C98u;
label_2e2c98:
    // 0x2e2c98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2c9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2ca0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2e2ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ca4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2e2ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ca8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e2ca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e2cac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2e2cacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2e2cb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e2cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2cb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e2cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e2cb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e2cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e2cbc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2e2cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2e2cc0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2e2cc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2e2cc4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2e2cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2e2cc8: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x2e2cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2e2ccc:
    // 0x2e2ccc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e2cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e2cd0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e2cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2cd4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e2cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2cd8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e2cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2cdc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2e2cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2ce0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2e2ce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2ce4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e2ce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2ce8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e2ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e2cec: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e2cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e2cf0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2cf4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CF8u;
        // 0x2e2cfc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D00u;
}
