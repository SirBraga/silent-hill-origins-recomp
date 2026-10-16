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

// Function: sub_002AAAE8
// Address: 0x2aaae8 - 0x2aac40
void sub_002AAAE8_0x2aaae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAAE8_0x2aaae8");
#endif

    switch (ctx->pc) {
        case 0x2aab68u: goto label_2aab68;
        case 0x2aab9cu: goto label_2aab9c;
        default: break;
    }

    ctx->pc = 0x2aaae8u;

    // 0x2aaae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aaae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aaaec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2aaaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2aaaf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2aaaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2aaaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aaaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aaaf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aaaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaafc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2aaafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2aab00: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2aab00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aab04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AAB04u;
    {
        const bool branch_taken_0x2aab04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB04u;
        // 0x2aab08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab04) {
            ctx->pc = 0x2AAB74u;
            goto label_2aab74;
        }
    }
    ctx->pc = 0x2AAB0Cu;
    // 0x2aab0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aab10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AAB10u;
    {
        const bool branch_taken_0x2aab10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB10u;
        // 0x2aab14: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab10) {
            ctx->pc = 0x2AAB20u;
            goto label_2aab20;
        }
    }
    ctx->pc = 0x2AAB18u;
    // 0x2aab18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAB18u;
    {
        const bool branch_taken_0x2aab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB18u;
        // 0x2aab1c: 0x24420048  addiu       $v0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab18) {
            ctx->pc = 0x2AAB24u;
            goto label_2aab24;
        }
    }
    ctx->pc = 0x2AAB20u;
label_2aab20:
    // 0x2aab20: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2aab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2aab24:
    // 0x2aab24: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AAB24u;
    {
        const bool branch_taken_0x2aab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aab24) {
            ctx->pc = 0x2AAB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB24u;
            // 0x2aab28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC28u;
            goto label_2aac28;
        }
    }
    ctx->pc = 0x2AAB2Cu;
    // 0x2aab2c: 0x68430013  ldl         $v1, 0x13($v0)
    ctx->pc = 0x2aab2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aab30: 0x6c43000c  ldr         $v1, 0xC($v0)
    ctx->pc = 0x2aab30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aab34: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2aab38: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x2aab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aab3c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x2aab3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aab40: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aab44: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2aab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2aab48: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2aab48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2aab4c: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2aab4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aab50: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x2aab50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aab54: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x2aab54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aab58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab5c: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2aab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2aab60: 0xc0ad1aa  jal         func_2B46A8
    ctx->pc = 0x2AAB60u;
    SET_GPR_U32(ctx, 31, 0x2AAB68u);
    ctx->pc = 0x2AAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAB60u;
    // 0x2aab64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B46A8u, 0x2AAB60u, 0x2AAB68u)) {
        return;
    }
    ctx->pc = 0x2AAB68u;
label_2aab68:
    // 0x2aab68: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2aab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aab6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2AAB6Cu;
    {
        const bool branch_taken_0x2aab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB6Cu;
        // 0x2aab70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab6c) {
            ctx->pc = 0x2AAC1Cu;
            goto label_2aac1c;
        }
    }
    ctx->pc = 0x2AAB74u;
label_2aab74:
    // 0x2aab74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aab78: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AAB78u;
    {
        const bool branch_taken_0x2aab78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAB78u;
        // 0x2aab7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aab78) {
            ctx->pc = 0x2AABA8u;
            goto label_2aaba8;
        }
    }
    ctx->pc = 0x2AAB80u;
    // 0x2aab80: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2aab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2aab84: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2aab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aab88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2aab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2aab8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AAB8Cu;
    {
        const bool branch_taken_0x2aab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aab8c) {
            ctx->pc = 0x2AAB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAB8Cu;
            // 0x2aab90: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABA0u;
            goto label_2aaba0;
        }
    }
    ctx->pc = 0x2AAB94u;
    // 0x2aab94: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x2AAB94u;
    SET_GPR_U32(ctx, 31, 0x2AAB9Cu);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x2AAB94u, 0x2AAB9Cu)) {
        return;
    }
    ctx->pc = 0x2AAB9Cu;
label_2aab9c:
    // 0x2aab9c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2aab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2aaba0:
    // 0x2aaba0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AABA0u;
    {
        const bool branch_taken_0x2aaba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABA0u;
        // 0x2aaba4: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaba0) {
            ctx->pc = 0x2AABECu;
            goto label_2aabec;
        }
    }
    ctx->pc = 0x2AABA8u;
label_2aaba8:
    // 0x2aaba8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AABA8u;
    {
        const bool branch_taken_0x2aaba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aaba8) {
            ctx->pc = 0x2AABACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AABA8u;
            // 0x2aabac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AABC0u;
            goto label_2aabc0;
        }
    }
    ctx->pc = 0x2AABB0u;
    // 0x2aabb0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2aabb4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2aabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2aabb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AABB8u;
    {
        const bool branch_taken_0x2aabb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABB8u;
        // 0x2aabbc: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabb8) {
            ctx->pc = 0x2AABECu;
            goto label_2aabec;
        }
    }
    ctx->pc = 0x2AABC0u;
label_2aabc0:
    // 0x2aabc0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AABC0u;
    {
        const bool branch_taken_0x2aabc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABC0u;
        // 0x2aabc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabc0) {
            ctx->pc = 0x2AABECu;
            goto label_2aabec;
        }
    }
    ctx->pc = 0x2AABC8u;
    // 0x2aabc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2aabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2aabcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aabccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aabd0: 0xc4413a34  lwc1        $f1, 0x3A34($v0)
    ctx->pc = 0x2aabd0u;
    { uint32_t bits = FAST_READ32(0x6B3A34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aabd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aabd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aabd8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2aabd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2aabdc: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2aabdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2aabe0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2aabe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2aabe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AABE4u;
    {
        const bool branch_taken_0x2aabe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABE4u;
        // 0x2aabe8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabe4) {
            ctx->pc = 0x2AAC28u;
            goto label_2aac28;
        }
    }
    ctx->pc = 0x2AABECu;
label_2aabec:
    // 0x2aabec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2AABECu;
    {
        const bool branch_taken_0x2aabec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aabec) {
            ctx->pc = 0x2AABF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AABECu;
            // 0x2aabf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC28u;
            goto label_2aac28;
        }
    }
    ctx->pc = 0x2AABF4u;
    // 0x2aabf4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2aabf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2aabf8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2aabf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2aabfc: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x2aabfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2aac00: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x2aac00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2aac04: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x2aac04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aac08: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x2aac08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aac0c: 0xb208000f  sdl         $t0, 0xF($s0)
    ctx->pc = 0x2aac0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aac10: 0xb6080008  sdr         $t0, 0x8($s0)
    ctx->pc = 0x2aac10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aac14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aac14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac18: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2aac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aac1c:
    // 0x2aac1c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2aac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aac20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aac20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aac24: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2aac24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2aac28:
    // 0x2aac28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2aac28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aac2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2aac2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aac30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aac34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC34u;
        // 0x2aac38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAC3Cu;
    // 0x2aac3c: 0x0  nop
    ctx->pc = 0x2aac3cu;
    // NOP
    ctx->pc = 0x2aac40u;
}
