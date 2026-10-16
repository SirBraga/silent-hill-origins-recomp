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

// Function: sub_001257B0
// Address: 0x1257b0 - 0x125870
void sub_001257B0_0x1257b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001257B0_0x1257b0");
#endif

    switch (ctx->pc) {
        case 0x1257ccu: goto label_1257cc;
        case 0x1257ecu: goto label_1257ec;
        case 0x125804u: goto label_125804;
        case 0x125810u: goto label_125810;
        default: break;
    }

    ctx->pc = 0x1257b0u;

    // 0x1257b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1257b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1257b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1257b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1257b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1257bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1257bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1257c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1257c4: 0xc04f122  jal         func_13C488
    ctx->pc = 0x1257C4u;
    SET_GPR_U32(ctx, 31, 0x1257CCu);
    ctx->pc = 0x1257C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257C4u;
    // 0x1257c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C488u, 0x1257C4u, 0x1257CCu)) {
        return;
    }
    ctx->pc = 0x1257CCu;
label_1257cc:
    // 0x1257cc: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x1257ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1257d0: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x1257d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1257d4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1257d8: 0xb2020c47  sdl         $v0, 0xC47($s0)
    ctx->pc = 0x1257d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1257dc: 0xb6020c40  sdr         $v0, 0xC40($s0)
    ctx->pc = 0x1257dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1257e0: 0xae030c48  sw          $v1, 0xC48($s0)
    ctx->pc = 0x1257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3144), GPR_U32(ctx, 3));
    // 0x1257e4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x1257E4u;
    SET_GPR_U32(ctx, 31, 0x1257ECu);
    ctx->pc = 0x1257E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257E4u;
    // 0x1257e8: 0x26040c10  addiu       $a0, $s0, 0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1257E4u, 0x1257ECu)) {
        return;
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x1257f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1257F0u;
    {
        const bool branch_taken_0x1257f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257F0u;
        // 0x1257f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257f0) {
            ctx->pc = 0x125808u;
            goto label_125808;
        }
    }
    ctx->pc = 0x1257F8u;
    // 0x1257f8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x1257f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1257fc: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x1257FCu;
    SET_GPR_U32(ctx, 31, 0x125804u);
    ctx->pc = 0x125800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257FCu;
    // 0x125800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x1257FCu, 0x125804u)) {
        return;
    }
    ctx->pc = 0x125804u;
label_125804:
    // 0x125804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125808:
    // 0x125808: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x125808u;
    SET_GPR_U32(ctx, 31, 0x125810u);
    ctx->pc = 0x12580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125808u;
    // 0x12580c: 0x26050c50  addiu       $a1, $s0, 0xC50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x125808u, 0x125810u)) {
        return;
    }
    ctx->pc = 0x125810u;
label_125810:
    // 0x125810: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x125810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x125814: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x125814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x125818: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12581c: 0xb2020cf7  sdl         $v0, 0xCF7($s0)
    ctx->pc = 0x12581cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125820: 0xb6020cf0  sdr         $v0, 0xCF0($s0)
    ctx->pc = 0x125820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125824: 0xae030cf8  sw          $v1, 0xCF8($s0)
    ctx->pc = 0x125824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3320), GPR_U32(ctx, 3));
    // 0x125828: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x125828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12582c: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x12582cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x125830: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x125830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x125834: 0xb2020ce7  sdl         $v0, 0xCE7($s0)
    ctx->pc = 0x125834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125838: 0xb6020ce0  sdr         $v0, 0xCE0($s0)
    ctx->pc = 0x125838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12583c: 0xae030ce8  sw          $v1, 0xCE8($s0)
    ctx->pc = 0x12583cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3304), GPR_U32(ctx, 3));
    // 0x125840: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x125840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x125844: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x125844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x125848: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12584c: 0xb2020d07  sdl         $v0, 0xD07($s0)
    ctx->pc = 0x12584cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125850: 0xb6020d00  sdr         $v0, 0xD00($s0)
    ctx->pc = 0x125850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x125854: 0xae030d08  sw          $v1, 0xD08($s0)
    ctx->pc = 0x125854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3336), GPR_U32(ctx, 3));
    // 0x125858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x125858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12585c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12585cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125864: 0x3e00008  jr          $ra
    ctx->pc = 0x125864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125864u;
        // 0x125868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12586Cu;
    // 0x12586c: 0x0  nop
    ctx->pc = 0x12586cu;
    // NOP
    ctx->pc = 0x125870u;
}
