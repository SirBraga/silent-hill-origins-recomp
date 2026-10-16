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

// Function: sub_002F6C38
// Address: 0x2f6c38 - 0x2f6d78
void sub_002F6C38_0x2f6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6C38_0x2f6c38");
#endif

    switch (ctx->pc) {
        case 0x2f6cc4u: goto label_2f6cc4;
        case 0x2f6d20u: goto label_2f6d20;
        case 0x2f6d6cu: goto label_2f6d6c;
        default: break;
    }

    ctx->pc = 0x2f6c38u;

    // 0x2f6c38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f6c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c3c: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x2f6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2f6c40: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2f6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f6c44: 0xe24018  mult        $t0, $a3, $v0
    ctx->pc = 0x2f6c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f6c48: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x2f6c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f6c4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6c50: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2f6c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6c58: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f6c5c: 0x24636340  addiu       $v1, $v1, 0x6340
    ctx->pc = 0x2f6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25408));
    // 0x2f6c60: 0x2449cc80  addiu       $t1, $v0, -0x3380
    ctx->pc = 0x2f6c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x2f6c64: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2f6c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f6c6c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2f6c70: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x2f6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2f6c74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f6c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6c78: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f6c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f6c7c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2f6c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f6c80: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F6C80u;
    {
        const bool branch_taken_0x2f6c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c80) {
            ctx->pc = 0x2F6C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6C80u;
            // 0x2f6c84: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6D60u;
            goto label_2f6d60;
        }
    }
    ctx->pc = 0x2F6C88u;
    // 0x2f6c88: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x2f6c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f6c8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f6c90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6c94: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2f6c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6c98: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F6C98u;
    {
        const bool branch_taken_0x2f6c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C98u;
        // 0x2f6c9c: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c98) {
            ctx->pc = 0x2F6D5Cu;
            goto label_2f6d5c;
        }
    }
    ctx->pc = 0x2F6CA0u;
    // 0x2f6ca0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2f6ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ca4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2f6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2f6ca8: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x2f6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2f6cac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2f6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f6cb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6cb4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x2f6cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f6cb8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2f6cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2f6cbc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F6CBCu;
    {
        const bool branch_taken_0x2f6cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CBCu;
        // 0x2f6cc0: 0x24430400  addiu       $v1, $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cbc) {
            ctx->pc = 0x2F6D20u;
            goto label_2f6d20;
        }
    }
    ctx->pc = 0x2F6CC4u;
label_2f6cc4:
    // 0x2f6cc4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2f6cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f6cc8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2f6cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f6ccc: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2f6cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f6cd0: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2f6cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f6cd4: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2f6cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f6cd8: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2f6cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f6cdc: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x2f6cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f6ce0: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x2f6ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f6ce4: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2f6ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6ce8: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2f6ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6cec: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2f6cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6cf0: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2f6cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6cf4: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x2f6cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6cf8: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x2f6cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6cfc: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x2f6cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6d00: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x2f6d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6d04: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f6d08: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f6d0c: 0x0  nop
    ctx->pc = 0x2f6d0cu;
    // NOP
    // 0x2f6d10: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6D10u;
    {
        const bool branch_taken_0x2f6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6d10) {
            ctx->pc = 0x2F6CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6cc4;
        }
    }
    ctx->pc = 0x2F6D18u;
    // 0x2f6d18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F6D18u;
    {
        const bool branch_taken_0x2f6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D18u;
        // 0x2f6d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d18) {
            ctx->pc = 0x2F6D6Cu;
            goto label_2f6d6c;
        }
    }
    ctx->pc = 0x2F6D20u;
label_2f6d20:
    // 0x2f6d20: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2f6d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6d24: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2f6d24u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6d28: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x2f6d28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f6d2c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x2f6d2cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2f6d30: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2f6d30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2f6d34: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2f6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2f6d38: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2f6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2f6d3c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x2f6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x2f6d40: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f6d44: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f6d48: 0x0  nop
    ctx->pc = 0x2f6d48u;
    // NOP
    // 0x2f6d4c: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F6D4Cu;
    {
        const bool branch_taken_0x2f6d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6d4c) {
            ctx->pc = 0x2F6D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6d20;
        }
    }
    ctx->pc = 0x2F6D54u;
    // 0x2f6d54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6D54u;
    {
        const bool branch_taken_0x2f6d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D54u;
        // 0x2f6d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d54) {
            ctx->pc = 0x2F6D6Cu;
            goto label_2f6d6c;
        }
    }
    ctx->pc = 0x2F6D5Cu;
label_2f6d5c:
    // 0x2f6d5c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2f6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d60:
    // 0x2f6d60: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2f6d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d64: 0xc0bd9ec  jal         func_2F67B0
    ctx->pc = 0x2F6D64u;
    SET_GPR_U32(ctx, 31, 0x2F6D6Cu);
    ctx->pc = 0x2F6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D64u;
    // 0x2f6d68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67B0u, 0x2F6D64u, 0x2F6D6Cu)) {
        return;
    }
    ctx->pc = 0x2F6D6Cu;
label_2f6d6c:
    // 0x2f6d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D70u;
        // 0x2f6d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D78u;
}
