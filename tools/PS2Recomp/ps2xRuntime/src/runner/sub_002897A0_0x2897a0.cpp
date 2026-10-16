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

// Function: sub_002897A0
// Address: 0x2897a0 - 0x289870
void sub_002897A0_0x2897a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002897A0_0x2897a0");
#endif

    switch (ctx->pc) {
        case 0x2897c8u: goto label_2897c8;
        case 0x2897e8u: goto label_2897e8;
        case 0x2897f8u: goto label_2897f8;
        default: break;
    }

    ctx->pc = 0x2897a0u;

    // 0x2897a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2897a4: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2897a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2897a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2897a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2897ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2897acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2897b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2897b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2897b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2897b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2897bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2897bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897c0: 0xc093546  jal         func_24D518
    ctx->pc = 0x2897C0u;
    SET_GPR_U32(ctx, 31, 0x2897C8u);
    ctx->pc = 0x2897C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897C0u;
    // 0x2897c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2897C0u, 0x2897C8u)) {
        return;
    }
    ctx->pc = 0x2897C8u;
label_2897c8:
    // 0x2897c8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2897c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2897cc: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2897CCu;
    {
        const bool branch_taken_0x2897cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2897D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897CCu;
        // 0x2897d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897cc) {
            ctx->pc = 0x28985Cu;
            goto label_28985c;
        }
    }
    ctx->pc = 0x2897D4u;
    // 0x2897d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2897d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2897d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2897dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2897dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897e0: 0xc09270a  jal         func_249C28
    ctx->pc = 0x2897E0u;
    SET_GPR_U32(ctx, 31, 0x2897E8u);
    ctx->pc = 0x2897E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897E0u;
    // 0x2897e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2897E0u, 0x2897E8u)) {
        return;
    }
    ctx->pc = 0x2897E8u;
label_2897e8:
    // 0x2897e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2897E8u;
    {
        const bool branch_taken_0x2897e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E8u;
        // 0x2897ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897e8) {
            ctx->pc = 0x289858u;
            goto label_289858;
        }
    }
    ctx->pc = 0x2897F0u;
    // 0x2897f0: 0xc0c19c8  jal         func_306720
    ctx->pc = 0x2897F0u;
    SET_GPR_U32(ctx, 31, 0x2897F8u);
    ctx->pc = 0x2897F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2897F0u;
    // 0x2897f4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306720u, 0x2897F0u, 0x2897F8u)) {
        return;
    }
    ctx->pc = 0x2897F8u;
label_2897f8:
    // 0x2897f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2897f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2897fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2897fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x289800: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x289800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289808: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x289808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28980c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x28980cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x289810: 0x6ba30013  ldl         $v1, 0x13($sp)
    ctx->pc = 0x289810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x289814: 0x6fa3000c  ldr         $v1, 0xC($sp)
    ctx->pc = 0x289814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x289818: 0x6ba4001b  ldl         $a0, 0x1B($sp)
    ctx->pc = 0x289818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28981c: 0x6fa40014  ldr         $a0, 0x14($sp)
    ctx->pc = 0x28981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x289820: 0xb2030097  sdl         $v1, 0x97($s0)
    ctx->pc = 0x289820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289824: 0xb6030090  sdr         $v1, 0x90($s0)
    ctx->pc = 0x289824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289828: 0xb204009f  sdl         $a0, 0x9F($s0)
    ctx->pc = 0x289828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28982c: 0xb6040098  sdr         $a0, 0x98($s0)
    ctx->pc = 0x28982cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289830: 0x6ba30023  ldl         $v1, 0x23($sp)
    ctx->pc = 0x289830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x289834: 0x6fa3001c  ldr         $v1, 0x1C($sp)
    ctx->pc = 0x289834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x289838: 0x6ba4002b  ldl         $a0, 0x2B($sp)
    ctx->pc = 0x289838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28983c: 0x6fa40024  ldr         $a0, 0x24($sp)
    ctx->pc = 0x28983cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x289840: 0xb20300a7  sdl         $v1, 0xA7($s0)
    ctx->pc = 0x289840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289844: 0xb60300a0  sdr         $v1, 0xA0($s0)
    ctx->pc = 0x289844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289848: 0xb20400af  sdl         $a0, 0xAF($s0)
    ctx->pc = 0x289848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28984c: 0xb60400a8  sdr         $a0, 0xA8($s0)
    ctx->pc = 0x28984cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x289850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289850u;
    {
        const bool branch_taken_0x289850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289850u;
        // 0x289854: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289850) {
            ctx->pc = 0x28985Cu;
            goto label_28985c;
        }
    }
    ctx->pc = 0x289858u;
label_289858:
    // 0x289858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28985c:
    // 0x28985c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28985cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289860: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x289860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x289864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289868: 0x3e00008  jr          $ra
    ctx->pc = 0x289868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289868u;
        // 0x28986c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289870u;
}
