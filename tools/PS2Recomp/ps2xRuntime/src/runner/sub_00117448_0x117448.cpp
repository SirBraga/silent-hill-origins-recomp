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

// Function: sub_00117448
// Address: 0x117448 - 0x1177d8
void sub_00117448_0x117448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117448_0x117448");
#endif

    switch (ctx->pc) {
        case 0x11763cu: goto label_11763c;
        case 0x117690u: goto label_117690;
        case 0x1176a0u: goto label_1176a0;
        case 0x11778cu: goto label_11778c;
        default: break;
    }

    ctx->pc = 0x117448u;

    // 0x117448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11744c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x117450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x117454: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x117454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x117458: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x117458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11745c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x117460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117464: 0x8e6202b0  lw          $v0, 0x2B0($s3)
    ctx->pc = 0x117464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x117468: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x117468u;
    {
        const bool branch_taken_0x117468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117468u;
        // 0x11746c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117468) {
            ctx->pc = 0x1177BCu;
            goto label_1177bc;
        }
    }
    ctx->pc = 0x117470u;
    // 0x117470: 0x8e62025c  lw          $v0, 0x25C($s3)
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x117474: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x117474u;
    {
        const bool branch_taken_0x117474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117474u;
        // 0x117478: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117474) {
            ctx->pc = 0x1177C0u;
            goto label_1177c0;
        }
    }
    ctx->pc = 0x11747Cu;
    // 0x11747c: 0x8e6301e4  lw          $v1, 0x1E4($s3)
    ctx->pc = 0x11747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
    // 0x117480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117484: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x117484u;
    {
        const bool branch_taken_0x117484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117484u;
        // 0x117488: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117484) {
            ctx->pc = 0x117580u;
            goto label_117580;
        }
    }
    ctx->pc = 0x11748Cu;
    // 0x11748c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11748Cu;
    {
        const bool branch_taken_0x11748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11748c) {
            ctx->pc = 0x117490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11748Cu;
            // 0x117490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1174A4u;
            goto label_1174a4;
        }
    }
    ctx->pc = 0x117494u;
    // 0x117494: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x117494u;
    {
        const bool branch_taken_0x117494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117494) {
            ctx->pc = 0x117498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117494u;
            // 0x117498: 0x8e6200a0  lw          $v0, 0xA0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1174B4u;
            goto label_1174b4;
        }
    }
    ctx->pc = 0x11749Cu;
    // 0x11749c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x11749Cu;
    {
        const bool branch_taken_0x11749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11749Cu;
        // 0x1174a0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11749c) {
            ctx->pc = 0x1177C4u;
            goto label_1177c4;
        }
    }
    ctx->pc = 0x1174A4u;
label_1174a4:
    // 0x1174a4: 0x10620092  beq         $v1, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1174A4u;
    {
        const bool branch_taken_0x1174a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1174A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174A4u;
        // 0x1174a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174a4) {
            ctx->pc = 0x1176F0u;
            goto label_1176f0;
        }
    }
    ctx->pc = 0x1174ACu;
    // 0x1174ac: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1174ACu;
    {
        const bool branch_taken_0x1174ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174ACu;
        // 0x1174b0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174ac) {
            ctx->pc = 0x1177C4u;
            goto label_1177c4;
        }
    }
    ctx->pc = 0x1174B4u;
label_1174b4:
    // 0x1174b4: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x1174b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1174b8: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x1174b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1174bc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1174c0: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1174c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174c4: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1174c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1174c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1174C8u;
    {
        const bool branch_taken_0x1174c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174C8u;
        // 0x1174cc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174c8) {
            ctx->pc = 0x117520u;
            goto label_117520;
        }
    }
    ctx->pc = 0x1174D0u;
    // 0x1174d0: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1174d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1174d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1174d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1174d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1174D8u;
    {
        const bool branch_taken_0x1174d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174D8u;
        // 0x1174dc: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174d8) {
            ctx->pc = 0x117520u;
            goto label_117520;
        }
    }
    ctx->pc = 0x1174E0u;
    // 0x1174e0: 0xc661009c  lwc1        $f1, 0x9C($s3)
    ctx->pc = 0x1174e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1174e4: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1174e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1174e8: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x1174e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1174ec: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x1174ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1174f0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1174f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1174f4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1174f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1174f8: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x1174f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1174fc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1174fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117500: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x117500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117504: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x117504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x117508: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x117508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11750c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11750cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x117510: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x117510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117514: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x117514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x117518: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11751c: 0x0  nop
    ctx->pc = 0x11751cu;
    // NOP
