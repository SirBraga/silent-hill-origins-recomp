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

// Function: sub_002769A8
// Address: 0x2769a8 - 0x276b30
void sub_002769A8_0x2769a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002769A8_0x2769a8");
#endif

    switch (ctx->pc) {
        case 0x2769d4u: goto label_2769d4;
        case 0x2769fcu: goto label_2769fc;
        case 0x276accu: goto label_276acc;
        case 0x276af0u: goto label_276af0;
        case 0x276b08u: goto label_276b08;
        default: break;
    }

    ctx->pc = 0x2769a8u;

    // 0x2769a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2769ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2769acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2769b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2769b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2769b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2769b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2769b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2769bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2769c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2769c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2769c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2769c8: 0x2079021  addu        $s2, $s0, $a3
    ctx->pc = 0x2769c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2769cc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2769CCu;
    SET_GPR_U32(ctx, 31, 0x2769D4u);
    ctx->pc = 0x2769D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769CCu;
    // 0x2769d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2769CCu, 0x2769D4u)) {
        return;
    }
    ctx->pc = 0x2769D4u;
label_2769d4:
    // 0x2769d4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2769D4u;
    {
        const bool branch_taken_0x2769d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2769D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769D4u;
        // 0x2769d8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769d4) {
            ctx->pc = 0x276AF8u;
            goto label_276af8;
        }
    }
    ctx->pc = 0x2769DCu;
    // 0x2769dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2769dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2769e0: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2769e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2769e4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2769e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2769e8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2769E8u;
    {
        const bool branch_taken_0x2769e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2769ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769E8u;
        // 0x2769ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769e8) {
            ctx->pc = 0x276AE0u;
            goto label_276ae0;
        }
    }
    ctx->pc = 0x2769F0u;
    // 0x2769f0: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2769f4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2769F4u;
    SET_GPR_U32(ctx, 31, 0x2769FCu);
    ctx->pc = 0x2769F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769F4u;
    // 0x2769f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2769F4u, 0x2769FCu)) {
        return;
    }
    ctx->pc = 0x2769FCu;
label_2769fc:
    // 0x2769fc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2769FCu;
    {
        const bool branch_taken_0x2769fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769FCu;
        // 0x276a00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2769fc) {
            ctx->pc = 0x276AF8u;
            goto label_276af8;
        }
    }
    ctx->pc = 0x276A04u;
    // 0x276a04: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x276a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x276a08: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x276A08u;
    {
        const bool branch_taken_0x276a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276a08) {
            ctx->pc = 0x276A7Cu;
            goto label_276a7c;
        }
    }
    ctx->pc = 0x276A10u;
    // 0x276a10: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x276a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x276a14: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x276a18: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x276a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a1c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x276a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x276a24: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x276a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x276a28: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x276a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x276a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x276a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x276a34: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x276a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x276a38: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x276a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x276a44: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x276a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x276a48: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x276a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x276a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276a54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x276a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x276a58: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x276a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276a64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x276a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x276a68: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276a74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x276A74u;
    {
        const bool branch_taken_0x276a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A74u;
        // 0x276a78: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a74) {
            ctx->pc = 0x276AACu;
            goto label_276aac;
        }
    }
    ctx->pc = 0x276A7Cu;
label_276a7c:
    // 0x276a7c: 0x6a020067  ldl         $v0, 0x67($s0)
    ctx->pc = 0x276a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x276a80: 0x6e020060  ldr         $v0, 0x60($s0)
    ctx->pc = 0x276a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x276a84: 0x6a03006f  ldl         $v1, 0x6F($s0)
    ctx->pc = 0x276a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x276a88: 0x6e030068  ldr         $v1, 0x68($s0)
    ctx->pc = 0x276a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x276a8c: 0x6a040077  ldl         $a0, 0x77($s0)
    ctx->pc = 0x276a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x276a90: 0x6e040070  ldr         $a0, 0x70($s0)
    ctx->pc = 0x276a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x276a94: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x276a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276a98: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x276a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276a9c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x276a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276aa0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x276aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276aa4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x276aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276aa8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x276aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276aac:
    // 0x276aac: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x276aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ab4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x276ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x276ab8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x276ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276abc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x276abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x276ac0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x276ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x276ac4: 0xc09f4ae  jal         func_27D2B8
    ctx->pc = 0x276AC4u;
    SET_GPR_U32(ctx, 31, 0x276ACCu);
    ctx->pc = 0x276AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276AC4u;
    // 0x276ac8: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27D2B8u, 0x276AC4u, 0x276ACCu)) {
        return;
    }
    ctx->pc = 0x276ACCu;
label_276acc:
    // 0x276acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x276accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276ad0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x276AD0u;
    {
        const bool branch_taken_0x276ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AD0u;
        // 0x276ad4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ad0) {
            ctx->pc = 0x276B0Cu;
            goto label_276b0c;
        }
    }
    ctx->pc = 0x276AD8u;
    // 0x276ad8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x276AD8u;
    {
        const bool branch_taken_0x276ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AD8u;
        // 0x276adc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ad8) {
            ctx->pc = 0x276B18u;
            goto label_276b18;
        }
    }
    ctx->pc = 0x276AE0u;
label_276ae0:
    // 0x276ae0: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x276ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ae8: 0xc09270a  jal         func_249C28
    ctx->pc = 0x276AE8u;
    SET_GPR_U32(ctx, 31, 0x276AF0u);
    ctx->pc = 0x276AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276AE8u;
    // 0x276aec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x276AE8u, 0x276AF0u)) {
        return;
    }
    ctx->pc = 0x276AF0u;
label_276af0:
    // 0x276af0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276AF0u;
    {
        const bool branch_taken_0x276af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276af0) {
            ctx->pc = 0x276B00u;
            goto label_276b00;
        }
    }
    ctx->pc = 0x276AF8u;
label_276af8:
    // 0x276af8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276AF8u;
    {
        const bool branch_taken_0x276af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AF8u;
        // 0x276afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276af8) {
            ctx->pc = 0x276B18u;
            goto label_276b18;
        }
    }
    ctx->pc = 0x276B00u;
label_276b00:
    // 0x276b00: 0xc09f402  jal         func_27D008
    ctx->pc = 0x276B00u;
    SET_GPR_U32(ctx, 31, 0x276B08u);
    ctx->pc = 0x276B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B00u;
    // 0x276b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27D008u, 0x276B00u, 0x276B08u)) {
        return;
    }
    ctx->pc = 0x276B08u;
label_276b08:
    // 0x276b08: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x276b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_276b0c:
    // 0x276b0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x276b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x276b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b14: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x276b14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17));
label_276b18:
    // 0x276b18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x276b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276b1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x276b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276b20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x276b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276b24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x276b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276b28: 0x3e00008  jr          $ra
    ctx->pc = 0x276B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B28u;
        // 0x276b2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276B30u;
}
