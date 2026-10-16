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

// Function: sub_001A1DF8
// Address: 0x1a1df8 - 0x1a2370
void sub_001A1DF8_0x1a1df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1DF8_0x1a1df8");
#endif

    switch (ctx->pc) {
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1ee8u: goto label_1a1ee8;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a2028u: goto label_1a2028;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a211cu: goto label_1a211c;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a22b0u: goto label_1a22b0;
        case 0x1a22ccu: goto label_1a22cc;
        default: break;
    }

    ctx->pc = 0x1a1df8u;

    // 0x1a1df8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a1dfc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a1dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a1e00: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a1e04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e08: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a1e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e10: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a1e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a1e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a1e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e18: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1a1e18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a1e1c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a1e1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a1e20: 0x8e022d84  lw          $v0, 0x2D84($s0)
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11652)));
    // 0x1a1e24: 0x8e231334  lw          $v1, 0x1334($s1)
    ctx->pc = 0x1a1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4916)));
    // 0x1a1e28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a1e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a1e2c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x1A1E2Cu;
    {
        const bool branch_taken_0x1a1e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0xae221284  sw          $v0, 0x1284($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e2c) {
            ctx->pc = 0x1A2348u;
            goto label_1a2348;
        }
    }
    ctx->pc = 0x1A1E34u;
    // 0x1a1e34: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a1e38: 0xc06ab3a  jal         func_1AACE8
    ctx->pc = 0x1A1E38u;
    SET_GPR_U32(ctx, 31, 0x1A1E40u);
    ctx->pc = 0x1A1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E38u;
    // 0x1a1e3c: 0x26251230  addiu       $a1, $s1, 0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AACE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AACE8u, 0x1A1E38u, 0x1A1E40u)) {
        return;
    }
    ctx->pc = 0x1A1E40u;
label_1a1e40:
    // 0x1a1e40: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x1A1E40u;
    {
        const bool branch_taken_0x1a1e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E40u;
        // 0x1a1e44: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e40) {
            ctx->pc = 0x1A2348u;
            goto label_1a2348;
        }
    }
    ctx->pc = 0x1A1E48u;
    // 0x1a1e48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1e4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a1e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a1e50: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x1A1E50u;
    SET_GPR_U32(ctx, 31, 0x1A1E58u);
    ctx->pc = 0x1A1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E50u;
    // 0x1a1e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x1A1E50u, 0x1A1E58u)) {
        return;
    }
    ctx->pc = 0x1A1E58u;
label_1a1e58:
    // 0x1a1e58: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a1e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a1e5c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a1e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a1e60: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1e64: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1a1e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1e68: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1a1e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1e6c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a1e70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a1e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a1e74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a1e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1e78: 0xc7b40014  lwc1        $f20, 0x14($sp)
    ctx->pc = 0x1a1e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1e7c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a1e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a1e80: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1e84: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a1e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a1e88: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a1e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a1e8c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a1e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a1e90: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a1e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a1e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a1e98: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a1e98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1e9c: 0x0  nop
    ctx->pc = 0x1a1e9cu;
    // NOP
    // 0x1a1ea0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A1EA0u;
    {
        const bool branch_taken_0x1a1ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA0u;
        // 0x1a1ea4: 0xe7b50028  swc1        $f21, 0x28($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ea0) {
            ctx->pc = 0x1A1EDCu;
            goto label_1a1edc;
        }
    }
    ctx->pc = 0x1A1EA8u;
    // 0x1a1ea8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1a1ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a1eac: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1a1eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a1eb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1eb4: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a1eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1eb8: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a1eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1ebc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a1ec0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1EC0u;
    {
        const bool branch_taken_0x1a1ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ec0) {
            ctx->pc = 0x1A1F28u;
            goto label_1a1f28;
        }
    }
    ctx->pc = 0x1A1EC8u;
