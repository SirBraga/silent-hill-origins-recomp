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

// Function: sub_002E99D0
// Address: 0x2e99d0 - 0x2e9b80
void sub_002E99D0_0x2e99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E99D0_0x2e99d0");
#endif

    switch (ctx->pc) {
        case 0x2e9a54u: goto label_2e9a54;
        case 0x2e9a9cu: goto label_2e9a9c;
        case 0x2e9aa4u: goto label_2e9aa4;
        case 0x2e9ac8u: goto label_2e9ac8;
        case 0x2e9ad0u: goto label_2e9ad0;
        default: break;
    }

    ctx->pc = 0x2e99d0u;

    // 0x2e99d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e99d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e99d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e99d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e99d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e99dc: 0x2446e480  addiu       $a2, $v0, -0x1B80
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x2e99e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e99e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e99e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e99e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e99e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e99ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e99ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e99f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e99f4: 0x8c831044  lw          $v1, 0x1044($a0)
    ctx->pc = 0x2e99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x2e99f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e99fc: 0xac43e480  sw          $v1, -0x1B80($v0)
    ctx->pc = 0x2e99fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x70E480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E480u, _value); } while (0);
    // 0x2e9a00: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2e9a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x70E484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E484u, _value); } while (0);
    // 0x2e9a04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e9a08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9a0c: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x2e9a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x70E508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70E508u, _value); } while (0);
    // 0x2e9a10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9a14: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9A14u;
    {
        const bool branch_taken_0x2e9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A14u;
        // 0x2e9a18: 0xc29025  or          $s2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a14) {
            ctx->pc = 0x2E9A5Cu;
            goto label_2e9a5c;
        }
    }
    ctx->pc = 0x2E9A1Cu;
    // 0x2e9a1c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2e9a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e9a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9A20u;
    {
        const bool branch_taken_0x2e9a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A20u;
        // 0x2e9a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a20) {
            ctx->pc = 0x2E9A38u;
            goto label_2e9a38;
        }
    }
    ctx->pc = 0x2E9A28u;
    // 0x2e9a28: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9A28u;
    {
        const bool branch_taken_0x2e9a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9a28) {
            ctx->pc = 0x2E9A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9A28u;
            // 0x2e9a2c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9A4Cu;
            goto label_2e9a4c;
        }
    }
    ctx->pc = 0x2E9A30u;
    // 0x2e9a30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9A30u;
    {
        const bool branch_taken_0x2e9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A30u;
        // 0x2e9a34: 0x2610e480  addiu       $s0, $s0, -0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a30) {
            ctx->pc = 0x2E9A90u;
            goto label_2e9a90;
        }
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9a3c: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E9A3Cu;
    {
        const bool branch_taken_0x2e9a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9a3c) {
            ctx->pc = 0x2E9A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9A3Cu;
            // 0x2e9a40: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9A88u;
            goto label_2e9a88;
        }
    }
    ctx->pc = 0x2E9A44u;
    // 0x2e9a44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E9A44u;
    {
        const bool branch_taken_0x2e9a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A44u;
        // 0x2e9a48: 0x2610e480  addiu       $s0, $s0, -0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a44) {
            ctx->pc = 0x2E9A90u;
            goto label_2e9a90;
        }
    }
    ctx->pc = 0x2E9A4Cu;
label_2e9a4c:
    // 0x2e9a4c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2E9A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9A54u);
    ctx->pc = 0x2E9A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A4Cu;
    // 0x2e9a50: 0x24c40008  addiu       $a0, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2E9A4Cu, 0x2E9A54u)) {
        return;
    }
    ctx->pc = 0x2E9A54u;
label_2e9a54:
    // 0x2e9a54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E9A54u;
    {
        const bool branch_taken_0x2e9a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A54u;
        // 0x2e9a58: 0x2610e480  addiu       $s0, $s0, -0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a54) {
            ctx->pc = 0x2E9A90u;
            goto label_2e9a90;
        }
    }
    ctx->pc = 0x2E9A5Cu;
label_2e9a5c:
    // 0x2e9a5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e9a60: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2e9a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e9a64: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2e9a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e9a68: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2e9a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e9a6c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2e9a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e9a70: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x2e9a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9a74: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x2e9a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9a78: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x2e9a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9a7c: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x2e9a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9a80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A80u;
    {
        const bool branch_taken_0x2e9a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A80u;
        // 0x2e9a84: 0x2610e480  addiu       $s0, $s0, -0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a80) {
            ctx->pc = 0x2E9A90u;
            goto label_2e9a90;
        }
    }
    ctx->pc = 0x2E9A88u;
