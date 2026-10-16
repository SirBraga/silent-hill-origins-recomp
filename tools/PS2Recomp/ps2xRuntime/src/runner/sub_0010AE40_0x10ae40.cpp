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

// Function: sub_0010AE40
// Address: 0x10ae40 - 0x10af08
void sub_0010AE40_0x10ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AE40_0x10ae40");
#endif

    switch (ctx->pc) {
        case 0x10ae70u: goto label_10ae70;
        case 0x10ae78u: goto label_10ae78;
        case 0x10aea8u: goto label_10aea8;
        case 0x10aef4u: goto label_10aef4;
        default: break;
    }

    ctx->pc = 0x10ae40u;

    // 0x10ae40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ae44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10ae48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ae48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10ae50: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x10ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x10ae54: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10ae58: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x10ae58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x10ae5c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10AE5Cu;
    {
        const bool branch_taken_0x10ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE5Cu;
        // 0x10ae60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae5c) {
            ctx->pc = 0x10AEECu;
            goto label_10aeec;
        }
    }
    ctx->pc = 0x10AE64u;
    // 0x10ae64: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x10ae64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x10ae68: 0xc042882  jal         func_10A208
    ctx->pc = 0x10AE68u;
    SET_GPR_U32(ctx, 31, 0x10AE70u);
    ctx->pc = 0x10AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE68u;
    // 0x10ae6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A208u, 0x10AE68u, 0x10AE70u)) {
        return;
    }
    ctx->pc = 0x10AE70u;
label_10ae70:
    // 0x10ae70: 0x52110021  beql        $s0, $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x10AE70u;
    {
        const bool branch_taken_0x10ae70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x10ae70) {
            ctx->pc = 0x10AE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AE70u;
            // 0x10ae74: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AEF8u;
            goto label_10aef8;
        }
    }
    ctx->pc = 0x10AE78u;
label_10ae78:
    // 0x10ae78: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x10ae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10ae7c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x10ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10ae80: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x10ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ae84: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x10ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ae88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae90: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x10ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x10ae94: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x10ae94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10ae98: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10ae9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10AE9Cu;
    {
        const bool branch_taken_0x10ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE9Cu;
        // 0x10aea0: 0x2485fff8  addiu       $a1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae9c) {
            ctx->pc = 0x10AED0u;
            goto label_10aed0;
        }
    }
    ctx->pc = 0x10AEA4u;
    // 0x10aea4: 0x0  nop
    ctx->pc = 0x10aea4u;
    // NOP
label_10aea8:
    // 0x10aea8: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x10aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10aeac: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x10aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10aeb0: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x10aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10aeb4: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x10aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10aeb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10aeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aebc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aec0: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x10aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x10aec4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x10aec4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10aec8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10AEC8u;
    {
        const bool branch_taken_0x10aec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEC8u;
        // 0x10aecc: 0x2485fff8  addiu       $a1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aec8) {
            ctx->pc = 0x10AEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aea8;
        }
    }
    ctx->pc = 0x10AED0u;
label_10aed0:
    // 0x10aed0: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x10aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10aed4: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x10aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x10aed8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x10aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10aedc: 0x1611ffe6  bne         $s0, $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10AEDCu;
    {
        const bool branch_taken_0x10aedc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEDCu;
        // 0x10aee0: 0xb4850000  sdr         $a1, 0x0($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aedc) {
            ctx->pc = 0x10AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ae78;
        }
    }
    ctx->pc = 0x10AEE4u;
    // 0x10aee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AEE4u;
    {
        const bool branch_taken_0x10aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AEE4u;
        // 0x10aee8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aee4) {
            ctx->pc = 0x10AEF8u;
            goto label_10aef8;
        }
    }
    ctx->pc = 0x10AEECu;
label_10aeec:
    // 0x10aeec: 0xc042882  jal         func_10A208
    ctx->pc = 0x10AEECu;
    SET_GPR_U32(ctx, 31, 0x10AEF4u);
    ctx->pc = 0x10AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AEECu;
    // 0x10aef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A208u, 0x10AEECu, 0x10AEF4u)) {
        return;
    }
    ctx->pc = 0x10AEF4u;
label_10aef4:
    // 0x10aef4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10aef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10aef8:
    // 0x10aef8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10aef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aefc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10aefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af00: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF00u;
        // 0x10af04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF08u;
}
