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

// Function: sub_0021B878
// Address: 0x21b878 - 0x21bd90
void sub_0021B878_0x21b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B878_0x21b878");
#endif

    switch (ctx->pc) {
        case 0x21b900u: goto label_21b900;
        case 0x21b910u: goto label_21b910;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba7cu: goto label_21ba7c;
        case 0x21bad4u: goto label_21bad4;
        case 0x21bae8u: goto label_21bae8;
        case 0x21baf4u: goto label_21baf4;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb10u: goto label_21bb10;
        case 0x21bb1cu: goto label_21bb1c;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bb70u: goto label_21bb70;
        case 0x21bbf4u: goto label_21bbf4;
        case 0x21bbfcu: goto label_21bbfc;
        case 0x21bc70u: goto label_21bc70;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bd10u: goto label_21bd10;
        default: break;
    }

    ctx->pc = 0x21b878u;

    // 0x21b878: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x21b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x21b87c: 0x7fb202e0  sq          $s2, 0x2E0($sp)
    ctx->pc = 0x21b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 18));
    // 0x21b880: 0x7fb302d0  sq          $s3, 0x2D0($sp)
    ctx->pc = 0x21b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 19));
    // 0x21b884: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21b884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b888: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x21b888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x21b88c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b890: 0x7fb00300  sq          $s0, 0x300($sp)
    ctx->pc = 0x21b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 16));
    // 0x21b894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b898: 0x7fb102f0  sq          $s1, 0x2F0($sp)
    ctx->pc = 0x21b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 17));
    // 0x21b89c: 0x7fb402c0  sq          $s4, 0x2C0($sp)
    ctx->pc = 0x21b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 20));
    // 0x21b8a0: 0x7fb502b0  sq          $s5, 0x2B0($sp)
    ctx->pc = 0x21b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 21));
    // 0x21b8a4: 0x7fb602a0  sq          $s6, 0x2A0($sp)
    ctx->pc = 0x21b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 22));
    // 0x21b8a8: 0x7fb70290  sq          $s7, 0x290($sp)
    ctx->pc = 0x21b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 23));
    // 0x21b8ac: 0x7fbe0280  sq          $fp, 0x280($sp)
    ctx->pc = 0x21b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 30));
    // 0x21b8b0: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x21b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
    // 0x21b8b4: 0xe7b40310  swc1        $f20, 0x310($sp)
    ctx->pc = 0x21b8b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x21b8b8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x21b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21b8bc: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x21b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x21b8c0: 0x8e54005c  lw          $s4, 0x5C($s2)
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x21b8c4: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x21b8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21b8c8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x21b8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21b8cc: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x21b8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21b8d0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x21b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21b8d4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x21b8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b8d8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x21b8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b8dc: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x21b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x21b8e0: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x21b8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21b8e4: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x21b8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21b8e8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x21b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b8ec: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x21b8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b8f0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x21b8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b8f4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x21b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x21b8f8: 0xc095988  jal         func_256620
    ctx->pc = 0x21B8F8u;
    SET_GPR_U32(ctx, 31, 0x21B900u);
    ctx->pc = 0x21B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8F8u;
    // 0x21b8fc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x21B8F8u, 0x21B900u)) {
        return;
    }
    ctx->pc = 0x21B900u;
label_21b900:
    // 0x21b900: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x21b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x21b904: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x21B904u;
    {
        const bool branch_taken_0x21b904 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B904u;
        // 0x21b908: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b904) {
            ctx->pc = 0x21B9B0u;
            goto label_21b9b0;
        }
    }
    ctx->pc = 0x21B90Cu;
    // 0x21b90c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x21b90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21b910:
    // 0x21b910: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b914: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b918: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21b918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b91c: 0x0  nop
    ctx->pc = 0x21b91cu;
    // NOP
    // 0x21b920: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B920u;
    {
        const bool branch_taken_0x21b920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b920) {
            ctx->pc = 0x21B924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B920u;
            // 0x21b924: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B928u;
            goto label_21b928;
        }
    }
    ctx->pc = 0x21B928u;
