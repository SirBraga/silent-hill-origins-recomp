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

// Function: sub_00303D30
// Address: 0x303d30 - 0x3040d0
void sub_00303D30_0x303d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303D30_0x303d30");
#endif

    switch (ctx->pc) {
        case 0x303d90u: goto label_303d90;
        case 0x303f90u: goto label_303f90;
        case 0x303fb0u: goto label_303fb0;
        case 0x304048u: goto label_304048;
        case 0x304098u: goto label_304098;
        default: break;
    }

    ctx->pc = 0x303d30u;

label_303d30:
    // 0x303d30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x303d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x303d34: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x303d34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d38: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x303d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x303d3c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x303d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x303d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x303d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x303d48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x303d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x303d4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x303d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x303d50: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x303d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x303d54: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x303d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303d58: 0x120a00a9  beq         $s0, $t2, . + 4 + (0xA9 << 2)
    ctx->pc = 0x303D58u;
    {
        const bool branch_taken_0x303d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x303D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D58u;
        // 0x303d5c: 0x140682d  daddu       $t5, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d58) {
            ctx->pc = 0x304000u;
            goto label_304000;
        }
    }
    ctx->pc = 0x303D60u;
    // 0x303d60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x303d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303d64: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x303d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303d68: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x303d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x303d6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x303d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x303d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x303d74: 0x1442818  mult        $a1, $t2, $a0
    ctx->pc = 0x303d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x303d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303d7c: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x303d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x303d80: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x303d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303d84: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x303d84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303d88: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x303d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d8c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x303d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_303d90:
    // 0x303d90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303d94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x303d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x303d98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x303d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x303d9c: 0x2d240020  sltiu       $a0, $t1, 0x20
    ctx->pc = 0x303d9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x303da0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x303da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x303da4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x303da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x303da8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x303da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x303dac: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x303DACu;
    {
        const bool branch_taken_0x303dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x303DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DACu;
        // 0x303db0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dac) {
            ctx->pc = 0x303D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303d90;
        }
    }
    ctx->pc = 0x303DB4u;
    // 0x303db4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x303db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303db8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303dbc: 0x2063818  mult        $a3, $s0, $a2
    ctx->pc = 0x303dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x303dc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x303dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303dc4: 0x1a63018  mult        $a2, $t5, $a2
    ctx->pc = 0x303dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x303dc8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x303dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x303dcc: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x303dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x303dd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303dd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x303dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303dd8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x303dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x303ddc: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x303ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 12));
    // 0x303de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303de4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x303de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303de8: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x303de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x303dec: 0x8ca8001c  lw          $t0, 0x1C($a1)
    ctx->pc = 0x303decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x303df0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x303df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x303df4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x303df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x303df8: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x303df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303dfc: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x303dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303e00: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x303e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x303e04: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x303e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e08: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x303e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e0c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x303e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x303e10: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x303e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303e14: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x303e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303e18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x303e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303e1c: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x303e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e20: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x303e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e24: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x303e24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x303e28: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x303e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303e2c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x303e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303e30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x303e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x303e34: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x303e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e38: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x303e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e3c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x303e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x303e40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303e44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x303e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303e48: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x303e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x303e4c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x303e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x303e50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303e54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303e58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x303e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x303e5c: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x303e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
    // 0x303e60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x303e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303e64: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x303e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303e68: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x303e6c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x303e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x303e70: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x303e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x303e74: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x303e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x303e78: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x303e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x303e7c: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x303e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x303e80: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x303e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x303e84: 0x684b001f  ldl         $t3, 0x1F($v0)
    ctx->pc = 0x303e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x303e88: 0x6c4b0018  ldr         $t3, 0x18($v0)
    ctx->pc = 0x303e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x303e8c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x303e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e90: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x303e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e94: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x303e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e98: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x303e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303e9c: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x303e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ea0: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x303ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ea4: 0xb3ab002f  sdl         $t3, 0x2F($sp)
    ctx->pc = 0x303ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ea8: 0xb7ab0028  sdr         $t3, 0x28($sp)
    ctx->pc = 0x303ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303eac: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x303eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x303eb0: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x303eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x303eb4: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x303eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303eb8: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x303eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ebc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x303ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303ec0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x303ec4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x303ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x303ec8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x303ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303ecc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x303eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303ed0: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x303ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x303ed4: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x303ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x303ed8: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x303ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x303edc: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x303edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x303ee0: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x303ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x303ee4: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x303ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x303ee8: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x303ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303eec: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x303eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ef0: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x303ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ef4: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x303ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ef8: 0xb0e50017  sdl         $a1, 0x17($a3)
    ctx->pc = 0x303ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303efc: 0xb4e50010  sdr         $a1, 0x10($a3)
    ctx->pc = 0x303efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f00: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x303f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f04: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x303f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f08: 0x68620027  ldl         $v0, 0x27($v1)
    ctx->pc = 0x303f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303f0c: 0x6c620020  ldr         $v0, 0x20($v1)
    ctx->pc = 0x303f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303f10: 0xb0e20027  sdl         $v0, 0x27($a3)
    ctx->pc = 0x303f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f14: 0xb4e20020  sdr         $v0, 0x20($a3)
    ctx->pc = 0x303f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x303f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303f1c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x303f20: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x303f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x303f24: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x303f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x303f28: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x303f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x303f2c: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x303f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303f30: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x303f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303f34: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x303f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x303f38: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x303f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x303f3c: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x303f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x303f40: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x303f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x303f44: 0xb0cb0007  sdl         $t3, 0x7($a2)
    ctx->pc = 0x303f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f48: 0xb4cb0000  sdr         $t3, 0x0($a2)
    ctx->pc = 0x303f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f4c: 0xb0c2000f  sdl         $v0, 0xF($a2)
    ctx->pc = 0x303f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f50: 0xb4c20008  sdr         $v0, 0x8($a2)
    ctx->pc = 0x303f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f54: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x303f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f58: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x303f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f5c: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x303f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f60: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x303f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f64: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x303f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x303f68: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x303f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x303f6c: 0xb0cb0027  sdl         $t3, 0x27($a2)
    ctx->pc = 0x303f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f70: 0xb4cb0020  sdr         $t3, 0x20($a2)
    ctx->pc = 0x303f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303f74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303f78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x303f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x303f7c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x303F7Cu;
    {
        const bool branch_taken_0x303f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F7Cu;
        // 0x303f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f7c) {
            ctx->pc = 0x304000u;
            goto label_304000;
        }
    }
    ctx->pc = 0x303F84u;
    // 0x303f84: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x303f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303f88: 0x1272018  mult        $a0, $t1, $a3
    ctx->pc = 0x303f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x303f8c: 0x0  nop
    ctx->pc = 0x303f8cu;
    // NOP
