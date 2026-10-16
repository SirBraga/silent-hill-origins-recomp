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

// Function: sub_001426C8
// Address: 0x1426c8 - 0x1429c0
void sub_001426C8_0x1426c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001426C8_0x1426c8");
#endif

    switch (ctx->pc) {
        case 0x1426e4u: goto label_1426e4;
        case 0x142708u: goto label_142708;
        case 0x142910u: goto label_142910;
        case 0x142918u: goto label_142918;
        case 0x142954u: goto label_142954;
        case 0x142998u: goto label_142998;
        case 0x1429acu: goto label_1429ac;
        default: break;
    }

    ctx->pc = 0x1426c8u;

    // 0x1426c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1426cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1426ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1426d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1426d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1426d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1426d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1426d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1426dc: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1426DCu;
    SET_GPR_U32(ctx, 31, 0x1426E4u);
    ctx->pc = 0x1426E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426DCu;
    // 0x1426e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1426DCu, 0x1426E4u)) {
        return;
    }
    ctx->pc = 0x1426E4u;
label_1426e4:
    // 0x1426e4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1426e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1426e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1426ec: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1426ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1426f0: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1426F0u;
    {
        const bool branch_taken_0x1426f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1426f0) {
            ctx->pc = 0x1426F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1426F0u;
            // 0x1426f4: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142710u;
            goto label_142710;
        }
    }
    ctx->pc = 0x1426F8u;
    // 0x1426f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1426f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1426fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1426fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142700: 0xc051a1e  jal         func_146878
    ctx->pc = 0x142700u;
    SET_GPR_U32(ctx, 31, 0x142708u);
    ctx->pc = 0x142704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142700u;
    // 0x142704: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x146878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146878u, 0x142700u, 0x142708u)) {
        return;
    }
    ctx->pc = 0x142708u;
