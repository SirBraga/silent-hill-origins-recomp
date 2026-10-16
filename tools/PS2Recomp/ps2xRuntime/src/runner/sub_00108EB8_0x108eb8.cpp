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

// Function: sub_00108EB8
// Address: 0x108eb8 - 0x1094b0
void sub_00108EB8_0x108eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108EB8_0x108eb8");
#endif

    switch (ctx->pc) {
        case 0x108ee0u: goto label_108ee0;
        case 0x108f14u: goto label_108f14;
        case 0x108f80u: goto label_108f80;
        case 0x108fb0u: goto label_108fb0;
        case 0x10900cu: goto label_10900c;
        case 0x109040u: goto label_109040;
        case 0x1090acu: goto label_1090ac;
        case 0x1090d0u: goto label_1090d0;
        case 0x109120u: goto label_109120;
        case 0x109148u: goto label_109148;
        case 0x109154u: goto label_109154;
        case 0x109178u: goto label_109178;
        case 0x1091a0u: goto label_1091a0;
        case 0x1091acu: goto label_1091ac;
        case 0x1091f0u: goto label_1091f0;
        case 0x10925cu: goto label_10925c;
        case 0x109288u: goto label_109288;
        case 0x1092e4u: goto label_1092e4;
        case 0x109318u: goto label_109318;
        case 0x109384u: goto label_109384;
        case 0x1093a8u: goto label_1093a8;
        case 0x1093f8u: goto label_1093f8;
        case 0x109420u: goto label_109420;
        case 0x10942cu: goto label_10942c;
        case 0x109450u: goto label_109450;
        case 0x109478u: goto label_109478;
        case 0x109484u: goto label_109484;
        case 0x10948cu: goto label_10948c;
        default: break;
    }

    ctx->pc = 0x108eb8u;

    // 0x108eb8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x108eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x108ebc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x108ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x108ec0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x108ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x108ec4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x108ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x108ec8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x108ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x108ecc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x108eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x108ed0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x108ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x108ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x108ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x108ed8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x108ED8u;
    SET_GPR_U32(ctx, 31, 0x108EE0u);
    ctx->pc = 0x108EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108ED8u;
    // 0x108edc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x108ED8u, 0x108EE0u)) {
        return;
    }
    ctx->pc = 0x108EE0u;
label_108ee0:
    // 0x108ee0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x108ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x108ee4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x108ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x108ee8: 0x24724290  addiu       $s2, $v1, 0x4290
    ctx->pc = 0x108ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
    // 0x108eec: 0x8c644290  lw          $a0, 0x4290($v1)
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4290u));
    // 0x108ef0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x108ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4294u));
    // 0x108ef4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x108ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x108ef8: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x108ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
    // 0x108efc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x108efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x108f00: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x108f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x108f04: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x108f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f08: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x108f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f0c: 0xc0428c2  jal         func_10A308
    ctx->pc = 0x108F0Cu;
    SET_GPR_U32(ctx, 31, 0x108F14u);
    ctx->pc = 0x108F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F0Cu;
    // 0x108f10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A308u, 0x108F0Cu, 0x108F14u)) {
        return;
    }
    ctx->pc = 0x108F14u;
label_108f14:
    // 0x108f14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x108f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x108f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x108f1c: 0x126200a5  beq         $s3, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x108F1Cu;
    {
        const bool branch_taken_0x108f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x108F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F1Cu;
        // 0x108f20: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f1c) {
            ctx->pc = 0x1091B4u;
            goto label_1091b4;
        }
    }
    ctx->pc = 0x108F24u;
    // 0x108f24: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x108f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x108f28: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x108f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x108f2c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x108f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f30: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x108f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x108f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x108f38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x108f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108f3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f40: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x108f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108f44: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x108f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f48: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x108f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x108f4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x108f50: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x108f54: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x108f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108f58: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x108f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108f5c: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x108f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x108f60: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x108f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x108f64: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x108f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x108f68: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x108f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x108f6c: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x108f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x108f70: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x108f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f74: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x108f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108f78: 0xc0428f6  jal         func_10A3D8
    ctx->pc = 0x108F78u;
    SET_GPR_U32(ctx, 31, 0x108F80u);
    ctx->pc = 0x108F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F78u;
    // 0x108f7c: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A3D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A3D8u, 0x108F78u, 0x108F80u)) {
        return;
    }
    ctx->pc = 0x108F80u;
