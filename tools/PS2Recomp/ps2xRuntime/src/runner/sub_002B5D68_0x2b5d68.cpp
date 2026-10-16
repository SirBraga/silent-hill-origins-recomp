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

// Function: sub_002B5D68
// Address: 0x2b5d68 - 0x2b6468
void sub_002B5D68_0x2b5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5D68_0x2b5d68");
#endif

    switch (ctx->pc) {
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5f78u: goto label_2b5f78;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b61d8u: goto label_2b61d8;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6294u: goto label_2b6294;
        case 0x2b6364u: goto label_2b6364;
        default: break;
    }

    ctx->pc = 0x2b5d68u;

    // 0x2b5d68: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2b5d6c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2b5d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2b5d70: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x2b5d70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d74: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2b5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2b5d78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d7c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2b5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2b5d80: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x2b5d80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5d84: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2b5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2b5d88: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2b5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2b5d8c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2b5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2b5d90: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2b5d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2b5d94: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2b5d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2b5d98: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2b5d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2b5d9c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b5d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b5da0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2b5da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b5da4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2b5da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b5da8: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x2b5da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b5dac: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x2b5dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b5db0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2b5db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5db4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2b5db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5db8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2b5db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5dbc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2b5dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5dc0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2b5dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b5dc4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2b5dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b5dc8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2b5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b5dcc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2b5dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5dd0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2b5dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5dd4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2b5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2b5dd8: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x2b5dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b5ddc: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x2b5ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b5de0: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2b5de0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b5de4: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x2b5de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5de8: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x2b5de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5dec: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x2b5decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x2b5df0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5df4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2b5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2b5df8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5dfc: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x2b5dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b5e00: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x2b5e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b5e04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2b5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b5e08: 0xb244005f  sdl         $a0, 0x5F($s2)
    ctx->pc = 0x2b5e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5e0c: 0xb6440058  sdr         $a0, 0x58($s2)
    ctx->pc = 0x2b5e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b5e10: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x2b5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x2b5e14: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B5E14u;
    {
        const bool branch_taken_0x2b5e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E14u;
        // 0x2b5e18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e14) {
            ctx->pc = 0x2B5EC8u;
            goto label_2b5ec8;
        }
    }
    ctx->pc = 0x2B5E1Cu;
    // 0x2b5e1c: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x2b5e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5e20: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b5e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e24: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x2b5e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5e28: 0x31040003  andi        $a0, $t0, 0x3
    ctx->pc = 0x2b5e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2b5e2c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2b5e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e30: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B5E30u;
    {
        const bool branch_taken_0x2b5e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E30u;
        // 0x2b5e34: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e30) {
            ctx->pc = 0x2B5E90u;
            goto label_2b5e90;
        }
    }
    ctx->pc = 0x2B5E38u;
    // 0x2b5e38: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2b5e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b5e3c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2B5E3Cu;
    {
        const bool branch_taken_0x2b5e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e3c) {
            ctx->pc = 0x2B5E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E3Cu;
            // 0x2b5e40: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E7Cu;
            goto label_2b5e7c;
        }
    }
    ctx->pc = 0x2B5E44u;
    // 0x2b5e44: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b5e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b5e48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5E48u;
    {
        const bool branch_taken_0x2b5e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e48) {
            ctx->pc = 0x2B5E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E48u;
            // 0x2b5e4c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5E68u;
            goto label_2b5e68;
        }
    }
    ctx->pc = 0x2B5E50u;
    // 0x2b5e50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2b5e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2b5e54: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2b5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b5e58: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2b5e5c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2b5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b5e60: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b5e60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5e64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2b5e68:
    // 0x2b5e68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b5e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b5e6c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b5e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b5e70: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b5e74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b5e78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2b5e7c:
    // 0x2b5e7c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b5e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b5e80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b5e84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b5e88: 0x12a8000f  beq         $s5, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B5E88u;
    {
        const bool branch_taken_0x2b5e88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E88u;
        // 0x2b5e8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e88) {
            ctx->pc = 0x2B5EC8u;
            goto label_2b5ec8;
        }
    }
    ctx->pc = 0x2B5E90u;
