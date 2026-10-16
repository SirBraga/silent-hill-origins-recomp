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

// Function: sub_002A7428
// Address: 0x2a7428 - 0x2a81f0
void sub_002A7428_0x2a7428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7428_0x2a7428");
#endif

    switch (ctx->pc) {
        case 0x2a7650u: goto label_2a7650;
        case 0x2a7868u: goto label_2a7868;
        case 0x2a78c0u: goto label_2a78c0;
        case 0x2a7988u: goto label_2a7988;
        case 0x2a79f8u: goto label_2a79f8;
        case 0x2a7a28u: goto label_2a7a28;
        case 0x2a7aa8u: goto label_2a7aa8;
        case 0x2a7bfcu: goto label_2a7bfc;
        case 0x2a7c80u: goto label_2a7c80;
        case 0x2a7d10u: goto label_2a7d10;
        case 0x2a7d54u: goto label_2a7d54;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f80u: goto label_2a7f80;
        case 0x2a7fc4u: goto label_2a7fc4;
        default: break;
    }

    ctx->pc = 0x2a7428u;

    // 0x2a7428: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2a7428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2a742c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a7430: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2a7430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x2a7434: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7438: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2a7438u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2a743c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a743cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7440: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2a7440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x2a7444: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2a7444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x2a7448: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2a7448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x2a744c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2a744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2a7450: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2a7450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x2a7454: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2a7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x2a7458: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2a7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x2a745c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x2a745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x2a7460: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2a7460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2a7464: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2a7464u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2a7468: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2a7468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2a746c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2a746cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2a7470: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2a7470u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2a7474: 0xc495004c  lwc1        $f21, 0x4C($a0)
    ctx->pc = 0x2a7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7478: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2a7478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x2a747c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7480: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a7480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a7484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7488: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x2a7488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a748c: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2a748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7490: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x2a7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7494: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2a7494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a7498: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2a7498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a749c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x2a749cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a74a0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2a74a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a74a4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2a74a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a74a8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2a74a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2a74ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a74b0: 0xc4463a28  lwc1        $f6, 0x3A28($v0)
    ctx->pc = 0x2a74b0u;
    { uint32_t bits = FAST_READ32(0x6B3A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a74b4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x2a74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x2a74b8: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x2a74b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a74bc: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x2a74bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a74c0: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x2a74c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a74c4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2a74c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a74c8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2a74c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a74cc: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x2a74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x2a74d0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2a74d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a74d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a74d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a74d8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2a74d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a74dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a74dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a74e0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2a74e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a74e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a74e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a74e8: 0x46040141  sub.s       $f5, $f0, $f4
    ctx->pc = 0x2a74e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2a74ec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a74f0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a74f4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2a74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a74f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a74f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a74fc: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2a74fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7500: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a7500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a7504: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2a7504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a7508: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a750c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a750cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7510: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2a7510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a7514: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2a7514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7518: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2a7518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2a751c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7520: 0x46053836  c.le.s      $f7, $f5
    ctx->pc = 0x2a7520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7524: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x2a7524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7528: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2a7528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2a752c: 0x4600ba46  mov.s       $f9, $f23
    ctx->pc = 0x2a752cu;
    ctx->f[9] = FPU_MOV_S(ctx->f[23]);
    // 0x2a7530: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a7530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7534: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2a7534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a7538: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a753c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7540: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x2a7540u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7544: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2a7544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7548: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a7548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a754c: 0x8fab00e4  lw          $t3, 0xE4($sp)
    ctx->pc = 0x2a754cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a7550: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7550u;
    {
        const bool branch_taken_0x2a7550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7550u;
        // 0x2a7554: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7550) {
            ctx->pc = 0x2A7570u;
            goto label_2a7570;
        }
    }
    ctx->pc = 0x2A7558u;
    // 0x2a7558: 0x46053834  c.lt.s      $f7, $f5
    ctx->pc = 0x2a7558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a755c: 0x0  nop
    ctx->pc = 0x2a755cu;
    // NOP
    // 0x2a7560: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7560u;
    {
        const bool branch_taken_0x2a7560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7560u;
        // 0x2a7564: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7560) {
            ctx->pc = 0x2A7574u;
            goto label_2a7574;
        }
    }
    ctx->pc = 0x2A7568u;
    // 0x2a7568: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7568u;
    {
        const bool branch_taken_0x2a7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7568u;
        // 0x2a756c: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7568) {
            ctx->pc = 0x2A7574u;
            goto label_2a7574;
        }
    }
    ctx->pc = 0x2A7570u;
label_2a7570:
    // 0x2a7570: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x2a7570u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
label_2a7574:
    // 0x2a7574: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2a7574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a7578: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2a7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a757c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2a757cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2a7580: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x2a7580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a7584: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a7584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7588: 0x0  nop
    ctx->pc = 0x2a7588u;
    // NOP
    // 0x2a758c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A758Cu;
    {
        const bool branch_taken_0x2a758c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a758c) {
            ctx->pc = 0x2A7590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A758Cu;
            // 0x2a7590: 0x46012001  sub.s       $f0, $f4, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75A8u;
            goto label_2a75a8;
        }
    }
    ctx->pc = 0x2A7594u;
    // 0x2a7594: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a7594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7598: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a7598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a759c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a759cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a75a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a75a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75a4: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x2a75a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_2a75a8:
    // 0x2a75a8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a75a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a75ac: 0x0  nop
    ctx->pc = 0x2a75acu;
    // NOP
    // 0x2a75b0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A75B0u;
    {
        const bool branch_taken_0x2a75b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a75b0) {
            ctx->pc = 0x2A75B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75B0u;
            // 0x2a75b4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75CCu;
            goto label_2a75cc;
        }
    }
    ctx->pc = 0x2A75B8u;
    // 0x2a75b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a75bc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a75bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a75c0: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a75c0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a75c4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a75c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a75c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a75cc:
    // 0x2a75cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a75ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a75d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75D0u;
    {
        const bool branch_taken_0x2a75d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a75d0) {
            ctx->pc = 0x2A75E0u;
            goto label_2a75e0;
        }
    }
    ctx->pc = 0x2A75D8u;
    // 0x2a75d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A75D8u;
    {
        const bool branch_taken_0x2a75d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75D8u;
        // 0x2a75dc: 0xe4c80000  swc1        $f8, 0x0($a2) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75d8) {
            ctx->pc = 0x2A761Cu;
            goto label_2a761c;
        }
    }
    ctx->pc = 0x2A75E0u;
label_2a75e0:
    // 0x2a75e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a75e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a75e4: 0x0  nop
    ctx->pc = 0x2a75e4u;
    // NOP
    // 0x2a75e8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75E8u;
    {
        const bool branch_taken_0x2a75e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a75e8) {
            ctx->pc = 0x2A75ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75E8u;
            // 0x2a75ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75F8u;
            goto label_2a75f8;
        }
    }
    ctx->pc = 0x2A75F0u;
    // 0x2a75f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A75F0u;
    {
        const bool branch_taken_0x2a75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75F0u;
        // 0x2a75f4: 0xe4c90000  swc1        $f9, 0x0($a2) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75f0) {
            ctx->pc = 0x2A761Cu;
            goto label_2a761c;
        }
    }
    ctx->pc = 0x2A75F8u;
