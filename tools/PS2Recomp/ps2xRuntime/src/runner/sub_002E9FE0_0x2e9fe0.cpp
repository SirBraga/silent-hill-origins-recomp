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

// Function: sub_002E9FE0
// Address: 0x2e9fe0 - 0x2ea0e8
void sub_002E9FE0_0x2e9fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9FE0_0x2e9fe0");
#endif

    switch (ctx->pc) {
        case 0x2ea048u: goto label_2ea048;
        case 0x2ea098u: goto label_2ea098;
        case 0x2ea0b0u: goto label_2ea0b0;
        case 0x2ea0c8u: goto label_2ea0c8;
        default: break;
    }

    ctx->pc = 0x2e9fe0u;

    // 0x2e9fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9fe4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e9fe8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e9fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e9fec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e9fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ff0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e9ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ff8: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E9FF8u;
    {
        const bool branch_taken_0x2e9ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FF8u;
        // 0x2e9ffc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ff8) {
            ctx->pc = 0x2EA0BCu;
            goto label_2ea0bc;
        }
    }
    ctx->pc = 0x2EA000u;
    // 0x2ea000: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ea004: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2ea008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea00c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ea00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2ea010: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ea014: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ea014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ea018: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2ea018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ea01c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2ea01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2ea020: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2ea020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ea024: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2ea024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2ea028: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ea02c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2ea02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2ea030: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ea030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ea034: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA034u;
    {
        const bool branch_taken_0x2ea034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ea034) {
            ctx->pc = 0x2EA038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA034u;
            // 0x2ea038: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA050u;
            goto label_2ea050;
        }
    }
    ctx->pc = 0x2EA03Cu;
    // 0x2ea03c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ea03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea040: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2EA040u;
    SET_GPR_U32(ctx, 31, 0x2EA048u);
    ctx->pc = 0x2EA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA040u;
    // 0x2ea044: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2EA040u, 0x2EA048u)) {
        return;
    }
    ctx->pc = 0x2EA048u;
label_2ea048:
    // 0x2ea048: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ea048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ea04c: 0x0  nop
    ctx->pc = 0x2ea04cu;
    // NOP
label_2ea050:
    // 0x2ea050: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA050u;
    {
        const bool branch_taken_0x2ea050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea050) {
            ctx->pc = 0x2EA054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA050u;
            // 0x2ea054: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA084u;
            goto label_2ea084;
        }
    }
    ctx->pc = 0x2EA058u;
    // 0x2ea058: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2ea058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ea05c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2ea05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ea060: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2ea060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ea064: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2ea064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ea068: 0xb24301eb  sdl         $v1, 0x1EB($s2)
    ctx->pc = 0x2ea068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea06c: 0xb64301e4  sdr         $v1, 0x1E4($s2)
    ctx->pc = 0x2ea06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 484); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea070: 0xb24401f3  sdl         $a0, 0x1F3($s2)
    ctx->pc = 0x2ea070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea074: 0xb64401ec  sdr         $a0, 0x1EC($s2)
    ctx->pc = 0x2ea074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea078: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2ea07c: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x2ea07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x2ea080: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ea080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2ea084:
    // 0x2ea084: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ea084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ea088: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA088u;
    {
        const bool branch_taken_0x2ea088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea088) {
            ctx->pc = 0x2EA08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA088u;
            // 0x2ea08c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0A4u;
            goto label_2ea0a4;
        }
    }
    ctx->pc = 0x2EA090u;
    // 0x2ea090: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2EA090u;
    SET_GPR_U32(ctx, 31, 0x2EA098u);
    ctx->pc = 0x2EA094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA090u;
    // 0x2ea094: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2EA090u, 0x2EA098u)) {
        return;
    }
    ctx->pc = 0x2EA098u;
label_2ea098:
    // 0x2ea098: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2ea09c: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x2ea09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x2ea0a0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ea0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2ea0a4:
    // 0x2ea0a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ea0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea0a8: 0xc0bb720  jal         func_2EDC80
    ctx->pc = 0x2EA0A8u;
    SET_GPR_U32(ctx, 31, 0x2EA0B0u);
    ctx->pc = 0x2EA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0A8u;
    // 0x2ea0ac: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDC80u, 0x2EA0A8u, 0x2EA0B0u)) {
        return;
    }
    ctx->pc = 0x2EA0B0u;
label_2ea0b0:
    // 0x2ea0b0: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2ea0b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA0B4u;
    {
        const bool branch_taken_0x2ea0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0B4u;
        // 0x2ea0b8: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0b4) {
            ctx->pc = 0x2EA0C8u;
            goto label_2ea0c8;
        }
    }
    ctx->pc = 0x2EA0BCu;
label_2ea0bc:
    // 0x2ea0bc: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x2ea0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x2ea0c0: 0xc0bb720  jal         func_2EDC80
    ctx->pc = 0x2EA0C0u;
    SET_GPR_U32(ctx, 31, 0x2EA0C8u);
    ctx->pc = 0x2EA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA0C0u;
    // 0x2ea0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDC80u, 0x2EA0C0u, 0x2EA0C8u)) {
        return;
    }
    ctx->pc = 0x2EA0C8u;
label_2ea0c8:
    // 0x2ea0c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ea0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea0cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea0d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ea0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea0d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ea0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA0DCu;
        // 0x2ea0e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA0E4u;
    // 0x2ea0e4: 0x0  nop
    ctx->pc = 0x2ea0e4u;
    // NOP
    ctx->pc = 0x2ea0e8u;
}
