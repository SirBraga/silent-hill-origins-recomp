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

// Function: sub_002526B0
// Address: 0x2526b0 - 0x252918
void sub_002526B0_0x2526b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002526B0_0x2526b0");
#endif

    switch (ctx->pc) {
        case 0x2527d8u: goto label_2527d8;
        case 0x2527e0u: goto label_2527e0;
        case 0x2527f0u: goto label_2527f0;
        case 0x2527fcu: goto label_2527fc;
        case 0x252804u: goto label_252804;
        case 0x252840u: goto label_252840;
        case 0x252848u: goto label_252848;
        case 0x252858u: goto label_252858;
        case 0x252864u: goto label_252864;
        case 0x25286cu: goto label_25286c;
        case 0x2528a8u: goto label_2528a8;
        case 0x2528b0u: goto label_2528b0;
        case 0x2528c0u: goto label_2528c0;
        case 0x2528ccu: goto label_2528cc;
        case 0x2528d4u: goto label_2528d4;
        default: break;
    }

    ctx->pc = 0x2526b0u;

    // 0x2526b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2526b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2526b4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2526b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2526b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2526b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2526bc: 0x8c435620  lw          $v1, 0x5620($v0)
    ctx->pc = 0x2526bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x735620u));
    // 0x2526c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2526c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2526c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2526c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2526c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2526c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2526cc: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x2526ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2526d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2526d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2526d4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2526d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2526d8: 0x6a220023  ldl         $v0, 0x23($s1)
    ctx->pc = 0x2526d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2526dc: 0x6e22001c  ldr         $v0, 0x1C($s1)
    ctx->pc = 0x2526dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2526e0: 0x6a23002b  ldl         $v1, 0x2B($s1)
    ctx->pc = 0x2526e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2526e4: 0x6e230024  ldr         $v1, 0x24($s1)
    ctx->pc = 0x2526e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2526e8: 0x6a240033  ldl         $a0, 0x33($s1)
    ctx->pc = 0x2526e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2526ec: 0x6e24002c  ldr         $a0, 0x2C($s1)
    ctx->pc = 0x2526ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2526f0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2526f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2526f4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2526f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2526f8: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x2526f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2526fc: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x2526fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252700: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x252700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252704: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x252704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x252708: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25270c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x25270cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x252710: 0xc7a90020  lwc1        $f9, 0x20($sp)
    ctx->pc = 0x252710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x252714: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x252714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x252718: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x252718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x25271c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x25271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x252720: 0x46064880  add.s       $f2, $f9, $f6
    ctx->pc = 0x252720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x252724: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x252724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x252728: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x252728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25272c: 0x46043840  add.s       $f1, $f7, $f4
    ctx->pc = 0x25272cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x252730: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x252730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x252734: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x252734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x252738: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x252738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x25273c: 0xe6220050  swc1        $f2, 0x50($s1)
    ctx->pc = 0x25273cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x252740: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x252740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x252744: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x252744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x252748: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x252748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x25274c: 0x46064a41  sub.s       $f9, $f9, $f6
    ctx->pc = 0x25274cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x252750: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x252750u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x252754: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x252754u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x252758: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x252758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x25275c: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x25275cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x252760: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x252760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x252764: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x252764u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x252768: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x252768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25276c: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x25276cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x252770: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x252770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x252774: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x252774u;
    {
        const bool branch_taken_0x252774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252774u;
        // 0x252778: 0x46003846  mov.s       $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252774) {
            ctx->pc = 0x252780u;
            goto label_252780;
        }
    }
    ctx->pc = 0x25277Cu;
    // 0x25277c: 0x46004846  mov.s       $f1, $f9
    ctx->pc = 0x25277cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[9]);