label_2a75f8:
    // 0x2a75f8: 0x14ee0003  bne         $a3, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75F8u;
    {
        const bool branch_taken_0x2a75f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        if (branch_taken_0x2a75f8) {
            ctx->pc = 0x2A7608u;
            goto label_2a7608;
        }
    }
    ctx->pc = 0x2A7600u;
    // 0x2a7600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7600u;
    {
        const bool branch_taken_0x2a7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7600u;
        // 0x2a7604: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7600) {
            ctx->pc = 0x2A7618u;
            goto label_2a7618;
        }
    }
    ctx->pc = 0x2A7608u;
label_2a7608:
    // 0x2a7608: 0x54ed0004  bnel        $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7608u;
    {
        const bool branch_taken_0x2a7608 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x2a7608) {
            ctx->pc = 0x2A760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7608u;
            // 0x2a760c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A761Cu;
            goto label_2a761c;
        }
    }
    ctx->pc = 0x2A7610u;
    // 0x2a7610: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x2a7614: 0x182b023  subu        $s6, $t4, $v0
    ctx->pc = 0x2a7614u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2a7618:
    // 0x2a7618: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a7618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2a761c:
    // 0x2a761c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a761cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a7620: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a7624: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2a7624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2a7628: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2a7628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2a762c: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2a762cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a7630: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2A7630u;
    {
        const bool branch_taken_0x2a7630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7630u;
        // 0x2a7634: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7630) {
            ctx->pc = 0x2A783Cu;
            goto label_2a783c;
        }
    }
    ctx->pc = 0x2A7638u;
    // 0x2a7638: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a7638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a763c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2a763cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7640: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2a7640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7644: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2a7644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7648: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a7648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a764c: 0x0  nop
    ctx->pc = 0x2a764cu;
    // NOP
label_2a7650:
    // 0x2a7650: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2a7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7654: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x2a7654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7658: 0x0  nop
    ctx->pc = 0x2a7658u;
    // NOP
    // 0x2a765c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A765Cu;
    {
        const bool branch_taken_0x2a765c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A765Cu;
        // 0x2a7660: 0xc4a30000  lwc1        $f3, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a765c) {
            ctx->pc = 0x2A7684u;
            goto label_2a7684;
        }
    }
    ctx->pc = 0x2A7664u;
    // 0x2a7664: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2a7664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a766c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A766Cu;
    {
        const bool branch_taken_0x2a766c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a766c) {
            ctx->pc = 0x2A7670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A766Cu;
            // 0x2a7670: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7690u;
            goto label_2a7690;
        }
    }
    ctx->pc = 0x2A7674u;
    // 0x2a7674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a767c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A767Cu;
    {
        const bool branch_taken_0x2a767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A767Cu;
        // 0x2a7680: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a767c) {
            ctx->pc = 0x2A7690u;
            goto label_2a7690;
        }
    }
    ctx->pc = 0x2A7684u;
label_2a7684:
    // 0x2a7684: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a7684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a768c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2a768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_2a7690:
    // 0x2a7690: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2a7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7694: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2a7694u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2a7698: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2a7698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2a769c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a769cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a76a0: 0x0  nop
    ctx->pc = 0x2a76a0u;
    // NOP
    // 0x2a76a4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A76A4u;
    {
        const bool branch_taken_0x2a76a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a76a4) {
            ctx->pc = 0x2A76A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76A4u;
            // 0x2a76a8: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76C0u;
            goto label_2a76c0;
        }
    }
    ctx->pc = 0x2A76ACu;
    // 0x2a76ac: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a76b0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a76b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a76b4: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a76b4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a76b8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a76b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76bc: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2a76bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2a76c0:
    // 0x2a76c0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a76c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a76c4: 0x0  nop
    ctx->pc = 0x2a76c4u;
    // NOP
    // 0x2a76c8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A76C8u;
    {
        const bool branch_taken_0x2a76c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a76c8) {
            ctx->pc = 0x2A76CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76C8u;
            // 0x2a76cc: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76E4u;
            goto label_2a76e4;
        }
    }
    ctx->pc = 0x2A76D0u;
    // 0x2a76d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a76d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a76d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a76d8: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a76d8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a76dc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a76dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a76e4:
    // 0x2a76e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a76e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a76e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A76E8u;
    {
        const bool branch_taken_0x2a76e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a76e8) {
            ctx->pc = 0x2A76F8u;
            goto label_2a76f8;
        }
    }
    ctx->pc = 0x2A76F0u;
    // 0x2a76f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A76F0u;
    {
        const bool branch_taken_0x2a76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76F0u;
        // 0x2a76f4: 0xe4680000  swc1        $f8, 0x0($v1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76f0) {
            ctx->pc = 0x2A7734u;
            goto label_2a7734;
        }
    }
    ctx->pc = 0x2A76F8u;
label_2a76f8:
    // 0x2a76f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a76f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a76fc: 0x0  nop
    ctx->pc = 0x2a76fcu;
    // NOP
    // 0x2a7700: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7700u;
    {
        const bool branch_taken_0x2a7700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7700) {
            ctx->pc = 0x2A7704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7700u;
            // 0x2a7704: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7710u;
            goto label_2a7710;
        }
    }
    ctx->pc = 0x2A7708u;
    // 0x2a7708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A7708u;
    {
        const bool branch_taken_0x2a7708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7708u;
        // 0x2a770c: 0xe4690000  swc1        $f9, 0x0($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7708) {
            ctx->pc = 0x2A7734u;
            goto label_2a7734;
        }
    }
    ctx->pc = 0x2A7710u;
label_2a7710:
    // 0x2a7710: 0x14ee0003  bne         $a3, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7710u;
    {
        const bool branch_taken_0x2a7710 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        if (branch_taken_0x2a7710) {
            ctx->pc = 0x2A7720u;
            goto label_2a7720;
        }
    }
    ctx->pc = 0x2A7718u;
    // 0x2a7718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7718u;
    {
        const bool branch_taken_0x2a7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7718u;
        // 0x2a771c: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7718) {
            ctx->pc = 0x2A7730u;
            goto label_2a7730;
        }
    }
    ctx->pc = 0x2A7720u;
label_2a7720:
    // 0x2a7720: 0x54ed0004  bnel        $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7720u;
    {
        const bool branch_taken_0x2a7720 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x2a7720) {
            ctx->pc = 0x2A7724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7720u;
            // 0x2a7724: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7734u;
            goto label_2a7734;
        }
    }
    ctx->pc = 0x2A7728u;
    // 0x2a7728: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x2a772c: 0x182b023  subu        $s6, $t4, $v0
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2a7730:
    // 0x2a7730: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a7730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2a7734:
    // 0x2a7734: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x2a7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7738: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2a7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a773c: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x2a773cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7740: 0x0  nop
    ctx->pc = 0x2a7740u;
    // NOP
    // 0x2a7744: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7744u;
    {
        const bool branch_taken_0x2a7744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7744u;
        // 0x2a7748: 0xc4a30004  lwc1        $f3, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7744) {
            ctx->pc = 0x2A776Cu;
            goto label_2a776c;
        }
    }
    ctx->pc = 0x2A774Cu;
    // 0x2a774c: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2a774cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7754: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7754u;
    {
        const bool branch_taken_0x2a7754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7754) {
            ctx->pc = 0x2A7758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7754u;
            // 0x2a7758: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7778u;
            goto label_2a7778;
        }
    }
    ctx->pc = 0x2A775Cu;
    // 0x2a775c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7764u;
    {
        const bool branch_taken_0x2a7764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7764u;
        // 0x2a7768: 0xe5200004  swc1        $f0, 0x4($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7764) {
            ctx->pc = 0x2A7778u;
            goto label_2a7778;
        }
    }
    ctx->pc = 0x2A776Cu;
