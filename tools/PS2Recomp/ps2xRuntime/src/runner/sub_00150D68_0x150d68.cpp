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

// Function: sub_00150D68
// Address: 0x150d68 - 0x150f20
void sub_00150D68_0x150d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150D68_0x150d68");
#endif

    switch (ctx->pc) {
        case 0x150d94u: goto label_150d94;
        case 0x150dccu: goto label_150dcc;
        case 0x150e2cu: goto label_150e2c;
        case 0x150e90u: goto label_150e90;
        case 0x150eb8u: goto label_150eb8;
        case 0x150eccu: goto label_150ecc;
        case 0x150edcu: goto label_150edc;
        case 0x150eecu: goto label_150eec;
        default: break;
    }

    ctx->pc = 0x150d68u;

    // 0x150d68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x150d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x150d6c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x150d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x150d70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x150d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x150d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x150d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x150d7c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x150d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x150d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150d84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x150d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x150d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150d8c: 0xc05456a  jal         func_1515A8
    ctx->pc = 0x150D8Cu;
    SET_GPR_U32(ctx, 31, 0x150D94u);
    ctx->pc = 0x150D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D8Cu;
    // 0x150d90: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1515A8u, 0x150D8Cu, 0x150D94u)) {
        return;
    }
    ctx->pc = 0x150D94u;
label_150d94:
    // 0x150d94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x150d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150d9c: 0x12820056  beq         $s4, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x150D9Cu;
    {
        const bool branch_taken_0x150d9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x150DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D9Cu;
        // 0x150da0: 0x240300d8  addiu       $v1, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d9c) {
            ctx->pc = 0x150EF8u;
            goto label_150ef8;
        }
    }
    ctx->pc = 0x150DA4u;
    // 0x150da4: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x150da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150da8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x150da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x150dac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x150db0: 0x2431025  or          $v0, $s2, $v1
    ctx->pc = 0x150db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x150db4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x150db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x150db8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x150DB8u;
    {
        const bool branch_taken_0x150db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DB8u;
        // 0x150dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150db8) {
            ctx->pc = 0x150E20u;
            goto label_150e20;
        }
    }
    ctx->pc = 0x150DC0u;
    // 0x150dc0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x150dc4: 0x26150054  addiu       $s5, $s0, 0x54
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x150dc8: 0x261300dc  addiu       $s3, $s0, 0xDC
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
label_150dcc:
    // 0x150dcc: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x150dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x150dd0: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x150dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x150dd4: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x150dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x150dd8: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x150dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x150ddc: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x150ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x150de0: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x150de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x150de4: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x150de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x150de8: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x150de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x150dec: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x150decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150df0: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x150df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150df4: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x150df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150df8: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x150df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150dfc: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x150dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e00: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x150e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e04: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x150e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e08: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x150e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e0c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x150e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x150e10: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x150E10u;
    {
        const bool branch_taken_0x150e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E10u;
        // 0x150e14: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e10) {
            ctx->pc = 0x150DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150dcc;
        }
    }
    ctx->pc = 0x150E18u;
    // 0x150e18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x150E18u;
    {
        const bool branch_taken_0x150e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E18u;
        // 0x150e1c: 0x241100d8  addiu       $s1, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e18) {
            ctx->pc = 0x150E5Cu;
            goto label_150e5c;
        }
    }
    ctx->pc = 0x150E20u;
label_150e20:
    // 0x150e20: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x150e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x150e24: 0x26150054  addiu       $s5, $s0, 0x54
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x150e28: 0x261300dc  addiu       $s3, $s0, 0xDC
    ctx->pc = 0x150e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
