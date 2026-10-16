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

// Function: sub_00101D38
// Address: 0x101d38 - 0x101f38
void sub_00101D38_0x101d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101D38_0x101d38");
#endif

    switch (ctx->pc) {
        case 0x101d88u: goto label_101d88;
        case 0x101ed0u: goto label_101ed0;
        case 0x101ee0u: goto label_101ee0;
        default: break;
    }

    ctx->pc = 0x101d38u;

    // 0x101d38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x101d3c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x101d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x101d40: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x101d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x101d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x101d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x101d4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x101d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x101d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x101d54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x101d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x101d5c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x101d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d60: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x101d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x101d64: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x101d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d68: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x101d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x101d6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101d74: 0x8e02029c  lw          $v0, 0x29C($s0)
    ctx->pc = 0x101d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x101d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101D78u;
    {
        const bool branch_taken_0x101d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D78u;
        // 0x101d7c: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d78) {
            ctx->pc = 0x101D88u;
            goto label_101d88;
        }
    }
    ctx->pc = 0x101D80u;
    // 0x101d80: 0xc04056e  jal         func_1015B8
    ctx->pc = 0x101D80u;
    SET_GPR_U32(ctx, 31, 0x101D88u);
    ctx->pc = 0x1015B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1015B8u, 0x101D80u, 0x101D88u)) {
        return;
    }
    ctx->pc = 0x101D88u;
label_101d88:
    // 0x101d88: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x101d8c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x101d90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x101d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x101d94: 0x8e0601d0  lw          $a2, 0x1D0($s0)
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x101d98: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x101d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x101d9c: 0xae1101a0  sw          $s1, 0x1A0($s0)
    ctx->pc = 0x101d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 17));
    // 0x101da0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x101da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x101da4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x101da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x101da8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x101dac: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x101db0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x101db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x101db4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x101db8: 0xae0401a4  sw          $a0, 0x1A4($s0)
    ctx->pc = 0x101db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 4));
    // 0x101dbc: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x101dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x101dc0: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x101dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x101dc4: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x101dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x101dc8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x101DC8u;
    {
        const bool branch_taken_0x101dc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x101DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DC8u;
        // 0x101dcc: 0xae030180  sw          $v1, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dc8) {
            ctx->pc = 0x101DD8u;
            goto label_101dd8;
        }
    }
    ctx->pc = 0x101DD0u;
    // 0x101dd0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x101dd4: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x101dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_101dd8:
    // 0x101dd8: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101ddc: 0xac72002c  sw          $s2, 0x2C($v1)
    ctx->pc = 0x101ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 18));
    // 0x101de0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x101de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101de4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x101de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x101de8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101dec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101df0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101df4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x101df8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101dfc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x101dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x101e00: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x101e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x101e04: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x101e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101e08: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x101e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x101e0c: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x101e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101e10: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x101e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x101e14: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x101e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101e18: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x101e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x101e1c: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x101e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x101e20: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x101E20u;
    {
        const bool branch_taken_0x101e20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E20u;
        // 0x101e24: 0xac730034  sw          $s3, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e20) {
            ctx->pc = 0x101EACu;
            goto label_101eac;
        }
    }
    ctx->pc = 0x101E28u;
    // 0x101e28: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x101e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x101e2c: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x101e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x101e30: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x101e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x101e34: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x101e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x101e38: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x101e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x101e3c: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x101e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x101e40: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x101e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x101e44: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x101e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x101e48: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x101e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x101e4c: 0xb20302c7  sdl         $v1, 0x2C7($s0)
    ctx->pc = 0x101e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e50: 0xb60302c0  sdr         $v1, 0x2C0($s0)
    ctx->pc = 0x101e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e54: 0xb20402cf  sdl         $a0, 0x2CF($s0)
    ctx->pc = 0x101e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e58: 0xb60402c8  sdr         $a0, 0x2C8($s0)
    ctx->pc = 0x101e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 712); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e5c: 0xb20502d7  sdl         $a1, 0x2D7($s0)
    ctx->pc = 0x101e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e60: 0xb60502d0  sdr         $a1, 0x2D0($s0)
    ctx->pc = 0x101e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e64: 0xb20602df  sdl         $a2, 0x2DF($s0)
    ctx->pc = 0x101e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e68: 0xb60602d8  sdr         $a2, 0x2D8($s0)
    ctx->pc = 0x101e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e6c: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x101e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x101e70: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x101e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x101e74: 0x6844003f  ldl         $a0, 0x3F($v0)
    ctx->pc = 0x101e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x101e78: 0x6c440038  ldr         $a0, 0x38($v0)
    ctx->pc = 0x101e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x101e7c: 0x68450047  ldl         $a1, 0x47($v0)
    ctx->pc = 0x101e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x101e80: 0x6c450040  ldr         $a1, 0x40($v0)
    ctx->pc = 0x101e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x101e84: 0x6846004f  ldl         $a2, 0x4F($v0)
    ctx->pc = 0x101e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x101e88: 0x6c460048  ldr         $a2, 0x48($v0)
    ctx->pc = 0x101e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x101e8c: 0xb20302e7  sdl         $v1, 0x2E7($s0)
    ctx->pc = 0x101e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e90: 0xb60302e0  sdr         $v1, 0x2E0($s0)
    ctx->pc = 0x101e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e94: 0xb20402ef  sdl         $a0, 0x2EF($s0)
    ctx->pc = 0x101e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e98: 0xb60402e8  sdr         $a0, 0x2E8($s0)
    ctx->pc = 0x101e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101e9c: 0xb20502f7  sdl         $a1, 0x2F7($s0)
    ctx->pc = 0x101e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101ea0: 0xb60502f0  sdr         $a1, 0x2F0($s0)
    ctx->pc = 0x101ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101ea4: 0xb20602ff  sdl         $a2, 0x2FF($s0)
    ctx->pc = 0x101ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x101ea8: 0xb60602f8  sdr         $a2, 0x2F8($s0)
    ctx->pc = 0x101ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_101eac:
    // 0x101eac: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x101eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x101eb0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x101eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x101eb4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x101eb8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x101eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101ebc: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x101ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x101ec0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x101ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x101ec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x101ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x101ec8: 0xc09d55c  jal         func_275570
    ctx->pc = 0x101EC8u;
    SET_GPR_U32(ctx, 31, 0x101ED0u);
    ctx->pc = 0x101ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EC8u;
    // 0x101ecc: 0x8c650024  lw          $a1, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x101EC8u, 0x101ED0u)) {
        return;
    }
    ctx->pc = 0x101ED0u;