label_2b5e90:
    // 0x2b5e90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b5e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e94: 0x0  nop
    ctx->pc = 0x2b5e94u;
    // NOP
label_2b5e98:
    // 0x2b5e98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b5e9c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2b5e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2b5ea0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b5ea4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b5ea8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b5ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b5eac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2b5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2b5eb0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b5eb4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2b5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2b5eb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b5ebc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b5ec0: 0x16a8fff5  bne         $s5, $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B5EC0u;
    {
        const bool branch_taken_0x2b5ec0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 8));
        ctx->pc = 0x2B5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EC0u;
        // 0x2b5ec4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ec0) {
            ctx->pc = 0x2B5E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5e98;
        }
    }
    ctx->pc = 0x2B5EC8u;
label_2b5ec8:
    // 0x2b5ec8: 0x8da30008  lw          $v1, 0x8($t5)
    ctx->pc = 0x2b5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2b5ecc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b5eccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ed0: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2b5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2b5ed4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2b5ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2b5ed8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2b5edc: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2B5EDCu;
    {
        const bool branch_taken_0x2b5edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EDCu;
        // 0x2b5ee0: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5edc) {
            ctx->pc = 0x2B6058u;
            goto label_2b6058;
        }
    }
    ctx->pc = 0x2B5EE4u;
    // 0x2b5ee4: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x2b5ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b5ee8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2b5ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5eec: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b5eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5ef0: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x2b5ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2b5ef4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B5EF4u;
    {
        const bool branch_taken_0x2b5ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EF4u;
        // 0x2b5ef8: 0x24c5002c  addiu       $a1, $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ef4) {
            ctx->pc = 0x2B5F70u;
            goto label_2b5f70;
        }
    }
    ctx->pc = 0x2B5EFCu;
    // 0x2b5efc: 0x8ca5ffe0  lw          $a1, -0x20($a1)
    ctx->pc = 0x2b5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x2b5f00: 0x10a9000c  beq         $a1, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5F00u;
    {
        const bool branch_taken_0x2b5f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F00u;
        // 0x2b5f04: 0x8cc7002c  lw          $a3, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f00) {
            ctx->pc = 0x2B5F34u;
            goto label_2b5f34;
        }
    }
    ctx->pc = 0x2B5F08u;
    // 0x2b5f08: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5f0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b5f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b5f10: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5f14: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5f18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5f1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5f24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b5f28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5f30: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b5f34:
    // 0x2b5f34: 0x10e9000c  beq         $a3, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5F34u;
    {
        const bool branch_taken_0x2b5f34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F34u;
        // 0x2b5f38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f34) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5F3Cu;
    // 0x2b5f3c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5f40: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2b5f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b5f44: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5f48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5f4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5f50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b5f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5f54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5f58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b5f5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5f64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b5f68:
    // 0x2b5f68: 0x1155003b  beq         $t2, $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B5F68u;
    {
        const bool branch_taken_0x2b5f68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F68u;
        // 0x2b5f6c: 0x24c5012c  addiu       $a1, $a2, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f68) {
            ctx->pc = 0x2B6058u;
            goto label_2b6058;
        }
    }
    ctx->pc = 0x2B5F70u;