label_108f80:
    // 0x108f80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x108f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x108f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f88: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x108F88u;
    {
        const bool branch_taken_0x108f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x108F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F88u;
        // 0x108f8c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f88) {
            ctx->pc = 0x108FDCu;
            goto label_108fdc;
        }
    }
    ctx->pc = 0x108F90u;
    // 0x108f90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108f94: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x108F94u;
    {
        const bool branch_taken_0x108f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x108F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F94u;
        // 0x108f98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f94) {
            ctx->pc = 0x108FD0u;
            goto label_108fd0;
        }
    }
    ctx->pc = 0x108F9Cu;
    // 0x108f9c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x108f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108fa0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x108fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x108fa4: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x108FA4u;
    {
        const bool branch_taken_0x108fa4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x108fa4) {
            ctx->pc = 0x108FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108FA4u;
            // 0x108fa8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108FD4u;
            goto label_108fd4;
        }
    }
    ctx->pc = 0x108FACu;
    // 0x108fac: 0x0  nop
    ctx->pc = 0x108facu;
    // NOP
label_108fb0:
    // 0x108fb0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x108fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x108fb4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x108fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x108fb8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x108fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108fbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108fc0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x108fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x108fc4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x108fc8: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x108FC8u;
    {
        const bool branch_taken_0x108fc8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x108FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FC8u;
        // 0x108fcc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fc8) {
            ctx->pc = 0x108FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108fb0;
        }
    }
    ctx->pc = 0x108FD0u;
label_108fd0:
    // 0x108fd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_108fd4:
    // 0x108fd4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x108fd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x108fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_108fdc:
    // 0x108fdc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x108fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x108fe0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x108fe4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108fe8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x108fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x108fec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x108fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x108ff0: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x108ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x108ff4: 0x6ba90027  ldl         $t1, 0x27($sp)
    ctx->pc = 0x108ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x108ff8: 0x6fa90020  ldr         $t1, 0x20($sp)
    ctx->pc = 0x108ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x108ffc: 0xb3a90047  sdl         $t1, 0x47($sp)
    ctx->pc = 0x108ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109000: 0xb7a90040  sdr         $t1, 0x40($sp)
    ctx->pc = 0x109000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109004: 0xc0428c2  jal         func_10A308
    ctx->pc = 0x109004u;
    SET_GPR_U32(ctx, 31, 0x10900Cu);
    ctx->pc = 0x109008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109004u;
    // 0x109008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A308u, 0x109004u, 0x10900Cu)) {
        return;
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10900cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109014: 0x50850017  beql        $a0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x109014u;
    {
        const bool branch_taken_0x109014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x109014) {
            ctx->pc = 0x109018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109014u;
            // 0x109018: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109074u;
            goto label_109074;
        }
    }
    ctx->pc = 0x10901Cu;
    // 0x10901c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x109020: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x109024: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x109024u;
    {
        const bool branch_taken_0x109024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x109028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109024u;
        // 0x109028: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109024) {
            ctx->pc = 0x109060u;
            goto label_109060;
        }
    }
    ctx->pc = 0x10902Cu;
    // 0x10902c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109030: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x109030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x109034: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109034u;
    {
        const bool branch_taken_0x109034 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x109034) {
            ctx->pc = 0x109038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109034u;
            // 0x109038: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109064u;
            goto label_109064;
        }
    }
    ctx->pc = 0x10903Cu;
    // 0x10903c: 0x0  nop
    ctx->pc = 0x10903cu;
    // NOP
label_109040:
    // 0x109040: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x109040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x109044: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x109044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x109048: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x109048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10904c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x109050: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x109050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109054: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x109054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x109058: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109058u;
    {
        const bool branch_taken_0x109058 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109058u;
        // 0x10905c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109058) {
            ctx->pc = 0x109040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109040;
        }
    }
    ctx->pc = 0x109060u;
