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

// Function: sub_00263FC0
// Address: 0x263fc0 - 0x264600
void sub_00263FC0_0x263fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263FC0_0x263fc0");
#endif

    switch (ctx->pc) {
        case 0x264070u: goto label_264070;
        case 0x2642e0u: goto label_2642e0;
        case 0x264570u: goto label_264570;
        default: break;
    }

    ctx->pc = 0x263fc0u;

    // 0x263fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x263fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x263fc4: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x263fc4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x263fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x263fcc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x263fccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x263fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x263fd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x263fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x263fdc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x263fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fe0: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x263fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x263fe4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x263fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fe8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x263fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x263fec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x263fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x263ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x263ff4: 0x8f22000c  lw          $v0, 0xC($t9)
    ctx->pc = 0x263ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x263ff8: 0x8f310004  lw          $s1, 0x4($t9)
    ctx->pc = 0x263ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x263ffc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264000: 0x262b01f0  addiu       $t3, $s1, 0x1F0
    ctx->pc = 0x264000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x264004: 0x262400b8  addiu       $a0, $s1, 0xB8
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x264008: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x264008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x26400c: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x26400cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264010: 0x83580b  movn        $t3, $a0, $v1
    ctx->pc = 0x264010u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4));
    // 0x264014: 0x8d6e0008  lw          $t6, 0x8($t3)
    ctx->pc = 0x264014u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x264018: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264018u;
    {
        const bool branch_taken_0x264018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264018u;
        // 0x26401c: 0x8d69000c  lw          $t1, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264018) {
            ctx->pc = 0x264028u;
            goto label_264028;
        }
    }
    ctx->pc = 0x264020u;
    // 0x264020: 0x8d6e0010  lw          $t6, 0x10($t3)
    ctx->pc = 0x264020u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x264024: 0x8d690014  lw          $t1, 0x14($t3)
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_264028:
    // 0x264028: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x264028u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x26402c: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x26402cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x264030: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x264030u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264034: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x264034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x264038: 0x1c41823  subu        $v1, $t6, $a0
    ctx->pc = 0x264038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x26403c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264040: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x264040u;
    {
        const bool branch_taken_0x264040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264040) {
            ctx->pc = 0x264044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264040u;
            // 0x264044: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x264048u;
            goto label_264048;
        }
    }
    ctx->pc = 0x264048u;
label_264048:
    // 0x264048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26404c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x26404cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x264050: 0x4012  mflo        $t0
    ctx->pc = 0x264050u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x264054: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x264058: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x264058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26405c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x26405cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264060: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x264060u;
    {
        const bool branch_taken_0x264060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x264064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264060u;
        // 0x264064: 0x70c021  addu        $t8, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264060) {
            ctx->pc = 0x2640BCu;
            goto label_2640bc;
        }
    }
    ctx->pc = 0x264068u;
    // 0x264068: 0x25640018  addiu       $a0, $t3, 0x18
    ctx->pc = 0x264068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x26406c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x26406cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_264070:
    // 0x264070: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x264070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x264074: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x264074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x264078: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x264078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x26407c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x26407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x264080: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x264080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x264084: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x264084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x264088: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x264088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26408c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x26408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264090: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x264090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264094: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x264094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x264098: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x264098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26409c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x26409cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2640a0: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2640a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2640a4: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x2640a8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2640a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2640ac: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2640acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2640b0: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x2640b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2640b4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2640B4u;
    {
        const bool branch_taken_0x2640b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640B4u;
        // 0x2640b8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640b4) {
            ctx->pc = 0x264070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264070;
        }
    }
    ctx->pc = 0x2640BCu;
label_2640bc:
    // 0x2640bc: 0x922200b4  lbu         $v0, 0xB4($s1)
    ctx->pc = 0x2640bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2640c0: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2640C0u;
    {
        const bool branch_taken_0x2640c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640C0u;
        // 0x2640c4: 0x1d21018  mult        $v0, $t6, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640c0) {
            ctx->pc = 0x2642ACu;
            goto label_2642ac;
        }
    }
    ctx->pc = 0x2640C8u;
    // 0x2640c8: 0x85430010  lh          $v1, 0x10($t2)
    ctx->pc = 0x2640c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2640cc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2640ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2640d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2640d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2640d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2640D8u;
    {
        const bool branch_taken_0x2640d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640D8u;
        // 0x2640dc: 0x586023  subu        $t4, $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640d8) {
            ctx->pc = 0x2640F4u;
            goto label_2640f4;
        }
    }
    ctx->pc = 0x2640E0u;
    // 0x2640e0: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x2640e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x2640e4: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2640e8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2640ec: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2640ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2640f0: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x2640f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2640f4:
    // 0x2640f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2640F4u;
    {
        const bool branch_taken_0x2640f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640F4u;
        // 0x2640f8: 0xa5400014  sh          $zero, 0x14($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640f4) {
            ctx->pc = 0x264108u;
            goto label_264108;
        }
    }
    ctx->pc = 0x2640FCu;
    // 0x2640fc: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x2640fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x264100: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x264104: 0x25883  sra         $t3, $v0, 2
    ctx->pc = 0x264104u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