label_2a776c:
    // 0x2a776c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7774: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x2a7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_2a7778:
    // 0x2a7778: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2a7778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a777c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2a777cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2a7780: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2a7780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2a7784: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a7784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7788: 0x0  nop
    ctx->pc = 0x2a7788u;
    // NOP
    // 0x2a778c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A778Cu;
    {
        const bool branch_taken_0x2a778c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a778c) {
            ctx->pc = 0x2A7790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A778Cu;
            // 0x2a7790: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A77A8u;
            goto label_2a77a8;
        }
    }
    ctx->pc = 0x2A7794u;
    // 0x2a7794: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a7794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7798: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a7798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a779c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a779cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a77a0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a77a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77a4: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2a77a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2a77a8:
    // 0x2a77a8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2a77a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a77ac: 0x0  nop
    ctx->pc = 0x2a77acu;
    // NOP
    // 0x2a77b0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2A77B0u;
    {
        const bool branch_taken_0x2a77b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a77b0) {
            ctx->pc = 0x2A77B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A77B0u;
            // 0x2a77b4: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A77CCu;
            goto label_2a77cc;
        }
    }
    ctx->pc = 0x2A77B8u;
    // 0x2a77b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a77b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a77bc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a77bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a77c0: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2a77c0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x2a77c4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2a77c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2a77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a77cc:
    // 0x2a77cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a77ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a77d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A77D0u;
    {
        const bool branch_taken_0x2a77d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a77d0) {
            ctx->pc = 0x2A77E0u;
            goto label_2a77e0;
        }
    }
    ctx->pc = 0x2A77D8u;
    // 0x2a77d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A77D8u;
    {
        const bool branch_taken_0x2a77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77D8u;
        // 0x2a77dc: 0xe4680004  swc1        $f8, 0x4($v1) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77d8) {
            ctx->pc = 0x2A781Cu;
            goto label_2a781c;
        }
    }
    ctx->pc = 0x2A77E0u;
label_2a77e0:
    // 0x2a77e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a77e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a77e4: 0x0  nop
    ctx->pc = 0x2a77e4u;
    // NOP
    // 0x2a77e8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2A77E8u;
    {
        const bool branch_taken_0x2a77e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a77e8) {
            ctx->pc = 0x2A77ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A77E8u;
            // 0x2a77ec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A77F8u;
            goto label_2a77f8;
        }
    }
    ctx->pc = 0x2A77F0u;
    // 0x2a77f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A77F0u;
    {
        const bool branch_taken_0x2a77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77F0u;
        // 0x2a77f4: 0xe4690004  swc1        $f9, 0x4($v1) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77f0) {
            ctx->pc = 0x2A781Cu;
            goto label_2a781c;
        }
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x14ee0003  bne         $a3, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A77F8u;
    {
        const bool branch_taken_0x2a77f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        if (branch_taken_0x2a77f8) {
            ctx->pc = 0x2A7808u;
            goto label_2a7808;
        }
    }
    ctx->pc = 0x2A7800u;
    // 0x2a7800: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7800u;
    {
        const bool branch_taken_0x2a7800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7800u;
        // 0x2a7804: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7800) {
            ctx->pc = 0x2A7818u;
            goto label_2a7818;
        }
    }
    ctx->pc = 0x2A7808u;
label_2a7808:
    // 0x2a7808: 0x54ed0004  bnel        $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7808u;
    {
        const bool branch_taken_0x2a7808 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x2a7808) {
            ctx->pc = 0x2A780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7808u;
            // 0x2a780c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A781Cu;
            goto label_2a781c;
        }
    }
    ctx->pc = 0x2A7810u;
    // 0x2a7810: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2a7814: 0x182b023  subu        $s6, $t4, $v0
    ctx->pc = 0x2a7814u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2a7818:
    // 0x2a7818: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a7818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a781c:
    // 0x2a781c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2a7820: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a7824: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2a7824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2a7828: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2a782c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2a7830: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2a7830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a7834: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2A7834u;
    {
        const bool branch_taken_0x2a7834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7834u;
        // 0x2a7838: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7834) {
            ctx->pc = 0x2A7650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7650;
        }
    }
    ctx->pc = 0x2A783Cu;
label_2a783c:
    // 0x2a783c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2a783cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a7840: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a7844: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a7848: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a784c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2a784cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2a7850: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2a7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2a7854: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2a7854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2a7858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a785c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2a785cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2a7860: 0xc4b6001c  lwc1        $f22, 0x1C($a1)
    ctx->pc = 0x2a7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a7864: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x2a7864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
label_2a7868:
    // 0x2a7868: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x2a7868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x2a786c: 0x1440019d  bnez        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x2A786Cu;
    {
        const bool branch_taken_0x2a786c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A786Cu;
        // 0x2a7870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a786c) {
            ctx->pc = 0x2A7EE4u;
            goto label_2a7ee4;
        }
    }
    ctx->pc = 0x2A7874u;
    // 0x2a7874: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2a7874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7878: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2a7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a787c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2a787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7880: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a7880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a7884: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2a7884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7888: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a7888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a788c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2a788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7890: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2a7890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2a7894: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2a7894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a7898: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2a7898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2a789c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2a789cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a78a0: 0x14e000c7  bnez        $a3, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2A78A0u;
    {
        const bool branch_taken_0x2a78a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78A0u;
        // 0x2a78a4: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78a0) {
            ctx->pc = 0x2A7BC0u;
            goto label_2a7bc0;
        }
    }
    ctx->pc = 0x2A78A8u;
    // 0x2a78a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a78a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a78ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a78acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a78b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a78b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78b4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2a78b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a78b8: 0xc0aaa6e  jal         func_2AA9B8
    ctx->pc = 0x2A78B8u;
    SET_GPR_U32(ctx, 31, 0x2A78C0u);
    ctx->pc = 0x2A78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A78B8u;
    // 0x2a78bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA9B8u, 0x2A78B8u, 0x2A78C0u)) {
        return;
    }
    ctx->pc = 0x2A78C0u;
label_2a78c0:
    // 0x2a78c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a78c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a78c4: 0x6000228  bltz        $s0, . + 4 + (0x228 << 2)
    ctx->pc = 0x2A78C4u;
    {
        const bool branch_taken_0x2a78c4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78C4u;
        // 0x2a78c8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78c4) {
            ctx->pc = 0x2A8168u;
            goto label_2a8168;
        }
    }
    ctx->pc = 0x2A78CCu;
    // 0x2a78cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a78ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a78d0: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x2a78d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a78d4: 0x0  nop
    ctx->pc = 0x2a78d4u;
    // NOP
    // 0x2a78d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A78D8u;
    {
        const bool branch_taken_0x2a78d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a78d8) {
            ctx->pc = 0x2A78DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A78D8u;
            // 0x2a78dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A78E0u;
            goto label_2a78e0;
        }
    }
    ctx->pc = 0x2A78E0u;
