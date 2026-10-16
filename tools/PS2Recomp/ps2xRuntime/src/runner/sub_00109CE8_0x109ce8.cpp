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

// Function: sub_00109CE8
// Address: 0x109ce8 - 0x109e78
void sub_00109CE8_0x109ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109CE8_0x109ce8");
#endif

    switch (ctx->pc) {
        case 0x109d10u: goto label_109d10;
        case 0x109d60u: goto label_109d60;
        case 0x109df8u: goto label_109df8;
        default: break;
    }

    ctx->pc = 0x109ce8u;

    // 0x109ce8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cec: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x109cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cf0: 0x12c1023  subu        $v0, $t1, $t4
    ctx->pc = 0x109cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x109cf4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x109cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x109cf8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x109cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x109cfc: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x109CFCu;
    {
        const bool branch_taken_0x109cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CFCu;
        // 0x109d00: 0x27bdffd0  addiu       $sp, $sp, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cfc) {
            ctx->pc = 0x109E6Cu;
            goto label_109e6c;
        }
    }
    ctx->pc = 0x109D04u;
    // 0x109d04: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x109d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d08: 0xa85823  subu        $t3, $a1, $t0
    ctx->pc = 0x109d08u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x109d0c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x109d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_109d10:
    // 0x109d10: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x109d14: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x109d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x109d18: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x109d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x109d1c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x109d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d20: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x109d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d24: 0xb38c3  sra         $a3, $t3, 3
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 11), 3));
    // 0x109d28: 0x690a0007  ldl         $t2, 0x7($t0)
    ctx->pc = 0x109d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x109d2c: 0x6d0a0000  ldr         $t2, 0x0($t0)
    ctx->pc = 0x109d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x109d30: 0xb04affff  sdl         $t2, -0x1($v0)
    ctx->pc = 0x109d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d34: 0xb44afff8  sdr         $t2, -0x8($v0)
    ctx->pc = 0x109d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x109d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109d3c: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x109d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x109d40: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x109d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109d44: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x109d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x109d48: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x109d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x109d4c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x109d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d50: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x109d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d54: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109D54u;
    {
        const bool branch_taken_0x109d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D54u;
        // 0x109d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d54) {
            ctx->pc = 0x109DACu;
            goto label_109dac;
        }
    }
    ctx->pc = 0x109D5Cu;
    // 0x109d5c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_109d60:
    // 0x109d60: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x109d60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109d64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x109d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x109d68: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x109d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x109d6c: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x109d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x109d70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109d74: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x109d78: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x109d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109d7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x109d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109d84: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x109d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x109d88: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x109d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x109d8c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x109d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x109d90: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x109d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x109d94: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x109d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x109d98: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x109d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109d9c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x109d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109da0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x109da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109da4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109DA4u;
    {
        const bool branch_taken_0x109da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DA4u;
        // 0x109da8: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109da4) {
            ctx->pc = 0x109D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d60;
        }
    }
    ctx->pc = 0x109DACu;
label_109dac:
    // 0x109dac: 0x54c7000b  bnel        $a2, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x109DACu;
    {
        const bool branch_taken_0x109dac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x109dac) {
            ctx->pc = 0x109DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109DACu;
            // 0x109db0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109DDCu;
            goto label_109ddc;
        }
    }
    ctx->pc = 0x109DB4u;
    // 0x109db4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109db8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109dbc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x109dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x109dc0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x109dc4: 0x6844ffff  ldl         $a0, -0x1($v0)
    ctx->pc = 0x109dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x109dc8: 0x6c44fff8  ldr         $a0, -0x8($v0)
    ctx->pc = 0x109dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x109dcc: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x109dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109dd0: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x109dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109dd4: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x109dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109dd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109ddc:
    // 0x109ddc: 0x12c5023  subu        $t2, $t1, $t4
    ctx->pc = 0x109ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x109de0: 0x6bad0017  ldl         $t5, 0x17($sp)
    ctx->pc = 0x109de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x109de4: 0x6fad0010  ldr         $t5, 0x10($sp)
    ctx->pc = 0x109de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x109de8: 0xb3ad0027  sdl         $t5, 0x27($sp)
    ctx->pc = 0x109de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109dec: 0xb7ad0020  sdr         $t5, 0x20($sp)
    ctx->pc = 0x109decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109df0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DF0u;
        // 0x109df4: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109df0) {
            ctx->pc = 0x109E18u;
            goto label_109e18;
        }
    }
    ctx->pc = 0x109DF8u;
label_109df8:
    // 0x109df8: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x109df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x109dfc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x109dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e00: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x109e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x109e04: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x109e08: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x109e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x109e0c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x109e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109e10: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x109e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109e14: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x109e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109e18:
    // 0x109e18: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x109e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x109e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109e20: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x109E20u;
    {
        const bool branch_taken_0x109e20 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x109E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E20u;
        // 0x109e24: 0x33843  sra         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e20) {
            ctx->pc = 0x109E44u;
            goto label_109e44;
        }
    }
    ctx->pc = 0x109E28u;
    // 0x109e28: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x109e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x109e2c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109e30: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x109e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x109e34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109e38: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x109e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x109e3c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109E3Cu;
    {
        const bool branch_taken_0x109e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E3Cu;
        // 0x109e40: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e3c) {
            ctx->pc = 0x109DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109df8;
        }
    }
    ctx->pc = 0x109E44u;
label_109e44:
    // 0x109e44: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x109e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109e48: 0xa18c3  sra         $v1, $t2, 3
    ctx->pc = 0x109e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 3));
    // 0x109e4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x109e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x109e50: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x109e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x109e54: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x109e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x109e58: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x109e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x109e5c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x109e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109e60: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x109e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109e64: 0x1060ffaa  beqz        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x109E64u;
    {
        const bool branch_taken_0x109e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E64u;
        // 0x109e68: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e64) {
            ctx->pc = 0x109D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d10;
        }
    }
    ctx->pc = 0x109E6Cu;
label_109e6c:
    // 0x109e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x109E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E6Cu;
        // 0x109e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109E74u;
    // 0x109e74: 0x0  nop
    ctx->pc = 0x109e74u;
    // NOP
    ctx->pc = 0x109e78u;
}