label_21b928:
    // 0x21b928: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b92c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x21b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21b930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b934: 0x0  nop
    ctx->pc = 0x21b934u;
    // NOP
    // 0x21b938: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B938u;
    {
        const bool branch_taken_0x21b938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b938) {
            ctx->pc = 0x21B93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B938u;
            // 0x21b93c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B940u;
            goto label_21b940;
        }
    }
    ctx->pc = 0x21B940u;
label_21b940:
    // 0x21b940: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b944: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x21b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b948: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21b948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b94c: 0x0  nop
    ctx->pc = 0x21b94cu;
    // NOP
    // 0x21b950: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B950u;
    {
        const bool branch_taken_0x21b950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b950) {
            ctx->pc = 0x21B954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B950u;
            // 0x21b954: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B958u;
            goto label_21b958;
        }
    }
    ctx->pc = 0x21B958u;
label_21b958:
    // 0x21b958: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b95c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b960: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21b960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b964: 0x0  nop
    ctx->pc = 0x21b964u;
    // NOP
    // 0x21b968: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B968u;
    {
        const bool branch_taken_0x21b968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b968) {
            ctx->pc = 0x21B96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B968u;
            // 0x21b96c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B970u;
            goto label_21b970;
        }
    }
    ctx->pc = 0x21B970u;
label_21b970:
    // 0x21b970: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x21b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b974: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x21b974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21b978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b97c: 0x0  nop
    ctx->pc = 0x21b97cu;
    // NOP
    // 0x21b980: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B980u;
    {
        const bool branch_taken_0x21b980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b980) {
            ctx->pc = 0x21B984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B980u;
            // 0x21b984: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B988u;
            goto label_21b988;
        }
    }
    ctx->pc = 0x21B988u;
label_21b988:
    // 0x21b988: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b98c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b990: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21b990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b994: 0x0  nop
    ctx->pc = 0x21b994u;
    // NOP
    // 0x21b998: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21B998u;
    {
        const bool branch_taken_0x21b998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b998) {
            ctx->pc = 0x21B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B998u;
            // 0x21b99c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B9A0u;
            goto label_21b9a0;
        }
    }
    ctx->pc = 0x21B9A0u;
label_21b9a0:
    // 0x21b9a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21b9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21b9a4: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x21B9A4u;
    {
        const bool branch_taken_0x21b9a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B9A4u;
        // 0x21b9a8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b9a4) {
            ctx->pc = 0x21B910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b910;
        }
    }
    ctx->pc = 0x21B9ACu;
    // 0x21b9ac: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x21b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21b9b0:
    // 0x21b9b0: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x21b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21b9b4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x21b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21b9b8: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x21b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21b9bc: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x21b9bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x21b9c0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x21b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b9c4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x21b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21b9c8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x21b9c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x21b9cc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x21b9ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21b9d0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x21b9d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x21b9d4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x21b9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21b9d8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x21b9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21b9dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21b9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21b9e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21b9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b9e4: 0x0  nop
    ctx->pc = 0x21b9e4u;
    // NOP
    // 0x21b9e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21b9e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21b9ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x21b9ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21b9f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x21b9f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21b9f4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x21b9f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x21b9f8: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x21b9f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x21b9fc: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x21b9fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21ba00: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x21ba00u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x21ba04: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x21ba04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21ba08: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x21ba08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x21ba0c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21ba0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21ba10: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x21ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x21ba14: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21BA14u;
    {
        const bool branch_taken_0x21ba14 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA14u;
        // 0x21ba18: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba14) {
            ctx->pc = 0x21BA74u;
            goto label_21ba74;
        }
    }
    ctx->pc = 0x21BA1Cu;
    // 0x21ba1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ba1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ba20:
    // 0x21ba20: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ba24: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x21ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba28: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x21ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ba2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21ba2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ba30: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x21ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ba34: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x21ba34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21ba38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x21ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ba3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21ba3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21ba40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21ba44: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x21ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ba48: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x21ba48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21ba4c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x21ba4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21ba50: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x21BA50u;
    SET_GPR_U32(ctx, 31, 0x21BA58u);
    ctx->pc = 0x21BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA50u;
    // 0x21ba54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x21BA50u, 0x21BA58u)) {
        return;
    }
    ctx->pc = 0x21BA58u;
