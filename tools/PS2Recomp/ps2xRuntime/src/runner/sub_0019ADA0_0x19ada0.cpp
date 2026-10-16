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

// Function: sub_0019ADA0
// Address: 0x19ada0 - 0x19ae70
void sub_0019ADA0_0x19ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ADA0_0x19ada0");
#endif

    switch (ctx->pc) {
        case 0x19add4u: goto label_19add4;
        case 0x19ade4u: goto label_19ade4;
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae5cu: goto label_19ae5c;
        default: break;
    }

    ctx->pc = 0x19ada0u;

    // 0x19ada0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ada4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ada8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19adac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19adb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19adb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19adb8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x19adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x19adbc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x19adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x19adc0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ADC0u;
    {
        const bool branch_taken_0x19adc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19adc0) {
            ctx->pc = 0x19ADDCu;
            goto label_19addc;
        }
    }
    ctx->pc = 0x19ADC8u;
    // 0x19adc8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x19adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19adcc: 0xc066be8  jal         func_19AFA0
    ctx->pc = 0x19ADCCu;
    SET_GPR_U32(ctx, 31, 0x19ADD4u);
    ctx->pc = 0x19ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADCCu;
    // 0x19add0: 0x8c860044  lw          $a2, 0x44($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AFA0u, 0x19ADCCu, 0x19ADD4u)) {
        return;
    }
    ctx->pc = 0x19ADD4u;
label_19add4:
    // 0x19add4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19ADD4u;
    {
        const bool branch_taken_0x19add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADD4u;
        // 0x19add8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19add4) {
            ctx->pc = 0x19AE60u;
            goto label_19ae60;
        }
    }
    ctx->pc = 0x19ADDCu;
label_19addc:
    // 0x19addc: 0xc07664a  jal         func_1D9928
    ctx->pc = 0x19ADDCu;
    SET_GPR_U32(ctx, 31, 0x19ADE4u);
    ctx->pc = 0x1D9928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9928u, 0x19ADDCu, 0x19ADE4u)) {
        return;
    }
    ctx->pc = 0x19ADE4u;
label_19ade4:
    // 0x19ade4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ade8: 0x6a22004b  ldl         $v0, 0x4B($s1)
    ctx->pc = 0x19ade8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19adec: 0x6e220044  ldr         $v0, 0x44($s1)
    ctx->pc = 0x19adecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19adf0: 0x6a230053  ldl         $v1, 0x53($s1)
    ctx->pc = 0x19adf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19adf4: 0x6e23004c  ldr         $v1, 0x4C($s1)
    ctx->pc = 0x19adf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19adf8: 0x6a24005b  ldl         $a0, 0x5B($s1)
    ctx->pc = 0x19adf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x19adfc: 0x6e240054  ldr         $a0, 0x54($s1)
    ctx->pc = 0x19adfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x19ae00: 0x6a250063  ldl         $a1, 0x63($s1)
    ctx->pc = 0x19ae00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19ae04: 0x6e25005c  ldr         $a1, 0x5C($s1)
    ctx->pc = 0x19ae04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x19ae08: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x19ae08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae0c: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x19ae0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae10: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x19ae10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae14: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x19ae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae18: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x19ae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae1c: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x19ae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae20: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x19ae20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae24: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x19ae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae28: 0x6a22006b  ldl         $v0, 0x6B($s1)
    ctx->pc = 0x19ae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19ae2c: 0x6e220064  ldr         $v0, 0x64($s1)
    ctx->pc = 0x19ae2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19ae30: 0x6a230073  ldl         $v1, 0x73($s1)
    ctx->pc = 0x19ae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19ae34: 0x6e23006c  ldr         $v1, 0x6C($s1)
    ctx->pc = 0x19ae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19ae38: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x19ae38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae3c: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x19ae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae40: 0xb203002f  sdl         $v1, 0x2F($s0)
    ctx->pc = 0x19ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae44: 0xb6030028  sdr         $v1, 0x28($s0)
    ctx->pc = 0x19ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ae48: 0xc076642  jal         func_1D9908
    ctx->pc = 0x19AE48u;
    SET_GPR_U32(ctx, 31, 0x19AE50u);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x19AE48u, 0x19AE50u)) {
        return;
    }
    ctx->pc = 0x19AE50u;
label_19ae50:
    // 0x19ae50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae54: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x19AE54u;
    SET_GPR_U32(ctx, 31, 0x19AE5Cu);
    ctx->pc = 0x19AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE54u;
    // 0x19ae58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x19AE54u, 0x19AE5Cu)) {
        return;
    }
    ctx->pc = 0x19AE5Cu;
label_19ae5c:
    // 0x19ae5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ae5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ae60:
    // 0x19ae60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ae60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ae64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ae64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae68: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE68u;
        // 0x19ae6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AE70u;
}