label_1a1ec8:
    // 0x1a1ec8: 0x0  nop
    ctx->pc = 0x1a1ec8u;
    // NOP
    // 0x1a1ecc: 0x0  nop
    ctx->pc = 0x1a1eccu;
    // NOP
    // 0x1a1ed0: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a1ed0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a1ed4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A1ED4u;
    {
        const bool branch_taken_0x1a1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ED4u;
        // 0x1a1ed8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ed4) {
            ctx->pc = 0x1A1F08u;
            goto label_1a1f08;
        }
    }
    ctx->pc = 0x1A1EDCu;
label_1a1edc:
    // 0x1a1edc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1ee0: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A1EE0u;
    SET_GPR_U32(ctx, 31, 0x1A1EE8u);
    ctx->pc = 0x1A1EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EE0u;
    // 0x1a1ee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A1EE0u, 0x1A1EE8u)) {
        return;
    }
    ctx->pc = 0x1A1EE8u;
label_1a1ee8:
    // 0x1a1ee8: 0x0  nop
    ctx->pc = 0x1a1ee8u;
    // NOP
    // 0x1a1eec: 0x0  nop
    ctx->pc = 0x1a1eecu;
    // NOP
    // 0x1a1ef0: 0x46000004  c1          0x4
    ctx->pc = 0x1a1ef0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a1ef4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a1ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1ef8: 0x0  nop
    ctx->pc = 0x1a1ef8u;
    // NOP
    // 0x1a1efc: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x1A1EFCu;
    {
        const bool branch_taken_0x1a1efc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EFCu;
        // 0x1a1f00: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1efc) {
            ctx->pc = 0x1A1EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1ec8;
        }
    }
    ctx->pc = 0x1A1F04u;
    // 0x1a1f04: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1f08:
    // 0x1a1f08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1f0c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1f10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a1f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a1f14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a1f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a1f18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a1f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a1f1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a1f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a1f20: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a1f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a1f24: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a1f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a1f28:
    // 0x1a1f28: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1a1f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a1f2c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x1a1f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a1f30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1f34: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x1a1f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1f38: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x1a1f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1f3c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1a1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1a1f40: 0x6a251257  ldl         $a1, 0x1257($s1)
    ctx->pc = 0x1a1f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a1f44: 0x6e251250  ldr         $a1, 0x1250($s1)
    ctx->pc = 0x1a1f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a1f48: 0x8e261258  lw          $a2, 0x1258($s1)
    ctx->pc = 0x1a1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4696)));
    // 0x1a1f4c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1a1f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1f50: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1a1f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1f54: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1a1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1a1f58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a1f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1f5c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1f60: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1a1f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1f64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a1f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a1f68: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1f6c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a1f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a1f70: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a1f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a1f74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a1f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a1f78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a1f7c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a1f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1f80: 0x0  nop
    ctx->pc = 0x1a1f80u;
    // NOP
    // 0x1a1f84: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1A1F84u;
    {
        const bool branch_taken_0x1a1f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1f84) {
            ctx->pc = 0x1A20A0u;
            goto label_1a20a0;
        }
    }
    ctx->pc = 0x1A1F8Cu;
    // 0x1a1f8c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x1a1f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a1f90: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x1a1f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a1f94: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1f98: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1a1f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1f9c: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1a1f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1fa0: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1a1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1a1fa4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1a1fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a1fa8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1a1fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a1fac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1fb0: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1a1fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1fb4: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1a1fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1fb8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a1fbc: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x1a1fbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a1fc0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1fc4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1a1fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1fc8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a1fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a1fcc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a1fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a1fd0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a1fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a1fd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a1fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a1fd8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a1fd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1fdc: 0x0  nop
    ctx->pc = 0x1a1fdcu;
    // NOP
    // 0x1a1fe0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1A1FE0u;
    {
        const bool branch_taken_0x1a1fe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE0u;
        // 0x1a1fe4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1fe0) {
            ctx->pc = 0x1A2020u;
            goto label_1a2020;
        }
    }
    ctx->pc = 0x1A1FE8u;
    // 0x1a1fe8: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1a1fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a1fec: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1a1fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a1ff0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a1ff4: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1a1ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1ff8: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1a1ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a1ffc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1a1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1a2000: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A2000u;
    {
        const bool branch_taken_0x1a2000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2000) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A2008u;
