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

// Function: sub_002896E8
// Address: 0x2896e8 - 0x2897a0
void sub_002896E8_0x2896e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002896E8_0x2896e8");
#endif

    switch (ctx->pc) {
        case 0x289768u: goto label_289768;
        case 0x289778u: goto label_289778;
        default: break;
    }

    ctx->pc = 0x2896e8u;

    // 0x2896e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2896e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2896ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2896f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2896f4: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2896f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2896f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2896f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2896fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2896fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289700: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x289700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x289704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x289704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28970c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289710: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x289710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289714: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x289714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x289718: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x289718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x28971c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x28971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x289720: 0x6a020097  ldl         $v0, 0x97($s0)
    ctx->pc = 0x289720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x289724: 0x6e020090  ldr         $v0, 0x90($s0)
    ctx->pc = 0x289724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x289728: 0x6a03009f  ldl         $v1, 0x9F($s0)
    ctx->pc = 0x289728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28972c: 0x6e030098  ldr         $v1, 0x98($s0)
    ctx->pc = 0x28972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x289730: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x289730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289734: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x289734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289738: 0xb3a3001b  sdl         $v1, 0x1B($sp)
    ctx->pc = 0x289738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28973c: 0xb7a30014  sdr         $v1, 0x14($sp)
    ctx->pc = 0x28973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289740: 0x6a0200a7  ldl         $v0, 0xA7($s0)
    ctx->pc = 0x289740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x289744: 0x6e0200a0  ldr         $v0, 0xA0($s0)
    ctx->pc = 0x289744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x289748: 0x6a0300af  ldl         $v1, 0xAF($s0)
    ctx->pc = 0x289748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28974c: 0x6e0300a8  ldr         $v1, 0xA8($s0)
    ctx->pc = 0x28974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x289750: 0xb3a20023  sdl         $v0, 0x23($sp)
    ctx->pc = 0x289750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289754: 0xb7a2001c  sdr         $v0, 0x1C($sp)
    ctx->pc = 0x289754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289758: 0xb3a3002b  sdl         $v1, 0x2B($sp)
    ctx->pc = 0x289758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28975c: 0xb7a30024  sdr         $v1, 0x24($sp)
    ctx->pc = 0x28975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289760: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x289760u;
    SET_GPR_U32(ctx, 31, 0x289768u);
    ctx->pc = 0x289764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289760u;
    // 0x289764: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x289760u, 0x289768u)) {
        return;
    }
    ctx->pc = 0x289768u;
label_289768:
    // 0x289768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x289768u;
    {
        const bool branch_taken_0x289768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289768u;
        // 0x28976c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289768) {
            ctx->pc = 0x289784u;
            goto label_289784;
        }
    }
    ctx->pc = 0x289770u;
    // 0x289770: 0xc0c195c  jal         func_306570
    ctx->pc = 0x289770u;
    SET_GPR_U32(ctx, 31, 0x289778u);
    ctx->pc = 0x289774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289770u;
    // 0x289774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306570u, 0x289770u, 0x289778u)) {
        return;
    }
    ctx->pc = 0x289778u;
label_289778:
    // 0x289778: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x289778u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x28977c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28977Cu;
    {
        const bool branch_taken_0x28977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28977Cu;
        // 0x289780: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28977c) {
            ctx->pc = 0x289788u;
            goto label_289788;
        }
    }
    ctx->pc = 0x289784u;
label_289784:
    // 0x289784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289788:
    // 0x289788: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x289788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28978c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28978cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289794: 0x3e00008  jr          $ra
    ctx->pc = 0x289794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289794u;
        // 0x289798: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28979Cu;
    // 0x28979c: 0x0  nop
    ctx->pc = 0x28979cu;
    // NOP
    ctx->pc = 0x2897a0u;
}
