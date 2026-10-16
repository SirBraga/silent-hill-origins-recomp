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

// Function: sub_00120E10
// Address: 0x120e10 - 0x120f98
void sub_00120E10_0x120e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120E10_0x120e10");
#endif

    switch (ctx->pc) {
        case 0x120e48u: goto label_120e48;
        case 0x120e54u: goto label_120e54;
        case 0x120f18u: goto label_120f18;
        case 0x120f28u: goto label_120f28;
        default: break;
    }

    ctx->pc = 0x120e10u;

    // 0x120e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120e14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x120e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x120e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x120e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120e24: 0x8e020e84  lw          $v0, 0xE84($s0)
    ctx->pc = 0x120e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3716)));
    // 0x120e28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x120E28u;
    {
        const bool branch_taken_0x120e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E28u;
        // 0x120e2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e28) {
            ctx->pc = 0x120F80u;
            goto label_120f80;
        }
    }
    ctx->pc = 0x120E30u;
    // 0x120e30: 0x8e020c9c  lw          $v0, 0xC9C($s0)
    ctx->pc = 0x120e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3228)));
    // 0x120e34: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x120E34u;
    {
        const bool branch_taken_0x120e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e34) {
            ctx->pc = 0x120E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120E34u;
            // 0x120e38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120F84u;
            goto label_120f84;
        }
    }
    ctx->pc = 0x120E3Cu;
    // 0x120e3c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x120e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x120e40: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x120E40u;
    SET_GPR_U32(ctx, 31, 0x120E48u);
    ctx->pc = 0x120E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E40u;
    // 0x120e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x120E40u, 0x120E48u)) {
        return;
    }
    ctx->pc = 0x120E48u;
label_120e48:
    // 0x120e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e4c: 0xc051be0  jal         func_146F80
    ctx->pc = 0x120E4Cu;
    SET_GPR_U32(ctx, 31, 0x120E54u);
    ctx->pc = 0x120E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E4Cu;
    // 0x120e50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146F80u, 0x120E4Cu, 0x120E54u)) {
        return;
    }
    ctx->pc = 0x120E54u;
label_120e54:
    // 0x120e54: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x120e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x120e58: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x120e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x120e5c: 0xae020c00  sw          $v0, 0xC00($s0)
    ctx->pc = 0x120e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 2));
    // 0x120e60: 0x26060c10  addiu       $a2, $s0, 0xC10
    ctx->pc = 0x120e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3088));
    // 0x120e64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x120e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x120e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e6c: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x120e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x120e70: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120e74: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x120e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
    // 0x120e78: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x120e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x120e7c: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x120e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x120e80: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x120e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x120e84: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x120e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x120e88: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x120e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x120e8c: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x120e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x120e90: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x120e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x120e94: 0x6868002f  ldl         $t0, 0x2F($v1)
    ctx->pc = 0x120e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x120e98: 0x6c680028  ldr         $t0, 0x28($v1)
    ctx->pc = 0x120e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x120e9c: 0xb2020c17  sdl         $v0, 0xC17($s0)
    ctx->pc = 0x120e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3095); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ea0: 0xb6020c10  sdr         $v0, 0xC10($s0)
    ctx->pc = 0x120ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3088); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ea4: 0xb2040c1f  sdl         $a0, 0xC1F($s0)
    ctx->pc = 0x120ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ea8: 0xb6040c18  sdr         $a0, 0xC18($s0)
    ctx->pc = 0x120ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120eac: 0xb2070c27  sdl         $a3, 0xC27($s0)
    ctx->pc = 0x120eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120eb0: 0xb6070c20  sdr         $a3, 0xC20($s0)
    ctx->pc = 0x120eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120eb4: 0xb2080c2f  sdl         $t0, 0xC2F($s0)
    ctx->pc = 0x120eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120eb8: 0xb6080c28  sdr         $t0, 0xC28($s0)
    ctx->pc = 0x120eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ebc: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x120ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x120ec0: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x120ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x120ec4: 0x6864003f  ldl         $a0, 0x3F($v1)
    ctx->pc = 0x120ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x120ec8: 0x6c640038  ldr         $a0, 0x38($v1)
    ctx->pc = 0x120ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x120ecc: 0x68670047  ldl         $a3, 0x47($v1)
    ctx->pc = 0x120eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x120ed0: 0x6c670040  ldr         $a3, 0x40($v1)
    ctx->pc = 0x120ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x120ed4: 0x6868004f  ldl         $t0, 0x4F($v1)
    ctx->pc = 0x120ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x120ed8: 0x6c680048  ldr         $t0, 0x48($v1)
    ctx->pc = 0x120ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x120edc: 0xb2020c37  sdl         $v0, 0xC37($s0)
    ctx->pc = 0x120edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ee0: 0xb6020c30  sdr         $v0, 0xC30($s0)
    ctx->pc = 0x120ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ee4: 0xb2040c3f  sdl         $a0, 0xC3F($s0)
    ctx->pc = 0x120ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ee8: 0xb6040c38  sdr         $a0, 0xC38($s0)
    ctx->pc = 0x120ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120eec: 0xb2070c47  sdl         $a3, 0xC47($s0)
    ctx->pc = 0x120eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ef0: 0xb6070c40  sdr         $a3, 0xC40($s0)
    ctx->pc = 0x120ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ef4: 0xb2080c4f  sdl         $t0, 0xC4F($s0)
    ctx->pc = 0x120ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ef8: 0xb6080c48  sdr         $t0, 0xC48($s0)
    ctx->pc = 0x120ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120efc: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x120efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120f00: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x120f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x120f04: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x120f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x120f08: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x120f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x120f0c: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x120f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120f10: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x120F10u;
    SET_GPR_U32(ctx, 31, 0x120F18u);
    ctx->pc = 0x120F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F10u;
    // 0x120f14: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x120F10u, 0x120F18u)) {
        return;
    }
    ctx->pc = 0x120F18u;
label_120f18:
    // 0x120f18: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x120f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f20: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x120F20u;
    SET_GPR_U32(ctx, 31, 0x120F28u);
    ctx->pc = 0x120F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F20u;
    // 0x120f24: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x120F20u, 0x120F28u)) {
        return;
    }
    ctx->pc = 0x120F28u;
label_120f28:
    // 0x120f28: 0x8e040c00  lw          $a0, 0xC00($s0)
    ctx->pc = 0x120f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120f2c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x120f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x120f30: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x120f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x120f34: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x120f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x120f38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120f3c: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x120f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x120f40: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x120f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x120f44: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x120f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x120f48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x120f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x120f4c: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x120f4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
    // 0x120f50: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x120f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x120f54: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x120f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x120f58: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x120f5c: 0xb2020ef7  sdl         $v0, 0xEF7($s0)
    ctx->pc = 0x120f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120f60: 0xb6020ef0  sdr         $v0, 0xEF0($s0)
    ctx->pc = 0x120f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120f64: 0xae030ef8  sw          $v1, 0xEF8($s0)
    ctx->pc = 0x120f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3832), GPR_U32(ctx, 3));
    // 0x120f68: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x120f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x120f6c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x120f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x120f70: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x120f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x120f74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x120f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120f78: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x120f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120f7c: 0xe6000efc  swc1        $f0, 0xEFC($s0)
    ctx->pc = 0x120f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3836), bits); }
label_120f80:
    // 0x120f80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x120f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120f84:
    // 0x120f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x120F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F8Cu;
        // 0x120f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120F94u;
    // 0x120f94: 0x0  nop
    ctx->pc = 0x120f94u;
    // NOP
    ctx->pc = 0x120f98u;
}
