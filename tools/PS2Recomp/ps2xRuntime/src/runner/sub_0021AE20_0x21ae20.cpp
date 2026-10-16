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

// Function: sub_0021AE20
// Address: 0x21ae20 - 0x21aec8
void sub_0021AE20_0x21ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AE20_0x21ae20");
#endif

    switch (ctx->pc) {
        case 0x21ae44u: goto label_21ae44;
        default: break;
    }

    ctx->pc = 0x21ae20u;

    // 0x21ae20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ae24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21ae28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21ae2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ae2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21ae34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ae34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ae3c: 0xc086cd2  jal         func_21B348
    ctx->pc = 0x21AE3Cu;
    SET_GPR_U32(ctx, 31, 0x21AE44u);
    ctx->pc = 0x21AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE3Cu;
    // 0x21ae40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B348u, 0x21AE3Cu, 0x21AE44u)) {
        return;
    }
    ctx->pc = 0x21AE44u;
label_21ae44:
    // 0x21ae44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae48: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21AE48u;
    {
        const bool branch_taken_0x21ae48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE48u;
        // 0x21ae4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae48) {
            ctx->pc = 0x21AEACu;
            goto label_21aeac;
        }
    }
    ctx->pc = 0x21AE50u;
    // 0x21ae50: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x21ae50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21ae54: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x21ae54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21ae58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21ae5c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x21ae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ae60: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x21ae60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21ae64: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x21ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x21ae68: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x21ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
    // 0x21ae6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ae70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AE70u;
    {
        const bool branch_taken_0x21ae70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae70) {
            ctx->pc = 0x21AE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AE70u;
            // 0x21ae74: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AE8Cu;
            goto label_21ae8c;
        }
    }
    ctx->pc = 0x21AE78u;
    // 0x21ae78: 0xac840010  sw          $a0, 0x10($a0)
    ctx->pc = 0x21ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 4));
    // 0x21ae7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ae80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x21ae84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21AE84u;
    {
        const bool branch_taken_0x21ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE84u;
        // 0x21ae88: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae84) {
            ctx->pc = 0x21AEA8u;
            goto label_21aea8;
        }
    }
    ctx->pc = 0x21AE8Cu;
label_21ae8c:
    // 0x21ae8c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x21ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x21ae90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ae94: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x21ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x21ae98: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x21ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x21ae9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x21ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21aea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21aea4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_21aea8:
    // 0x21aea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21aeac:
    // 0x21aeac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21aeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21aeb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21aeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21aeb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21aeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aebc: 0x3e00008  jr          $ra
    ctx->pc = 0x21AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEBCu;
        // 0x21aec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AEC4u;
    // 0x21aec4: 0x0  nop
    ctx->pc = 0x21aec4u;
    // NOP
    ctx->pc = 0x21aec8u;
}