label_2a78e0:
    // 0x2a78e0: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A78E0u;
    {
        const bool branch_taken_0x2a78e0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78E0u;
        // 0x2a78e4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78e0) {
            ctx->pc = 0x2A7938u;
            goto label_2a7938;
        }
    }
    ctx->pc = 0x2A78E8u;
    // 0x2a78e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a78e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a78ec: 0x0  nop
    ctx->pc = 0x2a78ecu;
    // NOP
    // 0x2a78f0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A78F0u;
    {
        const bool branch_taken_0x2a78f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78F0u;
        // 0x2a78f4: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a78f0) {
            ctx->pc = 0x2A7938u;
            goto label_2a7938;
        }
    }
    ctx->pc = 0x2A78F8u;
    // 0x2a78f8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a78f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a78fc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a78fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7900: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a7900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a7904: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x2a7904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7908: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a790c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2a790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7910: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a7910u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a7914: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2a7914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7918: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a7918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a791c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a791cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a7920: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a7920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a7924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a7928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a792c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2A792Cu;
    {
        const bool branch_taken_0x2a792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A792Cu;
        // 0x2a7930: 0x8fa400d8  lw          $a0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a792c) {
            ctx->pc = 0x2A7C78u;
            goto label_2a7c78;
        }
    }
    ctx->pc = 0x2A7934u;
    // 0x2a7934: 0x0  nop
    ctx->pc = 0x2a7934u;
    // NOP
label_2a7938:
    // 0x2a7938: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x2a7938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a793c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7940: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x2a7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7944: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a7944u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7948: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2a7948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a794c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a794cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7950: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7954: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a7954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7958: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a7958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a795c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2a795cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7960: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a7960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7964: 0x0  nop
    ctx->pc = 0x2a7964u;
    // NOP
    // 0x2a7968: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7968u;
    {
        const bool branch_taken_0x2a7968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7968u;
        // 0x2a796c: 0x8fb300e4  lw          $s3, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7968) {
            ctx->pc = 0x2A79D4u;
            goto label_2a79d4;
        }
    }
    ctx->pc = 0x2A7970u;
    // 0x2a7970: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x2a7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7974: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a7974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a797c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a797cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7980: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7980u;
    SET_GPR_U32(ctx, 31, 0x2A7988u);
    ctx->pc = 0x2A7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7980u;
    // 0x2a7984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7980u, 0x2A7988u)) {
        return;
    }
    ctx->pc = 0x2A7988u;
label_2a7988:
    // 0x2a7988: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7988u;
    {
        const bool branch_taken_0x2a7988 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2a7988) {
            ctx->pc = 0x2A798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7988u;
            // 0x2a798c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A79D8u;
            goto label_2a79d8;
        }
    }
    ctx->pc = 0x2A7990u;
    // 0x2a7990: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7990u;
    {
        const bool branch_taken_0x2a7990 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7990u;
        // 0x2a7994: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7990) {
            ctx->pc = 0x2A79BCu;
            goto label_2a79bc;
        }
    }
    ctx->pc = 0x2A7998u;
    // 0x2a7998: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2a7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a799c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2a799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79a0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2a79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a79a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a79a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a79a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a79a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a79ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a79acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a79b0: 0x0  nop
    ctx->pc = 0x2a79b0u;
    // NOP
    // 0x2a79b4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A79B4u;
    {
        const bool branch_taken_0x2a79b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a79b4) {
            ctx->pc = 0x2A79B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A79B4u;
            // 0x2a79b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A79D8u;
            goto label_2a79d8;
        }
    }
    ctx->pc = 0x2A79BCu;
label_2a79bc:
    // 0x2a79bc: 0x6ba80097  ldl         $t0, 0x97($sp)
    ctx->pc = 0x2a79bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a79c0: 0x6fa80090  ldr         $t0, 0x90($sp)
    ctx->pc = 0x2a79c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a79c4: 0xb3a80077  sdl         $t0, 0x77($sp)
    ctx->pc = 0x2a79c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a79c8: 0xb7a80070  sdr         $t0, 0x70($sp)
    ctx->pc = 0x2a79c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a79cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a79ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a79d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a79d4:
    // 0x2a79d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a79d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2a79d8:
    // 0x2a79d8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a79dc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a79dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a79e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a79e4: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2a79e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a79e8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A79E8u;
    {
        const bool branch_taken_0x2a79e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A79E8u;
        // 0x2a79ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79e8) {
            ctx->pc = 0x2A7B10u;
            goto label_2a7b10;
        }
    }
    ctx->pc = 0x2A79F0u;
    // 0x2a79f0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2a79f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a79f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2a79f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a79f8:
    // 0x2a79f8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2a79f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a79fc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2a79fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7a00: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a7a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a7a04: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a7a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7a08: 0x0  nop
    ctx->pc = 0x2a7a08u;
    // NOP
    // 0x2a7a0c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2A7A0Cu;
    {
        const bool branch_taken_0x2a7a0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A0Cu;
        // 0x2a7a10: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a0c) {
            ctx->pc = 0x2A7A74u;
            goto label_2a7a74;
        }
    }
    ctx->pc = 0x2A7A14u;
    // 0x2a7a14: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2a7a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7a20: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7A20u;
    SET_GPR_U32(ctx, 31, 0x2A7A28u);
    ctx->pc = 0x2A7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7A20u;
    // 0x2a7a24: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7A20u, 0x2A7A28u)) {
        return;
    }
    ctx->pc = 0x2A7A28u;
label_2a7a28:
    // 0x2a7a28: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7A28u;
    {
        const bool branch_taken_0x2a7a28 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2a7a28) {
            ctx->pc = 0x2A7A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A28u;
            // 0x2a7a2c: 0xc6800004  lwc1        $f0, 0x4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7A78u;
            goto label_2a7a78;
        }
    }
    ctx->pc = 0x2A7A30u;
    // 0x2a7a30: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7A30u;
    {
        const bool branch_taken_0x2a7a30 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A30u;
        // 0x2a7a34: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a30) {
            ctx->pc = 0x2A7A5Cu;
            goto label_2a7a5c;
        }
    }
    ctx->pc = 0x2A7A38u;
    // 0x2a7a38: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2a7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7a3c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2a7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7a40: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2a7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7a44: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a7a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a7a48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7a4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a7a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7a50: 0x0  nop
    ctx->pc = 0x2a7a50u;
    // NOP
    // 0x2a7a54: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7A54u;
    {
        const bool branch_taken_0x2a7a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7a54) {
            ctx->pc = 0x2A7A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7A54u;
            // 0x2a7a58: 0xc6800004  lwc1        $f0, 0x4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7A78u;
            goto label_2a7a78;
        }
    }
    ctx->pc = 0x2A7A5Cu;
label_2a7a5c:
    // 0x2a7a5c: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x2a7a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a7a60: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x2a7a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a7a64: 0xb3a40077  sdl         $a0, 0x77($sp)
    ctx->pc = 0x2a7a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7a68: 0xb7a40070  sdr         $a0, 0x70($sp)
    ctx->pc = 0x2a7a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7a6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a70: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x2a7a70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a7a74:
    // 0x2a7a74: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2a7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7a78:
    // 0x2a7a78: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2a7a7c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x2a7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7a80: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a7a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a7a84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a7a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7a88: 0x0  nop
    ctx->pc = 0x2a7a88u;
    // NOP
    // 0x2a7a8c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2A7A8Cu;
    {
        const bool branch_taken_0x2a7a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A8Cu;
        // 0x2a7a90: 0x26a70001  addiu       $a3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a8c) {
            ctx->pc = 0x2A7AF4u;
            goto label_2a7af4;
        }
    }
    ctx->pc = 0x2A7A94u;
    // 0x2a7a94: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2a7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7a98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7a9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7aa0: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7AA0u;
    SET_GPR_U32(ctx, 31, 0x2A7AA8u);
    ctx->pc = 0x2A7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AA0u;
    // 0x2a7aa4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7AA0u, 0x2A7AA8u)) {
        return;
    }
    ctx->pc = 0x2A7AA8u;