label_264108:
    // 0x264108: 0x85430028  lh          $v1, 0x28($t2)
    ctx->pc = 0x264108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x26410c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26410Cu;
    {
        const bool branch_taken_0x26410c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26410Cu;
        // 0x264110: 0xa54b002c  sh          $t3, 0x2C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26410c) {
            ctx->pc = 0x26411Cu;
            goto label_26411c;
        }
    }
    ctx->pc = 0x264114u;
    // 0x264114: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x264118: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x264118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_26411c:
    // 0x26411c: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x26411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x264120: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x264124: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264124u;
    {
        const bool branch_taken_0x264124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264124u;
        // 0x264128: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264124) {
            ctx->pc = 0x264140u;
            goto label_264140;
        }
    }
    ctx->pc = 0x26412Cu;
    // 0x26412c: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x26412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x264130: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x264130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x264134: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x264134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x264138: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26413c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_264140:
    // 0x264140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264140u;
    {
        const bool branch_taken_0x264140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264140u;
        // 0x264144: 0xa54b0044  sh          $t3, 0x44($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264140) {
            ctx->pc = 0x264150u;
            goto label_264150;
        }
    }
    ctx->pc = 0x264148u;
    // 0x264148: 0xc1043  sra         $v0, $t4, 1
    ctx->pc = 0x264148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 1));
    // 0x26414c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x26414cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_264150:
    // 0x264150: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x264150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x264154: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264154u;
    {
        const bool branch_taken_0x264154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264154u;
        // 0x264158: 0xa54b005c  sh          $t3, 0x5C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264154) {
            ctx->pc = 0x264164u;
            goto label_264164;
        }
    }
    ctx->pc = 0x26415Cu;
    // 0x26415c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x26415cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x264160: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x264160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_264164:
    // 0x264164: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x264164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x264168: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x264168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x26416c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26416Cu;
    {
        const bool branch_taken_0x26416c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26416Cu;
        // 0x264170: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26416c) {
            ctx->pc = 0x264184u;
            goto label_264184;
        }
    }
    ctx->pc = 0x264174u;
    // 0x264174: 0x27020003  addiu       $v0, $t8, 0x3
    ctx->pc = 0x264174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x264178: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x264178u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x26417c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x264180: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x264180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_264184:
    // 0x264184: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264184u;
    {
        const bool branch_taken_0x264184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264184u;
        // 0x264188: 0xa54b0074  sh          $t3, 0x74($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264184) {
            ctx->pc = 0x264194u;
            goto label_264194;
        }
    }
    ctx->pc = 0x26418Cu;
    // 0x26418c: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x26418cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x264190: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x264190u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_264194:
    // 0x264194: 0x85460088  lh          $a2, 0x88($t2)
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x264198: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x264198u;
    {
        const bool branch_taken_0x264198 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264198u;
        // 0x26419c: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264198) {
            ctx->pc = 0x2641D8u;
            goto label_2641d8;
        }
    }
    ctx->pc = 0x2641A0u;
    // 0x2641a0: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x2641a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x2641a4: 0x1c22018  mult        $a0, $t6, $v0
    ctx->pc = 0x2641a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2641a8: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x2641a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2641ac: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2641acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2641b0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2641b4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2641b8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2641b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2641bc: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x2641bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x2641c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2641c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2641c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2641c8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2641c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2641cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2641ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2641d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2641d4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2641d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2641d8:
    // 0x2641d8: 0xa54b008c  sh          $t3, 0x8C($t2)
    ctx->pc = 0x2641d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 11));
    // 0x2641dc: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x2641dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x2641e0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2641E0u;
    {
        const bool branch_taken_0x2641e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E0u;
        // 0x2641e4: 0xe2840  sll         $a1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641e0) {
            ctx->pc = 0x26427Cu;
            goto label_26427c;
        }
    }
    ctx->pc = 0x2641E8u;
    // 0x2641e8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2641E8u;
    {
        const bool branch_taken_0x2641e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E8u;
        // 0x2641ec: 0x250fffff  addiu       $t7, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641e8) {
            ctx->pc = 0x26421Cu;
            goto label_26421c;
        }
    }
    ctx->pc = 0x2641F0u;
    // 0x2641f0: 0x1cf2018  mult        $a0, $t6, $t7
    ctx->pc = 0x2641f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2641f4: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x2641f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2641f8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2641f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2641fc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2641fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x264200: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x264204: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x264204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x264208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x264208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26420c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264210: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x264214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264218: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x264218u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_26421c:
    // 0x26421c: 0x1cf3018  mult        $a2, $t6, $t7
    ctx->pc = 0x26421cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x264220: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x264220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x264224: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x264224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x264228: 0x182040  sll         $a0, $t8, 1
    ctx->pc = 0x264228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x26422c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x26422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x264230: 0xc2840  sll         $a1, $t4, 1
    ctx->pc = 0x264230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x264234: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x264234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264238: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x26423c: 0x3063023  subu        $a2, $t8, $a2
    ctx->pc = 0x26423cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x264240: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x264240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x264244: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x264244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x264248: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26424c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264250: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x264254: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x264254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264258: 0xa54b0104  sh          $t3, 0x104($t2)
    ctx->pc = 0x264258u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 260), (uint16_t)GPR_U32(ctx, 11));
    // 0x26425c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x26425cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x264260: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x264260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x264264: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x264264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x264268: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x264268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x26426c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264270: 0xa54b011c  sh          $t3, 0x11C($t2)
    ctx->pc = 0x264270u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 11));
    // 0x264274: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x264278: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_26427c:
    // 0x26427c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x26427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x264280: 0x1b21818  mult        $v1, $t5, $s2
    ctx->pc = 0x264280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264288: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x264288u;
    {
        const bool branch_taken_0x264288 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x264288) {
            ctx->pc = 0x26428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264288u;
            // 0x26428c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x264290u;
            goto label_264290;
        }
    }
    ctx->pc = 0x264290u;
