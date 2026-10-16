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

// Function: sub_001DFDF0
// Address: 0x1dfdf0 - 0x1dff58
void sub_001DFDF0_0x1dfdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFDF0_0x1dfdf0");
#endif

    switch (ctx->pc) {
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfeccu: goto label_1dfecc;
        case 0x1dfee0u: goto label_1dfee0;
        case 0x1dfef4u: goto label_1dfef4;
        case 0x1dff08u: goto label_1dff08;
        default: break;
    }

    ctx->pc = 0x1dfdf0u;

    // 0x1dfdf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dfdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dfdf4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1dfdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1dfdf8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1dfdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1dfdfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dfdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe00: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1dfe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1dfe04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dfe04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1dfe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1dfe0c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1dfe0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfe10: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1dfe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1dfe14: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1dfe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1dfe18: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1dfe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1dfe1c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1dfe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1dfe20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfe24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dfe28: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x1dfe28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfe2c: 0x1aa0003d  blez        $s5, . + 4 + (0x3D << 2)
    ctx->pc = 0x1DFE2Cu;
    {
        const bool branch_taken_0x1dfe2c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1DFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE2Cu;
        // 0x1dfe30: 0x8c960010  lw          $s6, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe2c) {
            ctx->pc = 0x1DFF24u;
            goto label_1dff24;
        }
    }
    ctx->pc = 0x1DFE34u;
    // 0x1dfe34: 0x3c14aaaa  lui         $s4, 0xAAAA
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)43690 << 16));
    // 0x1dfe38: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1dfe38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe3c: 0x3694aaab  ori         $s4, $s4, 0xAAAB
    ctx->pc = 0x1dfe3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)43691);
    // 0x1dfe40: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfe44: 0x0  nop
    ctx->pc = 0x1dfe44u;
    // NOP
label_1dfe48:
    // 0x1dfe48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfe4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFE4Cu;
    {
        const bool branch_taken_0x1dfe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE4Cu;
        // 0x1dfe50: 0x561023  subu        $v0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe4c) {
            ctx->pc = 0x1DFE64u;
            goto label_1dfe64;
        }
    }
    ctx->pc = 0x1DFE54u;
    // 0x1dfe54: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1dfe54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dfe58: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1dfe58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1dfe5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFE5Cu;
    {
        const bool branch_taken_0x1dfe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE5Cu;
        // 0x1dfe60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe5c) {
            ctx->pc = 0x1DFE68u;
            goto label_1dfe68;
        }
    }
    ctx->pc = 0x1DFE64u;
label_1dfe64:
    // 0x1dfe64: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x1dfe64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_1dfe68:
    // 0x1dfe68: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1dfe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfe6c: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x1dfe6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1dfe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1dfe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dfe7c: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x1dfe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dfe80: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x1dfe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dfe84: 0x6a230017  ldl         $v1, 0x17($s1)
    ctx->pc = 0x1dfe84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dfe88: 0x6e230010  ldr         $v1, 0x10($s1)
    ctx->pc = 0x1dfe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dfe8c: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x1dfe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfe90: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x1dfe90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfe94: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1dfe94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfe98: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1dfe98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfe9c: 0xc092782  jal         func_249E08
    ctx->pc = 0x1DFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFEA4u);
    ctx->pc = 0x1DFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE9Cu;
    // 0x1dfea0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1DFE9Cu, 0x1DFEA4u)) {
        return;
    }
    ctx->pc = 0x1DFEA4u;
label_1dfea4:
    // 0x1dfea4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DFEA4u;
    {
        const bool branch_taken_0x1dfea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEA4u;
        // 0x1dfea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfea4) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFEACu;
    // 0x1dfeac: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1dfeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1dfeb0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DFEB0u;
    SET_GPR_U32(ctx, 31, 0x1DFEB8u);
    ctx->pc = 0x1DFEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEB0u;
    // 0x1dfeb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DFEB0u, 0x1DFEB8u)) {
        return;
    }
    ctx->pc = 0x1DFEB8u;
label_1dfeb8:
    // 0x1dfeb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFEB8u;
    {
        const bool branch_taken_0x1dfeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB8u;
        // 0x1dfebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfeb8) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFEC0u;
    // 0x1dfec0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1dfec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1dfec4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DFEC4u;
    SET_GPR_U32(ctx, 31, 0x1DFECCu);
    ctx->pc = 0x1DFEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEC4u;
    // 0x1dfec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DFEC4u, 0x1DFECCu)) {
        return;
    }
    ctx->pc = 0x1DFECCu;
label_1dfecc:
    // 0x1dfecc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFECCu;
    {
        const bool branch_taken_0x1dfecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFECCu;
        // 0x1dfed0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfecc) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFED4u;
    // 0x1dfed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfed8: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DFED8u;
    SET_GPR_U32(ctx, 31, 0x1DFEE0u);
    ctx->pc = 0x1DFEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFED8u;
    // 0x1dfedc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DFED8u, 0x1DFEE0u)) {
        return;
    }
    ctx->pc = 0x1DFEE0u;
label_1dfee0:
    // 0x1dfee0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFEE0u;
    {
        const bool branch_taken_0x1dfee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEE0u;
        // 0x1dfee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfee0) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFEE8u;
    // 0x1dfee8: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1dfee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1dfeec: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DFEECu;
    SET_GPR_U32(ctx, 31, 0x1DFEF4u);
    ctx->pc = 0x1DFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEECu;
    // 0x1dfef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DFEECu, 0x1DFEF4u)) {
        return;
    }
    ctx->pc = 0x1DFEF4u;
label_1dfef4:
    // 0x1dfef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFEF4u;
    {
        const bool branch_taken_0x1dfef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF4u;
        // 0x1dfef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfef4) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFEFCu;
    // 0x1dfefc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1dfefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dff00: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1DFF00u;
    SET_GPR_U32(ctx, 31, 0x1DFF08u);
    ctx->pc = 0x1DFF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF00u;
    // 0x1dff04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1DFF00u, 0x1DFF08u)) {
        return;
    }
    ctx->pc = 0x1DFF08u;
label_1dff08:
    // 0x1dff08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFF08u;
    {
        const bool branch_taken_0x1dff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF08u;
        // 0x1dff0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff08) {
            ctx->pc = 0x1DFF18u;
            goto label_1dff18;
        }
    }
    ctx->pc = 0x1DFF10u;
label_1dff10:
    // 0x1dff10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFF10u;
    {
        const bool branch_taken_0x1dff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF10u;
        // 0x1dff14: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff10) {
            ctx->pc = 0x1DFF24u;
            goto label_1dff24;
        }
    }
    ctx->pc = 0x1DFF18u;
label_1dff18:
    // 0x1dff18: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x1dff18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1dff1c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1DFF1Cu;
    {
        const bool branch_taken_0x1dff1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF1Cu;
        // 0x1dff20: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff1c) {
            ctx->pc = 0x1DFE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfe48;
        }
    }
    ctx->pc = 0x1DFF24u;
label_1dff24:
    // 0x1dff24: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1dff24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff28: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1dff28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dff2c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1dff2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dff30: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1dff30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dff34: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1dff34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dff38: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1dff38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dff3c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dff3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dff40: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1dff40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dff44: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1dff44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dff48: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1dff48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dff4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dff4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dff50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF50u;
        // 0x1dff54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF58u;
}