label_2a7aa8:
    // 0x2a7aa8: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7AA8u;
    {
        const bool branch_taken_0x2a7aa8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2a7aa8) {
            ctx->pc = 0x2A7AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7AA8u;
            // 0x2a7aac: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7AF8u;
            goto label_2a7af8;
        }
    }
    ctx->pc = 0x2A7AB0u;
    // 0x2a7ab0: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7AB0u;
    {
        const bool branch_taken_0x2a7ab0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AB0u;
        // 0x2a7ab4: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ab0) {
            ctx->pc = 0x2A7ADCu;
            goto label_2a7adc;
        }
    }
    ctx->pc = 0x2A7AB8u;
    // 0x2a7ab8: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2a7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7abc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2a7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7ac0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2a7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7ac4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a7ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a7ac8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a7accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7ad0: 0x0  nop
    ctx->pc = 0x2a7ad0u;
    // NOP
    // 0x2a7ad4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7AD4u;
    {
        const bool branch_taken_0x2a7ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7ad4) {
            ctx->pc = 0x2A7AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7AD4u;
            // 0x2a7ad8: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7AF8u;
            goto label_2a7af8;
        }
    }
    ctx->pc = 0x2A7ADCu;
label_2a7adc:
    // 0x2a7adc: 0x6ba80097  ldl         $t0, 0x97($sp)
    ctx->pc = 0x2a7adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a7ae0: 0x6fa80090  ldr         $t0, 0x90($sp)
    ctx->pc = 0x2a7ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a7ae4: 0xb3a80077  sdl         $t0, 0x77($sp)
    ctx->pc = 0x2a7ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7ae8: 0xb7a80070  sdr         $t0, 0x70($sp)
    ctx->pc = 0x2a7ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7aec: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x2a7aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7af4:
    // 0x2a7af4: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2a7af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_2a7af8:
    // 0x2a7af8: 0x26f70002  addiu       $s7, $s7, 0x2
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x2a7afc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a7b00: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2a7b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2a7b04: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x2a7b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a7b08: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2A7B08u;
    {
        const bool branch_taken_0x2a7b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B08u;
        // 0x2a7b0c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b08) {
            ctx->pc = 0x2A79F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a79f8;
        }
    }
    ctx->pc = 0x2A7B10u;
label_2a7b10:
    // 0x2a7b10: 0x1a0001a6  blez        $s0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2A7B10u;
    {
        const bool branch_taken_0x2a7b10 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2A7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B10u;
        // 0x2a7b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b10) {
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A7B18u;
    // 0x2a7b18: 0x6c10025  bgez        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A7B18u;
    {
        const bool branch_taken_0x2a7b18 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x2A7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B18u;
        // 0x2a7b1c: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b18) {
            ctx->pc = 0x2A7BB0u;
            goto label_2a7bb0;
        }
    }
    ctx->pc = 0x2A7B20u;
    // 0x2a7b20: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2a7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7b24: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2a7b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7b28: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a7b2c: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x2a7b2cu;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2a7b30: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2a7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7b34: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a7b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a7b38: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2a7b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2a7b3c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2a7b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7b40: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a7b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7b44: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2a7b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2a7b48: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7b4c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a7b4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a7b50: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2a7b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7b54: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a7b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a7b58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2a7b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7b5c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2a7b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7b60: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a7b60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a7b64: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a7b64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a7b68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a7b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7b6c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2a7b6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7b70: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2a7b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a7b74: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a7b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a7b78: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2a7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7b7c: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x2a7b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7b80: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a7b80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a7b84: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2a7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7b88: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x2a7b88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x2a7b8c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a7b8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a7b90: 0x4615c003  div.s       $f0, $f24, $f21
    ctx->pc = 0x2a7b90u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[21]);
    // 0x2a7b94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a7b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7b98: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a7b98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a7b9c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a7b9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a7ba0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2a7ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a7ba4: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2a7ba4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7ba8: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2A7BA8u;
    {
        const bool branch_taken_0x2a7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BA8u;
        // 0x2a7bac: 0xe7a30064  swc1        $f3, 0x64($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ba8) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A7BB0u;
label_2a7bb0:
    // 0x2a7bb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7bb4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2a7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2a7bb8: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x2A7BB8u;
    {
        const bool branch_taken_0x2a7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BB8u;
        // 0x2a7bbc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bb8) {
            ctx->pc = 0x2A80DCu;
            goto label_2a80dc;
        }
    }
    ctx->pc = 0x2A7BC0u;
label_2a7bc0:
    // 0x2a7bc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a7bc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7bc8: 0x2442e348  addiu       $v0, $v0, -0x1CB8
    ctx->pc = 0x2a7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959944));
    // 0x2a7bcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bd0: 0x400013  mtlo        $v0
    ctx->pc = 0x2a7bd0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2a7bd4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7bd8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2a7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a7bdc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2a7bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7be0: 0x72c28000  madd        $s0, $s6, $v0
    ctx->pc = 0x2a7be0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a7be4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a7be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2a7be8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7be8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7becu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2a7bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf4: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x2A7BF4u;
    SET_GPR_U32(ctx, 31, 0x2A7BFCu);
    ctx->pc = 0x2A7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BF4u;
    // 0x2a7bf8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x2A7BF4u, 0x2A7BFCu)) {
        return;
    }
    ctx->pc = 0x2A7BFCu;
label_2a7bfc:
    // 0x2a7bfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c00: 0x622016a  bltzl       $s1, . + 4 + (0x16A << 2)
    ctx->pc = 0x2A7C00u;
    {
        const bool branch_taken_0x2a7c00 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x2a7c00) {
            ctx->pc = 0x2A7C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7C00u;
            // 0x2a7c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A7C08u;
    // 0x2a7c08: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2a7c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a7c0c: 0x4605a836  c.le.s      $f21, $f5
    ctx->pc = 0x2a7c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7c10: 0x0  nop
    ctx->pc = 0x2a7c10u;
    // NOP
    // 0x2a7c14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7C14u;
    {
        const bool branch_taken_0x2a7c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7c14) {
            ctx->pc = 0x2A7C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7C14u;
            // 0x2a7c18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7C1Cu;
            goto label_2a7c1c;
        }
    }
    ctx->pc = 0x2A7C1Cu;
label_2a7c1c:
    // 0x2a7c1c: 0x1a20001a  blez        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7C1Cu;
    {
        const bool branch_taken_0x2a7c1c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C1Cu;
        // 0x2a7c20: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c1c) {
            ctx->pc = 0x2A7C88u;
            goto label_2a7c88;
        }
    }
    ctx->pc = 0x2A7C24u;
    // 0x2a7c24: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x2a7c24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7c28: 0x0  nop
    ctx->pc = 0x2a7c28u;
    // NOP
    // 0x2a7c2c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2A7C2Cu;
    {
        const bool branch_taken_0x2a7c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C2Cu;
        // 0x2a7c30: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c2c) {
            ctx->pc = 0x2A7C88u;
            goto label_2a7c88;
        }
    }
    ctx->pc = 0x2A7C34u;
    // 0x2a7c34: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a7c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7c38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a7c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7c3c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a7c3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a7c40: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x2a7c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7c44: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c48: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2a7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7c4c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a7c4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a7c50: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2a7c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7c54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a7c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a7c58: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a7c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a7c5c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a7c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a7c60: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2a7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a7c64: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2a7c68: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a7c6c: 0xe4450060  swc1        $f5, 0x60($v0)
    ctx->pc = 0x2a7c6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2a7c70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a7c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c74: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2a7c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2a7c78:
    // 0x2a7c78: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x2A7C78u;
    SET_GPR_U32(ctx, 31, 0x2A7C80u);
    ctx->pc = 0x2A7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C78u;
    // 0x2a7c7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x2A7C78u, 0x2A7C80u)) {
        return;
    }
    ctx->pc = 0x2A7C80u;