label_21ba58:
    // 0x21ba58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21ba58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ba5c: 0x0  nop
    ctx->pc = 0x21ba5cu;
    // NOP
    // 0x21ba60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21BA60u;
    {
        const bool branch_taken_0x21ba60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ba60) {
            ctx->pc = 0x21BA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BA60u;
            // 0x21ba64: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BA68u;
            goto label_21ba68;
        }
    }
    ctx->pc = 0x21BA68u;
label_21ba68:
    // 0x21ba68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21ba68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21ba6c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21BA6Cu;
    {
        const bool branch_taken_0x21ba6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA6Cu;
        // 0x21ba70: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba6c) {
            ctx->pc = 0x21BA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ba20;
        }
    }
    ctx->pc = 0x21BA74u;
label_21ba74:
    // 0x21ba74: 0xc09599c  jal         func_256670
    ctx->pc = 0x21BA74u;
    SET_GPR_U32(ctx, 31, 0x21BA7Cu);
    ctx->pc = 0x21BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA74u;
    // 0x21ba78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x21BA74u, 0x21BA7Cu)) {
        return;
    }
    ctx->pc = 0x21BA7Cu;
label_21ba7c:
    // 0x21ba7c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x21ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x21ba80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba84: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x21ba84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21ba88: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x21ba88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21ba8c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x21ba8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ba90: 0xb0a6000b  sdl         $a2, 0xB($a1)
    ctx->pc = 0x21ba90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ba94: 0xb4a60004  sdr         $a2, 0x4($a1)
    ctx->pc = 0x21ba94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ba98: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x21ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x21ba9c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x21ba9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21baa0: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x21baa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21baa4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x21baa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21baa8: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x21baa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21baac: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x21baacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21bab0: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x21bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x21bab4: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x21bab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21bab8: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x21bab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21babc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x21babcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21bac0: 0xb0a60023  sdl         $a2, 0x23($a1)
    ctx->pc = 0x21bac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21bac4: 0xb4a6001c  sdr         $a2, 0x1C($a1)
    ctx->pc = 0x21bac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21bac8: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x21bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x21bacc: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x21BACCu;
    SET_GPR_U32(ctx, 31, 0x21BAD4u);
    ctx->pc = 0x21BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BACCu;
    // 0x21bad0: 0xe4b40028  swc1        $f20, 0x28($a1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x21BACCu, 0x21BAD4u)) {
        return;
    }
    ctx->pc = 0x21BAD4u;
label_21bad4:
    // 0x21bad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21bad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bad8: 0x520000a0  beql        $s0, $zero, . + 4 + (0xA0 << 2)
    ctx->pc = 0x21BAD8u;
    {
        const bool branch_taken_0x21bad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bad8) {
            ctx->pc = 0x21BADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BAD8u;
            // 0x21badc: 0x7bb00300  lq          $s0, 0x300($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BD5Cu;
            goto label_21bd5c;
        }
    }
    ctx->pc = 0x21BAE0u;
    // 0x21bae0: 0xc0a0bc4  jal         func_282F10
    ctx->pc = 0x21BAE0u;
    SET_GPR_U32(ctx, 31, 0x21BAE8u);
    ctx->pc = 0x21BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAE0u;
    // 0x21bae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F10u, 0x21BAE0u, 0x21BAE8u)) {
        return;
    }
    ctx->pc = 0x21BAE8u;
