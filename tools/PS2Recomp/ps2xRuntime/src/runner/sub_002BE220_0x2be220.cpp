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

// Function: sub_002BE220
// Address: 0x2be220 - 0x2be530
void sub_002BE220_0x2be220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE220_0x2be220");
#endif

    switch (ctx->pc) {
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be338u: goto label_2be338;
        case 0x2be508u: goto label_2be508;
        default: break;
    }

    ctx->pc = 0x2be220u;

    // 0x2be220: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2be224: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2be224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be228: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2be228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2be22c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2be22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2be230: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2be230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2be234: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x2be234u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2be238: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2be238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2be23c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2be23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2be240: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2be240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2be244: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2be244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be248: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2be248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2be24c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2be24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2be250: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2be250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2be254: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x2be254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2be258: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2be258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2be25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be260: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x2be260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2be264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be268: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2be268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2be26c: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2be26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2be270: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2be270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2be274: 0xc39821  addu        $s3, $a2, $v1
    ctx->pc = 0x2be274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2be278: 0xe59021  addu        $s2, $a3, $a1
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2be27c: 0x498821  addu        $s1, $v0, $t1
    ctx->pc = 0x2be27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2be280: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2be280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2be284: 0x6a620017  ldl         $v0, 0x17($s3)
    ctx->pc = 0x2be284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2be288: 0x6e620010  ldr         $v0, 0x10($s3)
    ctx->pc = 0x2be288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2be28c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2be28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2be290: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2be290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be294: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2be294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be298: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2be298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2be29c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2BE29Cu;
    {
        const bool branch_taken_0x2be29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE29Cu;
        // 0x2be2a0: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be29c) {
            ctx->pc = 0x2BE328u;
            goto label_2be328;
        }
    }
    ctx->pc = 0x2BE2A4u;
    // 0x2be2a4: 0x8d100050  lw          $s0, 0x50($t0)
    ctx->pc = 0x2be2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x2be2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2ac: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2be2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be2b0: 0x2098021  addu        $s0, $s0, $t1
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x2be2b4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2be2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be2b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2be2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2c0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2be2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be2c4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2be2c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2be2c8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2be2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be2cc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2be2ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2be2d0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2be2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be2d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be2d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be2d8: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2be2d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2be2dc: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2be2dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2be2e0: 0xc0af7de  jal         func_2BDF78
    ctx->pc = 0x2BE2E0u;
    SET_GPR_U32(ctx, 31, 0x2BE2E8u);
    ctx->pc = 0x2BE2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2E0u;
    // 0x2be2e4: 0x4615a302  mul.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BDF78u, 0x2BE2E0u, 0x2BE2E8u)) {
        return;
    }
    ctx->pc = 0x2BE2E8u;
label_2be2e8:
    // 0x2be2e8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2be2e8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2be2ec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be2f0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2be2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be2f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be2f8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2be2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be2fc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2be2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be300: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be304: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2be304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2be308: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2be308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be30c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be310: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2be310u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2be314: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2be314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2be318: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2be318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be31c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2be31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2be320: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2be320u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2be324: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2be324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2be328:
    // 0x2be328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2be328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be330: 0xc0af83e  jal         func_2BE0F8
    ctx->pc = 0x2BE330u;
    SET_GPR_U32(ctx, 31, 0x2BE338u);
    ctx->pc = 0x2BE334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE330u;
    // 0x2be334: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE0F8u, 0x2BE330u, 0x2BE338u)) {
        return;
    }
    ctx->pc = 0x2BE338u;
label_2be338:
    // 0x2be338: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2be338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be33c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2be33cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2be340: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2be340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be348: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2be348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2be34c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2be34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be350: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2be350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be354: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2be354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2be358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be35c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2be35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2be360: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2be360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be364: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2be364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be368: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2be368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2be36c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be36cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be370: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2be370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2be374: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x2be374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be378: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2be37c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2be37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2be380: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x2be380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2be384: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2be384u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2be388: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2be388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be38c: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x2be38cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2be390: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2be390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be394: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2be394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2be398: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2be398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2be39c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2be39cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2be3a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2be3a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2be3a4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2be3a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2be3a8: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x2be3a8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[3]);
    // 0x2be3ac: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x2be3acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x2be3b0: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2be3b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2be3b4: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x2be3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2be3b8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x2be3b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2be3bc: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2be3bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2be3c0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2be3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be3c4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2be3c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2be3c8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2be3c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2be3cc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2be3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be3d0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2be3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2be3d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2be3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2be3d8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2be3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be3dc: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2be3dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2be3e0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2be3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2be3e4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2be3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be3e8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2be3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2be3ec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2be3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2be3f0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2be3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be3f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be3f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2be3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2be3fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2be3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be400: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2be400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2be404: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2be404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2be408: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2be408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be40c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2be40cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2be410: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2be410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2be414: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2be414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be418: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2be418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2be41c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2be41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2be420: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2be420u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2be424: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2be424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be428: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2be428u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2be42c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2be42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2be430: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2be430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2be434: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2be434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be438: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2be438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2be43c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2be43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2be440: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2be440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be444: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2be444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2be448: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2be448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2be44c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2be44cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2be450: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2be450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be454: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2be454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be458: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be45c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2be45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2be460: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2be460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be464: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2be464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be468: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be46c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2be46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2be470: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2be470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be474: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2be474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be478: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2be478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2be47c: 0xe6420010  swc1        $f2, 0x10($s2)
    ctx->pc = 0x2be47cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2be480: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2be480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be484: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2be484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be48c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2be48cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2be490: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2be490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2be494: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2be494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be498: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2be498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be49c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be4a0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x2be4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2be4a4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2be4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be4a8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2be4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be4b0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2be4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2be4b4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2be4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4b8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2be4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be4bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2be4bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2be4c0: 0xe6410024  swc1        $f1, 0x24($s2)
    ctx->pc = 0x2be4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2be4c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2be4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be4c8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2be4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be4cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be4d0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2be4d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2be4d4: 0xe6440028  swc1        $f4, 0x28($s2)
    ctx->pc = 0x2be4d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2be4d8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2be4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2be4dc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2be4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2be4e0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2be4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2be4e4: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2be4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2be4e8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2be4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2be4ec: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2be4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2be4f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4f4: 0xb2420037  sdl         $v0, 0x37($s2)
    ctx->pc = 0x2be4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be4f8: 0xb6420030  sdr         $v0, 0x30($s2)
    ctx->pc = 0x2be4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2be4fc: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x2be4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x2be500: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2BE500u;
    SET_GPR_U32(ctx, 31, 0x2BE508u);
    ctx->pc = 0x2BE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE500u;
    // 0x2be504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2BE500u, 0x2BE508u)) {
        return;
    }
    ctx->pc = 0x2BE508u;
label_2be508:
    // 0x2be508: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2be508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2be50c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2be50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2be510: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2be510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2be514: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2be514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2be518: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2be518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2be51c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2be51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be520: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2be520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2be524: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2be524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be528: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE528u;
        // 0x2be52c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE530u;
}