label_264290:
    // 0x264290: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x264290u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x264294: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x264294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x264298: 0x1012  mflo        $v0
    ctx->pc = 0x264298u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x26429c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2642a0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2642a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2642a4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2642A4u;
    {
        const bool branch_taken_0x2642a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642A4u;
        // 0x2642a8: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642a4) {
            ctx->pc = 0x2645CCu;
            goto label_2645cc;
        }
    }
    ctx->pc = 0x2642ACu;
label_2642ac:
    // 0x2642ac: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x2642acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2642b0: 0x922200b5  lbu         $v0, 0xB5($s1)
    ctx->pc = 0x2642b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 181)));
    // 0x2642b4: 0x1c32818  mult        $a1, $t6, $v1
    ctx->pc = 0x2642b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2642b8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x2642b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2642bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2642bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2642c0: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x2642c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642c4: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x2642c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2642c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2642c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2642ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2642d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642d4: 0x3055823  subu        $t3, $t8, $a1
    ctx->pc = 0x2642d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x2642d8: 0x26380020  addiu       $t8, $s1, 0x20
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2642dc: 0xd20c0  sll         $a0, $t5, 3
    ctx->pc = 0x2642dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_2642e0:
    // 0x2642e0: 0x3041021  addu        $v0, $t8, $a0
    ctx->pc = 0x2642e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x2642e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2642e8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2642e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2642ec: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2642ECu;
    {
        const bool branch_taken_0x2642ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642ECu;
        // 0x2642f0: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642ec) {
            ctx->pc = 0x2644CCu;
            goto label_2644cc;
        }
    }
    ctx->pc = 0x2642F4u;
    // 0x2642f4: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2642F4u;
    {
        const bool branch_taken_0x2642f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642F4u;
        // 0x2642f8: 0x2da20006  sltiu       $v0, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642f4) {
            ctx->pc = 0x26449Cu;
            goto label_26449c;
        }
    }
    ctx->pc = 0x2642FCu;
    // 0x2642fc: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2642FCu;
    {
        const bool branch_taken_0x2642fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642FCu;
        // 0x264300: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642fc) {
            ctx->pc = 0x2644CCu;
            goto label_2644cc;
        }
    }
    ctx->pc = 0x264304u;
    // 0x264304: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x264304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x264308: 0x2442b940  addiu       $v0, $v0, -0x46C0
    ctx->pc = 0x264308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
    // 0x26430c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264310: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264314: 0x800008  jr          $a0
    ctx->pc = 0x264314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26431Cu: goto label_26431c;
            case 0x264360u: goto label_264360;
            case 0x264390u: goto label_264390;
            case 0x2643CCu: goto label_2643cc;
            case 0x2643FCu: goto label_2643fc;
            case 0x264444u: goto label_264444;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26431Cu;
