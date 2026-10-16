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

// Function: sub_002DF6E0
// Address: 0x2df6e0 - 0x2df7b8
void sub_002DF6E0_0x2df6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF6E0_0x2df6e0");
#endif

    switch (ctx->pc) {
        case 0x2df718u: goto label_2df718;
        case 0x2df728u: goto label_2df728;
        case 0x2df738u: goto label_2df738;
        default: break;
    }

    ctx->pc = 0x2df6e0u;

    // 0x2df6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2df6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2df6e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2df6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2df6e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2df6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2df6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2df6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2df6f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2df6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6f8: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DF6F8u;
    {
        const bool branch_taken_0x2df6f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6F8u;
        // 0x2df6fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6f8) {
            ctx->pc = 0x2DF770u;
            goto label_2df770;
        }
    }
    ctx->pc = 0x2DF700u;
    // 0x2df700: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2df700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2df704: 0xafbd0010  sw          $sp, 0x10($sp)
    ctx->pc = 0x2df704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
    // 0x2df708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df70c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df710: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DF710u;
    SET_GPR_U32(ctx, 31, 0x2DF718u);
    ctx->pc = 0x2DF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF710u;
    // 0x2df714: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DF710u, 0x2DF718u)) {
        return;
    }
    ctx->pc = 0x2DF718u;
label_2df718:
    // 0x2df718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df71c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2df720: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DF720u;
    SET_GPR_U32(ctx, 31, 0x2DF728u);
    ctx->pc = 0x2DF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF720u;
    // 0x2df724: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DF720u, 0x2DF728u)) {
        return;
    }
    ctx->pc = 0x2DF728u;
label_2df728:
    // 0x2df728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df72c: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x2df72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2df730: 0xc0b841c  jal         func_2E1070
    ctx->pc = 0x2DF730u;
    SET_GPR_U32(ctx, 31, 0x2DF738u);
    ctx->pc = 0x2DF734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF730u;
    // 0x2df734: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1070u, 0x2DF730u, 0x2DF738u)) {
        return;
    }
    ctx->pc = 0x2DF738u;
label_2df738:
    // 0x2df738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df73c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2df73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2df740: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2df740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2df744: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2df744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df748: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2df748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df74c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2df74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2df750: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2df750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2df754: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2df754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2df758: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2df758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2df75c: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x2df75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df760: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x2df760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df764: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x2df764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df768: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF768u;
    {
        const bool branch_taken_0x2df768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF768u;
        // 0x2df76c: 0xb6430008  sdr         $v1, 0x8($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df768) {
            ctx->pc = 0x2DF790u;
            goto label_2df790;
        }
    }
    ctx->pc = 0x2DF770u;
label_2df770:
    // 0x2df770: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x2df770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2df774: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x2df774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2df778: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x2df778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2df77c: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x2df77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2df780: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x2df780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df784: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x2df784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df788: 0xb242000f  sdl         $v0, 0xF($s2)
    ctx->pc = 0x2df788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2df78c: 0xb6420008  sdr         $v0, 0x8($s2)
    ctx->pc = 0x2df78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2df790:
    // 0x2df790: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2df790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df794: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2df794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df798: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2df798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df79c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2df79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df7a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF7A4u;
        // 0x2df7a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF7ACu;
    // 0x2df7ac: 0x0  nop
    ctx->pc = 0x2df7acu;
    // NOP
    // 0x2df7b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df7b4: 0x0  nop
    ctx->pc = 0x2df7b4u;
    // NOP
    ctx->pc = 0x2df7b8u;
}