label_1a2008:
    // 0x1a2008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a200c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a200cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2010: 0x0  nop
    ctx->pc = 0x1a2010u;
    // NOP
    // 0x1a2014: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1a2014u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1a2018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2018u;
    {
        const bool branch_taken_0x1a2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2018u;
        // 0x1a201c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2018) {
            ctx->pc = 0x1A2048u;
            goto label_1a2048;
        }
    }
    ctx->pc = 0x1A2020u;
label_1a2020:
    // 0x1a2020: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A2020u;
    SET_GPR_U32(ctx, 31, 0x1A2028u);
    ctx->pc = 0x1A2024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2020u;
    // 0x1a2024: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A2020u, 0x1A2028u)) {
        return;
    }
    ctx->pc = 0x1A2028u;
label_1a2028:
    // 0x1a2028: 0x0  nop
    ctx->pc = 0x1a2028u;
    // NOP
    // 0x1a202c: 0x0  nop
    ctx->pc = 0x1a202cu;
    // NOP
    // 0x1a2030: 0x46000044  c1          0x44
    ctx->pc = 0x1a2030u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a2034: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1a2034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2038: 0x0  nop
    ctx->pc = 0x1a2038u;
    // NOP
    // 0x1a203c: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x1A203Cu;
    {
        const bool branch_taken_0x1a203c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A203Cu;
        // 0x1a2040: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a203c) {
            ctx->pc = 0x1A2008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2008;
        }
    }
    ctx->pc = 0x1A2044u;
    // 0x1a2044: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a2044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2048:
    // 0x1a2048: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1a2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a204c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1a204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2050: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a2050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a2054: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a2054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a2058: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a205c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a2060: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a2060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a2064: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1a2064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a2068:
    // 0x1a2068: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1a2068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a206c: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1a206cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a2070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2074: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1a2074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2078: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1a2078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a207c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1a207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1a2080: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1a2080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a2084: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1a2084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a2088: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1a2088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a208c: 0xb2450007  sdl         $a1, 0x7($s2)
    ctx->pc = 0x1a208cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2090: 0xb6450000  sdr         $a1, 0x0($s2)
    ctx->pc = 0x1a2090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2094: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x1a2094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x1a2098: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1A2098u;
    {
        const bool branch_taken_0x1a2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2098u;
        // 0x1a209c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2098) {
            ctx->pc = 0x1A234Cu;
            goto label_1a234c;
        }
    }
    ctx->pc = 0x1A20A0u;
label_1a20a0:
    // 0x1a20a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a20a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a20a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a20a8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1A20A8u;
    SET_GPR_U32(ctx, 31, 0x1A20B0u);
    ctx->pc = 0x1A20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20A8u;
    // 0x1a20ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A20A8u, 0x1A20B0u)) {
        return;
    }
    ctx->pc = 0x1A20B0u;
label_1a20b0:
    // 0x1a20b0: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1a20b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a20b4: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1a20b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a20b8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a20b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a20bc: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a20bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a20c0: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a20c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a20c4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1a20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1a20c8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a20c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a20cc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a20d0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1a20d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a20d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a20d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a20d8: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x1a20d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a20dc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a20dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a20e0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1a20e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a20e4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a20e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a20e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a20e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a20ec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a20ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a20f0: 0x0  nop
    ctx->pc = 0x1a20f0u;
    // NOP
    // 0x1a20f4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A20F4u;
    {
        const bool branch_taken_0x1a20f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20F4u;
        // 0x1a20f8: 0xe7b40034  swc1        $f20, 0x34($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20f4) {
            ctx->pc = 0x1A2130u;
            goto label_1a2130;
        }
    }
    ctx->pc = 0x1A20FCu;
    // 0x1a20fc: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x1a20fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a2100: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x1a2100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a2104: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a2108: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a2108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a210c: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a210cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2110: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1a2110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1a2114: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A2114u;
    {
        const bool branch_taken_0x1a2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2114) {
            ctx->pc = 0x1A2180u;
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A211Cu;
label_1a211c:
    // 0x1a211c: 0x0  nop
    ctx->pc = 0x1a211cu;
    // NOP
    // 0x1a2120: 0x0  nop
    ctx->pc = 0x1a2120u;
    // NOP
    // 0x1a2124: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a2124u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a2128: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A2128u;
    {
        const bool branch_taken_0x1a2128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2128u;
        // 0x1a212c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2128) {
            ctx->pc = 0x1A2160u;
            goto label_1a2160;
        }
    }
    ctx->pc = 0x1A2130u;