label_21bae8:
    // 0x21bae8: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x21bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x21baec: 0xc0a0bbe  jal         func_282EF8
    ctx->pc = 0x21BAECu;
    SET_GPR_U32(ctx, 31, 0x21BAF4u);
    ctx->pc = 0x21BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAECu;
    // 0x21baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282EF8u, 0x21BAECu, 0x21BAF4u)) {
        return;
    }
    ctx->pc = 0x21BAF4u;
label_21baf4:
    // 0x21baf4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21baf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21baf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bafc: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x21bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21bb00: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21BB00u;
    SET_GPR_U32(ctx, 31, 0x21BB08u);
    ctx->pc = 0x21BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB00u;
    // 0x21bb04: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21BB00u, 0x21BB08u)) {
        return;
    }
    ctx->pc = 0x21BB08u;
label_21bb08:
    // 0x21bb08: 0xc0a0bc0  jal         func_282F00
    ctx->pc = 0x21BB08u;
    SET_GPR_U32(ctx, 31, 0x21BB10u);
    ctx->pc = 0x21BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB08u;
    // 0x21bb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F00u, 0x21BB08u, 0x21BB10u)) {
        return;
    }
    ctx->pc = 0x21BB10u;
label_21bb10:
    // 0x21bb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb14: 0xc0a0bc2  jal         func_282F08
    ctx->pc = 0x21BB14u;
    SET_GPR_U32(ctx, 31, 0x21BB1Cu);
    ctx->pc = 0x21BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BB14u;
    // 0x21bb18: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F08u, 0x21BB14u, 0x21BB1Cu)) {
        return;
    }
    ctx->pc = 0x21BB1Cu;
label_21bb1c:
    // 0x21bb1c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x21bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x21bb20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb24: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x21bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x21bb28: 0x8e940014  lw          $s4, 0x14($s4)
    ctx->pc = 0x21bb28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21bb2c: 0x18a0004b  blez        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x21BB2Cu;
    {
        const bool branch_taken_0x21bb2c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB2Cu;
        // 0x21bb30: 0xafb40264  sw          $s4, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb2c) {
            ctx->pc = 0x21BC5Cu;
            goto label_21bc5c;
        }
    }
    ctx->pc = 0x21BB34u;
    // 0x21bb34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21bb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21bb38: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x21bb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21bb3c: 0x27be0054  addiu       $fp, $sp, 0x54
    ctx->pc = 0x21bb3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x21bb40: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x21bb44: 0x0  nop
    ctx->pc = 0x21bb44u;
    // NOP
label_21bb48:
    // 0x21bb48: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x21bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21bb4c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21bb50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21bb54: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x21bb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21bb58: 0x86a818  mult        $s5, $a0, $a2
    ctx->pc = 0x21bb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x21bb5c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x21bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x21bb60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21bb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bb64: 0x24970001  addiu       $s7, $a0, 0x1
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21bb68: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x21bb68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21bb6c: 0x0  nop
    ctx->pc = 0x21bb6cu;
    // NOP