label_2b5f70:
    // 0x2b5f70: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b5f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2b5f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f78:
    // 0x2b5f78: 0x8d05ffe0  lw          $a1, -0x20($t0)
    ctx->pc = 0x2b5f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
    // 0x2b5f7c: 0x10a9000c  beq         $a1, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5F7Cu;
    {
        const bool branch_taken_0x2b5f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F7Cu;
        // 0x2b5f80: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f7c) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5F84u;
    // 0x2b5f84: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5f88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b5f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b5f8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5f90: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5f94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5f98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5f9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5fa0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b5fa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5fac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b5facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b5fb0:
    // 0x2b5fb0: 0x10c9000b  beq         $a2, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5FB0u;
    {
        const bool branch_taken_0x2b5fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB0u;
        // 0x2b5fb4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fb0) {
            ctx->pc = 0x2B5FE0u;
            goto label_2b5fe0;
        }
    }
    ctx->pc = 0x2B5FB8u;
    // 0x2b5fb8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5fbc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5fc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5fc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5fc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5fcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5fd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b5fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5fdc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b5fe0:
    // 0x2b5fe0: 0x8d0500e0  lw          $a1, 0xE0($t0)
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x2b5fe4: 0x10a9000c  beq         $a1, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5FE4u;
    {
        const bool branch_taken_0x2b5fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE4u;
        // 0x2b5fe8: 0x8ce60100  lw          $a2, 0x100($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fe4) {
            ctx->pc = 0x2B6018u;
            goto label_2b6018;
        }
    }
    ctx->pc = 0x2B5FECu;
    // 0x2b5fec: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b5fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b5ff0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b5ff4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5ff8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5ffc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6000: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b6000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b6004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6008: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b6008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b600c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6014: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b6014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b6018:
    // 0x2b6018: 0x10c9000b  beq         $a2, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B6018u;
    {
        const bool branch_taken_0x2b6018 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6018u;
        // 0x2b601c: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6018) {
            ctx->pc = 0x2B6048u;
            goto label_2b6048;
        }
    }
    ctx->pc = 0x2B6020u;
    // 0x2b6020: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b6020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b6024: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b6028: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b602c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6030: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b6034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6038: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b6038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b603c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6044: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b6044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b6048:
    // 0x2b6048: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x2b604c: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2b604cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x2b6050: 0x16aaffc9  bne         $s5, $t2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2B6050u;
    {
        const bool branch_taken_0x2b6050 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6050u;
        // 0x2b6054: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6050) {
            ctx->pc = 0x2B5F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5f78;
        }
    }
    ctx->pc = 0x2B6058u;
label_2b6058:
    // 0x2b6058: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2b605c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2b605cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6060: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B6060u;
    {
        const bool branch_taken_0x2b6060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6060u;
        // 0x2b6064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6060) {
            ctx->pc = 0x2B60FCu;
            goto label_2b60fc;
        }
    }
    ctx->pc = 0x2B6068u;
    // 0x2b6068: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b606c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2b606cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6070: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b6070u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6074: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b6074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6078: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b6078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b607c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2b6080:
    // 0x2b6080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6084: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b6084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6088: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2b608c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x2b608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x2b6090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6094: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B6094u;
    {
        const bool branch_taken_0x2b6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6094u;
        // 0x2b6098: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6094) {
            ctx->pc = 0x2B60F0u;
            goto label_2b60f0;
        }
    }
    ctx->pc = 0x2B609Cu;
    // 0x2b609c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2b609cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60a0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b60a4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b60a8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b60ac: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2b60b0: 0x1432821  addu        $a1, $t2, $v1
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2b60b4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2b60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2b60b8:
    // 0x2b60b8: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x2b60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x2b60bc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2b60bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2b60c0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2b60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x2b60c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b60c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2b60c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b60cc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2b60ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2b60d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b60d4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2b60d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2b60d8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b60dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b60e0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2b60e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b60e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b60e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b60e8: 0x16a3fff3  bne         $s5, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B60E8u;
    {
        const bool branch_taken_0x2b60e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60E8u;
        // 0x2b60ec: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60e8) {
            ctx->pc = 0x2B60B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b60b8;
        }
    }
    ctx->pc = 0x2B60F0u;
label_2b60f0:
    // 0x2b60f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2b60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b60f4: 0x14aeffe2  bne         $a1, $t6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B60F4u;
    {
        const bool branch_taken_0x2b60f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 14));
        ctx->pc = 0x2B60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F4u;
        // 0x2b60f8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60f4) {
            ctx->pc = 0x2B6080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6080;
        }
    }
    ctx->pc = 0x2B60FCu;
