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

// Function: sub_002C1E10
// Address: 0x2c1e10 - 0x2c2198
void sub_002C1E10_0x2c1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1E10_0x2c1e10");
#endif

    switch (ctx->pc) {
        case 0x2c1e98u: goto label_2c1e98;
        case 0x2c1ef0u: goto label_2c1ef0;
        case 0x2c1fb8u: goto label_2c1fb8;
        case 0x2c1fd4u: goto label_2c1fd4;
        case 0x2c2020u: goto label_2c2020;
        case 0x2c2078u: goto label_2c2078;
        case 0x2c2154u: goto label_2c2154;
        default: break;
    }

    ctx->pc = 0x2c1e10u;

    // 0x2c1e10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c1e14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c1e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e18: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2c1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2c1e1c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2c1e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2c1e20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e24: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2c1e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2c1e28: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2c1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2c1e2c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2c1e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2c1e30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c1e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c1e34: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2c1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2c1e38: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2c1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2c1e3c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2c1e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2c1e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1e44: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c1e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2c1e48: 0x8ce80090  lw          $t0, 0x90($a3)
    ctx->pc = 0x2c1e48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x2c1e4c: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x2c1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x2c1e50: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2c1e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c1e54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E54u;
    {
        const bool branch_taken_0x2c1e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E54u;
        // 0x2c1e58: 0x8cf700e8  lw          $s7, 0xE8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e54) {
            ctx->pc = 0x2C1E64u;
            goto label_2c1e64;
        }
    }
    ctx->pc = 0x2C1E5Cu;
    // 0x2c1e5c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2C1E5Cu;
    {
        const bool branch_taken_0x2c1e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E5Cu;
        // 0x2c1e60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e5c) {
            ctx->pc = 0x2C1F2Cu;
            goto label_2c1f2c;
        }
    }
    ctx->pc = 0x2C1E64u;
label_2c1e64:
    // 0x2c1e64: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x2c1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c1e68: 0x8ce4008c  lw          $a0, 0x8C($a3)
    ctx->pc = 0x2c1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x2c1e6c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2c1e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1e70: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2c1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c1e74: 0xace20090  sw          $v0, 0x90($a3)
    ctx->pc = 0x2c1e74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 2));
    // 0x2c1e78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c1e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e7c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x2c1e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c1e80: 0x2321025  or          $v0, $s1, $s2
    ctx->pc = 0x2c1e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x2c1e84: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x2c1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2c1e88: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c1e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c1e8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C1E8Cu;
    {
        const bool branch_taken_0x2c1e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E8Cu;
        // 0x2c1e90: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e8c) {
            ctx->pc = 0x2C1EECu;
            goto label_2c1eec;
        }
    }
    ctx->pc = 0x2C1E94u;
    // 0x2c1e94: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x2c1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2c1e98:
    // 0x2c1e98: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x2c1e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c1e9c: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x2c1e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c1ea0: 0x68e8000f  ldl         $t0, 0xF($a3)
    ctx->pc = 0x2c1ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c1ea4: 0x6ce80008  ldr         $t0, 0x8($a3)
    ctx->pc = 0x2c1ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c1ea8: 0x68e90017  ldl         $t1, 0x17($a3)
    ctx->pc = 0x2c1ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2c1eac: 0x6ce90010  ldr         $t1, 0x10($a3)
    ctx->pc = 0x2c1eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2c1eb0: 0x68ea001f  ldl         $t2, 0x1F($a3)
    ctx->pc = 0x2c1eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2c1eb4: 0x6cea0018  ldr         $t2, 0x18($a3)
    ctx->pc = 0x2c1eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2c1eb8: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2c1eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ebc: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2c1ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ec0: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x2c1ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ec4: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x2c1ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ec8: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x2c1ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ecc: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x2c1eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ed0: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x2c1ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ed4: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x2c1ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c1ed8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2c1ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2c1edc: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C1EDCu;
    {
        const bool branch_taken_0x2c1edc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EDCu;
        // 0x2c1ee0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1edc) {
            ctx->pc = 0x2C1E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1e98;
        }
    }
    ctx->pc = 0x2C1EE4u;
    // 0x2c1ee4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C1EE4u;
    {
        const bool branch_taken_0x2c1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EE4u;
        // 0x2c1ee8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ee4) {
            ctx->pc = 0x2C1F20u;
            goto label_2c1f20;
        }
    }
    ctx->pc = 0x2C1EECu;