label_303f90:
    // 0x303f90: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x303f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x303f94: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x303f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x303f98: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x303f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303f9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x303f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303fa0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FA0u;
        // 0x303fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x303FE8u;
            goto label_303fe8;
        }
    }
    ctx->pc = 0x303FA8u;
    // 0x303fa8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x303fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303fac: 0x0  nop
    ctx->pc = 0x303facu;
    // NOP
label_303fb0:
    // 0x303fb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x303fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x303fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x303fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303fbc: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303FBCu;
    {
        const bool branch_taken_0x303fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x303fbc) {
            ctx->pc = 0x303FCCu;
            goto label_303fcc;
        }
    }
    ctx->pc = 0x303FC4u;
    // 0x303fc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x303FC4u;
    {
        const bool branch_taken_0x303fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FC4u;
        // 0x303fc8: 0xac4a0000  sw          $t2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fc4) {
            ctx->pc = 0x303FD4u;
            goto label_303fd4;
        }
    }
    ctx->pc = 0x303FCCu;
label_303fcc:
    // 0x303fcc: 0x506a0001  beql        $v1, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x303FCCu;
    {
        const bool branch_taken_0x303fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        if (branch_taken_0x303fcc) {
            ctx->pc = 0x303FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303FCCu;
            // 0x303fd0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FD4u;
            goto label_303fd4;
        }
    }
    ctx->pc = 0x303FD4u;