label_2a7c80:
    // 0x2a7c80: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2A7C80u;
    {
        const bool branch_taken_0x2a7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C80u;
        // 0x2a7c84: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c80) {
            ctx->pc = 0x2A8174u;
            goto label_2a8174;
        }
    }
    ctx->pc = 0x2A7C88u;
label_2a7c88:
    // 0x2a7c88: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2a7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a7c8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a7c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7c90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7c94: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2a7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a7c98: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2a7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c9c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2a7c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7ca0: 0x0  nop
    ctx->pc = 0x2a7ca0u;
    // NOP
    // 0x2a7ca4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7CA4u;
    {
        const bool branch_taken_0x2a7ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CA4u;
        // 0x2a7ca8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ca4) {
            ctx->pc = 0x2A7CB4u;
            goto label_2a7cb4;
        }
    }
    ctx->pc = 0x2A7CACu;
    // 0x2a7cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7cb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7cb4:
    // 0x2a7cb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a7cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7cbc: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x2a7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a7cc0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a7cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a7cc4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x2a7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a7cc8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7ccc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2a7cccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7cd0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2a7cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a7cd4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2a7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a7cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a7cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a7cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7ce0: 0x0  nop
    ctx->pc = 0x2a7ce0u;
    // NOP
    // 0x2a7ce4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7CE4u;
    {
        const bool branch_taken_0x2a7ce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CE4u;
        // 0x2a7ce8: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ce4) {
            ctx->pc = 0x2A7CF0u;
            goto label_2a7cf0;
        }
    }
    ctx->pc = 0x2A7CECu;
    // 0x2a7cec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a7cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7cf0:
    // 0x2a7cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a7cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7cf4: 0x2c51004  sllv        $v0, $a1, $s6
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 22) & 0x1F));
    // 0x2a7cf8: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x2a7cf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a7cfc: 0x1216002c  beq         $s0, $s6, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A7CFCu;
    {
        const bool branch_taken_0x2a7cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CFCu;
        // 0x2a7d00: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7cfc) {
            ctx->pc = 0x2A7DB0u;
            goto label_2a7db0;
        }
    }
    ctx->pc = 0x2A7D04u;
    // 0x2a7d04: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7d08: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2a7d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d0c: 0x0  nop
    ctx->pc = 0x2a7d0cu;
    // NOP
label_2a7d10:
    // 0x2a7d10: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a7d14: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x2a7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2a7d18: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2a7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a7d1c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7d20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7d24: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a7d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a7d28: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a7d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7d2c: 0x0  nop
    ctx->pc = 0x2a7d2cu;
    // NOP
    // 0x2a7d30: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2A7D30u;
    {
        const bool branch_taken_0x2a7d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D30u;
        // 0x2a7d34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d30) {
            ctx->pc = 0x2A7DA0u;
            goto label_2a7da0;
        }
    }
    ctx->pc = 0x2A7D38u;
    // 0x2a7d38: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x2a7d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a7d3c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a7d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7d40: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2a7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2a7d44: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2a7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7d48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a7d4c: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A7D54u);
    ctx->pc = 0x2A7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D4Cu;
    // 0x2a7d50: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7D4Cu, 0x2A7D54u)) {
        return;
    }
    ctx->pc = 0x2A7D54u;
label_2a7d54:
    // 0x2a7d54: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7D54u;
    {
        const bool branch_taken_0x2a7d54 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2a7d54) {
            ctx->pc = 0x2A7D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D54u;
            // 0x2a7d58: 0x2151004  sllv        $v0, $s5, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DA4u;
            goto label_2a7da4;
        }
    }
    ctx->pc = 0x2A7D5Cu;
    // 0x2a7d5c: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7D5Cu;
    {
        const bool branch_taken_0x2a7d5c = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2A7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D5Cu;
        // 0x2a7d60: 0xc7a100a0  lwc1        $f1, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d5c) {
            ctx->pc = 0x2A7D88u;
            goto label_2a7d88;
        }
    }
    ctx->pc = 0x2A7D64u;
    // 0x2a7d64: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x2a7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7d68: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2a7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7d6c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2a7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7d70: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a7d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a7d74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7d78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a7d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7d7c: 0x0  nop
    ctx->pc = 0x2a7d7cu;
    // NOP
    // 0x2a7d80: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7D80u;
    {
        const bool branch_taken_0x2a7d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7d80) {
            ctx->pc = 0x2A7D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7D80u;
            // 0x2a7d84: 0x2151004  sllv        $v0, $s5, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7DA4u;
            goto label_2a7da4;
        }
    }
    ctx->pc = 0x2A7D88u;
label_2a7d88:
    // 0x2a7d88: 0x6ba800b7  ldl         $t0, 0xB7($sp)
    ctx->pc = 0x2a7d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a7d8c: 0x6fa800b0  ldr         $t0, 0xB0($sp)
    ctx->pc = 0x2a7d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a7d90: 0xb3a800a7  sdl         $t0, 0xA7($sp)
    ctx->pc = 0x2a7d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7d94: 0xb7a800a0  sdr         $t0, 0xA0($sp)
    ctx->pc = 0x2a7d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7d98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a7d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d9c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a7d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7da0:
    // 0x2a7da0: 0x2151004  sllv        $v0, $s5, $s0
    ctx->pc = 0x2a7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 16) & 0x1F));
label_2a7da4:
    // 0x2a7da4: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x2a7da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a7da8: 0x1616ffd9  bne         $s0, $s6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2A7DA8u;
    {
        const bool branch_taken_0x2a7da8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DA8u;
        // 0x2a7dac: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7da8) {
            ctx->pc = 0x2A7D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7d10;
        }
    }
    ctx->pc = 0x2A7DB0u;
label_2a7db0:
    // 0x2a7db0: 0x1a200035  blez        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A7DB0u;
    {
        const bool branch_taken_0x2a7db0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DB0u;
        // 0x2a7db4: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7db0) {
            ctx->pc = 0x2A7E88u;
            goto label_2a7e88;
        }
    }
    ctx->pc = 0x2A7DB8u;
    // 0x2a7db8: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7DB8u;
    {
        const bool branch_taken_0x2a7db8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2A7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7DB8u;
        // 0x2a7dbc: 0xc7a20074  lwc1        $f2, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7db8) {
            ctx->pc = 0x2A7DDCu;
            goto label_2a7ddc;
        }
    }
    ctx->pc = 0x2A7DC0u;
    // 0x2a7dc0: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2a7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7dc4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7dc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2a7dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2a7dcc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2a7dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a7dd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a7dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7dd4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2A7DD4u;
    {
        const bool branch_taken_0x2a7dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7dd4) {
            ctx->pc = 0x2A7E88u;
            goto label_2a7e88;
        }
    }
    ctx->pc = 0x2A7DDCu;