label_252780:
    // 0x252780: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x252780u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x252784: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x252784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252788: 0x0  nop
    ctx->pc = 0x252788u;
    // NOP
    // 0x25278c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25278Cu;
    {
        const bool branch_taken_0x25278c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25278Cu;
        // 0x252790: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25278c) {
            ctx->pc = 0x252798u;
            goto label_252798;
        }
    }
    ctx->pc = 0x252794u;
    // 0x252794: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x252794u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_252798:
    // 0x252798: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x252798u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x25279c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25279cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2527a0: 0x46014a43  div.s       $f9, $f9, $f1
    ctx->pc = 0x2527a0u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[1]);
    // 0x2527a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2527a4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2527a8: 0x46013843  div.s       $f1, $f7, $f1
    ctx->pc = 0x2527a8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[7], ctx->f[1]);
    // 0x2527ac: 0x46144832  c.eq.s      $f9, $f20
    ctx->pc = 0x2527acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[9], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527b0: 0xe7a90010  swc1        $f9, 0x10($sp)
    ctx->pc = 0x2527b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2527b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2527b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2527b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2527B8u;
    {
        const bool branch_taken_0x2527b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2527BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527B8u;
        // 0x2527bc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527b8) {
            ctx->pc = 0x252814u;
            goto label_252814;
        }
    }
    ctx->pc = 0x2527C0u;
    // 0x2527c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2527c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2527c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2527c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2527c8: 0x0  nop
    ctx->pc = 0x2527c8u;
    // NOP
    // 0x2527cc: 0x46096303  div.s       $f12, $f12, $f9
    ctx->pc = 0x2527ccu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[9]);
    // 0x2527d0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2527D0u;
    SET_GPR_U32(ctx, 31, 0x2527D8u);
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2527D0u, 0x2527D8u)) {
        return;
    }
    ctx->pc = 0x2527D8u;
label_2527d8:
    // 0x2527d8: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x2527D8u;
    SET_GPR_U32(ctx, 31, 0x2527E0u);
    ctx->pc = 0x2527DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527D8u;
    // 0x2527dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x2527D8u, 0x2527E0u)) {
        return;
    }
    ctx->pc = 0x2527E0u;
label_2527e0:
    // 0x2527e0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2527e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2527e4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2527e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2527e8: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x2527E8u;
    SET_GPR_U32(ctx, 31, 0x2527F0u);
    ctx->pc = 0x2527ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527E8u;
    // 0x2527ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x2527E8u, 0x2527F0u)) {
        return;
    }
    ctx->pc = 0x2527F0u;
label_2527f0:
    // 0x2527f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2527f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527f4: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2527F4u;
    SET_GPR_U32(ctx, 31, 0x2527FCu);
    ctx->pc = 0x2527F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527F4u;
    // 0x2527f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2527F4u, 0x2527FCu)) {
        return;
    }
    ctx->pc = 0x2527FCu;
label_2527fc:
    // 0x2527fc: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x2527FCu;
    SET_GPR_U32(ctx, 31, 0x252804u);
    ctx->pc = 0x252800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527FCu;
    // 0x252800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x2527FCu, 0x252804u)) {
        return;
    }
    ctx->pc = 0x252804u;
label_252804:
    // 0x252804: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x252804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x252808: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x252808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25280c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x252810: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x252810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_252814:
    // 0x252814: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x252814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252818: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x252818u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25281c: 0x0  nop
    ctx->pc = 0x25281cu;
    // NOP
    // 0x252820: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x252820u;
    {
        const bool branch_taken_0x252820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252820) {
            ctx->pc = 0x252824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252820u;
            // 0x252824: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252880u;
            goto label_252880;
        }
    }
    ctx->pc = 0x252828u;
    // 0x252828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25282c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25282cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252830: 0x0  nop
    ctx->pc = 0x252830u;
    // NOP
    // 0x252834: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x252834u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x252838: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x252838u;
    SET_GPR_U32(ctx, 31, 0x252840u);
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x252838u, 0x252840u)) {
        return;
    }
    ctx->pc = 0x252840u;
label_252840:
    // 0x252840: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x252840u;
    SET_GPR_U32(ctx, 31, 0x252848u);
    ctx->pc = 0x252844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252840u;
    // 0x252844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x252840u, 0x252848u)) {
        return;
    }
    ctx->pc = 0x252848u;