label_109060:
    // 0x109060: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x109060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109064:
    // 0x109064: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x109064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x109068: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x109068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x10906c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109070: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x109070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_109074:
    // 0x109074: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109074u;
    {
        const bool branch_taken_0x109074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x109074) {
            ctx->pc = 0x109078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109074u;
            // 0x109078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090A4u;
            goto label_1090a4;
        }
    }
    ctx->pc = 0x10907Cu;
    // 0x10907c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10907Cu;
    {
        const bool branch_taken_0x10907c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10907c) {
            ctx->pc = 0x109080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10907Cu;
            // 0x109080: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109098u;
            goto label_109098;
        }
    }
    ctx->pc = 0x109084u;
    // 0x109084: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x109084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x109088: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x109088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x10908c: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x10908cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109090: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x109090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109094: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x109094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109098:
    // 0x109098: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x109098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10909c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10909Cu;
    {
        const bool branch_taken_0x10909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10909Cu;
        // 0x1090a0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10909c) {
            ctx->pc = 0x1090ACu;
            goto label_1090ac;
        }
    }
    ctx->pc = 0x1090A4u;
label_1090a4:
    // 0x1090a4: 0xc042602  jal         func_109808
    ctx->pc = 0x1090A4u;
    SET_GPR_U32(ctx, 31, 0x1090ACu);
    ctx->pc = 0x1090A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090A4u;
    // 0x1090a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x1090A4u, 0x1090ACu)) {
        return;
    }
    ctx->pc = 0x1090ACu;
label_1090ac:
    // 0x1090ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1090acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1090b0: 0x52820011  beql        $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1090B0u;
    {
        const bool branch_taken_0x1090b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1090b0) {
            ctx->pc = 0x1090B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090B0u;
            // 0x1090b4: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090F8u;
            goto label_1090f8;
        }
    }
    ctx->pc = 0x1090B8u;
    // 0x1090b8: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1090c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1090c4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1090C4u;
    {
        const bool branch_taken_0x1090c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090C4u;
        // 0x1090c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090c4) {
            ctx->pc = 0x1090F0u;
            goto label_1090f0;
        }
    }
    ctx->pc = 0x1090CCu;
    // 0x1090cc: 0x0  nop
    ctx->pc = 0x1090ccu;
    // NOP
label_1090d0:
    // 0x1090d0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1090d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1090d4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1090d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1090d8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1090d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1090dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1090e0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1090e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1090e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1090e8: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1090E8u;
    {
        const bool branch_taken_0x1090e8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1090ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090E8u;
        // 0x1090ec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090e8) {
            ctx->pc = 0x1090D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1090d0;
        }
    }
    ctx->pc = 0x1090F0u;
label_1090f0:
    // 0x1090f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1090f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1090f4: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x1090f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1090f8:
    // 0x1090f8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1090fc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1090fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109104: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x109104u;
    {
        const bool branch_taken_0x109104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x109108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109104u;
        // 0x109108: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109104) {
            ctx->pc = 0x109154u;
            goto label_109154;
        }
    }
    ctx->pc = 0x10910Cu;
    // 0x10910c: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x109110: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x109110u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x109114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109118: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109118u;
    {
        const bool branch_taken_0x109118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109118u;
        // 0x10911c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109118) {
            ctx->pc = 0x109138u;
            goto label_109138;
        }
    }
    ctx->pc = 0x109120u;
label_109120:
    // 0x109120: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x109120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x109124: 0x0  nop
    ctx->pc = 0x109124u;
    // NOP
    // 0x109128: 0x0  nop
    ctx->pc = 0x109128u;
    // NOP
    // 0x10912c: 0x0  nop
    ctx->pc = 0x10912cu;
    // NOP
    // 0x109130: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109130u;
    {
        const bool branch_taken_0x109130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109130u;
        // 0x109134: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109130) {
            ctx->pc = 0x109120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109120;
        }
    }
    ctx->pc = 0x109138u;