label_142708:
    // 0x142708: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x142708u;
    {
        const bool branch_taken_0x142708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142708u;
        // 0x14270c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142708) {
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x142710u;
label_142710:
    // 0x142710: 0x54820087  bnel        $a0, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x142710u;
    {
        const bool branch_taken_0x142710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x142710) {
            ctx->pc = 0x142714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142710u;
            // 0x142714: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142930u;
            goto label_142930;
        }
    }
    ctx->pc = 0x142718u;
    // 0x142718: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14271c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x14271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x142720: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x142720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x142724: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x142724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x142728: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x142728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14272c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x14272cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x142730: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x142730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x142734: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x142734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x142738: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x142738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14273c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x14273cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x142740: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x142740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142744: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x142744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142748: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x142748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14274c: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x14274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142750: 0xb0860027  sdl         $a2, 0x27($a0)
    ctx->pc = 0x142750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142754: 0xb4860020  sdr         $a2, 0x20($a0)
    ctx->pc = 0x142754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142758: 0xb087002f  sdl         $a3, 0x2F($a0)
    ctx->pc = 0x142758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14275c: 0xb4870028  sdr         $a3, 0x28($a0)
    ctx->pc = 0x14275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142760: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x142760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x142764: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x142764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x142768: 0x6865002f  ldl         $a1, 0x2F($v1)
    ctx->pc = 0x142768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14276c: 0x6c650028  ldr         $a1, 0x28($v1)
    ctx->pc = 0x14276cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x142770: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x142770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x142774: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x142774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x142778: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x142778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14277c: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x14277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x142780: 0xb0820037  sdl         $v0, 0x37($a0)
    ctx->pc = 0x142780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142784: 0xb4820030  sdr         $v0, 0x30($a0)
    ctx->pc = 0x142784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142788: 0xb085003f  sdl         $a1, 0x3F($a0)
    ctx->pc = 0x142788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14278c: 0xb4850038  sdr         $a1, 0x38($a0)
    ctx->pc = 0x14278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142790: 0xb0860047  sdl         $a2, 0x47($a0)
    ctx->pc = 0x142790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142794: 0xb4860040  sdr         $a2, 0x40($a0)
    ctx->pc = 0x142794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142798: 0xb087004f  sdl         $a3, 0x4F($a0)
    ctx->pc = 0x142798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14279c: 0xb4870048  sdr         $a3, 0x48($a0)
    ctx->pc = 0x14279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427a0: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1427a4: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x1427a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1427a8: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x1427a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1427ac: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x1427acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1427b0: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x1427b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1427b4: 0x68860027  ldl         $a2, 0x27($a0)
    ctx->pc = 0x1427b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1427b8: 0x6c860020  ldr         $a2, 0x20($a0)
    ctx->pc = 0x1427b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1427bc: 0x6887002f  ldl         $a3, 0x2F($a0)
    ctx->pc = 0x1427bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1427c0: 0x6c870028  ldr         $a3, 0x28($a0)
    ctx->pc = 0x1427c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1427c4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1427c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427c8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1427c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427cc: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x1427ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427d0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x1427d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427d4: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x1427d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427d8: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x1427d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427dc: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x1427dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427e0: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x1427e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1427e4: 0x68830037  ldl         $v1, 0x37($a0)
    ctx->pc = 0x1427e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1427e8: 0x6c830030  ldr         $v1, 0x30($a0)
    ctx->pc = 0x1427e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1427ec: 0x6885003f  ldl         $a1, 0x3F($a0)
    ctx->pc = 0x1427ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1427f0: 0x6c850038  ldr         $a1, 0x38($a0)
    ctx->pc = 0x1427f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1427f4: 0x68860047  ldl         $a2, 0x47($a0)
    ctx->pc = 0x1427f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1427f8: 0x6c860040  ldr         $a2, 0x40($a0)
    ctx->pc = 0x1427f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1427fc: 0x6887004f  ldl         $a3, 0x4F($a0)
    ctx->pc = 0x1427fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x142800: 0x6c870048  ldr         $a3, 0x48($a0)
    ctx->pc = 0x142800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x142804: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x142804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142808: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x142808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14280c: 0xb045002f  sdl         $a1, 0x2F($v0)
    ctx->pc = 0x14280cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142810: 0xb4450028  sdr         $a1, 0x28($v0)
    ctx->pc = 0x142810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142814: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x142814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142818: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x142818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14281c: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x14281cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142820: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x142820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142824: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x142828: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x142828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14282c: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x14282cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x142830: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x142830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x142834: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x142834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x142838: 0x68860027  ldl         $a2, 0x27($a0)
    ctx->pc = 0x142838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14283c: 0x6c860020  ldr         $a2, 0x20($a0)
    ctx->pc = 0x14283cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x142840: 0x6887002f  ldl         $a3, 0x2F($a0)
    ctx->pc = 0x142840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x142844: 0x6c870028  ldr         $a3, 0x28($a0)
    ctx->pc = 0x142844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x142848: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x142848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14284c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x14284cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142850: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x142850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142854: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x142854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142858: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x142858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14285c: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x14285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142860: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x142860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142864: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x142864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142868: 0x68820037  ldl         $v0, 0x37($a0)
    ctx->pc = 0x142868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14286c: 0x6c820030  ldr         $v0, 0x30($a0)
    ctx->pc = 0x14286cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x142870: 0x6885003f  ldl         $a1, 0x3F($a0)
    ctx->pc = 0x142870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x142874: 0x6c850038  ldr         $a1, 0x38($a0)
    ctx->pc = 0x142874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x142878: 0x68860047  ldl         $a2, 0x47($a0)
    ctx->pc = 0x142878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14287c: 0x6c860040  ldr         $a2, 0x40($a0)
    ctx->pc = 0x14287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x142880: 0x6887004f  ldl         $a3, 0x4F($a0)
    ctx->pc = 0x142880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x142884: 0x6c870048  ldr         $a3, 0x48($a0)
    ctx->pc = 0x142884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x142888: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x142888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14288c: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x14288cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142890: 0xb065002f  sdl         $a1, 0x2F($v1)
    ctx->pc = 0x142890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142894: 0xb4650028  sdr         $a1, 0x28($v1)
    ctx->pc = 0x142894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x142898: 0xb0660037  sdl         $a2, 0x37($v1)
    ctx->pc = 0x142898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14289c: 0xb4660030  sdr         $a2, 0x30($v1)
    ctx->pc = 0x14289cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1428a0: 0xb067003f  sdl         $a3, 0x3F($v1)
    ctx->pc = 0x1428a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1428a4: 0xb4670038  sdr         $a3, 0x38($v1)
    ctx->pc = 0x1428a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1428a8: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1428ac: 0xc601017c  lwc1        $f1, 0x17C($s0)
    ctx->pc = 0x1428acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1428b0: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1428b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1428b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1428b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1428b8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1428b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428bc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1428bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1428c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1428c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1428c4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1428c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1428c8: 0xc602017c  lwc1        $f2, 0x17C($s0)
    ctx->pc = 0x1428c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1428cc: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1428ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1428d0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1428d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1428d4: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1428d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428d8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1428d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1428dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1428dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1428e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1428e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1428e4: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x1428e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1428e8: 0xc602017c  lwc1        $f2, 0x17C($s0)
    ctx->pc = 0x1428e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1428ec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1428ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1428f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1428f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1428f4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1428f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1428f8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1428f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1428fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1428fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x142900: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x142900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x142904: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x142904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x142908: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x142908u;
    SET_GPR_U32(ctx, 31, 0x142910u);
    ctx->pc = 0x14290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142908u;
    // 0x14290c: 0x8e040120  lw          $a0, 0x120($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x142908u, 0x142910u)) {
        return;
    }
    ctx->pc = 0x142910u;
