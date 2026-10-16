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

// Function: sub_00157FD8
// Address: 0x157fd8 - 0x158100
void sub_00157FD8_0x157fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157FD8_0x157fd8");
#endif

    switch (ctx->pc) {
        case 0x158010u: goto label_158010;
        case 0x158038u: goto label_158038;
        default: break;
    }

    ctx->pc = 0x157fd8u;

    // 0x157fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x157fdc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x157fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x157fe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x157fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x157fe4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x157fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x157fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x157fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fec: 0x8c438614  lw          $v1, -0x79EC($v0)
    ctx->pc = 0x157fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338614u));
    // 0x157ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ff4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157FF4u;
    {
        const bool branch_taken_0x157ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FF4u;
        // 0x157ff8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ff4) {
            ctx->pc = 0x158018u;
            goto label_158018;
        }
    }
    ctx->pc = 0x157FFCu;
    // 0x157ffc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x158000: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158000u;
    {
        const bool branch_taken_0x158000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x158000) {
            ctx->pc = 0x158020u;
            goto label_158020;
        }
    }
    ctx->pc = 0x158008u;
    // 0x158008: 0xc05629c  jal         func_158A70
    ctx->pc = 0x158008u;
    SET_GPR_U32(ctx, 31, 0x158010u);
    ctx->pc = 0x15800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158008u;
    // 0x15800c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158A70u, 0x158008u, 0x158010u)) {
        return;
    }
    ctx->pc = 0x158010u;
label_158010:
    // 0x158010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158010u;
    {
        const bool branch_taken_0x158010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158010) {
            ctx->pc = 0x158020u;
            goto label_158020;
        }
    }
    ctx->pc = 0x158018u;
label_158018:
    // 0x158018: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x158018u;
    {
        const bool branch_taken_0x158018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158018u;
        // 0x15801c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158018) {
            ctx->pc = 0x1580E8u;
            goto label_1580e8;
        }
    }
    ctx->pc = 0x158020u;
label_158020:
    // 0x158020: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x158020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x158024: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x158024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x158028: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x158028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15802c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x15802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x158030: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158034: 0x0  nop
    ctx->pc = 0x158034u;
    // NOP
label_158038:
    // 0x158038: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x158038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15803c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15803Cu;
    {
        const bool branch_taken_0x15803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15803Cu;
        // 0x158040: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15803c) {
            ctx->pc = 0x1580D8u;
            goto label_1580d8;
        }
    }
    ctx->pc = 0x158044u;
    // 0x158044: 0x68820047  ldl         $v0, 0x47($a0)
    ctx->pc = 0x158044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x158048: 0x6c820040  ldr         $v0, 0x40($a0)
    ctx->pc = 0x158048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15804c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x15804cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x158050: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x158050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158054: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x158054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158058: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x158058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x15805c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158060: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x158060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158064: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x158064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158068: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x158068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x15806c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158070: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x158070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x158074: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x158074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x158078: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x158078u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x15807c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x15807cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x158080: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x158080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x158084: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x158084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x158088: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x158088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15808c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x15808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x158090: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x158090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x158094: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x158094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158098: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x158098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15809c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x15809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1580a0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1580a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1580a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1580a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1580a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1580a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1580ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1580acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1580b0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1580b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1580b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1580b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1580b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1580b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1580bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1580bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1580c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1580c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1580c4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1580c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1580c8: 0x0  nop
    ctx->pc = 0x1580c8u;
    // NOP
    // 0x1580cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1580CCu;
    {
        const bool branch_taken_0x1580cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1580D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580CCu;
        // 0x1580d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580cc) {
            ctx->pc = 0x1580E8u;
            goto label_1580e8;
        }
    }
    ctx->pc = 0x1580D4u;
    // 0x1580d4: 0x0  nop
    ctx->pc = 0x1580d4u;
    // NOP
label_1580d8:
    // 0x1580d8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1580d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1580dc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1580DCu;
    {
        const bool branch_taken_0x1580dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1580E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580DCu;
        // 0x1580e0: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580dc) {
            ctx->pc = 0x158038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158038;
        }
    }
    ctx->pc = 0x1580E4u;
    // 0x1580e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1580e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1580e8:
    // 0x1580e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1580e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1580ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1580ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1580f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1580f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1580f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1580F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F4u;
        // 0x1580f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1580F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1580FCu;
    // 0x1580fc: 0x0  nop
    ctx->pc = 0x1580fcu;
    // NOP
    ctx->pc = 0x158100u;
}