label_109138:
    // 0x109138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10913c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x10913cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x109140: 0xc042814  jal         func_10A050
    ctx->pc = 0x109140u;
    SET_GPR_U32(ctx, 31, 0x109148u);
    ctx->pc = 0x109144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109140u;
    // 0x109144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x109140u, 0x109148u)) {
        return;
    }
    ctx->pc = 0x109148u;
label_109148:
    // 0x109148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10914c: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x10914Cu;
    SET_GPR_U32(ctx, 31, 0x109154u);
    ctx->pc = 0x109150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10914Cu;
    // 0x109150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x10914Cu, 0x109154u)) {
        return;
    }
    ctx->pc = 0x109154u;
label_109154:
    // 0x109154: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x109154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x109158: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x109158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10915c: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10915Cu;
    {
        const bool branch_taken_0x10915c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10915c) {
            ctx->pc = 0x1091ACu;
            goto label_1091ac;
        }
    }
    ctx->pc = 0x109164u;
    // 0x109164: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x109168: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x10916c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109170: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109170u;
    {
        const bool branch_taken_0x109170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109170u;
        // 0x109174: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109170) {
            ctx->pc = 0x109190u;
            goto label_109190;
        }
    }
    ctx->pc = 0x109178u;
label_109178:
    // 0x109178: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x109178u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x10917c: 0x0  nop
    ctx->pc = 0x10917cu;
    // NOP
    // 0x109180: 0x0  nop
    ctx->pc = 0x109180u;
    // NOP
    // 0x109184: 0x0  nop
    ctx->pc = 0x109184u;
    // NOP
    // 0x109188: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109188u;
    {
        const bool branch_taken_0x109188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109188u;
        // 0x10918c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109188) {
            ctx->pc = 0x109178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109178;
        }
    }
    ctx->pc = 0x109190u;
label_109190:
    // 0x109190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109194: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x109194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x109198: 0xc042814  jal         func_10A050
    ctx->pc = 0x109198u;
    SET_GPR_U32(ctx, 31, 0x1091A0u);
    ctx->pc = 0x10919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109198u;
    // 0x10919c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x109198u, 0x1091A0u)) {
        return;
    }
    ctx->pc = 0x1091A0u;
label_1091a0:
    // 0x1091a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1091a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091a4: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x1091A4u;
    SET_GPR_U32(ctx, 31, 0x1091ACu);
    ctx->pc = 0x1091A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091A4u;
    // 0x1091a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x1091A4u, 0x1091ACu)) {
        return;
    }
    ctx->pc = 0x1091ACu;
label_1091ac:
    // 0x1091ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1091ACu;
    {
        const bool branch_taken_0x1091ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091ACu;
        // 0x1091b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091ac) {
            ctx->pc = 0x1091B8u;
            goto label_1091b8;
        }
    }
    ctx->pc = 0x1091B4u;
label_1091b4:
    // 0x1091b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1091b8:
    // 0x1091b8: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1091B8u;
    {
        const bool branch_taken_0x1091b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B8u;
        // 0x1091bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b8) {
            ctx->pc = 0x109484u;
            goto label_109484;
        }
    }
    ctx->pc = 0x1091C0u;
    // 0x1091c0: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x1091c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
    // 0x1091c4: 0x245242b0  addiu       $s2, $v0, 0x42B0
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
    // 0x1091c8: 0x8c4442b0  lw          $a0, 0x42B0($v0)
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17072)));
    // 0x1091cc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1091d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1091d4: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1091d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1091d8: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x1091d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1091dc: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x1091dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1091e0: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x1091e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1091e4: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x1091e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1091e8: 0xc0428c2  jal         func_10A308
    ctx->pc = 0x1091E8u;
    SET_GPR_U32(ctx, 31, 0x1091F0u);
    ctx->pc = 0x1091ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091E8u;
    // 0x1091ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A308u, 0x1091E8u, 0x1091F0u)) {
        return;
    }
    ctx->pc = 0x1091F0u;