label_1a2130:
    // 0x1a2130: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2134: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A2134u;
    SET_GPR_U32(ctx, 31, 0x1A213Cu);
    ctx->pc = 0x1A2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2134u;
    // 0x1a2138: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A2134u, 0x1A213Cu)) {
        return;
    }
    ctx->pc = 0x1A213Cu;
label_1a213c:
    // 0x1a213c: 0x0  nop
    ctx->pc = 0x1a213cu;
    // NOP
    // 0x1a2140: 0x0  nop
    ctx->pc = 0x1a2140u;
    // NOP
    // 0x1a2144: 0x46000004  c1          0x4
    ctx->pc = 0x1a2144u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a2148: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a2148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a214c: 0x0  nop
    ctx->pc = 0x1a214cu;
    // NOP
    // 0x1a2150: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x1A2150u;
    {
        const bool branch_taken_0x1a2150 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2150u;
        // 0x1a2154: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2150) {
            ctx->pc = 0x1A211Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a211c;
        }
    }
    ctx->pc = 0x1A2158u;
    // 0x1a2158: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a2158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a215c: 0x0  nop
    ctx->pc = 0x1a215cu;
    // NOP
label_1a2160:
    // 0x1a2160: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1a2160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2164: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1a2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2168: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a2168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a216c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a216cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a2170: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a2174: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a2174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a2178: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a2178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a217c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1a217cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a2180:
    // 0x1a2180: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x1a2180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a2184: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x1a2184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a2188: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a2188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a218c: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1a218cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2190: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1a2190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2194: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1a2194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1a2198: 0x6a231367  ldl         $v1, 0x1367($s1)
    ctx->pc = 0x1a2198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a219c: 0x6e231360  ldr         $v1, 0x1360($s1)
    ctx->pc = 0x1a219cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a21a0: 0x8e241368  lw          $a0, 0x1368($s1)
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4968)));
    // 0x1a21a4: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1a21a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a21a8: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1a21a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a21ac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a21b0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1a21b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a21b4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1a21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a21b8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a21b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a21bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a21bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a21c0: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1a21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a21c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1a21c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a21c8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a21cc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a21ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1a21d0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1a21d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a21d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a21d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a21d8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1a21d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a21dc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1a21dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a21e0: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1a21e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a21e4: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1a21e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a21e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a21ec: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x1a21ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a21f0: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x1a21f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a21f4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1a21f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a21fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a21fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a2200: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2204: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1a2204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2208: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a2208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a220c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1a220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2210: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a2210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a2214: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a2218: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a2218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a221c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a221cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2220: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1a2220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2224: 0x0  nop
    ctx->pc = 0x1a2224u;
    // NOP
    // 0x1a2228: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1A2228u;
    {
        const bool branch_taken_0x1a2228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2228u;
        // 0x1a222c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2228) {
            ctx->pc = 0x1A234Cu;
            goto label_1a234c;
        }
    }
    ctx->pc = 0x1A2230u;
    // 0x1a2230: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x1a2230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a2234: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x1a2234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a2238: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a223c: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x1a223cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2240: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x1a2240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2244: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1a2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1a2248: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x1a2248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a224c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x1a224cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a2250: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1a2250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2254: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x1a2254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2258: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x1a2258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a225c: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x1a225cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x1a2260: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1a2260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1a2264: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a2264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2268: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x1a2268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a226c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a226cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a2270: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1a2270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2274: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a2274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a2278: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a2278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a227c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a227cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a2280: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a2280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2284: 0x0  nop
    ctx->pc = 0x1a2284u;
    // NOP
    // 0x1a2288: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2288u;
        // 0x1a228c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A22C4u;
            goto label_1a22c4;
        }
    }
    ctx->pc = 0x1A2290u;
    // 0x1a2290: 0x6ba40077  ldl         $a0, 0x77($sp)
    ctx->pc = 0x1a2290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a2294: 0x6fa40070  ldr         $a0, 0x70($sp)
    ctx->pc = 0x1a2294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a2298: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1a2298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a229c: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x1a229cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a22a0: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x1a22a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a22a4: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1a22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x1a22a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A22A8u;
    {
        const bool branch_taken_0x1a22a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a22a8) {
            ctx->pc = 0x1A2310u;
            goto label_1a2310;
        }
    }
    ctx->pc = 0x1A22B0u;