label_252848:
    // 0x252848: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x252848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x25284c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x25284cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x252850: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x252850u;
    SET_GPR_U32(ctx, 31, 0x252858u);
    ctx->pc = 0x252854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252850u;
    // 0x252854: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x252850u, 0x252858u)) {
        return;
    }
    ctx->pc = 0x252858u;
label_252858:
    // 0x252858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25285c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x25285Cu;
    SET_GPR_U32(ctx, 31, 0x252864u);
    ctx->pc = 0x252860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25285Cu;
    // 0x252860: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x25285Cu, 0x252864u)) {
        return;
    }
    ctx->pc = 0x252864u;
label_252864:
    // 0x252864: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x252864u;
    SET_GPR_U32(ctx, 31, 0x25286Cu);
    ctx->pc = 0x252868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252864u;
    // 0x252868: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x252864u, 0x25286Cu)) {
        return;
    }
    ctx->pc = 0x25286Cu;
label_25286c:
    // 0x25286c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25286cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x252870: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x252870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x252874: 0x21023  negu        $v0, $v0
    ctx->pc = 0x252874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x252878: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x252878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x25287c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x25287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252880:
    // 0x252880: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x252880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252884: 0x0  nop
    ctx->pc = 0x252884u;
    // NOP
    // 0x252888: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x252888u;
    {
        const bool branch_taken_0x252888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252888u;
        // 0x25288c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252888) {
            ctx->pc = 0x2528E8u;
            goto label_2528e8;
        }
    }
    ctx->pc = 0x252890u;
    // 0x252890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252894: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x252894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252898: 0x0  nop
    ctx->pc = 0x252898u;
    // NOP
    // 0x25289c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x25289cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x2528a0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x2528A0u;
    SET_GPR_U32(ctx, 31, 0x2528A8u);
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x2528A0u, 0x2528A8u)) {
        return;
    }
    ctx->pc = 0x2528A8u;
label_2528a8:
    // 0x2528a8: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x2528A8u;
    SET_GPR_U32(ctx, 31, 0x2528B0u);
    ctx->pc = 0x2528ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528A8u;
    // 0x2528ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x2528A8u, 0x2528B0u)) {
        return;
    }
    ctx->pc = 0x2528B0u;
label_2528b0:
    // 0x2528b0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2528b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2528b4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2528b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x2528b8: 0xc09b1c2  jal         func_26C708
    ctx->pc = 0x2528B8u;
    SET_GPR_U32(ctx, 31, 0x2528C0u);
    ctx->pc = 0x2528BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528B8u;
    // 0x2528bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C708u, 0x2528B8u, 0x2528C0u)) {
        return;
    }
    ctx->pc = 0x2528C0u;
label_2528c0:
    // 0x2528c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2528c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528c4: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2528C4u;
    SET_GPR_U32(ctx, 31, 0x2528CCu);
    ctx->pc = 0x2528C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528C4u;
    // 0x2528c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2528C4u, 0x2528CCu)) {
        return;
    }
    ctx->pc = 0x2528CCu;
label_2528cc:
    // 0x2528cc: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x2528CCu;
    SET_GPR_U32(ctx, 31, 0x2528D4u);
    ctx->pc = 0x2528D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528CCu;
    // 0x2528d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x2528CCu, 0x2528D4u)) {
        return;
    }
    ctx->pc = 0x2528D4u;
label_2528d4:
    // 0x2528d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2528d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2528d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2528d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2528dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2528e0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2528e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2528e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2528e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2528e8:
    // 0x2528e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2528e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2528ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2528ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2528f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2528f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2528f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2528f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2528f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2528f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2528fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2528FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528FCu;
        // 0x252900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2528FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252904u;
    // 0x252904: 0x0  nop
    ctx->pc = 0x252904u;
    // NOP
    // 0x252908: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x252908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25290c: 0x0  nop
    ctx->pc = 0x25290cu;
    // NOP
    // 0x252910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252914: 0x0  nop
    ctx->pc = 0x252914u;
    // NOP
    ctx->pc = 0x252918u;
}