label_1091f0:
    // 0x1091f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1091f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1091f8: 0x126200a2  beq         $s3, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1091F8u;
    {
        const bool branch_taken_0x1091f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1091FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091F8u;
        // 0x1091fc: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091f8) {
            ctx->pc = 0x109484u;
            goto label_109484;
        }
    }
    ctx->pc = 0x109200u;
    // 0x109200: 0x6a690007  ldl         $t1, 0x7($s3)
    ctx->pc = 0x109200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x109204: 0x6e690000  ldr         $t1, 0x0($s3)
    ctx->pc = 0x109204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x109208: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x109208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10920c: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x10920cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109210: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109214: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x109214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x109218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10921c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x10921cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109220: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x109220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109224: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x109224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x109228: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x109228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10922c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x10922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x109230: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x109230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x109234: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x109234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109238: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x109238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x10923c: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x10923cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x109240: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x109240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x109244: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x109244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x109248: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x109248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x10924c: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x10924cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109250: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x109250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109254: 0xc0428f6  jal         func_10A3D8
    ctx->pc = 0x109254u;
    SET_GPR_U32(ctx, 31, 0x10925Cu);
    ctx->pc = 0x109258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109254u;
    // 0x109258: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A3D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A3D8u, 0x109254u, 0x10925Cu)) {
        return;
    }
    ctx->pc = 0x10925Cu;
label_10925c:
    // 0x10925c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109264: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x109264u;
    {
        const bool branch_taken_0x109264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x109268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109264u;
        // 0x109268: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109264) {
            ctx->pc = 0x1092B4u;
            goto label_1092b4;
        }
    }
    ctx->pc = 0x10926Cu;
    // 0x10926c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109270: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x109270u;
    {
        const bool branch_taken_0x109270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x109274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109270u;
        // 0x109274: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109270) {
            ctx->pc = 0x1092A8u;
            goto label_1092a8;
        }
    }
    ctx->pc = 0x109278u;
    // 0x109278: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x109278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10927c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10927cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x109280: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109280u;
    {
        const bool branch_taken_0x109280 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x109280) {
            ctx->pc = 0x109284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109280u;
            // 0x109284: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1092ACu;
            goto label_1092ac;
        }
    }
    ctx->pc = 0x109288u;
label_109288:
    // 0x109288: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x109288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10928c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x10928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x109290: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x109290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109294: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x109298: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x109298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10929c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1092a0: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092A0u;
        // 0x1092a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x109288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109288;
        }
    }
    ctx->pc = 0x1092A8u;
label_1092a8:
    // 0x1092a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1092a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1092ac:
    // 0x1092ac: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1092acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1092b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1092b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1092b4:
    // 0x1092b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1092b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1092b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1092b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1092bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1092c0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1092c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1092c4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1092c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1092c8: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x1092c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1092cc: 0x6ba90027  ldl         $t1, 0x27($sp)
    ctx->pc = 0x1092ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1092d0: 0x6fa90020  ldr         $t1, 0x20($sp)
    ctx->pc = 0x1092d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1092d4: 0xb3a90047  sdl         $t1, 0x47($sp)
    ctx->pc = 0x1092d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1092d8: 0xb7a90040  sdr         $t1, 0x40($sp)
    ctx->pc = 0x1092d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1092dc: 0xc0428c2  jal         func_10A308
    ctx->pc = 0x1092DCu;
    SET_GPR_U32(ctx, 31, 0x1092E4u);
    ctx->pc = 0x1092E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092DCu;
    // 0x1092e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A308u, 0x1092DCu, 0x1092E4u)) {
        return;
    }
    ctx->pc = 0x1092E4u;
