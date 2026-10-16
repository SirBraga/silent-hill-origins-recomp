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

// Function: sub_002D63B0
// Address: 0x2d63b0 - 0x2d6500
void sub_002D63B0_0x2d63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D63B0_0x2d63b0");
#endif

    switch (ctx->pc) {
        case 0x2d6400u: goto label_2d6400;
        case 0x2d643cu: goto label_2d643c;
        case 0x2d6454u: goto label_2d6454;
        case 0x2d64c0u: goto label_2d64c0;
        default: break;
    }

    ctx->pc = 0x2d63b0u;

    // 0x2d63b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2d63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2d63b4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2d63b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2d63b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2d63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2d63bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d63bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63c0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2d63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2d63c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d63c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63c8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2d63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2d63cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d63ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63d0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2d63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2d63d4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2d63d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d63d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d63dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d63dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63e0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2d63e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2d63e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d63e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d63ec: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d63ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2d63f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2d63f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D63F4u;
    {
        const bool branch_taken_0x2d63f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63F4u;
        // 0x2d63f8: 0x8ef20040  lw          $s2, 0x40($s7) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63f4) {
            ctx->pc = 0x2D64B8u;
            goto label_2d64b8;
        }
    }
    ctx->pc = 0x2D63FCu;
    // 0x2d63fc: 0x0  nop
    ctx->pc = 0x2d63fcu;
    // NOP
label_2d6400:
    // 0x2d6400: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x2d6400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d6404: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x2d6404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d6408: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2d6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2d640c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d640cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6410: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d6410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6414: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2d6414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2d6418: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x2d6418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d641c: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x2d641cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d6420: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x2d6420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d6424: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2d6424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6428: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2d6428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d642c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x2d642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x2d6430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6434: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x2D6434u;
    SET_GPR_U32(ctx, 31, 0x2D643Cu);
    ctx->pc = 0x2D6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6434u;
    // 0x2d6438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69A8u, 0x2D6434u, 0x2D643Cu)) {
        return;
    }
    ctx->pc = 0x2D643Cu;
label_2d643c:
    // 0x2d643c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6444: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d6444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6448: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d6448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d644c: 0xc0aa554  jal         func_2A9550
    ctx->pc = 0x2D644Cu;
    SET_GPR_U32(ctx, 31, 0x2D6454u);
    ctx->pc = 0x2D6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D644Cu;
    // 0x2d6450: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9550u, 0x2D644Cu, 0x2D6454u)) {
        return;
    }
    ctx->pc = 0x2D6454u;
label_2d6454:
    // 0x2d6454: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6454u;
    {
        const bool branch_taken_0x2d6454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6454u;
        // 0x2d6458: 0xc7a1003c  lwc1        $f1, 0x3C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6454) {
            ctx->pc = 0x2D64B4u;
            goto label_2d64b4;
        }
    }
    ctx->pc = 0x2D645Cu;
    // 0x2d645c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2d645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6460: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d6460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6464: 0x0  nop
    ctx->pc = 0x2d6464u;
    // NOP
    // 0x2d6468: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6468u;
    {
        const bool branch_taken_0x2d6468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6468) {
            ctx->pc = 0x2D646Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6468u;
            // 0x2d646c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64B8u;
            goto label_2d64b8;
        }
    }
    ctx->pc = 0x2D6470u;
    // 0x2d6470: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x2d6470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d6474: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x2d6474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d6478: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x2d6478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d647c: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x2d647cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d6480: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x2d6480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d6484: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x2d6484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d6488: 0x6ba7003f  ldl         $a3, 0x3F($sp)
    ctx->pc = 0x2d6488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d648c: 0x6fa70038  ldr         $a3, 0x38($sp)
    ctx->pc = 0x2d648cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d6490: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x2d6490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6494: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x2d6494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6498: 0xb225000f  sdl         $a1, 0xF($s1)
    ctx->pc = 0x2d6498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d649c: 0xb6250008  sdr         $a1, 0x8($s1)
    ctx->pc = 0x2d649cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d64a0: 0xb2260017  sdl         $a2, 0x17($s1)
    ctx->pc = 0x2d64a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d64a4: 0xb6260010  sdr         $a2, 0x10($s1)
    ctx->pc = 0x2d64a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d64a8: 0xb227001f  sdl         $a3, 0x1F($s1)
    ctx->pc = 0x2d64a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d64ac: 0xb6270018  sdr         $a3, 0x18($s1)
    ctx->pc = 0x2d64acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d64b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d64b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d64b4:
    // 0x2d64b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d64b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d64b8:
    // 0x2d64b8: 0xc0b5a68  jal         func_2D69A0
    ctx->pc = 0x2D64B8u;
    SET_GPR_U32(ctx, 31, 0x2D64C0u);
    ctx->pc = 0x2D64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64B8u;
    // 0x2d64bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69A0u, 0x2D64B8u, 0x2D64C0u)) {
        return;
    }
    ctx->pc = 0x2D64C0u;
label_2d64c0:
    // 0x2d64c0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d64c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d64c4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2D64C4u;
    {
        const bool branch_taken_0x2d64c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64C4u;
        // 0x2d64c8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64c4) {
            ctx->pc = 0x2D6400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6400;
        }
    }
    ctx->pc = 0x2D64CCu;
    // 0x2d64cc: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x2d64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x2d64d0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2d64d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d64d4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2d64d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d64d8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2d64d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d64dc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2d64dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d64e0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2d64e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d64e4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2d64e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d64e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d64e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d64ec: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2d64ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d64f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d64f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64F4u;
        // 0x2d64f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64FCu;
    // 0x2d64fc: 0x0  nop
    ctx->pc = 0x2d64fcu;
    // NOP
    ctx->pc = 0x2d6500u;
}