label_2c1eec:
    // 0x2c1eec: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x2c1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2c1ef0:
    // 0x2c1ef0: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x2c1ef0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c1ef4: 0xdce80008  ld          $t0, 0x8($a3)
    ctx->pc = 0x2c1ef4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c1ef8: 0xdce90010  ld          $t1, 0x10($a3)
    ctx->pc = 0x2c1ef8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c1efc: 0xdcea0018  ld          $t2, 0x18($a3)
    ctx->pc = 0x2c1efcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2c1f00: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2c1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2c1f04: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x2c1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x2c1f08: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2c1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2c1f0c: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x2c1f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x2c1f10: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2c1f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2c1f14: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C1F14u;
    {
        const bool branch_taken_0x2c1f14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F14u;
        // 0x2c1f18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f14) {
            ctx->pc = 0x2C1EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1ef0;
        }
    }
    ctx->pc = 0x2C1F1Cu;
    // 0x2c1f1c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2c1f20:
    // 0x2c1f20: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x2c1f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
    // 0x2c1f24: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x2c1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
    // 0x2c1f28: 0xacb20004  sw          $s2, 0x4($a1)
    ctx->pc = 0x2c1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 18));
label_2c1f2c:
    // 0x2c1f2c: 0x8e3500bc  lw          $s5, 0xBC($s1)
    ctx->pc = 0x2c1f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2c1f30: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c1f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c1f34: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x2c1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2c1f38: 0x962200b8  lhu         $v0, 0xB8($s1)
    ctx->pc = 0x2c1f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2c1f3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1f40: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1F40u;
    {
        const bool branch_taken_0x2c1f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F40u;
        // 0x2c1f44: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f40) {
            ctx->pc = 0x2C1F64u;
            goto label_2c1f64;
        }
    }
    ctx->pc = 0x2C1F48u;
    // 0x2c1f48: 0x962200b8  lhu         $v0, 0xB8($s1)
    ctx->pc = 0x2c1f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2c1f4c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1f50: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2c1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c1f54: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c1f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c1f58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1f5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F5Cu;
    {
        const bool branch_taken_0x2c1f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F5Cu;
        // 0x2c1f60: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f5c) {
            ctx->pc = 0x2C1F68u;
            goto label_2c1f68;
        }
    }
    ctx->pc = 0x2C1F64u;
label_2c1f64:
    // 0x2c1f64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c1f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f68:
    // 0x2c1f68: 0x962300c0  lhu         $v1, 0xC0($s1)
    ctx->pc = 0x2c1f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2c1f6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c1f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c1f70: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1F70u;
    {
        const bool branch_taken_0x2c1f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F70u;
        // 0x2c1f74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f70) {
            ctx->pc = 0x2C1F90u;
            goto label_2c1f90;
        }
    }
    ctx->pc = 0x2C1F78u;
    // 0x2c1f78: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2c1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c1f7c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c1f80: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c1f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c1f84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c1f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1F88u;
    {
        const bool branch_taken_0x2c1f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F88u;
        // 0x2c1f8c: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f88) {
            ctx->pc = 0x2C1F94u;
            goto label_2c1f94;
        }
    }
    ctx->pc = 0x2C1F90u;