label_2b60fc:
    // 0x2b60fc: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x2b60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2b6100: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b6100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6104: 0x8da30008  lw          $v1, 0x8($t5)
    ctx->pc = 0x2b6104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2b6108: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b6108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2b610c: 0xae4c0080  sw          $t4, 0x80($s2)
    ctx->pc = 0x2b610cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 12));
    // 0x2b6110: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x2b6110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x2b6114: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x2b6114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x2b6118: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2b6118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2b611c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B611Cu;
    {
        const bool branch_taken_0x2b611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B611Cu;
        // 0x2b6120: 0xae43007c  sw          $v1, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b611c) {
            ctx->pc = 0x2B619Cu;
            goto label_2b619c;
        }
    }
    ctx->pc = 0x2B6124u;
    // 0x2b6124: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2b6124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b6128: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b6128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b612c: 0x30c40003  andi        $a0, $a2, 0x3
    ctx->pc = 0x2b612cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2b6130: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B6130u;
    {
        const bool branch_taken_0x2b6130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6130u;
        // 0x2b6134: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6130) {
            ctx->pc = 0x2B6178u;
            goto label_2b6178;
        }
    }
    ctx->pc = 0x2B6138u;
    // 0x2b6138: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2b6138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b613c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B613Cu;
    {
        const bool branch_taken_0x2b613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b613c) {
            ctx->pc = 0x2B6140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B613Cu;
            // 0x2b6140: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B616Cu;
            goto label_2b616c;
        }
    }
    ctx->pc = 0x2B6144u;
    // 0x2b6144: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b6144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b6148: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6148u;
    {
        const bool branch_taken_0x2b6148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6148) {
            ctx->pc = 0x2B614Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6148u;
            // 0x2b614c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6160u;
            goto label_2b6160;
        }
    }
    ctx->pc = 0x2B6150u;
    // 0x2b6150: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b6150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b6154: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2b6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b6158: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b6158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b615c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b615cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2b6160:
    // 0x2b6160: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b6164: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b6164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b6168: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b6168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2b616c:
    // 0x2b616c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b616cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b6170: 0x12a6000a  beq         $s5, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6170u;
    {
        const bool branch_taken_0x2b6170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6170u;
        // 0x2b6174: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6170) {
            ctx->pc = 0x2B619Cu;
            goto label_2b619c;
        }
    }
    ctx->pc = 0x2B6178u;
label_2b6178:
    // 0x2b6178: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b6178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b617c: 0x0  nop
    ctx->pc = 0x2b617cu;
    // NOP
label_2b6180:
    // 0x2b6180: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b6180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b6184: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2b6184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2b6188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b6188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2b618c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b618cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2b6190: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b6190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2b6194: 0x16a6fffa  bne         $s5, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B6194u;
    {
        const bool branch_taken_0x2b6194 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6194u;
        // 0x2b6198: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6194) {
            ctx->pc = 0x2B6180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6180;
        }
    }
    ctx->pc = 0x2B619Cu;
label_2b619c:
    // 0x2b619c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b619cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b61a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b61a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61a4: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x2b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2b61a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b61a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61ac: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2b61acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2b61b0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2b61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b61b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b61b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61b8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2b61bc: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x2b61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x2b61c0: 0x1080009c  beqz        $a0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2B61C0u;
    {
        const bool branch_taken_0x2b61c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c0) {
            ctx->pc = 0x2B6434u;
            goto label_2b6434;
        }
    }
    ctx->pc = 0x2B61C8u;
    // 0x2b61c8: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x2b61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x2b61cc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2b61ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2b61d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61d4: 0x0  nop
    ctx->pc = 0x2b61d4u;
    // NOP