label_303fd4:
    // 0x303fd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x303fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x303fd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x303fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x303fdc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x303fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303fe0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x303FE0u;
    {
        const bool branch_taken_0x303fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303fe0) {
            ctx->pc = 0x303FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303FE0u;
            // 0x303fe4: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303fb0;
        }
    }
    ctx->pc = 0x303FE8u;
label_303fe8:
    // 0x303fe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x303fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x303fec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x303fecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ff0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x303ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x303ff4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x303ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303ff8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x303FF8u;
    {
        const bool branch_taken_0x303ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FF8u;
        // 0x303ffc: 0x1272018  mult        $a0, $t1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ff8) {
            ctx->pc = 0x303F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303f90;
        }
    }
    ctx->pc = 0x304000u;
label_304000:
    // 0x304000: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x304000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304004: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x304004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x304008: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x304008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30400c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x30400cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x304010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304014: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x304014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x304018: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x304018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30401c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x30401cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x304020: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x304024: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x304024u;
    {
        const bool branch_taken_0x304024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304024u;
        // 0x304028: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304024) {
            ctx->pc = 0x3040B0u;
            goto label_3040b0;
        }
    }
    ctx->pc = 0x30402Cu;
    // 0x30402c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30402Cu;
    {
        const bool branch_taken_0x30402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30402Cu;
        // 0x304030: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30402c) {
            ctx->pc = 0x3040ACu;
            goto label_3040ac;
        }
    }
    ctx->pc = 0x304034u;
    // 0x304034: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x304034u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x304038: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x304038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30403c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x30403cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x304040: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x304040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304044: 0x0  nop
    ctx->pc = 0x304044u;
    // NOP
label_304048:
    // 0x304048: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30404c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304050: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304054: 0x10d30010  beq         $a2, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x304054u;
    {
        const bool branch_taken_0x304054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 19));
        ctx->pc = 0x304058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304054u;
        // 0x304058: 0xd41818  mult        $v1, $a2, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304054) {
            ctx->pc = 0x304098u;
            goto label_304098;
        }
    }
    ctx->pc = 0x30405Cu;
    // 0x30405c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x304060: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x304060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x304064: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x304064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x304068: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x304068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x30406c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x30406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x304070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304074: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x304074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x304078: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x304078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x30407c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x30407cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x304080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x304080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304084: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x304084u;
    {
        const bool branch_taken_0x304084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x304084) {
            ctx->pc = 0x304088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304084u;
            // 0x304088: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30409Cu;
            goto label_30409c;
        }
    }
    ctx->pc = 0x30408Cu;
    // 0x30408c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x30408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304090: 0xc0c0f4c  jal         func_303D30
    ctx->pc = 0x304090u;
    SET_GPR_U32(ctx, 31, 0x304098u);
    ctx->pc = 0x304094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304090u;
    // 0x304094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303D30u;
    goto label_303d30;
    ctx->pc = 0x304098u;
label_304098:
    // 0x304098: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x304098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30409c:
    // 0x30409c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30409cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3040a0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3040a4: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3040A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040A4u;
            // 0x3040a8: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304048;
        }
    }
    ctx->pc = 0x3040ACu;
label_3040ac:
    // 0x3040ac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3040acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3040b0:
    // 0x3040b0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3040b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3040b4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3040b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3040b8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3040b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3040bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3040bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3040c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3040c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3040c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3040C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3040C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040C4u;
        // 0x3040c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3040C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3040CCu;
    // 0x3040cc: 0x0  nop
    ctx->pc = 0x3040ccu;
    // NOP
    ctx->pc = 0x3040d0u;
}