label_1092e4:
    // 0x1092e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1092e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1092e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092ec: 0x50850017  beql        $a0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1092ECu;
    {
        const bool branch_taken_0x1092ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1092ec) {
            ctx->pc = 0x1092F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1092ECu;
            // 0x1092f0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10934Cu;
            goto label_10934c;
        }
    }
    ctx->pc = 0x1092F4u;
    // 0x1092f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1092f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1092f8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1092f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1092fc: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1092FCu;
    {
        const bool branch_taken_0x1092fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x109300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092FCu;
        // 0x109300: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092fc) {
            ctx->pc = 0x109338u;
            goto label_109338;
        }
    }
    ctx->pc = 0x109304u;
    // 0x109304: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x109308: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x109308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10930c: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10930Cu;
    {
        const bool branch_taken_0x10930c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x10930c) {
            ctx->pc = 0x109310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10930Cu;
            // 0x109310: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10933Cu;
            goto label_10933c;
        }
    }
    ctx->pc = 0x109314u;
    // 0x109314: 0x0  nop
    ctx->pc = 0x109314u;
    // NOP
label_109318:
    // 0x109318: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x109318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x10931c: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x10931cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x109320: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x109320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x109328: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x109328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10932c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x109330: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x109330u;
    {
        const bool branch_taken_0x109330 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x109334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109330u;
        // 0x109334: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109330) {
            ctx->pc = 0x109318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109318;
        }
    }
    ctx->pc = 0x109338u;
label_109338:
    // 0x109338: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x109338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10933c:
    // 0x10933c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x10933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x109340: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x109340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x109344: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x109344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109348: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x109348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10934c:
    // 0x10934c: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10934Cu;
    {
        const bool branch_taken_0x10934c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10934c) {
            ctx->pc = 0x109350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10934Cu;
            // 0x109350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10937Cu;
            goto label_10937c;
        }
    }
    ctx->pc = 0x109354u;
    // 0x109354: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x109354) {
            ctx->pc = 0x109358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109354u;
            // 0x109358: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109370u;
            goto label_109370;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x10935cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x109360: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x109360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x109364: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x109364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x109368: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x109368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10936c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109370:
    // 0x109370: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x109370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x109374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109374u;
    {
        const bool branch_taken_0x109374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109374u;
        // 0x109378: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109374) {
            ctx->pc = 0x109384u;
            goto label_109384;
        }
    }
    ctx->pc = 0x10937Cu;
label_10937c:
    // 0x10937c: 0xc042602  jal         func_109808
    ctx->pc = 0x10937Cu;
    SET_GPR_U32(ctx, 31, 0x109384u);
    ctx->pc = 0x109380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10937Cu;
    // 0x109380: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x10937Cu, 0x109384u)) {
        return;
    }
    ctx->pc = 0x109384u;
label_109384:
    // 0x109384: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x109384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x109388: 0x52820011  beql        $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x109388u;
    {
        const bool branch_taken_0x109388 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x109388) {
            ctx->pc = 0x10938Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109388u;
            // 0x10938c: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1093D0u;
            goto label_1093d0;
        }
    }
    ctx->pc = 0x109390u;
    // 0x109390: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x109390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109394: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x109394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109398: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x109398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x10939c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10939Cu;
    {
        const bool branch_taken_0x10939c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1093A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10939Cu;
        // 0x1093a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10939c) {
            ctx->pc = 0x1093C8u;
            goto label_1093c8;
        }
    }
    ctx->pc = 0x1093A4u;
    // 0x1093a4: 0x0  nop
    ctx->pc = 0x1093a4u;
    // NOP
label_1093a8:
    // 0x1093a8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1093a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1093ac: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1093acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1093b0: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1093b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1093b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1093b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1093b8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1093b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1093bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1093bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1093c0: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1093C0u;
    {
        const bool branch_taken_0x1093c0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1093C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C0u;
        // 0x1093c4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093c0) {
            ctx->pc = 0x1093A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1093a8;
        }
    }
    ctx->pc = 0x1093C8u;
label_1093c8:
    // 0x1093c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1093c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1093cc: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x1093ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1093d0:
    // 0x1093d0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1093d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1093d4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1093d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1093d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093dc: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1093DCu;
    {
        const bool branch_taken_0x1093dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1093E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093DCu;
        // 0x1093e0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093dc) {
            ctx->pc = 0x10942Cu;
            goto label_10942c;
        }
    }
    ctx->pc = 0x1093E4u;
    // 0x1093e4: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1093e8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1093e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1093ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1093ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1093f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1093F0u;
    {
        const bool branch_taken_0x1093f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093F0u;
        // 0x1093f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093f0) {
            ctx->pc = 0x109410u;
            goto label_109410;
        }
    }
    ctx->pc = 0x1093F8u;