label_21bb70:
    // 0x21bb70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21bb70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21bb74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bb78: 0x1223000d  beq         $s1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21BB78u;
    {
        const bool branch_taken_0x21bb78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x21BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB78u;
        // 0x21bb7c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb78) {
            ctx->pc = 0x21BBB0u;
            goto label_21bbb0;
        }
    }
    ctx->pc = 0x21BB80u;
    // 0x21bb80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21BB80u;
    {
        const bool branch_taken_0x21bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB80u;
        // 0x21bb84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb80) {
            ctx->pc = 0x21BB98u;
            goto label_21bb98;
        }
    }
    ctx->pc = 0x21BB88u;
    // 0x21bb88: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x21BB88u;
    {
        const bool branch_taken_0x21bb88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb88) {
            ctx->pc = 0x21BB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BB88u;
            // 0x21bb8c: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BB90u;
    // 0x21bb90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21BB90u;
    {
        const bool branch_taken_0x21bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb90) {
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BB98u;
label_21bb98:
    // 0x21bb98: 0x12240007  beq         $s1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BB98u;
    {
        const bool branch_taken_0x21bb98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x21BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB98u;
        // 0x21bb9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb98) {
            ctx->pc = 0x21BBB8u;
            goto label_21bbb8;
        }
    }
    ctx->pc = 0x21BBA0u;
    // 0x21bba0: 0x52250006  beql        $s1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BBA0u;
    {
        const bool branch_taken_0x21bba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x21bba0) {
            ctx->pc = 0x21BBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BBA0u;
            // 0x21bba4: 0xc640000c  lwc1        $f0, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BBA8u;
    // 0x21bba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21BBA8u;
    {
        const bool branch_taken_0x21bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bba8) {
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BBB0u;
label_21bbb0:
    // 0x21bbb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BBB0u;
    {
        const bool branch_taken_0x21bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBB0u;
        // 0x21bbb4: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbb0) {
            ctx->pc = 0x21BBBCu;
            goto label_21bbbc;
        }
    }
    ctx->pc = 0x21BBB8u;
label_21bbb8:
    // 0x21bbb8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x21bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bbbc:
    // 0x21bbbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x21bbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21bbc0: 0x0  nop
    ctx->pc = 0x21bbc0u;
    // NOP
    // 0x21bbc4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x21BBC4u;
    {
        const bool branch_taken_0x21bbc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BBC4u;
        // 0x21bbc8: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbc4) {
            ctx->pc = 0x21BC38u;
            goto label_21bc38;
        }
    }
    ctx->pc = 0x21BBCCu;
    // 0x21bbcc: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21bbccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21bbd0: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x21bbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x21bbd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21bbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbd8: 0x508006  srlv        $s0, $s0, $v0
    ctx->pc = 0x21bbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x21bbdc: 0x8fa70258  lw          $a3, 0x258($sp)
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x21bbe0: 0xd52821  addu        $a1, $a2, $s5
    ctx->pc = 0x21bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x21bbe4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x21bbe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x21bbe8: 0x103180  sll         $a2, $s0, 6
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x21bbec: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x21BBECu;
    SET_GPR_U32(ctx, 31, 0x21BBF4u);
    ctx->pc = 0x21BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBECu;
    // 0x21bbf0: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x21BBECu, 0x21BBF4u)) {
        return;
    }
    ctx->pc = 0x21BBF4u;
label_21bbf4:
    // 0x21bbf4: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x21BBF4u;
    SET_GPR_U32(ctx, 31, 0x21BBFCu);
    ctx->pc = 0x21BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BBF4u;
    // 0x21bbf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x21BBF4u, 0x21BBFCu)) {
        return;
    }
    ctx->pc = 0x21BBFCu;
label_21bbfc:
    // 0x21bbfc: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x21bbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x21bc00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21bc00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21bc04: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x21bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x21bc08: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x21bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21bc0c: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x21bc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x21bc10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21bc14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21bc18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21bc1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21bc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21bc24: 0x0  nop
    ctx->pc = 0x21bc24u;
    // NOP
    // 0x21bc28: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x21BC28u;
    {
        const bool branch_taken_0x21bc28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21bc28) {
            ctx->pc = 0x21BC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC28u;
            // 0x21bc2c: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC3Cu;
            goto label_21bc3c;
        }
    }
    ctx->pc = 0x21BC30u;
    // 0x21bc30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21BC30u;
    {
        const bool branch_taken_0x21bc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC30u;
        // 0x21bc34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc30) {
            ctx->pc = 0x21BC40u;
            goto label_21bc40;
        }
    }
    ctx->pc = 0x21BC38u;