label_117520:
    // 0x117520: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x117520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x117524: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x117524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x117528: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x117528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11752c: 0xb26200db  sdl         $v0, 0xDB($s3)
    ctx->pc = 0x11752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117530: 0xb66200d4  sdr         $v0, 0xD4($s3)
    ctx->pc = 0x117530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117534: 0xae6300dc  sw          $v1, 0xDC($s3)
    ctx->pc = 0x117534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 3));
    // 0x117538: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x117538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11753c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x11753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x117540: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x117540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x117544: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x117544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117548: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x117548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11754c: 0xc66200d8  lwc1        $f2, 0xD8($s3)
    ctx->pc = 0x11754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x117550: 0xc66300dc  lwc1        $f3, 0xDC($s3)
    ctx->pc = 0x117550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x117554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x117558: 0xe66100d4  swc1        $f1, 0xD4($s3)
    ctx->pc = 0x117558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
    // 0x11755c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x11755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117560: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x117560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x117564: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x117564u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x117568: 0xe66200d8  swc1        $f2, 0xD8($s3)
    ctx->pc = 0x117568u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x11756c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x11756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x117570: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x117570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x117574: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x117574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x117578: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x117578u;
    {
        const bool branch_taken_0x117578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117578u;
        // 0x11757c: 0xe66300dc  swc1        $f3, 0xDC($s3) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117578) {
            ctx->pc = 0x1177BCu;
            goto label_1177bc;
        }
    }
    ctx->pc = 0x117580u;
label_117580:
    // 0x117580: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x117580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x117584: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x117584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x117588: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x117588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11758c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x117590: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x117590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117594: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x117594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117598: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x117598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x11759c: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x11759cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1175a0: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x1175a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1175a4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1175a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1175a8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1175a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1175ac: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1175acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1175b0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1175b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1175b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1175B4u;
    {
        const bool branch_taken_0x1175b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B4u;
        // 0x1175b8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175b4) {
            ctx->pc = 0x117610u;
            goto label_117610;
        }
    }
    ctx->pc = 0x1175BCu;
    // 0x1175bc: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1175bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1175c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1175c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1175c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1175C4u;
    {
        const bool branch_taken_0x1175c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175C4u;
        // 0x1175c8: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175c4) {
            ctx->pc = 0x117610u;
            goto label_117610;
        }
    }
    ctx->pc = 0x1175CCu;
    // 0x1175cc: 0xc661009c  lwc1        $f1, 0x9C($s3)
    ctx->pc = 0x1175ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1175d0: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1175d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1175d4: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x1175d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1175d8: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x1175d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1175dc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1175dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1175e0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1175e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1175e4: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x1175e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1175e8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1175e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1175ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1175ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1175f0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1175f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1175f4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1175f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1175f8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1175f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1175fc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1175fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x117600: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x117600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x117604: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x117604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x117608: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x117608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11760c: 0x0  nop
    ctx->pc = 0x11760cu;
    // NOP
label_117610:
    // 0x117610: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x117610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x117614: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x117614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117618: 0x267000d4  addiu       $s0, $s3, 0xD4
    ctx->pc = 0x117618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 212));
    // 0x11761c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x117624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x117628: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11762c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11762cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117634: 0xc045702  jal         func_115C08
    ctx->pc = 0x117634u;
    SET_GPR_U32(ctx, 31, 0x11763Cu);
    ctx->pc = 0x117638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117634u;
    // 0x117638: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115C08u, 0x117634u, 0x11763Cu)) {
        return;
    }
    ctx->pc = 0x11763Cu;
label_11763c:
    // 0x11763c: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x11763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x117640: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x117640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x117644: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x117644u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x117648: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x117648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11764c: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x11764cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x117650: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x117650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117654: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x117654u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x117658: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x117658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11765c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117660: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x117660u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x117664: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x117664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x117668: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x117668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11766c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x11766cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117670: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x117670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x117674: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x117678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11767c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11767cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117680: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117684: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x117684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117688: 0xc045702  jal         func_115C08
    ctx->pc = 0x117688u;
    SET_GPR_U32(ctx, 31, 0x117690u);
    ctx->pc = 0x11768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117688u;
    // 0x11768c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115C08u, 0x117688u, 0x117690u)) {
        return;
    }
    ctx->pc = 0x117690u;
label_117690:
    // 0x117690: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117698: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x117698u;
    SET_GPR_U32(ctx, 31, 0x1176A0u);
    ctx->pc = 0x11769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117698u;
    // 0x11769c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1163D8u, 0x117698u, 0x1176A0u)) {
        return;
    }
    ctx->pc = 0x1176A0u;