label_26431c:
    // 0x26431c: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x264320: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x264320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264324: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x264324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264328: 0x85440010  lh          $a0, 0x10($t2)
    ctx->pc = 0x264328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x26432c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x264330: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x264330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x264334: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264334u;
    {
        const bool branch_taken_0x264334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264334u;
        // 0x264338: 0x22882  srl         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264334) {
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x26433Cu;
    // 0x26433c: 0x85440012  lh          $a0, 0x12($t2)
    ctx->pc = 0x26433cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x264340: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_264344:
    // 0x264344: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x264344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x264348: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x264348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x26434c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x26434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x264350: 0xa54c0014  sh          $t4, 0x14($t2)
    ctx->pc = 0x264350u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x264354: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x264354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x264358: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x264358u;
    {
        const bool branch_taken_0x264358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264358u;
        // 0x26435c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264358) {
            ctx->pc = 0x264484u;
            goto label_264484;
        }
    }
    ctx->pc = 0x264360u;
label_264360:
    // 0x264360: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x264360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264364: 0x85440028  lh          $a0, 0x28($t2)
    ctx->pc = 0x264364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x264368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264368u;
    {
        const bool branch_taken_0x264368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264368u;
        // 0x26436c: 0x8d460020  lw          $a2, 0x20($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264368) {
            ctx->pc = 0x264378u;
            goto label_264378;
        }
    }
    ctx->pc = 0x264370u;
    // 0x264370: 0x8544002a  lh          $a0, 0x2A($t2)
    ctx->pc = 0x264370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x264374: 0x8d460024  lw          $a2, 0x24($t2)
    ctx->pc = 0x264374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
label_264378:
    // 0x264378: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x264378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26437c: 0xa54c002c  sh          $t4, 0x2C($t2)
    ctx->pc = 0x26437cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 12));
    // 0x264380: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x264380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264384: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x264384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x264388: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x264388u;
    {
        const bool branch_taken_0x264388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264388u;
        // 0x26438c: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264388) {
            ctx->pc = 0x264490u;
            goto label_264490;
        }
    }
    ctx->pc = 0x264390u;
label_264390:
    // 0x264390: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x264394: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264398: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x264398u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26439c: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x2643a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2643A0u;
    {
        const bool branch_taken_0x2643a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643A0u;
        // 0x2643a4: 0x8d460038  lw          $a2, 0x38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643a0) {
            ctx->pc = 0x2643B0u;
            goto label_2643b0;
        }
    }
    ctx->pc = 0x2643A8u;
    // 0x2643a8: 0x85440042  lh          $a0, 0x42($t2)
    ctx->pc = 0x2643a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x2643ac: 0x8d46003c  lw          $a2, 0x3C($t2)
    ctx->pc = 0x2643acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
label_2643b0:
    // 0x2643b0: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x2643b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2643b4: 0xa54c0044  sh          $t4, 0x44($t2)
    ctx->pc = 0x2643b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 12));
    // 0x2643b8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2643b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2643bc: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x2643bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2643c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2643c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2643c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2643C4u;
    {
        const bool branch_taken_0x2643c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643C4u;
        // 0x2643c8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643c4) {
            ctx->pc = 0x264434u;
            goto label_264434;
        }
    }
    ctx->pc = 0x2643CCu;