label_150e2c:
    // 0x150e2c: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x150e2cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150e30: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x150e30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150e34: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x150e34u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x150e38: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x150e38u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x150e3c: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x150e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x150e40: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x150e40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x150e44: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x150e44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x150e48: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x150e48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x150e4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x150e50: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x150E50u;
    {
        const bool branch_taken_0x150e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x150E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E50u;
        // 0x150e54: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e50) {
            ctx->pc = 0x150E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150e2c;
        }
    }
    ctx->pc = 0x150E58u;
    // 0x150e58: 0x241100d8  addiu       $s1, $zero, 0xD8
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_150e5c:
    // 0x150e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e60: 0x2911018  mult        $v0, $s4, $s1
    ctx->pc = 0x150e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x150e64: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x150e68: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x150e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x150e6c: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x150e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x150e70: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x150e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x150e74: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x150e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150e78: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x150e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e7c: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x150e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e80: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x150e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x150e84: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x150e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x150e88: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x150E88u;
    SET_GPR_U32(ctx, 31, 0x150E90u);
    ctx->pc = 0x150E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E88u;
    // 0x150e8c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x150E88u, 0x150E90u)) {
        return;
    }
    ctx->pc = 0x150E90u;
label_150e90:
    // 0x150e90: 0x2918818  mult        $s1, $s4, $s1
    ctx->pc = 0x150e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x150e94: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x150e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x150e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e9c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x150e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x150ea0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x150ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x150ea4: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x150ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x150ea8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x150EA8u;
    {
        const bool branch_taken_0x150ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA8u;
        // 0x150eac: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea8) {
            ctx->pc = 0x150EF4u;
            goto label_150ef4;
        }
    }
    ctx->pc = 0x150EB0u;
    // 0x150eb0: 0xc07bcd0  jal         func_1EF340
    ctx->pc = 0x150EB0u;
    SET_GPR_U32(ctx, 31, 0x150EB8u);
    ctx->pc = 0x150EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EB0u;
    // 0x150eb4: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF340u, 0x150EB0u, 0x150EB8u)) {
        return;
    }
    ctx->pc = 0x150EB8u;
label_150eb8:
    // 0x150eb8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x150EB8u;
    {
        const bool branch_taken_0x150eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EB8u;
        // 0x150ebc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eb8) {
            ctx->pc = 0x150EF8u;
            goto label_150ef8;
        }
    }
    ctx->pc = 0x150EC0u;
    // 0x150ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ec4: 0xc07bce8  jal         func_1EF3A0
    ctx->pc = 0x150EC4u;
    SET_GPR_U32(ctx, 31, 0x150ECCu);
    ctx->pc = 0x150EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EC4u;
    // 0x150ec8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3A0u, 0x150EC4u, 0x150ECCu)) {
        return;
    }
    ctx->pc = 0x150ECCu;
label_150ecc:
    // 0x150ecc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x150ed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x150ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150ed4: 0xc07bcf0  jal         func_1EF3C0
    ctx->pc = 0x150ED4u;
    SET_GPR_U32(ctx, 31, 0x150EDCu);
    ctx->pc = 0x150ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150ED4u;
    // 0x150ed8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3C0u, 0x150ED4u, 0x150EDCu)) {
        return;
    }
    ctx->pc = 0x150EDCu;
label_150edc:
    // 0x150edc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x150ee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x150ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150ee4: 0xc07bcf2  jal         func_1EF3C8
    ctx->pc = 0x150EE4u;
    SET_GPR_U32(ctx, 31, 0x150EECu);
    ctx->pc = 0x150EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EE4u;
    // 0x150ee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3C8u, 0x150EE4u, 0x150EECu)) {
        return;
    }
    ctx->pc = 0x150EECu;
label_150eec:
    // 0x150eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150EECu;
    {
        const bool branch_taken_0x150eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EECu;
        // 0x150ef0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eec) {
            ctx->pc = 0x150EFCu;
            goto label_150efc;
        }
    }
    ctx->pc = 0x150EF4u;
label_150ef4:
    // 0x150ef4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x150ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_150ef8:
    // 0x150ef8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x150ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_150efc:
    // 0x150efc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x150efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150f00: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x150f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150f04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x150f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150f08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150f0c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x150f0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150f10: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x150f10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150f18: 0x3e00008  jr          $ra
    ctx->pc = 0x150F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F18u;
        // 0x150f1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F20u;
}