label_2e9a88:
    // 0x2e9a88: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2e9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2e9a8c: 0x2610e480  addiu       $s0, $s0, -0x1B80
    ctx->pc = 0x2e9a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960256));
label_2e9a90:
    // 0x2e9a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a94: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2E9A94u;
    SET_GPR_U32(ctx, 31, 0x2E9A9Cu);
    ctx->pc = 0x2E9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9A94u;
    // 0x2e9a98: 0x260500bf  addiu       $a1, $s0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2E9A94u, 0x2E9A9Cu)) {
        return;
    }
    ctx->pc = 0x2E9A9Cu;
label_2e9a9c:
    // 0x2e9a9c: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E9A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E9AA4u);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E9A9Cu, 0x2E9AA4u)) {
        return;
    }
    ctx->pc = 0x2E9AA4u;
label_2e9aa4:
    // 0x2e9aa4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x2e9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
    // 0x2e9aa8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e9aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9aac: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2e9aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2e9ab0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x2e9ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e9ab4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ab8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9ab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9abc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e9abcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ac0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E9AC0u;
    SET_GPR_U32(ctx, 31, 0x2E9AC8u);
    ctx->pc = 0x2E9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9AC0u;
    // 0x2e9ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E9AC0u, 0x2E9AC8u)) {
        return;
    }
    ctx->pc = 0x2E9AC8u;
label_2e9ac8:
    // 0x2e9ac8: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2E9AC8u;
    SET_GPR_U32(ctx, 31, 0x2E9AD0u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2E9AC8u, 0x2E9AD0u)) {
        return;
    }
    ctx->pc = 0x2E9AD0u;
label_2e9ad0:
    // 0x2e9ad0: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x2e9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2e9ad4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9AD4u;
    {
        const bool branch_taken_0x2e9ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9ad4) {
            ctx->pc = 0x2E9AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9AD4u;
            // 0x2e9ad8: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9AECu;
            goto label_2e9aec;
        }
    }
    ctx->pc = 0x2E9ADCu;
    // 0x2e9adc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2e9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2e9ae0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e9ae4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E9AE4u;
    {
        const bool branch_taken_0x2e9ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AE4u;
        // 0x2e9ae8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ae4) {
            ctx->pc = 0x2E9B68u;
            goto label_2e9b68;
        }
    }
    ctx->pc = 0x2E9AECu;
label_2e9aec:
    // 0x2e9aec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9af0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2e9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e9af4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2e9af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2e9af8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x2e9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2e9afc: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E9AFCu;
    {
        const bool branch_taken_0x2e9afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9AFCu;
        // 0x2e9b00: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9afc) {
            ctx->pc = 0x2E9B68u;
            goto label_2e9b68;
        }
    }
    ctx->pc = 0x2E9B04u;
    // 0x2e9b04: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9B04u;
    {
        const bool branch_taken_0x2e9b04 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B04u;
        // 0x2e9b08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b04) {
            ctx->pc = 0x2E9B1Cu;
            goto label_2e9b1c;
        }
    }
    ctx->pc = 0x2E9B0Cu;
    // 0x2e9b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9b14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E9B14u;
    {
        const bool branch_taken_0x2e9b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B14u;
        // 0x2e9b18: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b14) {
            ctx->pc = 0x2E9B34u;
            goto label_2e9b34;
        }
    }
    ctx->pc = 0x2E9B1Cu;
label_2e9b1c:
    // 0x2e9b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9b20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9b28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9b2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e9b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2e9b30: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x2e9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_2e9b34:
    // 0x2e9b34: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9B34u;
    {
        const bool branch_taken_0x2e9b34 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B34u;
        // 0x2e9b38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b34) {
            ctx->pc = 0x2E9B4Cu;
            goto label_2e9b4c;
        }
    }
    ctx->pc = 0x2E9B3Cu;
    // 0x2e9b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9b44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9B44u;
    {
        const bool branch_taken_0x2e9b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b44) {
            ctx->pc = 0x2E9B60u;
            goto label_2e9b60;
        }
    }
    ctx->pc = 0x2E9B4Cu;
label_2e9b4c:
    // 0x2e9b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e9b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e9b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e9b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9b5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e9b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e9b60:
    // 0x2e9b60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e9b60u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e9b64: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e9b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2e9b68:
    // 0x2e9b68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e9b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9b70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e9b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B78u;
        // 0x2e9b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9B80u;
}
