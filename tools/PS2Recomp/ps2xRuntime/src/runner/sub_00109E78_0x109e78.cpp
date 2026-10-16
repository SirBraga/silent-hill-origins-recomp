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

// Function: sub_00109E78
// Address: 0x109e78 - 0x10a050
void sub_00109E78_0x109e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109E78_0x109e78");
#endif

    switch (ctx->pc) {
        case 0x109ea4u: goto label_109ea4;
        case 0x109ec0u: goto label_109ec0;
        case 0x109f18u: goto label_109f18;
        case 0x109fb8u: goto label_109fb8;
        case 0x10a038u: goto label_10a038;
        default: break;
    }

    ctx->pc = 0x109e78u;

    // 0x109e78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x109e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x109e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x109e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x109e84: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x109e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x109e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e8c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x109e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x109e90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x109e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x109e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x109e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109e9c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x109E9Cu;
    SET_GPR_U32(ctx, 31, 0x109EA4u);
    ctx->pc = 0x109EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E9Cu;
    // 0x109ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109B60u, 0x109E9Cu, 0x109EA4u)) {
        return;
    }
    ctx->pc = 0x109EA4u;
label_109ea4:
    // 0x109ea4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x109ea8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x109EA8u;
    {
        const bool branch_taken_0x109ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EA8u;
        // 0x109eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ea8) {
            ctx->pc = 0x10A02Cu;
            goto label_10a02c;
        }
    }
    ctx->pc = 0x109EB0u;
    // 0x109eb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x109eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb4: 0x2305023  subu        $t2, $s1, $s0
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x109eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x109eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109ebc: 0x0  nop
    ctx->pc = 0x109ebcu;
    // NOP
label_109ec0:
    // 0x109ec0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x109ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x109ec4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x109ec4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x109ec8: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x109EC8u;
    {
        const bool branch_taken_0x109ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC8u;
        // 0x109ecc: 0x24890008  addiu       $t1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec8) {
            ctx->pc = 0x10A01Cu;
            goto label_10a01c;
        }
    }
    ctx->pc = 0x109ED0u;
    // 0x109ed0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x109ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x109ed4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x109ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x109ed8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x109ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109edc: 0xa38c3  sra         $a3, $t2, 3
    ctx->pc = 0x109edcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 3));
    // 0x109ee0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x109ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ee4: 0x690b0007  ldl         $t3, 0x7($t0)
    ctx->pc = 0x109ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x109ee8: 0x6d0b0000  ldr         $t3, 0x0($t0)
    ctx->pc = 0x109ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x109eec: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x109eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ef0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x109ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109ef4: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x109ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109ef8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x109ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109efc: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x109efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x109f00: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x109f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x109f04: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x109f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f08: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x109f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109F0Cu;
    {
        const bool branch_taken_0x109f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F0Cu;
        // 0x109f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f0c) {
            ctx->pc = 0x109F64u;
            goto label_109f64;
        }
    }
    ctx->pc = 0x109F14u;
    // 0x109f14: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_109f18:
    // 0x109f18: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x109f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109f1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x109f20: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x109f24: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x109f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x109f28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109f2c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x109f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x109f30: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x109f30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109f34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x109f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f38: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109f3c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x109f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x109f40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x109f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x109f44: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x109f44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x109f48: 0x686d0007  ldl         $t5, 0x7($v1)
    ctx->pc = 0x109f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x109f4c: 0x6c6d0000  ldr         $t5, 0x0($v1)
    ctx->pc = 0x109f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x109f50: 0xb0ad0007  sdl         $t5, 0x7($a1)
    ctx->pc = 0x109f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f54: 0xb4ad0000  sdr         $t5, 0x0($a1)
    ctx->pc = 0x109f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f58: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x109f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x109f5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109F5Cu;
    {
        const bool branch_taken_0x109f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F5Cu;
        // 0x109f60: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f5c) {
            ctx->pc = 0x109F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109f18;
        }
    }
    ctx->pc = 0x109F64u;
label_109f64:
    // 0x109f64: 0x54c7000b  bnel        $a2, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x109F64u;
    {
        const bool branch_taken_0x109f64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x109f64) {
            ctx->pc = 0x109F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F64u;
            // 0x109f68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F94u;
            goto label_109f94;
        }
    }
    ctx->pc = 0x109F6Cu;
    // 0x109f6c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x109f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x109f70: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x109f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x109f74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x109f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x109f78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x109f7c: 0x684dffff  ldl         $t5, -0x1($v0)
    ctx->pc = 0x109f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x109f80: 0x6c4dfff8  ldr         $t5, -0x8($v0)
    ctx->pc = 0x109f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x109f84: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x109f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f88: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x109f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109f8c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x109f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109f90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109f94:
    // 0x109f94: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x109f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x109f98: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x109f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x109f9c: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x109f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109fa0: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x109fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109fa4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x109fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109fa8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x109fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x109fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109fb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x109FB0u;
    {
        const bool branch_taken_0x109fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fb0) {
            ctx->pc = 0x109FE4u;
            goto label_109fe4;
        }
    }
    ctx->pc = 0x109FB8u;
label_109fb8:
    // 0x109fb8: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x109fbc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x109fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fc0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x109fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x109fc4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109fc8: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x109fcc: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x109fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x109fd0: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x109fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109fd4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x109fd8: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x109fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109fe0: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x109fe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_109fe4:
    // 0x109fe4: 0x18c00007  blez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x109FE4u;
    {
        const bool branch_taken_0x109fe4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x109FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE4u;
        // 0x109fe8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fe4) {
            ctx->pc = 0x10A004u;
            goto label_10a004;
        }
    }
    ctx->pc = 0x109FECu;
    // 0x109fec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x109fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ff0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x109ff4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109ff8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x109ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x109ffc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x109FFCu;
    {
        const bool branch_taken_0x109ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FFCu;
        // 0x10a000: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ffc) {
            ctx->pc = 0x109FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109fb8;
        }
    }
    ctx->pc = 0x10A004u;
label_10a004:
    // 0x10a004: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x10a008: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10a00c: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x10a00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10a010: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x10a010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10a014: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x10a014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10a018: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x10a018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a01c:
    // 0x10a01c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x10a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a020: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x10a020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x10a024: 0x5440ffa6  bnel        $v0, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x10A024u;
    {
        const bool branch_taken_0x10a024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a024) {
            ctx->pc = 0x10A028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A024u;
            // 0x10a028: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109ec0;
        }
    }
    ctx->pc = 0x10A02Cu;
label_10a02c:
    // 0x10a02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a030: 0xc04273a  jal         func_109CE8
    ctx->pc = 0x10A030u;
    SET_GPR_U32(ctx, 31, 0x10A038u);
    ctx->pc = 0x10A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A030u;
    // 0x10a034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109CE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109CE8u, 0x10A030u, 0x10A038u)) {
        return;
    }
    ctx->pc = 0x10A038u;
label_10a038:
    // 0x10a038: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10a038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a03c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10a03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a040: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10a040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a044: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10a044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a048: 0x3e00008  jr          $ra
    ctx->pc = 0x10A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A048u;
        // 0x10a04c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A050u;
}