label_2643cc:
    // 0x2643cc: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x2643ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x2643d0: 0x85440058  lh          $a0, 0x58($t2)
    ctx->pc = 0x2643d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x2643d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2643D4u;
    {
        const bool branch_taken_0x2643d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643D4u;
        // 0x2643d8: 0x8d460050  lw          $a2, 0x50($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643d4) {
            ctx->pc = 0x2643E4u;
            goto label_2643e4;
        }
    }
    ctx->pc = 0x2643DCu;
    // 0x2643dc: 0x8544005a  lh          $a0, 0x5A($t2)
    ctx->pc = 0x2643dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x2643e0: 0x8d460054  lw          $a2, 0x54($t2)
    ctx->pc = 0x2643e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_2643e4:
    // 0x2643e4: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x2643e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2643e8: 0xa54c005c  sh          $t4, 0x5C($t2)
    ctx->pc = 0x2643e8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 12));
    // 0x2643ec: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2643ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2643f0: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x2643f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x2643f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2643F4u;
    {
        const bool branch_taken_0x2643f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643F4u;
        // 0x2643f8: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643f4) {
            ctx->pc = 0x264490u;
            goto label_264490;
        }
    }
    ctx->pc = 0x2643FCu;
label_2643fc:
    // 0x2643fc: 0x25c20003  addiu       $v0, $t6, 0x3
    ctx->pc = 0x2643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x264400: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x264400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264404: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x264404u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x264408: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x264408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x26440c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26440Cu;
    {
        const bool branch_taken_0x26440c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26440Cu;
        // 0x264410: 0x8d460068  lw          $a2, 0x68($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26440c) {
            ctx->pc = 0x26441Cu;
            goto label_26441c;
        }
    }
    ctx->pc = 0x264414u;
    // 0x264414: 0x85440072  lh          $a0, 0x72($t2)
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 114)));
    // 0x264418: 0x8d46006c  lw          $a2, 0x6C($t2)
    ctx->pc = 0x264418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 108)));
label_26441c:
    // 0x26441c: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x26441cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264420: 0xa54c0074  sh          $t4, 0x74($t2)
    ctx->pc = 0x264420u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 12));
    // 0x264424: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x264424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x264428: 0x25620003  addiu       $v0, $t3, 0x3
    ctx->pc = 0x264428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x26442c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x264430: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x264430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_264434:
    // 0x264434: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x264434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x264438: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x264438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26443c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26443Cu;
    {
        const bool branch_taken_0x26443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26443Cu;
        // 0x264440: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26443c) {
            ctx->pc = 0x2644CCu;
            goto label_2644cc;
        }
    }
    ctx->pc = 0x264444u;
label_264444:
    // 0x264444: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x264444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x264448: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x264448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x26444c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x264450: 0x85440088  lh          $a0, 0x88($t2)
    ctx->pc = 0x264450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x264454: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x264454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264458: 0x8d460080  lw          $a2, 0x80($t2)
    ctx->pc = 0x264458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x26445c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26445Cu;
    {
        const bool branch_taken_0x26445c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26445Cu;
        // 0x264460: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26445c) {
            ctx->pc = 0x26446Cu;
            goto label_26446c;
        }
    }
    ctx->pc = 0x264464u;
    // 0x264464: 0x8544008a  lh          $a0, 0x8A($t2)
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 138)));
    // 0x264468: 0x8d460084  lw          $a2, 0x84($t2)
    ctx->pc = 0x264468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_26446c:
    // 0x26446c: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x26446cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x264470: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x264470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x264474: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x264474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x264478: 0xa54c008c  sh          $t4, 0x8C($t2)
    ctx->pc = 0x264478u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 12));
    // 0x26447c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x26447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264480: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_264484:
    // 0x264484: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x264488: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26448c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_264490:
    // 0x264490: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x264490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x264494: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264494u;
    {
        const bool branch_taken_0x264494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264494u;
        // 0x264498: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264494) {
            ctx->pc = 0x2644CCu;
            goto label_2644cc;
        }
    }
    ctx->pc = 0x26449Cu;