label_21bc38:
    // 0x21bc38: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x21bc38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21bc3c:
    // 0x21bc3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21bc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21bc40:
    // 0x21bc40: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x21bc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21bc44: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x21BC44u;
    {
        const bool branch_taken_0x21bc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC44u;
        // 0x21bc48: 0x8fa30254  lw          $v1, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc44) {
            ctx->pc = 0x21BB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb70;
        }
    }
    ctx->pc = 0x21BC4Cu;
    // 0x21bc4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21bc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc50: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x21bc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21bc54: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x21BC54u;
    {
        const bool branch_taken_0x21bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC54u;
        // 0x21bc58: 0x8fa7025c  lw          $a3, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc54) {
            ctx->pc = 0x21BB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bb48;
        }
    }
    ctx->pc = 0x21BC5Cu;
label_21bc5c:
    // 0x21bc5c: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x21BC5Cu;
    {
        const bool branch_taken_0x21bc5c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x21BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC5Cu;
        // 0x21bc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc5c) {
            ctx->pc = 0x21BCC8u;
            goto label_21bcc8;
        }
    }
    ctx->pc = 0x21BC64u;
    // 0x21bc64: 0x8fb20258  lw          $s2, 0x258($sp)
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x21bc68: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x21bc6c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21bc70:
    // 0x21bc70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21bc74: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BC74u;
    {
        const bool branch_taken_0x21bc74 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x21bc74) {
            ctx->pc = 0x21BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC74u;
            // 0x21bc78: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC90u;
            goto label_21bc90;
        }
    }
    ctx->pc = 0x21BC7Cu;
    // 0x21bc7c: 0xc0ad1d0  jal         func_2B4740
    ctx->pc = 0x21BC7Cu;
    SET_GPR_U32(ctx, 31, 0x21BC84u);
    ctx->pc = 0x21BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BC7Cu;
    // 0x21bc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4740u, 0x21BC7Cu, 0x21BC84u)) {
        return;
    }
    ctx->pc = 0x21BC84u;
label_21bc84:
    // 0x21bc84: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21BC84u;
    {
        const bool branch_taken_0x21bc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc84) {
            ctx->pc = 0x21BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BC84u;
            // 0x21bc88: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BC8Cu;
            goto label_21bc8c;
        }
    }
    ctx->pc = 0x21BC8Cu;
label_21bc8c:
    // 0x21bc8c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x21bc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_21bc90:
    // 0x21bc90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21bc94: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x21BC94u;
    {
        const bool branch_taken_0x21bc94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC94u;
        // 0x21bc98: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc94) {
            ctx->pc = 0x21BC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bc70;
        }
    }
    ctx->pc = 0x21BC9Cu;
    // 0x21bc9c: 0x1ac0000a  blez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x21BC9Cu;
    {
        const bool branch_taken_0x21bc9c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x21BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BC9Cu;
        // 0x21bca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc9c) {
            ctx->pc = 0x21BCC8u;
            goto label_21bcc8;
        }
    }
    ctx->pc = 0x21BCA4u;
    // 0x21bca4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x21bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x21bca8: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x21bca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcac: 0x0  nop
    ctx->pc = 0x21bcacu;
    // NOP
label_21bcb0:
    // 0x21bcb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21bcb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21bcb8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21bcbc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x21bcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21bcc0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21BCC0u;
    {
        const bool branch_taken_0x21bcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCC0u;
        // 0x21bcc4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcc0) {
            ctx->pc = 0x21BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bcb0;
        }
    }
    ctx->pc = 0x21BCC8u;
