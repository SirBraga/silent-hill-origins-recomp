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

// Function: sub_001AC208
// Address: 0x1ac208 - 0x1ac388
void sub_001AC208_0x1ac208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC208_0x1ac208");
#endif

    switch (ctx->pc) {
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac27cu: goto label_1ac27c;
        default: break;
    }

    ctx->pc = 0x1ac208u;

    // 0x1ac208: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ac208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ac20c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1ac20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1ac210: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1ac210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1ac214: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac218: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1ac218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1ac21c: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x1ac21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ac220: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ac220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ac224: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac228: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ac228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ac22c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ac22cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac230: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1ac230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1ac234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ac234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ac238: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x1ac238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x1ac23c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x1ac23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x1ac240: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ac240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac244: 0x8c621000  lw          $v0, 0x1000($v1)
    ctx->pc = 0x1ac244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
    // 0x1ac248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac24c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1AC24Cu;
    {
        const bool branch_taken_0x1ac24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC24Cu;
        // 0x1ac250: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac24c) {
            ctx->pc = 0x1AC32Cu;
            goto label_1ac32c;
        }
    }
    ctx->pc = 0x1AC254u;
    // 0x1ac254: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1ac254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac258: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1ac258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ac25c: 0x0  nop
    ctx->pc = 0x1ac25cu;
    // NOP
label_1ac260:
    // 0x1ac260: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac264: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac268: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ac268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac26c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ac26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac270: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ac274: 0xc06af2a  jal         func_1ABCA8
    ctx->pc = 0x1AC274u;
    SET_GPR_U32(ctx, 31, 0x1AC27Cu);
    ctx->pc = 0x1AC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC274u;
    // 0x1ac278: 0x27a90044  addiu       $t1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABCA8u, 0x1AC274u, 0x1AC27Cu)) {
        return;
    }
    ctx->pc = 0x1AC27Cu;
label_1ac27c:
    // 0x1ac27c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ac27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac280: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1ac280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac284: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x1ac284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ac288: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1ac288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1ac28c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ac28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac290: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1ac290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac294: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1ac294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac298: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1ac298u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1ac29c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1ac29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ac2a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ac2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1ac2a4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1ac2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ac2a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ac2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ac2ac: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1ac2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac2b0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1ac2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac2b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac2b8: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1ac2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac2bc: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1ac2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac2c0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1ac2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1ac2c4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1ac2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac2c8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1ac2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac2cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ac2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ac2d0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1ac2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac2d4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1ac2d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ac2d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ac2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ac2dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ac2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1ac2e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ac2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ac2e4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1ac2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac2e8: 0x0  nop
    ctx->pc = 0x1ac2e8u;
    // NOP
    // 0x1ac2ec: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1AC2ECu;
    {
        const bool branch_taken_0x1ac2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac2ec) {
            ctx->pc = 0x1AC2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2ECu;
            // 0x1ac2f0: 0x8e621000  lw          $v0, 0x1000($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC318u;
            goto label_1ac318;
        }
    }
    ctx->pc = 0x1AC2F4u;
    // 0x1ac2f4: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x1ac2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac2f8: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x1ac2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac2fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac300: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x1ac300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac304: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x1ac304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac308: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ac308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ac30c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x1ac30cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x1ac310: 0x8e621000  lw          $v0, 0x1000($s3)
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
    // 0x1ac314: 0x0  nop
    ctx->pc = 0x1ac314u;
    // NOP
label_1ac318:
    // 0x1ac318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ac31c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ac31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac320: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ac320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ac324: 0x5040ffce  beql        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1AC324u;
    {
        const bool branch_taken_0x1ac324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac324) {
            ctx->pc = 0x1AC328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC324u;
            // 0x1ac328: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac260;
        }
    }
    ctx->pc = 0x1AC32Cu;
label_1ac32c:
    // 0x1ac32c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x1ac32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ac330: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x1ac330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ac334: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac338: 0xb2850007  sdl         $a1, 0x7($s4)
    ctx->pc = 0x1ac338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac33c: 0xb6850000  sdr         $a1, 0x0($s4)
    ctx->pc = 0x1ac33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac340: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ac340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac344: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x1ac344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
    // 0x1ac348: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1ac348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ac34c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ac350: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1ac350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ac354: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1ac354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ac358: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ac358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ac35c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ac35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac360: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ac360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac364: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC364u;
        // 0x1ac368: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC36Cu;
    // 0x1ac36c: 0x0  nop
    ctx->pc = 0x1ac36cu;
    // NOP
    // 0x1ac370: 0xac801000  sw          $zero, 0x1000($a0)
    ctx->pc = 0x1ac370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4096), GPR_U32(ctx, 0));
    // 0x1ac374: 0x0  nop
    ctx->pc = 0x1ac374u;
    // NOP
    // 0x1ac378: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac37c: 0x0  nop
    ctx->pc = 0x1ac37cu;
    // NOP
    // 0x1ac380: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ac380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac384: 0x0  nop
    ctx->pc = 0x1ac384u;
    // NOP
    ctx->pc = 0x1ac388u;
}