label_2a7ddc:
    // 0x2a7ddc: 0x46021983  div.s       $f6, $f3, $f2
    ctx->pc = 0x2a7ddcu;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[2]);
    // 0x2a7de0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a7de4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2a7de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7de8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a7de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a7dec: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2a7decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2a7df0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2a7df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7df4: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7df8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2a7df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2a7dfc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e00: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a7e00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a7e04: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2a7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7e08: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a7e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a7e0c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2a7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7e10: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2a7e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7e14: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a7e14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2a7e18: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2a7e18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2a7e1c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2a7e1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a7e20: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2a7e20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7e24: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a7e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a7e28: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2a7e28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a7e2c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2a7e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e30: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x2a7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7e34: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a7e34u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a7e38: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2a7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e3c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2a7e3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2a7e40: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a7e40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a7e44: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x2a7e44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7e48: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a7e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a7e4c: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x2a7e4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a7e50: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2a7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2a7e54: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2a7e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2a7e58: 0x4615c003  div.s       $f0, $f24, $f21
    ctx->pc = 0x2a7e58u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[24], ctx->f[21]);
    // 0x2a7e5c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2a7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e60: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x2a7e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7e64: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2a7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7e68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a7e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7e6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a7e6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a7e70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a7e70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a7e74: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2a7e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a7e78: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2a7e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a7e7c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2A7E7Cu;
    {
        const bool branch_taken_0x2a7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E7Cu;
        // 0x2a7e80: 0xe7a30068  swc1        $f3, 0x68($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e7c) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A7E84u;
    // 0x2a7e84: 0x0  nop
    ctx->pc = 0x2a7e84u;
    // NOP
label_2a7e88:
    // 0x2a7e88: 0x1a8000c8  blez        $s4, . + 4 + (0xC8 << 2)
    ctx->pc = 0x2A7E88u;
    {
        const bool branch_taken_0x2a7e88 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2A7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E88u;
        // 0x2a7e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e88) {
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A7E90u;
    // 0x2a7e90: 0x16560008  bne         $s2, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7E90u;
    {
        const bool branch_taken_0x2a7e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x2A7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E90u;
        // 0x2a7e94: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e90) {
            ctx->pc = 0x2A7EB4u;
            goto label_2a7eb4;
        }
    }
    ctx->pc = 0x2A7E98u;
    // 0x2a7e98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2a7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a7e9c: 0x3d31821  addu        $v1, $fp, $s3
    ctx->pc = 0x2a7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2a7ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a7ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ea4: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x2a7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2a7ea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7eac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7EACu;
    {
        const bool branch_taken_0x2a7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EACu;
        // 0x2a7eb0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7eac) {
            ctx->pc = 0x2A7ECCu;
            goto label_2a7ecc;
        }
    }
    ctx->pc = 0x2A7EB4u;
label_2a7eb4:
    // 0x2a7eb4: 0x2561821  addu        $v1, $s2, $s6
    ctx->pc = 0x2a7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2a7eb8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2a7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2a7ebc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a7ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7ec0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a7ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a7ec4: 0xc3b023  subu        $s6, $a2, $v1
    ctx->pc = 0x2a7ec4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a7ec8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7ecc:
    // 0x2a7ecc: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x2a7eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a7ed0: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x2a7ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a7ed4: 0xb3a80077  sdl         $t0, 0x77($sp)
    ctx->pc = 0x2a7ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7ed8: 0xb7a80070  sdr         $t0, 0x70($sp)
    ctx->pc = 0x2a7ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7edc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2A7EDCu;
    {
        const bool branch_taken_0x2a7edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EDCu;
        // 0x2a7ee0: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7edc) {
            ctx->pc = 0x2A80E0u;
            goto label_2a80e0;
        }
    }
    ctx->pc = 0x2A7EE4u;
label_2a7ee4:
    // 0x2a7ee4: 0x14e30078  bne         $a3, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x2A7EE4u;
    {
        const bool branch_taken_0x2a7ee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7EE4u;
        // 0x2a7ee8: 0x8fa800dc  lw          $t0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ee4) {
            ctx->pc = 0x2A80C8u;
            goto label_2a80c8;
        }
    }
    ctx->pc = 0x2A7EECu;
    // 0x2a7eec: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a7ef0: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a7ef4: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x2a7ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2a7ef8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7efc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2a7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a7f00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2a7f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7f04: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x2a7f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7f08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7f10: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a7f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f14: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2a7f14u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2a7f18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a7f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f1c: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7F24u);
    ctx->pc = 0x2A7F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F1Cu;
    // 0x2a7f20: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7F1Cu, 0x2A7F24u)) {
        return;
    }
    ctx->pc = 0x2A7F24u;
label_2a7f24:
    // 0x2a7f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f28: 0x62200a0  bltzl       $s1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2A7F28u;
    {
        const bool branch_taken_0x2a7f28 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x2a7f28) {
            ctx->pc = 0x2A7F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7F28u;
            // 0x2a7f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A7F30u;
    // 0x2a7f30: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7F30u;
    {
        const bool branch_taken_0x2a7f30 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F30u;
        // 0x2a7f34: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f30) {
            ctx->pc = 0x2A7F60u;
            goto label_2a7f60;
        }
    }
    ctx->pc = 0x2A7F38u;
    // 0x2a7f38: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2a7f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7f3c: 0x0  nop
    ctx->pc = 0x2a7f3cu;
    // NOP
    // 0x2a7f40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7F40u;
    {
        const bool branch_taken_0x2a7f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F40u;
        // 0x2a7f44: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f40) {
            ctx->pc = 0x2A7F60u;
            goto label_2a7f60;
        }
    }
    ctx->pc = 0x2A7F48u;
    // 0x2a7f48: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2a7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2a7f4c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2a7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2a7f50: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2a7f54: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a7f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7f58: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2A7F58u;
    {
        const bool branch_taken_0x2a7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F58u;
        // 0x2a7f5c: 0xe4400060  swc1        $f0, 0x60($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f58) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A7F60u;
label_2a7f60:
    // 0x2a7f60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a7f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f64: 0x2c61004  sllv        $v0, $a2, $s6
    ctx->pc = 0x2a7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 22) & 0x1F));
    // 0x2a7f68: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x2a7f68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a7f6c: 0x1216002a  beq         $s0, $s6, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A7F6Cu;
    {
        const bool branch_taken_0x2a7f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2A7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F6Cu;
        // 0x2a7f70: 0x8fa700e0  lw          $a3, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f6c) {
            ctx->pc = 0x2A8018u;
            goto label_2a8018;
        }
    }
    ctx->pc = 0x2A7F74u;
    // 0x2a7f74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7f78: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a7f78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7f7c: 0x0  nop
    ctx->pc = 0x2a7f7cu;
    // NOP
label_2a7f80:
    // 0x2a7f80: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a7f84: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x2a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a7f88: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7f8c: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x2a7f8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7f90: 0x0  nop
    ctx->pc = 0x2a7f90u;
    // NOP
    // 0x2a7f94: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2A7F94u;
    {
        const bool branch_taken_0x2a7f94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F94u;
        // 0x2a7f98: 0x2141004  sllv        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7f94) {
            ctx->pc = 0x2A800Cu;
            goto label_2a800c;
        }
    }
    ctx->pc = 0x2A7F9Cu;
    // 0x2a7f9c: 0x8fa800e4  lw          $t0, 0xE4($sp)
    ctx->pc = 0x2a7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2a7fa0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2a7fa0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2a7fa4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2a7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a7fa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a7fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fac: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x2a7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a7fb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7fb4: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x2a7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a7fb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a7fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7fbc: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x2A7FBCu;
    SET_GPR_U32(ctx, 31, 0x2A7FC4u);
    ctx->pc = 0x2A7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FBCu;
    // 0x2a7fc0: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x2A7FBCu, 0x2A7FC4u)) {
        return;
    }
    ctx->pc = 0x2A7FC4u;