label_2c1f90:
    // 0x2c1f90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c1f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f94:
    // 0x2c1f94: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2c1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2c1f98: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C1F98u;
    {
        const bool branch_taken_0x2c1f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F98u;
        // 0x2c1f9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f98) {
            ctx->pc = 0x2C20A4u;
            goto label_2c20a4;
        }
    }
    ctx->pc = 0x2C1FA0u;
    // 0x2c1fa0: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x2c1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2c1fa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c1fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c1fa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c1fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c1fac: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2c1facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2c1fb0: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x2c1fb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c1fb4: 0x265e0018  addiu       $fp, $s2, 0x18
    ctx->pc = 0x2c1fb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2c1fb8:
    // 0x2c1fb8: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1FB8u;
    {
        const bool branch_taken_0x2c1fb8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FB8u;
        // 0x2c1fbc: 0x2142818  mult        $a1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fb8) {
            ctx->pc = 0x2C1FDCu;
            goto label_2c1fdc;
        }
    }
    ctx->pc = 0x2C1FC0u;
    // 0x2c1fc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1fc4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2c1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2c1fc8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2c1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c1fcc: 0xc0ab7d6  jal         func_2ADF58
    ctx->pc = 0x2C1FCCu;
    SET_GPR_U32(ctx, 31, 0x2C1FD4u);
    ctx->pc = 0x2C1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1FCCu;
    // 0x2c1fd0: 0x24a60014  addiu       $a2, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ADF58u, 0x2C1FCCu, 0x2C1FD4u)) {
        return;
    }
    ctx->pc = 0x2C1FD4u;
label_2c1fd4:
    // 0x2c1fd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1FD4u;
    {
        const bool branch_taken_0x2c1fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FD4u;
        // 0x2c1fd8: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fd4) {
            ctx->pc = 0x2C1FF8u;
            goto label_2c1ff8;
        }
    }
    ctx->pc = 0x2C1FDCu;
label_2c1fdc:
    // 0x2c1fdc: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x2c1fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c1fe0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2c1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c1fe4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2c1fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2c1fe8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c1fec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c1ff0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c1ff4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2c1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c1ff8:
    // 0x2c1ff8: 0x52400026  beql        $s2, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C1FF8u;
    {
        const bool branch_taken_0x2c1ff8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ff8) {
            ctx->pc = 0x2C1FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1FF8u;
            // 0x2c1ffc: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2094u;
            goto label_2c2094;
        }
    }
    ctx->pc = 0x2C2000u;
    // 0x2c2000: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2000u;
    {
        const bool branch_taken_0x2c2000 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2000u;
        // 0x2c2004: 0x2142818  mult        $a1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2000) {
            ctx->pc = 0x2C2028u;
            goto label_2c2028;
        }
    }
    ctx->pc = 0x2C2008u;
    // 0x2c2008: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c2008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c200c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2c200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2c2010: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x2c2010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2c2014: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2c2014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c2018: 0xc0ab7d6  jal         func_2ADF58
    ctx->pc = 0x2C2018u;
    SET_GPR_U32(ctx, 31, 0x2C2020u);
    ctx->pc = 0x2C201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2018u;
    // 0x2c201c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ADF58u, 0x2C2018u, 0x2C2020u)) {
        return;
    }
    ctx->pc = 0x2C2020u;
label_2c2020:
    // 0x2c2020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2020u;
    {
        const bool branch_taken_0x2c2020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2020u;
        // 0x2c2024: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2020) {
            ctx->pc = 0x2C2044u;
            goto label_2c2044;
        }
    }
    ctx->pc = 0x2C2028u;
label_2c2028:
    // 0x2c2028: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x2c2028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c202c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2c202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c2030: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2c2030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2c2034: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c2038: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c2038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2c203c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c203cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c2040: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x2c2040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c2044:
    // 0x2c2044: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2c2044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c2048: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2c2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c204c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2050: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x2c2050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2c2054: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2c2054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c2058: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2c2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c205c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2c205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2c2060: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2c2060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2c2064: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c2064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c2068: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2068u;
    {
        const bool branch_taken_0x2c2068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2068u;
        // 0x2c206c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2068) {
            ctx->pc = 0x2C2074u;
            goto label_2c2074;
        }
    }
    ctx->pc = 0x2C2070u;
    // 0x2c2070: 0x8ea5002c  lw          $a1, 0x2C($s5)
    ctx->pc = 0x2c2070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_2c2074:
    // 0x2c2074: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2c2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c2078:
    // 0x2c2078: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2078u;
    {
        const bool branch_taken_0x2c2078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2078) {
            ctx->pc = 0x2C207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2078u;
            // 0x2c207c: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2094u;
            goto label_2c2094;
        }
    }
    ctx->pc = 0x2C2080u;
    // 0x2c2080: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2c2084: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2C2084u;
    {
        const bool branch_taken_0x2c2084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2c2084) {
            ctx->pc = 0x2C2088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2084u;
            // 0x2c2088: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2078;
        }
    }
    ctx->pc = 0x2C208Cu;
    // 0x2c208c: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x2c208cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
    // 0x2c2090: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2c2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2c2094:
    // 0x2c2094: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2c2094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2098: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c2098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c209c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2C209Cu;
    {
        const bool branch_taken_0x2c209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c209c) {
            ctx->pc = 0x2C1FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1fb8;
        }
    }
    ctx->pc = 0x2C20A4u;
