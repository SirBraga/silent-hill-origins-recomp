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

// Function: sub_002E9C80
// Address: 0x2e9c80 - 0x2e9d80
void sub_002E9C80_0x2e9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9C80_0x2e9c80");
#endif

    switch (ctx->pc) {
        case 0x2e9ce8u: goto label_2e9ce8;
        case 0x2e9d34u: goto label_2e9d34;
        case 0x2e9d4cu: goto label_2e9d4c;
        case 0x2e9d64u: goto label_2e9d64;
        default: break;
    }

    ctx->pc = 0x2e9c80u;

    // 0x2e9c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9c84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e9c88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e9c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e9c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e9c94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9c98: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E9C98u;
    {
        const bool branch_taken_0x2e9c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C98u;
        // 0x2e9c9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c98) {
            ctx->pc = 0x2E9D58u;
            goto label_2e9d58;
        }
    }
    ctx->pc = 0x2E9CA0u;
    // 0x2e9ca0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2e9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9ca4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2e9ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2e9ca8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9cac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2e9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2e9cb0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2e9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2e9cb4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2e9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2e9cb8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2e9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e9cbc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2e9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2e9cc0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2e9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2e9cc4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2e9cc8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2e9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e9ccc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2e9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2e9cd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e9cd4: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9CD4u;
    {
        const bool branch_taken_0x2e9cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e9cd4) {
            ctx->pc = 0x2E9CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9CD4u;
            // 0x2e9cd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9CECu;
            goto label_2e9cec;
        }
    }
    ctx->pc = 0x2E9CDCu;
    // 0x2e9cdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e9cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e9ce0: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2E9CE0u;
    SET_GPR_U32(ctx, 31, 0x2E9CE8u);
    ctx->pc = 0x2E9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CE0u;
    // 0x2e9ce4: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2E9CE0u, 0x2E9CE8u)) {
        return;
    }
    ctx->pc = 0x2E9CE8u;
label_2e9ce8:
    // 0x2e9ce8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2e9cec:
    // 0x2e9cec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9CECu;
    {
        const bool branch_taken_0x2e9cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9cec) {
            ctx->pc = 0x2E9CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9CECu;
            // 0x2e9cf0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9D20u;
            goto label_2e9d20;
        }
    }
    ctx->pc = 0x2E9CF4u;
    // 0x2e9cf4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2e9cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e9cf8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2e9cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e9cfc: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2e9cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e9d00: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2e9d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e9d04: 0xb24301eb  sdl         $v1, 0x1EB($s2)
    ctx->pc = 0x2e9d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9d08: 0xb64301e4  sdr         $v1, 0x1E4($s2)
    ctx->pc = 0x2e9d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9d0c: 0xb24401f3  sdl         $a0, 0x1F3($s2)
    ctx->pc = 0x2e9d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9d10: 0xb64401ec  sdr         $a0, 0x1EC($s2)
    ctx->pc = 0x2e9d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9d14: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2e9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e9d18: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x2e9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x2e9d1c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2e9d20:
    // 0x2e9d20: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2e9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e9d24: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9D24u;
    {
        const bool branch_taken_0x2e9d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9d24) {
            ctx->pc = 0x2E9D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9D24u;
            // 0x2e9d28: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9D40u;
            goto label_2e9d40;
        }
    }
    ctx->pc = 0x2E9D2Cu;
    // 0x2e9d2c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2E9D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D34u);
    ctx->pc = 0x2E9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D2Cu;
    // 0x2e9d30: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2E9D2Cu, 0x2E9D34u)) {
        return;
    }
    ctx->pc = 0x2E9D34u;
label_2e9d34:
    // 0x2e9d34: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x2e9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e9d38: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x2e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x2e9d3c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2e9d40:
    // 0x2e9d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d44: 0xc0bb720  jal         func_2EDC80
    ctx->pc = 0x2E9D44u;
    SET_GPR_U32(ctx, 31, 0x2E9D4Cu);
    ctx->pc = 0x2E9D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D44u;
    // 0x2e9d48: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDC80u, 0x2E9D44u, 0x2E9D4Cu)) {
        return;
    }
    ctx->pc = 0x2E9D4Cu;
label_2e9d4c:
    // 0x2e9d4c: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e9d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9D50u;
    {
        const bool branch_taken_0x2e9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D50u;
        // 0x2e9d54: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d50) {
            ctx->pc = 0x2E9D64u;
            goto label_2e9d64;
        }
    }
    ctx->pc = 0x2E9D58u;
label_2e9d58:
    // 0x2e9d58: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x2e9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x2e9d5c: 0xc0bb720  jal         func_2EDC80
    ctx->pc = 0x2E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D64u);
    ctx->pc = 0x2E9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9D5Cu;
    // 0x2e9d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDC80u, 0x2E9D5Cu, 0x2E9D64u)) {
        return;
    }
    ctx->pc = 0x2E9D64u;
label_2e9d64:
    // 0x2e9d64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e9d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9d6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e9d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9D74u;
        // 0x2e9d78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9D7Cu;
    // 0x2e9d7c: 0x0  nop
    ctx->pc = 0x2e9d7cu;
    // NOP
    ctx->pc = 0x2e9d80u;
}