label_1176a0:
    // 0x1176a0: 0x6a6600db  ldl         $a2, 0xDB($s3)
    ctx->pc = 0x1176a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1176a4: 0x6e6600d4  ldr         $a2, 0xD4($s3)
    ctx->pc = 0x1176a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1176a8: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1176ac: 0xb26600e7  sdl         $a2, 0xE7($s3)
    ctx->pc = 0x1176acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1176b0: 0xb66600e0  sdr         $a2, 0xE0($s3)
    ctx->pc = 0x1176b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1176b4: 0xae6200e8  sw          $v0, 0xE8($s3)
    ctx->pc = 0x1176b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 2));
    // 0x1176b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1176b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1176bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1176bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1176c0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1176c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1176c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1176c8: 0x6a6500e7  ldl         $a1, 0xE7($s3)
    ctx->pc = 0x1176c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1176cc: 0x6e6500e0  ldr         $a1, 0xE0($s3)
    ctx->pc = 0x1176ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1176d0: 0x8e6600e8  lw          $a2, 0xE8($s3)
    ctx->pc = 0x1176d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1176d4: 0xb26500f3  sdl         $a1, 0xF3($s3)
    ctx->pc = 0x1176d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1176d8: 0xb66500ec  sdr         $a1, 0xEC($s3)
    ctx->pc = 0x1176d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1176dc: 0xae6600f4  sw          $a2, 0xF4($s3)
    ctx->pc = 0x1176dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 6));
    // 0x1176e0: 0xe6600254  swc1        $f0, 0x254($s3)
    ctx->pc = 0x1176e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 596), bits); }
    // 0x1176e4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1176E4u;
    {
        const bool branch_taken_0x1176e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176E4u;
        // 0x1176e8: 0xe66101e0  swc1        $f1, 0x1E0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176e4) {
            ctx->pc = 0x1177BCu;
            goto label_1177bc;
        }
    }
    ctx->pc = 0x1176ECu;
    // 0x1176ec: 0x0  nop
    ctx->pc = 0x1176ecu;
    // NOP
label_1176f0:
    // 0x1176f0: 0x8e620258  lw          $v0, 0x258($s3)
    ctx->pc = 0x1176f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 600)));
    // 0x1176f4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1176F4u;
    {
        const bool branch_taken_0x1176f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176F4u;
        // 0x1176f8: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176f4) {
            ctx->pc = 0x1177C4u;
            goto label_1177c4;
        }
    }
    ctx->pc = 0x1176FCu;
    // 0x1176fc: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x1176fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x117700: 0x6a440007  ldl         $a0, 0x7($s2)
    ctx->pc = 0x117700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x117704: 0x6e440000  ldr         $a0, 0x0($s2)
    ctx->pc = 0x117704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x117708: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x117708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11770c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x11770cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117710: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x117710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117714: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117714u;
    {
        const bool branch_taken_0x117714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117714u;
        // 0x117718: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117714) {
            ctx->pc = 0x117768u;
            goto label_117768;
        }
    }
    ctx->pc = 0x11771Cu;
    // 0x11771c: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x11771cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x117720: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x117720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x117724: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x117724u;
    {
        const bool branch_taken_0x117724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117724u;
        // 0x117728: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117724) {
            ctx->pc = 0x117768u;
            goto label_117768;
        }
    }
    ctx->pc = 0x11772Cu;
    // 0x11772c: 0xc661009c  lwc1        $f1, 0x9C($s3)
    ctx->pc = 0x11772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117730: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x117730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x117734: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x117734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x117738: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x117738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11773c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x11773cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x117740: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x117740u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x117744: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x117744u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x117748: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x117748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11774c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x11774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117750: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x117750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x117754: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x117754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x117758: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x117758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11775c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11775cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117760: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x117760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x117764: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_117768:
    // 0x117768: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x117768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11776c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117770: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x117770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117774: 0x266500d4  addiu       $a1, $s3, 0xD4
    ctx->pc = 0x117774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 212));
    // 0x117778: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11777c: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x117780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x117780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x117784: 0xc0454d8  jal         func_115360
    ctx->pc = 0x117784u;
    SET_GPR_U32(ctx, 31, 0x11778Cu);
    ctx->pc = 0x117788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117784u;
    // 0x117788: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x115360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x115360u, 0x117784u, 0x11778Cu)) {
        return;
    }
    ctx->pc = 0x11778Cu;
label_11778c:
    // 0x11778c: 0x6a6400db  ldl         $a0, 0xDB($s3)
    ctx->pc = 0x11778cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x117790: 0x6e6400d4  ldr         $a0, 0xD4($s3)
    ctx->pc = 0x117790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x117794: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x117794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x117798: 0xb26400e7  sdl         $a0, 0xE7($s3)
    ctx->pc = 0x117798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11779c: 0xb66400e0  sdr         $a0, 0xE0($s3)
    ctx->pc = 0x11779cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1177a0: 0xae6500e8  sw          $a1, 0xE8($s3)
    ctx->pc = 0x1177a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 5));
    // 0x1177a4: 0x6a6300e7  ldl         $v1, 0xE7($s3)
    ctx->pc = 0x1177a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1177a8: 0x6e6300e0  ldr         $v1, 0xE0($s3)
    ctx->pc = 0x1177a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1177ac: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x1177acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1177b0: 0xb26300f3  sdl         $v1, 0xF3($s3)
    ctx->pc = 0x1177b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1177b4: 0xb66300ec  sdr         $v1, 0xEC($s3)
    ctx->pc = 0x1177b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1177b8: 0xae6400f4  sw          $a0, 0xF4($s3)
    ctx->pc = 0x1177b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 4));
label_1177bc:
    // 0x1177bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1177bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1177c0:
    // 0x1177c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1177c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1177c4:
    // 0x1177c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1177c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1177c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1177c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1177cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1177ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1177D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D0u;
        // 0x1177d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1177D8u;
}
