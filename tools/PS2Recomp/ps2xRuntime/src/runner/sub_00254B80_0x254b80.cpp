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

// Function: sub_00254B80
// Address: 0x254b80 - 0x254cf0
void sub_00254B80_0x254b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254B80_0x254b80");
#endif

    ctx->pc = 0x254b80u;

    // 0x254b80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x254b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b84: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x254b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x254b88: 0x10e00057  beqz        $a3, . + 4 + (0x57 << 2)
    ctx->pc = 0x254B88u;
    {
        const bool branch_taken_0x254b88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B88u;
        // 0x254b8c: 0x24a8004c  addiu       $t0, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b88) {
            ctx->pc = 0x254CE8u;
            goto label_254ce8;
        }
    }
    ctx->pc = 0x254B90u;
    // 0x254b90: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x254b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x254b94: 0x85060006  lh          $a2, 0x6($t0)
    ctx->pc = 0x254b94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x254b98: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x254B98u;
    {
        const bool branch_taken_0x254b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x254B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B98u;
        // 0x254b9c: 0x8ce30018  lw          $v1, 0x18($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b98) {
            ctx->pc = 0x254BB4u;
            goto label_254bb4;
        }
    }
    ctx->pc = 0x254BA0u;
    // 0x254ba0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x254ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254ba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254BA4u;
    {
        const bool branch_taken_0x254ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA4u;
        // 0x254ba8: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ba4) {
            ctx->pc = 0x254BC8u;
            goto label_254bc8;
        }
    }
    ctx->pc = 0x254BACu;
    // 0x254bac: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x254BACu;
    {
        const bool branch_taken_0x254bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254bac) {
            ctx->pc = 0x254BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BACu;
            // 0x254bb0: 0x8ce2005c  lw          $v0, 0x5C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C28u;
            goto label_254c28;
        }
    }
    ctx->pc = 0x254BB4u;
label_254bb4:
    // 0x254bb4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x254bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254BB8u;
    {
        const bool branch_taken_0x254bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BB8u;
        // 0x254bbc: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bb8) {
            ctx->pc = 0x254BC8u;
            goto label_254bc8;
        }
    }
    ctx->pc = 0x254BC0u;
    // 0x254bc0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x254BC0u;
    {
        const bool branch_taken_0x254bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BC0u;
        // 0x254bc4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bc0) {
            ctx->pc = 0x254BF4u;
            goto label_254bf4;
        }
    }
    ctx->pc = 0x254BC8u;
label_254bc8:
    // 0x254bc8: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x254bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x254bcc: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x254bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x254bd0: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x254bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x254bd4: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x254bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x254bd8: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x254bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x254bdc: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x254bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254be0: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x254be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254be4: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x254be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254be8: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x254be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254bec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x254BECu;
    {
        const bool branch_taken_0x254bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BECu;
        // 0x254bf0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bec) {
            ctx->pc = 0x254CD0u;
            goto label_254cd0;
        }
    }
    ctx->pc = 0x254BF4u;
label_254bf4:
    // 0x254bf4: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x254bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x254bf8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x254bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x254bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254c00: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x254c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x254c04: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x254c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x254c08: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x254c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x254c0c: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x254c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x254c10: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x254c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254c14: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x254c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254c18: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x254c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254c1c: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x254c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254c20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x254C20u;
    {
        const bool branch_taken_0x254c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C20u;
        // 0x254c24: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c20) {
            ctx->pc = 0x254CD0u;
            goto label_254cd0;
        }
    }
    ctx->pc = 0x254C28u;
label_254c28:
    // 0x254c28: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x254c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x254c2c: 0xc33818  mult        $a3, $a2, $v1
    ctx->pc = 0x254c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x254c30: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x254c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x254c34: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x254c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c38: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x254c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x254c3c: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x254c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x254c40: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x254c40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x254c44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x254c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254c48: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x254c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c4c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x254c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254c50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x254c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x254c54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x254c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x254c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x254c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254c5c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x254c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x254c60: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x254c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x254c64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c68: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x254c68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x254c6c: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x254c6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x254c70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x254c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c74: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x254c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254c78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x254c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x254c7c: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x254c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x254c80: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x254c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254c84: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x254c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c88: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x254c88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x254c8c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x254c8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x254c90: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x254c90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x254c94: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x254c94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x254c98: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x254c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x254c9c: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x254c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x254ca0: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x254ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x254ca4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254ca8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x254ca8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x254cac: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x254cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x254cb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x254cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254cb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x254cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x254cb8: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x254cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x254cbc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x254cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254cc0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x254cc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x254cc4: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x254cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x254cc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x254cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x254ccc: 0x0  nop
    ctx->pc = 0x254cccu;
    // NOP
label_254cd0:
    // 0x254cd0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x254cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x254cd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254cd8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x254cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x254cdc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x254cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x254ce0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x254ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x254ce4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x254ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_254ce8:
    // 0x254ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x254CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254CF0u;
}