label_101ed0:
    // 0x101ed0: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x101ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x101ed4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x101ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x101ed8: 0xc09d926  jal         func_276498
    ctx->pc = 0x101ED8u;
    SET_GPR_U32(ctx, 31, 0x101EE0u);
    ctx->pc = 0x101EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ED8u;
    // 0x101edc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x101ED8u, 0x101EE0u)) {
        return;
    }
    ctx->pc = 0x101EE0u;
label_101ee0:
    // 0x101ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ee4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x101ee8: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x101ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x101eec: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x101eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x101ef0: 0xae1501e0  sw          $s5, 0x1E0($s0)
    ctx->pc = 0x101ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 21));
    // 0x101ef4: 0xae040198  sw          $a0, 0x198($s0)
    ctx->pc = 0x101ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 4));
    // 0x101ef8: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x101ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x101efc: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x101EFCu;
    {
        const bool branch_taken_0x101efc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0xae0301c8  sw          $v1, 0x1C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101efc) {
            ctx->pc = 0x101F08u;
            goto label_101f08;
        }
    }
    ctx->pc = 0x101F04u;
    // 0x101f04: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x101f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
label_101f08:
    // 0x101f08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x101f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101f10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x101f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101f14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x101f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101f18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x101f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101f1c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x101f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101f20: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x101f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101f24: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x101f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x101F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F2Cu;
        // 0x101f30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101F34u;
    // 0x101f34: 0x0  nop
    ctx->pc = 0x101f34u;
    // NOP
    ctx->pc = 0x101f38u;
}
