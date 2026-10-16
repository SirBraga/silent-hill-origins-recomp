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

// Function: sub_001F5F18
// Address: 0x1f5f18 - 0x1f6048
void sub_001F5F18_0x1f5f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5F18_0x1f5f18");
#endif

    switch (ctx->pc) {
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f6024u: goto label_1f6024;
        default: break;
    }

    ctx->pc = 0x1f5f18u;

    // 0x1f5f18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5f1c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f5f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f5f20: 0x3c14005c  lui         $s4, 0x5C
    ctx->pc = 0x1f5f20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)92 << 16));
    // 0x1f5f24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f5f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f5f28: 0x8e82eb14  lw          $v0, -0x14EC($s4)
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BEB14u));
    // 0x1f5f2c: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1f5f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1f5f30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f5f34: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f5f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f5f38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f5f3c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F5F3Cu;
    {
        const bool branch_taken_0x1f5f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F3Cu;
        // 0x1f5f40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f3c) {
            ctx->pc = 0x1F6024u;
            goto label_1f6024;
        }
    }
    ctx->pc = 0x1F5F44u;
    // 0x1f5f44: 0x2671eb10  addiu       $s1, $s3, -0x14F0
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961936));
    // 0x1f5f48: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f5f4c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F5F4Cu;
    {
        const bool branch_taken_0x1f5f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F4Cu;
        // 0x1f5f50: 0x2662eb10  addiu       $v0, $s3, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f4c) {
            ctx->pc = 0x1F6028u;
            goto label_1f6028;
        }
    }
    ctx->pc = 0x1F5F54u;
    // 0x1f5f54: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1f5f58: 0xc080924  jal         func_202490
    ctx->pc = 0x1F5F58u;
    SET_GPR_U32(ctx, 31, 0x1F5F60u);
    ctx->pc = 0x1F5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F58u;
    // 0x1f5f5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1F5F58u, 0x1F5F60u)) {
        return;
    }
    ctx->pc = 0x1F5F60u;
label_1f5f60:
    // 0x1f5f60: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x1f5f60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x1f5f64: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1f5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f5f68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5f6c: 0xc080924  jal         func_202490
    ctx->pc = 0x1F5F6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F74u);
    ctx->pc = 0x1F5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F6Cu;
    // 0x1f5f70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1F5F6Cu, 0x1F5F74u)) {
        return;
    }
    ctx->pc = 0x1F5F74u;
label_1f5f74:
    // 0x1f5f74: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1f5f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f5f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f7c: 0x26250038  addiu       $a1, $s1, 0x38
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1f5f80: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F5F80u;
    SET_GPR_U32(ctx, 31, 0x1F5F88u);
    ctx->pc = 0x1F5F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F80u;
    // 0x1f5f84: 0xae02eb10  sw          $v0, -0x14F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961936), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F5F80u, 0x1F5F88u)) {
        return;
    }
    ctx->pc = 0x1F5F88u;
label_1f5f88:
    // 0x1f5f88: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f5f8c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1F5F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F94u);
    ctx->pc = 0x1F5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F8Cu;
    // 0x1f5f90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1F5F8Cu, 0x1F5F94u)) {
        return;
    }
    ctx->pc = 0x1F5F94u;
label_1f5f94:
    // 0x1f5f94: 0xae82eb14  sw          $v0, -0x14EC($s4)
    ctx->pc = 0x1f5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294961940), GPR_U32(ctx, 2));
    // 0x1f5f98: 0x2666eb10  addiu       $a2, $s3, -0x14F0
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961936));
    // 0x1f5f9c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1f5f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f5fa0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1f5fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f5fa4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1f5fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f5fa8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1f5fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f5fac: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x1f5facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f5fb0: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x1f5fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f5fb4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1f5fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fb8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1f5fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fbc: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x1f5fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fc0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x1f5fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fc4: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1f5fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fc8: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1f5fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fcc: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x1f5fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f5fd0: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x1f5fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f5fd4: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x1f5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1f5fd8: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x1f5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1f5fdc: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x1f5fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f5fe0: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x1f5fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f5fe4: 0xb043001f  sdl         $v1, 0x1F($v0)
    ctx->pc = 0x1f5fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fe8: 0xb4430018  sdr         $v1, 0x18($v0)
    ctx->pc = 0x1f5fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5fec: 0xb0440027  sdl         $a0, 0x27($v0)
    ctx->pc = 0x1f5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5ff0: 0xb4440020  sdr         $a0, 0x20($v0)
    ctx->pc = 0x1f5ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5ff4: 0xb045002f  sdl         $a1, 0x2F($v0)
    ctx->pc = 0x1f5ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5ff8: 0xb4450028  sdr         $a1, 0x28($v0)
    ctx->pc = 0x1f5ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f5ffc: 0x68c30037  ldl         $v1, 0x37($a2)
    ctx->pc = 0x1f5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f6000: 0x6cc30030  ldr         $v1, 0x30($a2)
    ctx->pc = 0x1f6000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f6004: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1f6008: 0xb0430037  sdl         $v1, 0x37($v0)
    ctx->pc = 0x1f6008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f600c: 0xb4430030  sdr         $v1, 0x30($v0)
    ctx->pc = 0x1f600cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f6010: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x1f6010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x1f6014: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6014u;
    {
        const bool branch_taken_0x1f6014 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6014u;
        // 0x1f6018: 0x2662eb10  addiu       $v0, $s3, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6014) {
            ctx->pc = 0x1F6028u;
            goto label_1f6028;
        }
    }
    ctx->pc = 0x1F601Cu;
    // 0x1f601c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1F601Cu;
    SET_GPR_U32(ctx, 31, 0x1F6024u);
    ctx->pc = 0x1F6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F601Cu;
    // 0x1f6020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1F601Cu, 0x1F6024u)) {
        return;
    }
    ctx->pc = 0x1F6024u;
label_1f6024:
    // 0x1f6024: 0x2662eb10  addiu       $v0, $s3, -0x14F0
    ctx->pc = 0x1f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961936));
label_1f6028:
    // 0x1f6028: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f6028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f602c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f602cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6030: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f6030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6034: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f6034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6038: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f6038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f603c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6040: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6040u;
        // 0x1f6044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6048u;
}
