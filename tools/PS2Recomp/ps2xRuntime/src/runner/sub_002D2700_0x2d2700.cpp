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

// Function: sub_002D2700
// Address: 0x2d2700 - 0x2d27c0
void sub_002D2700_0x2d2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2700_0x2d2700");
#endif

    switch (ctx->pc) {
        case 0x2d274cu: goto label_2d274c;
        default: break;
    }

    ctx->pc = 0x2d2700u;

    // 0x2d2700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2704: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d270c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d2710: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d2710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2718: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d271c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x2d271cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2d2720: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2d2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2724: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d2724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2728: 0x0  nop
    ctx->pc = 0x2d2728u;
    // NOP
    // 0x2d272c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D272Cu;
    {
        const bool branch_taken_0x2d272c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D272Cu;
        // 0x2d2730: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d272c) {
            ctx->pc = 0x2D2750u;
            goto label_2d2750;
        }
    }
    ctx->pc = 0x2D2734u;
    // 0x2d2734: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d2734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d2738: 0x26060094  addiu       $a2, $s0, 0x94
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x2d273c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d273cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d2740: 0x26070088  addiu       $a3, $s0, 0x88
    ctx->pc = 0x2d2740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x2d2744: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D2744u;
    SET_GPR_U32(ctx, 31, 0x2D274Cu);
    ctx->pc = 0x2D2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2744u;
    // 0x2d2748: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D5A30u, 0x2D2744u, 0x2D274Cu)) {
        return;
    }
    ctx->pc = 0x2D274Cu;
label_2d274c:
    // 0x2d274c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2d274cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2d2750:
    // 0x2d2750: 0x6a02009b  ldl         $v0, 0x9B($s0)
    ctx->pc = 0x2d2750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d2754: 0x6e020094  ldr         $v0, 0x94($s0)
    ctx->pc = 0x2d2754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d2758: 0x6a0300a3  ldl         $v1, 0xA3($s0)
    ctx->pc = 0x2d2758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d275c: 0x6e03009c  ldr         $v1, 0x9C($s0)
    ctx->pc = 0x2d275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d2760: 0x6a0400ab  ldl         $a0, 0xAB($s0)
    ctx->pc = 0x2d2760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d2764: 0x6e0400a4  ldr         $a0, 0xA4($s0)
    ctx->pc = 0x2d2764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d2768: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x2d2768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2d276c: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2d276cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2770: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2d2770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2774: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2d2774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2778: 0xb6430008  sdr         $v1, 0x8($s2)
    ctx->pc = 0x2d2778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d277c: 0xb2440017  sdl         $a0, 0x17($s2)
    ctx->pc = 0x2d277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2780: 0xb6440010  sdr         $a0, 0x10($s2)
    ctx->pc = 0x2d2780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2784: 0xae450018  sw          $a1, 0x18($s2)
    ctx->pc = 0x2d2784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 5));
    // 0x2d2788: 0x6a02008f  ldl         $v0, 0x8F($s0)
    ctx->pc = 0x2d2788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d278c: 0x6e020088  ldr         $v0, 0x88($s0)
    ctx->pc = 0x2d278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d2790: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2d2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d2794: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d2794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2798: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d2798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d279c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d279cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d27a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d27a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d27a4: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2d27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d27a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d27a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d27ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d27acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d27b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d27b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d27b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27B4u;
        // 0x2d27b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D27B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D27BCu;
    // 0x2d27bc: 0x0  nop
    ctx->pc = 0x2d27bcu;
    // NOP
    ctx->pc = 0x2d27c0u;
}
