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

// Function: sub_0019AE70
// Address: 0x19ae70 - 0x19af40
void sub_0019AE70_0x19ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AE70_0x19ae70");
#endif

    switch (ctx->pc) {
        case 0x19ae88u: goto label_19ae88;
        case 0x19af0cu: goto label_19af0c;
        case 0x19af18u: goto label_19af18;
        case 0x19af2cu: goto label_19af2c;
        default: break;
    }

    ctx->pc = 0x19ae70u;

    // 0x19ae70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ae74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19ae78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ae7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ae80: 0xc07664a  jal         func_1D9928
    ctx->pc = 0x19AE80u;
    SET_GPR_U32(ctx, 31, 0x19AE88u);
    ctx->pc = 0x19AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE80u;
    // 0x19ae84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9928u, 0x19AE80u, 0x19AE88u)) {
        return;
    }
    ctx->pc = 0x19AE88u;
label_19ae88:
    // 0x19ae88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19ae88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae8c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x19ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19ae90: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x19AE90u;
    {
        const bool branch_taken_0x19ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae90) {
            ctx->pc = 0x19AE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AE90u;
            // 0x19ae94: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AF30u;
            goto label_19af30;
        }
    }
    ctx->pc = 0x19AE98u;
    // 0x19ae98: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19ae9c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19AE9Cu;
    {
        const bool branch_taken_0x19ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE9Cu;
        // 0x19aea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae9c) {
            ctx->pc = 0x19AF20u;
            goto label_19af20;
        }
    }
    ctx->pc = 0x19AEA4u;
    // 0x19aea4: 0x6a02004b  ldl         $v0, 0x4B($s0)
    ctx->pc = 0x19aea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19aea8: 0x6e020044  ldr         $v0, 0x44($s0)
    ctx->pc = 0x19aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19aeac: 0x6a030053  ldl         $v1, 0x53($s0)
    ctx->pc = 0x19aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19aeb0: 0x6e03004c  ldr         $v1, 0x4C($s0)
    ctx->pc = 0x19aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19aeb4: 0x6a04005b  ldl         $a0, 0x5B($s0)
    ctx->pc = 0x19aeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x19aeb8: 0x6e040054  ldr         $a0, 0x54($s0)
    ctx->pc = 0x19aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x19aebc: 0x6a050063  ldl         $a1, 0x63($s0)
    ctx->pc = 0x19aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19aec0: 0x6e05005c  ldr         $a1, 0x5C($s0)
    ctx->pc = 0x19aec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x19aec4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x19aec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aec8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x19aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aecc: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x19aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aed0: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x19aed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aed4: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x19aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aed8: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x19aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aedc: 0xb225001f  sdl         $a1, 0x1F($s1)
    ctx->pc = 0x19aedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aee0: 0xb6250018  sdr         $a1, 0x18($s1)
    ctx->pc = 0x19aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aee4: 0x6a02006b  ldl         $v0, 0x6B($s0)
    ctx->pc = 0x19aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x19aee8: 0x6e020064  ldr         $v0, 0x64($s0)
    ctx->pc = 0x19aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x19aeec: 0x6a030073  ldl         $v1, 0x73($s0)
    ctx->pc = 0x19aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x19aef0: 0x6e03006c  ldr         $v1, 0x6C($s0)
    ctx->pc = 0x19aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x19aef4: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x19aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aef8: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x19aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19aefc: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x19aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19af00: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x19af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19af04: 0xc076642  jal         func_1D9908
    ctx->pc = 0x19AF04u;
    SET_GPR_U32(ctx, 31, 0x19AF0Cu);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x19AF04u, 0x19AF0Cu)) {
        return;
    }
    ctx->pc = 0x19AF0Cu;
label_19af0c:
    // 0x19af0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19af0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af10: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x19AF10u;
    SET_GPR_U32(ctx, 31, 0x19AF18u);
    ctx->pc = 0x19AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF10u;
    // 0x19af14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x19AF10u, 0x19AF18u)) {
        return;
    }
    ctx->pc = 0x19AF18u;
label_19af18:
    // 0x19af18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19AF18u;
    {
        const bool branch_taken_0x19af18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF18u;
        // 0x19af1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af18) {
            ctx->pc = 0x19AF30u;
            goto label_19af30;
        }
    }
    ctx->pc = 0x19AF20u;
label_19af20:
    // 0x19af20: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x19af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19af24: 0xc066be8  jal         func_19AFA0
    ctx->pc = 0x19AF24u;
    SET_GPR_U32(ctx, 31, 0x19AF2Cu);
    ctx->pc = 0x19AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF24u;
    // 0x19af28: 0x8c860044  lw          $a2, 0x44($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19AFA0u, 0x19AF24u, 0x19AF2Cu)) {
        return;
    }
    ctx->pc = 0x19AF2Cu;
label_19af2c:
    // 0x19af2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19af2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19af30:
    // 0x19af30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19af34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af38: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF38u;
        // 0x19af3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF40u;
}