label_21bcc8:
    // 0x21bcc8: 0x8fa70250  lw          $a3, 0x250($sp)
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x21bccc: 0x680c0  sll         $s0, $a2, 3
    ctx->pc = 0x21bcccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21bcd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21bcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcd8: 0xc080924  jal         func_202490
    ctx->pc = 0x21BCD8u;
    SET_GPR_U32(ctx, 31, 0x21BCE0u);
    ctx->pc = 0x21BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCD8u;
    // 0x21bcdc: 0xace6002c  sw          $a2, 0x2C($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x21BCD8u, 0x21BCE0u)) {
        return;
    }
    ctx->pc = 0x21BCE0u;
label_21bce0:
    // 0x21bce0: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x21bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x21bce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21bce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21bcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcf0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21BCF0u;
    SET_GPR_U32(ctx, 31, 0x21BCF8u);
    ctx->pc = 0x21BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BCF0u;
    // 0x21bcf4: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21BCF0u, 0x21BCF8u)) {
        return;
    }
    ctx->pc = 0x21BCF8u;
label_21bcf8:
    // 0x21bcf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21bcf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcfc: 0x1ac00016  blez        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x21BCFCu;
    {
        const bool branch_taken_0x21bcfc = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x21BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BCFCu;
        // 0x21bd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bcfc) {
            ctx->pc = 0x21BD58u;
            goto label_21bd58;
        }
    }
    ctx->pc = 0x21BD04u;
    // 0x21bd04: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x21bd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21bd08: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x21bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x21bd0c: 0x0  nop
    ctx->pc = 0x21bd0cu;
    // NOP
label_21bd10:
    // 0x21bd10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21bd14: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21BD14u;
    {
        const bool branch_taken_0x21bd14 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD14u;
        // 0x21bd18: 0x8fa40250  lw          $a0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd14) {
            ctx->pc = 0x21BD44u;
            goto label_21bd44;
        }
    }
    ctx->pc = 0x21BD1Cu;
    // 0x21bd1c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x21bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x21bd20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21bd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21bd24: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x21bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x21bd28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21bd2c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x21bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x21bd30: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x21bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x21bd34: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x21bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bd38: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x21bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21bd3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21bd40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_21bd44:
    // 0x21bd44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21bd48: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x21bd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x21bd4c: 0xb6102a  slt         $v0, $a1, $s6
    ctx->pc = 0x21bd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x21bd50: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21BD50u;
    {
        const bool branch_taken_0x21bd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD50u;
        // 0x21bd54: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bd50) {
            ctx->pc = 0x21BD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bd10;
        }
    }
    ctx->pc = 0x21BD58u;
label_21bd58:
    // 0x21bd58: 0x7bb00300  lq          $s0, 0x300($sp)
    ctx->pc = 0x21bd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_21bd5c:
    // 0x21bd5c: 0x7bb102f0  lq          $s1, 0x2F0($sp)
    ctx->pc = 0x21bd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x21bd60: 0x7bb202e0  lq          $s2, 0x2E0($sp)
    ctx->pc = 0x21bd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x21bd64: 0x7bb302d0  lq          $s3, 0x2D0($sp)
    ctx->pc = 0x21bd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x21bd68: 0x7bb402c0  lq          $s4, 0x2C0($sp)
    ctx->pc = 0x21bd68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x21bd6c: 0x7bb502b0  lq          $s5, 0x2B0($sp)
    ctx->pc = 0x21bd6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x21bd70: 0x7bb602a0  lq          $s6, 0x2A0($sp)
    ctx->pc = 0x21bd70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x21bd74: 0x7bb70290  lq          $s7, 0x290($sp)
    ctx->pc = 0x21bd74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x21bd78: 0x7bbe0280  lq          $fp, 0x280($sp)
    ctx->pc = 0x21bd78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x21bd7c: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x21bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x21bd80: 0xc7b40310  lwc1        $f20, 0x310($sp)
    ctx->pc = 0x21bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21bd84: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BD84u;
        // 0x21bd88: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BD8Cu;
    // 0x21bd8c: 0x0  nop
    ctx->pc = 0x21bd8cu;
    // NOP
    ctx->pc = 0x21bd90u;
}