label_142910:
    // 0x142910: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x142910u;
    SET_GPR_U32(ctx, 31, 0x142918u);
    ctx->pc = 0x142914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142910u;
    // 0x142914: 0x8e040124  lw          $a0, 0x124($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x142910u, 0x142918u)) {
        return;
    }
    ctx->pc = 0x142918u;
label_142918:
    // 0x142918: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x142918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x14291c: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14291Cu;
    {
        const bool branch_taken_0x14291c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14291c) {
            ctx->pc = 0x142920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14291Cu;
            // 0x142920: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1429ACu;
            goto label_1429ac;
        }
    }
    ctx->pc = 0x142924u;
    // 0x142924: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x142924u;
    {
        const bool branch_taken_0x142924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142924u;
        // 0x142928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142924) {
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x14292Cu;
    // 0x14292c: 0x0  nop
    ctx->pc = 0x14292cu;
    // NOP
label_142930:
    // 0x142930: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x142930u;
    {
        const bool branch_taken_0x142930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x142930) {
            ctx->pc = 0x142934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142930u;
            // 0x142934: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14295Cu;
            goto label_14295c;
        }
    }
    ctx->pc = 0x142938u;
    // 0x142938: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x14293c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142940: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x142940u;
    {
        const bool branch_taken_0x142940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x142940) {
            ctx->pc = 0x142944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142940u;
            // 0x142944: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x142948u;
    // 0x142948: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x142948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x14294c: 0xc0519f4  jal         func_1467D0
    ctx->pc = 0x14294Cu;
    SET_GPR_U32(ctx, 31, 0x142954u);
    ctx->pc = 0x142950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14294Cu;
    // 0x142950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1467D0u, 0x14294Cu, 0x142954u)) {
        return;
    }
    ctx->pc = 0x142954u;
label_142954:
    // 0x142954: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x142954u;
    {
        const bool branch_taken_0x142954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142954u;
        // 0x142958: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142954) {
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x14295Cu;
label_14295c:
    // 0x14295c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14295Cu;
    {
        const bool branch_taken_0x14295c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14295c) {
            ctx->pc = 0x142960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14295Cu;
            // 0x142960: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142978u;
            goto label_142978;
        }
    }
    ctx->pc = 0x142964u;
    // 0x142964: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x142968: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x142968u;
    {
        const bool branch_taken_0x142968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142968) {
            ctx->pc = 0x14296Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142968u;
            // 0x14296c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x142970u;
    // 0x142970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142970u;
    {
        const bool branch_taken_0x142970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142970u;
        // 0x142974: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142970) {
            ctx->pc = 0x142990u;
            goto label_142990;
        }
    }
    ctx->pc = 0x142978u;
label_142978:
    // 0x142978: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x142978u;
    {
        const bool branch_taken_0x142978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x142978) {
            ctx->pc = 0x14297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142978u;
            // 0x14297c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x142980u;
    // 0x142980: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x142984: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142984u;
    {
        const bool branch_taken_0x142984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142984u;
        // 0x142988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142984) {
            ctx->pc = 0x1429A0u;
            goto label_1429a0;
        }
    }
    ctx->pc = 0x14298Cu;
    // 0x14298c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x14298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_142990:
    // 0x142990: 0xc051a14  jal         func_146850
    ctx->pc = 0x142990u;
    SET_GPR_U32(ctx, 31, 0x142998u);
    ctx->pc = 0x142994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142990u;
    // 0x142994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146850u, 0x142990u, 0x142998u)) {
        return;
    }
    ctx->pc = 0x142998u;
label_142998:
    // 0x142998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x142998u;
    {
        const bool branch_taken_0x142998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142998u;
        // 0x14299c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142998) {
            ctx->pc = 0x1429B0u;
            goto label_1429b0;
        }
    }
    ctx->pc = 0x1429A0u;
label_1429a0:
    // 0x1429a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1429a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1429a4: 0xc0519f4  jal         func_1467D0
    ctx->pc = 0x1429A4u;
    SET_GPR_U32(ctx, 31, 0x1429ACu);
    ctx->pc = 0x1429A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429A4u;
    // 0x1429a8: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1467D0u, 0x1429A4u, 0x1429ACu)) {
        return;
    }
    ctx->pc = 0x1429ACu;
label_1429ac:
    // 0x1429ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1429acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1429b0:
    // 0x1429b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1429b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1429b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1429b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1429b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1429B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429B8u;
        // 0x1429bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429C0u;
}
