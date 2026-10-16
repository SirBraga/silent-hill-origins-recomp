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

// Function: sub_00109B60
// Address: 0x109b60 - 0x109ce8
void sub_00109B60_0x109b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109B60_0x109b60");
#endif

    switch (ctx->pc) {
        case 0x109b90u: goto label_109b90;
        case 0x109bb8u: goto label_109bb8;
        case 0x109c68u: goto label_109c68;
        default: break;
    }

    ctx->pc = 0x109b60u;

    // 0x109b60: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x109b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b64: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x109b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109b68: 0x558c3  sra         $t3, $a1, 3
    ctx->pc = 0x109b68u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 5), 3));
    // 0x109b6c: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x109b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x109b70: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x109B70u;
    {
        const bool branch_taken_0x109b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B70u;
        // 0x109b74: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b70) {
            ctx->pc = 0x109CE0u;
            goto label_109ce0;
        }
    }
    ctx->pc = 0x109B78u;
    // 0x109b78: 0x2562fffe  addiu       $v0, $t3, -0x2
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x109b7c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x109b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109b84: 0x25043  sra         $t2, $v0, 1
    ctx->pc = 0x109b84u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 1));
    // 0x109b88: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x109b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x109b8c: 0x696021  addu        $t4, $v1, $t1
    ctx->pc = 0x109b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_109b90:
    // 0x109b90: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x109b94: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x109b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x109b98: 0x69820007  ldl         $v0, 0x7($t4)
    ctx->pc = 0x109b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x109b9c: 0x6d820000  ldr         $v0, 0x0($t4)
    ctx->pc = 0x109b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x109ba0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x109ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ba4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x109ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ba8: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x109ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x109bac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109BACu;
    {
        const bool branch_taken_0x109bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BACu;
        // 0x109bb0: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bac) {
            ctx->pc = 0x109C04u;
            goto label_109c04;
        }
    }
    ctx->pc = 0x109BB4u;
    // 0x109bb4: 0x0  nop
    ctx->pc = 0x109bb4u;
    // NOP
label_109bb8:
    // 0x109bb8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109bbc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x109bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109bc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x109bc4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x109bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x109bc8: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x109bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x109bcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109bd0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x109bd4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x109bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109bd8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x109bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bdc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109be0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x109be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x109be4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x109be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x109be8: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x109be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x109bec: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x109becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x109bf0: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x109bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x109bf4: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x109bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109bf8: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x109bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x109bfc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109BFCu;
    {
        const bool branch_taken_0x109bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BFCu;
        // 0x109c00: 0xb4a80000  sdr         $t0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bfc) {
            ctx->pc = 0x109BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109bb8;
        }
    }
    ctx->pc = 0x109C04u;
label_109c04:
    // 0x109c04: 0x14cb000b  bne         $a2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x109C04u;
    {
        const bool branch_taken_0x109c04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x109C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C04u;
        // 0x109c08: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c04) {
            ctx->pc = 0x109C34u;
            goto label_109c34;
        }
    }
    ctx->pc = 0x109C0Cu;
    // 0x109c0c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109c10: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109c14: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x109c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x109c18: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x109c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x109c1c: 0x6844ffff  ldl         $a0, -0x1($v0)
    ctx->pc = 0x109c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x109c20: 0x6c44fff8  ldr         $a0, -0x8($v0)
    ctx->pc = 0x109c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x109c24: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x109c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c28: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x109c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c2c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109c30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x109c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109c34:
    // 0x109c34: 0x6bad0007  ldl         $t5, 0x7($sp)
    ctx->pc = 0x109c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x109c38: 0x6fad0000  ldr         $t5, 0x0($sp)
    ctx->pc = 0x109c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x109c3c: 0xb3ad0017  sdl         $t5, 0x17($sp)
    ctx->pc = 0x109c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c40: 0xb7ad0010  sdr         $t5, 0x10($sp)
    ctx->pc = 0x109c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c44: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x109c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x109c48: 0x147202a  slt         $a0, $t2, $a3
    ctx->pc = 0x109c48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109c4c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x109c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c54: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x109C54u;
    {
        const bool branch_taken_0x109c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C54u;
        // 0x109c58: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c54) {
            ctx->pc = 0x109CB8u;
            goto label_109cb8;
        }
    }
    ctx->pc = 0x109C5Cu;
    // 0x109c5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x109C5Cu;
    {
        const bool branch_taken_0x109c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C5Cu;
        // 0x109c60: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c5c) {
            ctx->pc = 0x109CA0u;
            goto label_109ca0;
        }
    }
    ctx->pc = 0x109C64u;
    // 0x109c64: 0x0  nop
    ctx->pc = 0x109c64u;
    // NOP
label_109c68:
    // 0x109c68: 0x693021  addu        $a2, $v1, $t1
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x109c6c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x109c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c70: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x109c74: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x109c78: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x109c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x109c7c: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x109c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x109c80: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x109c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c84: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x109c88: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x109c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c90: 0x147282a  slt         $a1, $t2, $a3
    ctx->pc = 0x109c90u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109c94: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109C94u;
    {
        const bool branch_taken_0x109c94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C94u;
        // 0x109c98: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c94) {
            ctx->pc = 0x109CB8u;
            goto label_109cb8;
        }
    }
    ctx->pc = 0x109C9Cu;
    // 0x109c9c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x109c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_109ca0:
    // 0x109ca0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109ca4: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x109ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x109ca8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109cac: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x109cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x109cb0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109CB0u;
    {
        const bool branch_taken_0x109cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CB0u;
        // 0x109cb4: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cb0) {
            ctx->pc = 0x109C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109c68;
        }
    }
    ctx->pc = 0x109CB8u;
label_109cb8:
    // 0x109cb8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x109cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x109cbc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x109cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x109cc0: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x109cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x109cc4: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x109cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x109cc8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x109cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ccc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x109cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109cd0: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x109CD0u;
    {
        const bool branch_taken_0x109cd0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CD0u;
        // 0x109cd4: 0x258cfff8  addiu       $t4, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cd0) {
            ctx->pc = 0x109CE0u;
            goto label_109ce0;
        }
    }
    ctx->pc = 0x109CD8u;
    // 0x109cd8: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x109CD8u;
    {
        const bool branch_taken_0x109cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CD8u;
        // 0x109cdc: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cd8) {
            ctx->pc = 0x109B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b90;
        }
    }
    ctx->pc = 0x109CE0u;
label_109ce0:
    // 0x109ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x109CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CE0u;
        // 0x109ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109CE8u;
}