label_2c20a4:
    // 0x2c20a4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c20a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c20a8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x2c20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x2c20ac: 0xa62400c0  sh          $a0, 0xC0($s1)
    ctx->pc = 0x2c20acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c20b0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c20b4: 0x95020020  lhu         $v0, 0x20($t0)
    ctx->pc = 0x2c20b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2c20b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c20bc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2c20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c20c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c20c4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C20C4u;
    {
        const bool branch_taken_0x2c20c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20C4u;
        // 0x2c20c8: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20c4) {
            ctx->pc = 0x2C20ECu;
            goto label_2c20ec;
        }
    }
    ctx->pc = 0x2C20CCu;
    // 0x2c20cc: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x2c20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x2c20d0: 0xa64400b8  sh          $a0, 0xB8($s2)
    ctx->pc = 0x2c20d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c20d4: 0x96a20020  lhu         $v0, 0x20($s5)
    ctx->pc = 0x2c20d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2c20d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c20dc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2c20e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c20e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C20E4u;
    {
        const bool branch_taken_0x2c20e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E4u;
        // 0x2c20e8: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20e4) {
            ctx->pc = 0x2C2154u;
            goto label_2c2154;
        }
    }
    ctx->pc = 0x2C20ECu;
label_2c20ec:
    // 0x2c20ec: 0x96a30020  lhu         $v1, 0x20($s5)
    ctx->pc = 0x2c20ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2c20f0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2c20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2c20f4: 0x8e2500ac  lw          $a1, 0xAC($s1)
    ctx->pc = 0x2c20f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2c20f8: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x2c20f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x2c20fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2100: 0x96680028  lhu         $t0, 0x28($s3)
    ctx->pc = 0x2c2100u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2c2104: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2c2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2c2108: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c2108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c210c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2c210cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c2110: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c2114: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2c2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c2118: 0x9663002a  lhu         $v1, 0x2A($s3)
    ctx->pc = 0x2c2118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x2c211c: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2c211cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c2120: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x2c2120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2c2124: 0x8ce60044  lw          $a2, 0x44($a3)
    ctx->pc = 0x2c2124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x2c2128: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2c2128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c212c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2130: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c2134: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x2c2134u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2c2138: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c213c: 0xa663002a  sh          $v1, 0x2A($s3)
    ctx->pc = 0x2c213cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c2140: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2c2140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2144: 0xace50038  sw          $a1, 0x38($a3)
    ctx->pc = 0x2c2144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 5));
    // 0x2c2148: 0xa6680028  sh          $t0, 0x28($s3)
    ctx->pc = 0x2c2148u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c214c: 0xc0b06fc  jal         func_2C1BF0
    ctx->pc = 0x2C214Cu;
    SET_GPR_U32(ctx, 31, 0x2C2154u);
    ctx->pc = 0x2C2150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C214Cu;
    // 0x2c2150: 0xace60044  sw          $a2, 0x44($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1BF0u, 0x2C214Cu, 0x2C2154u)) {
        return;
    }
    ctx->pc = 0x2C2154u;
label_2c2154:
    // 0x2c2154: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c2154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2158: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2c2158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c215c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2c215cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2160: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2c2160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2164: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2c2164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2168: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2c2168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c216c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c216cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2170: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2c2170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2174: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2c2174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2178: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2c2178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c217c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2180: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2c2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2184: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2184u;
        // 0x2c2188: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C218Cu;
    // 0x2c218c: 0x0  nop
    ctx->pc = 0x2c218cu;
    // NOP
    // 0x2c2190: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c2194: 0x0  nop
    ctx->pc = 0x2c2194u;
    // NOP
    ctx->pc = 0x2c2198u;
}