label_2a7fc4:
    // 0x2a7fc4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A7FC4u;
    {
        const bool branch_taken_0x2a7fc4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FC4u;
        // 0x2a7fc8: 0xc7a100c0  lwc1        $f1, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7fc4) {
            ctx->pc = 0x2A8008u;
            goto label_2a8008;
        }
    }
    ctx->pc = 0x2A7FCCu;
    // 0x2a7fcc: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x2a7fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7fd0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2a7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7fd4: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x2a7fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7fd8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2a7fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2a7fdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a7fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a7fe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7fe4: 0x0  nop
    ctx->pc = 0x2a7fe4u;
    // NOP
    // 0x2a7fe8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7FE8u;
    {
        const bool branch_taken_0x2a7fe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7fe8) {
            ctx->pc = 0x2A7FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7FE8u;
            // 0x2a7fec: 0x2141004  sllv        $v0, $s4, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A800Cu;
            goto label_2a800c;
        }
    }
    ctx->pc = 0x2A7FF0u;
    // 0x2a7ff0: 0x6ba900c7  ldl         $t1, 0xC7($sp)
    ctx->pc = 0x2a7ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a7ff4: 0x6fa900c0  ldr         $t1, 0xC0($sp)
    ctx->pc = 0x2a7ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a7ff8: 0xb3a90077  sdl         $t1, 0x77($sp)
    ctx->pc = 0x2a7ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7ffc: 0xb7a90070  sdr         $t1, 0x70($sp)
    ctx->pc = 0x2a7ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8004: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a8004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8008:
    // 0x2a8008: 0x2141004  sllv        $v0, $s4, $s0
    ctx->pc = 0x2a8008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 16) & 0x1F));
label_2a800c:
    // 0x2a800c: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x2a800cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a8010: 0x1616ffdb  bne         $s0, $s6, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2A8010u;
    {
        const bool branch_taken_0x2a8010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2A8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8010u;
        // 0x2a8014: 0x8fa700e0  lw          $a3, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8010) {
            ctx->pc = 0x2A7F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7f80;
        }
    }
    ctx->pc = 0x2A8018u;
label_2a8018:
    // 0x2a8018: 0x1a200064  blez        $s1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A8018u;
    {
        const bool branch_taken_0x2a8018 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2A801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8018u;
        // 0x2a801c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8018) {
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A8020u;
    // 0x2a8020: 0x1656001f  bne         $s2, $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A8020u;
    {
        const bool branch_taken_0x2a8020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x2A8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8020u;
        // 0x2a8024: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8020) {
            ctx->pc = 0x2A80A0u;
            goto label_2a80a0;
        }
    }
    ctx->pc = 0x2A8028u;
    // 0x2a8028: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2a8028u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a802c: 0x3d31821  addu        $v1, $fp, $s3
    ctx->pc = 0x2a802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x2a8030: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x2a8030u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a8034: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2a8038: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x2a8038u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a803c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a8040: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8044: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x2a8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8048: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2a8048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2a804c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2a804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8050: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2a8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8054: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x2a8054u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2a8058: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2a8058u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2a805c: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x2a805cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2a8060: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2a8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8064: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x2a8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a8068: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2a8068u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2a806c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2a806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8070: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2a8070u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a8074: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2a8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8078: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2a8078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2a807c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8080: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2a8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8084: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2a8084u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2a8088: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2a8088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2a808c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a808cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a8090: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2a8090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8094: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a8094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8098: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2A8098u;
    {
        const bool branch_taken_0x2a8098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8098u;
        // 0x2a809c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8098) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A80A0u;
label_2a80a0:
    // 0x2a80a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2a80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a80a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2a80a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a80a8: 0x2562021  addu        $a0, $s2, $s6
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2a80ac: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a80b0: 0xe4b023  subu        $s6, $a3, $a0
    ctx->pc = 0x2a80b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2a80b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a80b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80b8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2a80bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a80bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a80c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A80C0u;
    {
        const bool branch_taken_0x2a80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80C0u;
        // 0x2a80c4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80c0) {
            ctx->pc = 0x2A80DCu;
            goto label_2a80dc;
        }
    }
    ctx->pc = 0x2A80C8u;
label_2a80c8:
    // 0x2a80c8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2a80c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a80cc: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x2a80ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a80d0: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x2a80d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a80d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A80D4u;
    {
        const bool branch_taken_0x2a80d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A80D4u;
        // 0x2a80d8: 0xe5170060  swc1        $f23, 0x60($t0) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a80d4) {
            ctx->pc = 0x2A8170u;
            goto label_2a8170;
        }
    }
    ctx->pc = 0x2A80DCu;
label_2a80dc:
    // 0x2a80dc: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2a80dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a80e0:
    // 0x2a80e0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2a80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80e4: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a80e8: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x2a80e8u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2a80ec: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x2a80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2a80f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2a80f4: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x2a80f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
    // 0x2a80f8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2a80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80fc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2a80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8100: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2a8100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2a8104: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a8104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8108: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2a8108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2a810c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2a810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a8110: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a8110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a8114: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2a8114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a8118: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2a8118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a811c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2a811cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a8120: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a8120u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a8124: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2a8124u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2a8128: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2a8128u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a812c: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2a812cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a8130: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2a8130u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a8134: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2a8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8138: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2a8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a813c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2a813cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2a8140: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8144: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2a8144u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2a8148: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2a8148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2a814c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2a814cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8150: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2a8150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a8154: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a8154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8158: 0x8fab00d4  lw          $t3, 0xD4($sp)
    ctx->pc = 0x2a8158u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2a815c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2a815cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2a8160: 0x1560fdc1  bnez        $t3, . + 4 + (-0x23F << 2)
    ctx->pc = 0x2A8160u;
    {
        const bool branch_taken_0x2a8160 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8160u;
        // 0x2a8164: 0xafab00d4  sw          $t3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8160) {
            ctx->pc = 0x2A7868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7868;
        }
    }
    ctx->pc = 0x2A8168u;
label_2a8168:
    // 0x2a8168: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8168u;
    {
        const bool branch_taken_0x2a8168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8168u;
        // 0x2a816c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8168) {
            ctx->pc = 0x2A81ACu;
            goto label_2a81ac;
        }
    }
    ctx->pc = 0x2A8170u;
label_2a8170:
    // 0x2a8170: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2a8170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2a8174:
    // 0x2a8174: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2a8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a8178: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2a8178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a817c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2a817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a8180: 0xb043000b  sdl         $v1, 0xB($v0)
    ctx->pc = 0x2a8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8184: 0xb4430004  sdr         $v1, 0x4($v0)
    ctx->pc = 0x2a8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a8188: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2a8188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2a818c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8190: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2a8190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a8194: 0x6ba80067  ldl         $t0, 0x67($sp)
    ctx->pc = 0x2a8194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a8198: 0x6fa80060  ldr         $t0, 0x60($sp)
    ctx->pc = 0x2a8198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a819c: 0x8fa90068  lw          $t1, 0x68($sp)
    ctx->pc = 0x2a819cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a81a0: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x2a81a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a81a4: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x2a81a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a81a8: 0xace90018  sw          $t1, 0x18($a3)
    ctx->pc = 0x2a81a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 9));
label_2a81ac:
    // 0x2a81ac: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2a81acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a81b0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2a81b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a81b4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2a81b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a81b8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2a81b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a81bc: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2a81bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a81c0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2a81c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2a81c4: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2a81c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a81c8: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2a81c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a81cc: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2a81ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a81d0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2a81d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a81d4: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2a81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a81d8: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2a81d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a81dc: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2a81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a81e0: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2a81e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a81e4: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2a81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a81e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A81E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81E8u;
        // 0x2a81ec: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A81E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A81F0u;
}