label_2b61d8:
    // 0x2b61d8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b61dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2b61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b61e0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2b61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2b61e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b61e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b61e8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b61ec: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2b61ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b61f4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x2b61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x2b61f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b61fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6200: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b6200u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6208: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b6208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2b620c: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2B620Cu;
    {
        const bool branch_taken_0x2b620c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B620Cu;
        // 0x2b6210: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b620c) {
            ctx->pc = 0x2B640Cu;
            goto label_2b640c;
        }
    }
    ctx->pc = 0x2B6214u;
    // 0x2b6214: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x2b6214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6218: 0x180b02d  daddu       $s6, $t4, $zero
    ctx->pc = 0x2b6218u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b621c: 0x0  nop
    ctx->pc = 0x2b621cu;
    // NOP
label_2b6220:
    // 0x2b6220: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b6224: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2b6224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6228: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2b622c: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x2b622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2b6230: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x2b6230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b6234: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b6238: 0x8cb3002c  lw          $s3, 0x2C($a1)
    ctx->pc = 0x2b6238u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2b623c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2b623cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2b6240: 0x12080031  beq         $s0, $t0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B6240u;
    {
        const bool branch_taken_0x2b6240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6240u;
        // 0x2b6244: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6240) {
            ctx->pc = 0x2B6308u;
            goto label_2b6308;
        }
    }
    ctx->pc = 0x2B6248u;
    // 0x2b6248: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b624c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2b624cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b6250: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2b6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b6254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6258: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2b6258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b625c: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2b625cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6260: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b6260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b6264: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2b6264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b626c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b6270: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x2b6270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x2b6274: 0xe38821  addu        $s1, $a3, $v1
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6278: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x2b6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    // 0x2b627c: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x2b627cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6280: 0x7fab0060  sq          $t3, 0x60($sp)
    ctx->pc = 0x2b6280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
    // 0x2b6284: 0x7fac0070  sq          $t4, 0x70($sp)
    ctx->pc = 0x2b6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 12));
    // 0x2b6288: 0x7fad0080  sq          $t5, 0x80($sp)
    ctx->pc = 0x2b6288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 13));
    // 0x2b628c: 0xc0ad702  jal         func_2B5C08
    ctx->pc = 0x2B628Cu;
    SET_GPR_U32(ctx, 31, 0x2B6294u);
    ctx->pc = 0x2B6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B628Cu;
    // 0x2b6290: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B5C08u, 0x2B628Cu, 0x2B6294u)) {
        return;
    }
    ctx->pc = 0x2B6294u;
label_2b6294:
    // 0x2b6294: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x2b6294u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6298: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2b6298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b629c: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x2b629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2b62a0: 0x22a1823  subu        $v1, $s1, $t2
    ctx->pc = 0x2b62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x2b62a4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b62a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b62ac: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2b62acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2b62b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b62b4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2b62b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b62b8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b62bc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b62c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b62c4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b62c8: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2b62cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b62d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b62d4: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2b62d8: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x2b62d8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b62dc: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x2b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x2b62e0: 0xacde0000  sw          $fp, 0x0($a2)
    ctx->pc = 0x2b62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 30));
    // 0x2b62e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b62e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b62ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b62ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b62f0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b62f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b62f8: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x2b62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x2b62fc: 0x7bad0080  lq          $t5, 0x80($sp)
    ctx->pc = 0x2b62fcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b6300: 0x7bac0070  lq          $t4, 0x70($sp)
    ctx->pc = 0x2b6300u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b6304: 0x7bab0060  lq          $t3, 0x60($sp)
    ctx->pc = 0x2b6304u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b6308:
    // 0x2b6308: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b630c: 0x12630032  beq         $s3, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B630Cu;
    {
        const bool branch_taken_0x2b630c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B630Cu;
        // 0x2b6310: 0x138080  sll         $s0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b630c) {
            ctx->pc = 0x2B63D8u;
            goto label_2b63d8;
        }
    }
    ctx->pc = 0x2B6314u;
    // 0x2b6314: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2b6314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b6318: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2b6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b631c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6320: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2b6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b6324: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6328: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b632c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2b632cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b6330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6334: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2b6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b6338: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x2b6338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b633c: 0xe38821  addu        $s1, $a3, $v1
    ctx->pc = 0x2b633cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b6340: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x2b6340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x2b6344: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x2b6344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6348: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2b6348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2b634c: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x2b634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    // 0x2b6350: 0x7fab0060  sq          $t3, 0x60($sp)
    ctx->pc = 0x2b6350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
    // 0x2b6354: 0x7fac0070  sq          $t4, 0x70($sp)
    ctx->pc = 0x2b6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 12));
    // 0x2b6358: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2b6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2b635c: 0xc0ad702  jal         func_2B5C08
    ctx->pc = 0x2B635Cu;
    SET_GPR_U32(ctx, 31, 0x2B6364u);
    ctx->pc = 0x2B6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B635Cu;
    // 0x2b6360: 0x7fad0080  sq          $t5, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B5C08u, 0x2B635Cu, 0x2B6364u)) {
        return;
    }
    ctx->pc = 0x2B6364u;