label_26449c:
    // 0x26449c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x26449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2644a0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2644a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2644a4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2644a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2644a8: 0x1a32018  mult        $a0, $t5, $v1
    ctx->pc = 0x2644a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2644ac: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2644acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2644b0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x2644b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2644b4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2644b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2644b8: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x2644b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2644bc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2644c0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2644c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2644c4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2644c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2644c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2644cc:
    // 0x2644cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2644d0: 0x2da2000a  sltiu       $v0, $t5, 0xA
    ctx->pc = 0x2644d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2644d4: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x2644D4u;
    {
        const bool branch_taken_0x2644d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644D4u;
        // 0x2644d8: 0xd20c0  sll         $a0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644d4) {
            ctx->pc = 0x2642E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2642e0;
        }
    }
    ctx->pc = 0x2644DCu;
    // 0x2644dc: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x2644dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x2644e0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2644E0u;
    {
        const bool branch_taken_0x2644e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644E0u;
        // 0x2644e4: 0xe2840  sll         $a1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644e0) {
            ctx->pc = 0x264544u;
            goto label_264544;
        }
    }
    ctx->pc = 0x2644E8u;
    // 0x2644e8: 0x8544011a  lh          $a0, 0x11A($t2)
    ctx->pc = 0x2644e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 282)));
    // 0x2644ec: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x2644ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2644f0: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x2644f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x2644f4: 0x8f3018  mult        $a2, $a0, $t7
    ctx->pc = 0x2644f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2644f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2644f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2644fc: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x264500: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x264504: 0x45882  srl         $t3, $a0, 2
    ctx->pc = 0x264504u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x264508: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x264508u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26450c: 0x8d440114  lw          $a0, 0x114($t2)
    ctx->pc = 0x26450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 276)));
    // 0x264510: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x264510u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x264514: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x264514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x264518: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x26451c: 0xa54c0104  sh          $t4, 0x104($t2)
    ctx->pc = 0x26451cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 260), (uint16_t)GPR_U32(ctx, 12));
    // 0x264520: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x264520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x264524: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x264524u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x264528: 0x55902  srl         $t3, $a1, 4
    ctx->pc = 0x264528u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x26452c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x264530: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x264530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x264534: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x264538: 0xa54c011c  sh          $t4, 0x11C($t2)
    ctx->pc = 0x264538u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 12));
    // 0x26453c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x26453cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x264540: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x264540u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_264544:
    // 0x264544: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x264548: 0xcc3023  subu        $a2, $a2, $t4
    ctx->pc = 0x264548u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x26454c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x26454cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x264550: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x264550u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264554: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x264554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x264558: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x264558u;
    {
        const bool branch_taken_0x264558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264558u;
        // 0x26455c: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264558) {
            ctx->pc = 0x2645CCu;
            goto label_2645cc;
        }
    }
    ctx->pc = 0x264560u;
    // 0x264560: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x264560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x264564: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x264568: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x264568u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26456c: 0x0  nop
    ctx->pc = 0x26456cu;
    // NOP
label_264570:
    // 0x264570: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x264570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x264574: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x264574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x264578: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x264578u;
    {
        const bool branch_taken_0x264578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264578u;
        // 0x26457c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264578) {
            ctx->pc = 0x2645ACu;
            goto label_2645ac;
        }
    }
    ctx->pc = 0x264580u;
    // 0x264580: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x264580u;
    {
        const bool branch_taken_0x264580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264580) {
            ctx->pc = 0x264584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264580u;
            // 0x264584: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2645B0u;
            goto label_2645b0;
        }
    }
    ctx->pc = 0x264588u;
    // 0x264588: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x264588u;
    {
        const bool branch_taken_0x264588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x264588) {
            ctx->pc = 0x26458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264588u;
            // 0x26458c: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264594u;
            goto label_264594;
        }
    }
    ctx->pc = 0x264590u;
    // 0x264590: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x264590u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
label_264594:
    // 0x264594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x264594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264598: 0x8f2c0024  lw          $t4, 0x24($t9)
    ctx->pc = 0x264598u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x26459c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x26459cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2645a0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2645a4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2645a8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2645ac:
    // 0x2645ac: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2645b0:
    // 0x2645b0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2645b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2645b4: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x2645b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2645b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2645b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2645bc: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x2645bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2645c0: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x2645c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x2645c4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2645C4u;
    {
        const bool branch_taken_0x2645c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2645C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645C4u;
        // 0x2645c8: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645c4) {
            ctx->pc = 0x264570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264570;
        }
    }
    ctx->pc = 0x2645CCu;
label_2645cc:
    // 0x2645cc: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x2645ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
    // 0x2645d0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2645d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2645d4: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x2645d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x2645d8: 0x24e2022f  addiu       $v0, $a3, 0x22F
    ctx->pc = 0x2645d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 559));
    // 0x2645dc: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x2645dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x2645e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2645e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2645e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2645e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2645e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2645e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2645ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2645ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2645f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2645f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2645f4: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x2645f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2645f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2645F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2645FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2645F8u;
        // 0x2645fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2645F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264600u;
}