label_1a22b0:
    // 0x1a22b0: 0x0  nop
    ctx->pc = 0x1a22b0u;
    // NOP
    // 0x1a22b4: 0x0  nop
    ctx->pc = 0x1a22b4u;
    // NOP
    // 0x1a22b8: 0x4600a8c3  div.s       $f3, $f21, $f0
    ctx->pc = 0x1a22b8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a22bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A22BCu;
    {
        const bool branch_taken_0x1a22bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22BCu;
        // 0x1a22c0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22bc) {
            ctx->pc = 0x1A22F0u;
            goto label_1a22f0;
        }
    }
    ctx->pc = 0x1A22C4u;
label_1a22c4:
    // 0x1a22c4: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1A22C4u;
    SET_GPR_U32(ctx, 31, 0x1A22CCu);
    ctx->pc = 0x1A22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22C4u;
    // 0x1a22c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1A22C4u, 0x1A22CCu)) {
        return;
    }
    ctx->pc = 0x1A22CCu;
label_1a22cc:
    // 0x1a22cc: 0x0  nop
    ctx->pc = 0x1a22ccu;
    // NOP
    // 0x1a22d0: 0x0  nop
    ctx->pc = 0x1a22d0u;
    // NOP
    // 0x1a22d4: 0x46000004  c1          0x4
    ctx->pc = 0x1a22d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a22d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a22d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a22dc: 0x0  nop
    ctx->pc = 0x1a22dcu;
    // NOP
    // 0x1a22e0: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
    ctx->pc = 0x1A22E0u;
    {
        const bool branch_taken_0x1a22e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22E0u;
        // 0x1a22e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22e0) {
            ctx->pc = 0x1A22B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a22b0;
        }
    }
    ctx->pc = 0x1A22E8u;
    // 0x1a22e8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a22ec: 0x0  nop
    ctx->pc = 0x1a22ecu;
    // NOP
label_1a22f0:
    // 0x1a22f0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a22f4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1a22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a22f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a22f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a22fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a22fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a2300: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1a2300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1a2304: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a2304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a2308: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a2308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a230c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1a230cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a2310:
    // 0x1a2310: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x1a2310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a2314: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x1a2314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a2318: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a231c: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x1a231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2320: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x1a2320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2324: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1a2324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1a2328: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x1a2328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a232c: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x1a232cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a2330: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a2334: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1a2334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2338: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1a2338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a233c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1a233cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1a2340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2340u;
    {
        const bool branch_taken_0x1a2340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2340u;
        // 0x1a2344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2340) {
            ctx->pc = 0x1A234Cu;
            goto label_1a234c;
        }
    }
    ctx->pc = 0x1A2348u;
label_1a2348:
    // 0x1a2348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a234c:
    // 0x1a234c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a2350: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a2350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2354: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a2354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2358: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a2358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a235c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1a235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a2360: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1a2360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a2364: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2364u;
        // 0x1a2368: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A236Cu;
    // 0x1a236c: 0x0  nop
    ctx->pc = 0x1a236cu;
    // NOP
    ctx->pc = 0x1a2370u;
}