label_2b6364:
    // 0x2b6364: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x2b6364u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6368: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b636c: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2b6370: 0x22a1823  subu        $v1, $s1, $t2
    ctx->pc = 0x2b6370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x2b6374: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b6378: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2b637c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2b637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2b6380: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2b6380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2b6384: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2b6384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2b6388: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b638c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6390: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6394: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2b6394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b6398: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2b6398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2b639c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b63a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b63a4: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x2b63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2b63a8: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x2b63a8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b63ac: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x2b63acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x2b63b0: 0xacde0000  sw          $fp, 0x0($a2)
    ctx->pc = 0x2b63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 30));
    // 0x2b63b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b63b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b63bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b63c0: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2b63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b63c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b63c8: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x2b63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x2b63cc: 0x7bad0080  lq          $t5, 0x80($sp)
    ctx->pc = 0x2b63ccu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b63d0: 0x7bac0070  lq          $t4, 0x70($sp)
    ctx->pc = 0x2b63d0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b63d4: 0x7bab0060  lq          $t3, 0x60($sp)
    ctx->pc = 0x2b63d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b63d8:
    // 0x2b63d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b63dc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2b63e0: 0x26d60100  addiu       $s6, $s6, 0x100
    ctx->pc = 0x2b63e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
    // 0x2b63e4: 0x258c0100  addiu       $t4, $t4, 0x100
    ctx->pc = 0x2b63e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 256));
    // 0x2b63e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b63ec: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x2b63ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2b63f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b63f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2b63f4: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2b63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2b63f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b63f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2b63fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6400: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b6400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2b6404: 0x16a2ff86  bne         $s5, $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x2B6404u;
    {
        const bool branch_taken_0x2b6404 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6404u;
        // 0x2b6408: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6404) {
            ctx->pc = 0x2B6220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6220;
        }
    }
    ctx->pc = 0x2B640Cu;
label_2b640c:
    // 0x2b640c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2b640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2b6410: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2b6410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b6414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6418: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2b6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2b641c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x2b641cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x2b6420: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2b6420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2b6424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6428: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x2b6428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2b642c: 0x14a6ff6a  bne         $a1, $a2, . + 4 + (-0x96 << 2)
    ctx->pc = 0x2B642Cu;
    {
        const bool branch_taken_0x2b642c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B642Cu;
        // 0x2b6430: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b642c) {
            ctx->pc = 0x2B61D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b61d8;
        }
    }
    ctx->pc = 0x2B6434u;
label_2b6434:
    // 0x2b6434: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2b6434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b6438: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2b6438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b643c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2b643cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b6440: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2b6440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b6444: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2b6444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b6448: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2b6448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b644c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2b644cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b6450: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2b6450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b6454: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2b6454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b6458: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b6458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b645c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B645Cu;
        // 0x2b6460: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6464u;
    // 0x2b6464: 0x0  nop
    ctx->pc = 0x2b6464u;
    // NOP
    ctx->pc = 0x2b6468u;
}
