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

// Function: sub_001ACD10
// Address: 0x1acd10 - 0x1ace58
void sub_001ACD10_0x1acd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACD10_0x1acd10");
#endif

    switch (ctx->pc) {
        case 0x1acd60u: goto label_1acd60;
        default: break;
    }

    ctx->pc = 0x1acd10u;

    // 0x1acd10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1acd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1acd14: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1acd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1acd18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1acd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1acd1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1acd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1acd20: 0x245281b0  addiu       $s2, $v0, -0x7E50
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1acd24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1acd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1acd28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1acd28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1acd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1acd30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1acd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acd38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acd38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd3c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1acd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1acd40: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1acd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1acd44: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1acd48: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1acd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acd4c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1acd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acd50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1acd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1acd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd58: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1ACD58u;
    SET_GPR_U32(ctx, 31, 0x1ACD60u);
    ctx->pc = 0x1ACD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD58u;
    // 0x1acd5c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8970u, 0x1ACD58u, 0x1ACD60u)) {
        return;
    }
    ctx->pc = 0x1ACD60u;
label_1acd60:
    // 0x1acd60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd64: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACD64u;
    {
        const bool branch_taken_0x1acd64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD64u;
        // 0x1acd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd64) {
            ctx->pc = 0x1ACD80u;
            goto label_1acd80;
        }
    }
    ctx->pc = 0x1ACD6Cu;
    // 0x1acd6c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1acd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1acd70: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ACD70u;
    {
        const bool branch_taken_0x1acd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acd70) {
            ctx->pc = 0x1ACD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACD70u;
            // 0x1acd74: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACE1Cu;
            goto label_1ace1c;
        }
    }
    ctx->pc = 0x1ACD78u;
    // 0x1acd78: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1ACD78u;
    {
        const bool branch_taken_0x1acd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD78u;
        // 0x1acd7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd78) {
            ctx->pc = 0x1ACE20u;
            goto label_1ace20;
        }
    }
    ctx->pc = 0x1ACD80u;
label_1acd80:
    // 0x1acd80: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1acd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1acd84: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1acd84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1acd88: 0x94a2002e  lhu         $v0, 0x2E($a1)
    ctx->pc = 0x1acd88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x1acd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acd90: 0xa4a2002e  sh          $v0, 0x2E($a1)
    ctx->pc = 0x1acd90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1acd94: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1acd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1acd98: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1acd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1acd9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1acd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1acda0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1acda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acda4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1acda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acda8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1acda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1acdac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1acdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1acdb0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACDB0u;
    {
        const bool branch_taken_0x1acdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB0u;
        // 0x1acdb4: 0xa21023  subu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdb0) {
            ctx->pc = 0x1ACDE4u;
            goto label_1acde4;
        }
    }
    ctx->pc = 0x1ACDB8u;
    // 0x1acdb8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1acdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1acdbc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1acdbcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1acdc0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ACDC0u;
    {
        const bool branch_taken_0x1acdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acdc0) {
            ctx->pc = 0x1ACDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACDC0u;
            // 0x1acdc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACDC8u;
            goto label_1acdc8;
        }
    }
    ctx->pc = 0x1ACDC8u;
label_1acdc8:
    // 0x1acdc8: 0x2812  mflo        $a1
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1acdcc: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACDCCu;
    {
        const bool branch_taken_0x1acdcc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDCCu;
        // 0x1acdd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdcc) {
            ctx->pc = 0x1ACDE8u;
            goto label_1acde8;
        }
    }
    ctx->pc = 0x1ACDD4u;
    // 0x1acdd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1acdd8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1acdd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1acddc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACDDCu;
    {
        const bool branch_taken_0x1acddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acddc) {
            ctx->pc = 0x1ACDE8u;
            goto label_1acde8;
        }
    }
    ctx->pc = 0x1ACDE4u;
label_1acde4:
    // 0x1acde4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1acde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1acde8:
    // 0x1acde8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1acde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1acdec: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1acdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1acdf0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1acdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1acdf4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1acdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acdf8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1acdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1acdfc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1acdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1ace00: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x1ace00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ace04: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x1ace04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ace08: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x1ace08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ace0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ace0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ace10: 0xb2670007  sdl         $a3, 0x7($s3)
    ctx->pc = 0x1ace10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ace14: 0xb6670000  sdr         $a3, 0x0($s3)
    ctx->pc = 0x1ace14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ace18: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1ace18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_1ace1c:
    // 0x1ace1c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ace1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ace20:
    // 0x1ace20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ace20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ace24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ace24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ace28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ace2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ace2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE30u;
        // 0x1ace34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE38u;
    // 0x1ace38: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x1ace38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ace3c: 0x0  nop
    ctx->pc = 0x1ace3cu;
    // NOP
    // 0x1ace40: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1ace40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ace44: 0x0  nop
    ctx->pc = 0x1ace44u;
    // NOP
    // 0x1ace48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ace4c: 0x0  nop
    ctx->pc = 0x1ace4cu;
    // NOP
    // 0x1ace50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ace50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ace54: 0x0  nop
    ctx->pc = 0x1ace54u;
    // NOP
    ctx->pc = 0x1ace58u;
}