label_1093f8:
    // 0x1093f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1093fc: 0x0  nop
    ctx->pc = 0x1093fcu;
    // NOP
    // 0x109400: 0x0  nop
    ctx->pc = 0x109400u;
    // NOP
    // 0x109404: 0x0  nop
    ctx->pc = 0x109404u;
    // NOP
    // 0x109408: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109408u;
    {
        const bool branch_taken_0x109408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109408u;
        // 0x10940c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109408) {
            ctx->pc = 0x1093F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1093f8;
        }
    }
    ctx->pc = 0x109410u;
label_109410:
    // 0x109410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109414: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x109414u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x109418: 0xc042814  jal         func_10A050
    ctx->pc = 0x109418u;
    SET_GPR_U32(ctx, 31, 0x109420u);
    ctx->pc = 0x10941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109418u;
    // 0x10941c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x109418u, 0x109420u)) {
        return;
    }
    ctx->pc = 0x109420u;
label_109420:
    // 0x109420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109424: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x109424u;
    SET_GPR_U32(ctx, 31, 0x10942Cu);
    ctx->pc = 0x109428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109424u;
    // 0x109428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x109424u, 0x10942Cu)) {
        return;
    }
    ctx->pc = 0x10942Cu;
label_10942c:
    // 0x10942c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x10942cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x109430: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x109434: 0x12300013  beq         $s1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x109434u;
    {
        const bool branch_taken_0x109434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x109438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109434u;
        // 0x109438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109434) {
            ctx->pc = 0x109484u;
            goto label_109484;
        }
    }
    ctx->pc = 0x10943Cu;
    // 0x10943c: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x10943cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x109440: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x109444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109448: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109448u;
    {
        const bool branch_taken_0x109448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109448u;
        // 0x10944c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109448) {
            ctx->pc = 0x109468u;
            goto label_109468;
        }
    }
    ctx->pc = 0x109450u;
label_109450:
    // 0x109450: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x109450u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x109454: 0x0  nop
    ctx->pc = 0x109454u;
    // NOP
    // 0x109458: 0x0  nop
    ctx->pc = 0x109458u;
    // NOP
    // 0x10945c: 0x0  nop
    ctx->pc = 0x10945cu;
    // NOP
    // 0x109460: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x109460u;
    {
        const bool branch_taken_0x109460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109460u;
        // 0x109464: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109460) {
            ctx->pc = 0x109450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109450;
        }
    }
    ctx->pc = 0x109468u;
label_109468:
    // 0x109468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10946c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x10946cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x109470: 0xc042814  jal         func_10A050
    ctx->pc = 0x109470u;
    SET_GPR_U32(ctx, 31, 0x109478u);
    ctx->pc = 0x109474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109470u;
    // 0x109474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10A050u, 0x109470u, 0x109478u)) {
        return;
    }
    ctx->pc = 0x109478u;
label_109478:
    // 0x109478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10947c: 0xc042b90  jal         func_10AE40
    ctx->pc = 0x10947Cu;
    SET_GPR_U32(ctx, 31, 0x109484u);
    ctx->pc = 0x109480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10947Cu;
    // 0x109480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10AE40u, 0x10947Cu, 0x109484u)) {
        return;
    }
    ctx->pc = 0x109484u;
label_109484:
    // 0x109484: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x109484u;
    SET_GPR_U32(ctx, 31, 0x10948Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x109484u, 0x10948Cu)) {
        return;
    }
    ctx->pc = 0x10948Cu;
label_10948c:
    // 0x10948c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x10948cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x109490: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x109490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109494: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x109494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109498: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x109498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10949c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x10949cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1094a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1094a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1094a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1094a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1094a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1094A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1094ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1094A8u;
        // 0x1094ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1094A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1094B0u;
}
