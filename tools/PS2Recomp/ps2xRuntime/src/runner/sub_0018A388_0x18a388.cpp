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

// Function: sub_0018A388
// Address: 0x18a388 - 0x18a4e8
void sub_0018A388_0x18a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A388_0x18a388");
#endif

    switch (ctx->pc) {
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3e0u: goto label_18a3e0;
        case 0x18a408u: goto label_18a408;
        default: break;
    }

    ctx->pc = 0x18a388u;

    // 0x18a388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a38c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18a390: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18a394: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a398: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18a398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a39c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a3a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18a3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3a4: 0xc0628aa  jal         func_18A2A8
    ctx->pc = 0x18A3A4u;
    SET_GPR_U32(ctx, 31, 0x18A3ACu);
    ctx->pc = 0x18A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3A4u;
    // 0x18a3a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A2A8u, 0x18A3A4u, 0x18A3ACu)) {
        return;
    }
    ctx->pc = 0x18A3ACu;
label_18a3ac:
    // 0x18a3ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3ACu;
        // 0x18a3b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A468u;
            goto label_18a468;
        }
    }
    ctx->pc = 0x18A3B4u;
    // 0x18a3b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a3b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18a3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a3bc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x18a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x18a3c0: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x18a3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x18a3c4: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x18a3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x18a3c8: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x18a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x18a3cc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x18a3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a3d0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x18a3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18a3d4: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x18a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x18a3d8: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x18A3D8u;
    SET_GPR_U32(ctx, 31, 0x18A3E0u);
    ctx->pc = 0x18A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3D8u;
    // 0x18a3dc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x18A3D8u, 0x18A3E0u)) {
        return;
    }
    ctx->pc = 0x18A3E0u;
label_18a3e0:
    // 0x18a3e0: 0x0  nop
    ctx->pc = 0x18a3e0u;
    // NOP
    // 0x18a3e4: 0x0  nop
    ctx->pc = 0x18a3e4u;
    // NOP
    // 0x18a3e8: 0x46000044  c1          0x44
    ctx->pc = 0x18a3e8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18a3ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18a3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a3f0: 0x0  nop
    ctx->pc = 0x18a3f0u;
    // NOP
    // 0x18a3f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18a3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a3f8: 0x0  nop
    ctx->pc = 0x18a3f8u;
    // NOP
    // 0x18a3fc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x18A3FCu;
    {
        const bool branch_taken_0x18a3fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3FCu;
        // 0x18a400: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3fc) {
            ctx->pc = 0x18A450u;
            goto label_18a450;
        }
    }
    ctx->pc = 0x18A404u;
    // 0x18a404: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x18a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18a408:
    // 0x18a408: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x18a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18a40c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18a40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a410: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x18a410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18a414: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x18a414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x18a418: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18a418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18a41c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18a41cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a420: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x18a420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a424: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18a424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a428: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18a428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18a42c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x18a42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a430: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18a430u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18a434: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x18a434u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18a438: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x18a438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x18a43c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x18a43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x18a440: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x18a440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x18a444: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18A444u;
    {
        const bool branch_taken_0x18a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A444u;
        // 0x18a448: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a444) {
            ctx->pc = 0x18A47Cu;
            goto label_18a47c;
        }
    }
    ctx->pc = 0x18A44Cu;
    // 0x18a44c: 0x0  nop
    ctx->pc = 0x18a44cu;
    // NOP
label_18a450:
    // 0x18a450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a458: 0x0  nop
    ctx->pc = 0x18a458u;
    // NOP
    // 0x18a45c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18a45cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x18a460: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x18A460u;
    {
        const bool branch_taken_0x18a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A460u;
        // 0x18a464: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a460) {
            ctx->pc = 0x18A408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a408;
        }
    }
    ctx->pc = 0x18A468u;
label_18a468:
    // 0x18a468: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18a46c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a470: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18a474: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x18a474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x18a478: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18a47c:
    // 0x18a47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a484: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18a484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x18a488: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18a488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a48c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18a490: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x18a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a494: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x18a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a498: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x18a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a49c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18a4a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a4a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18a4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18a4a8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18a4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18a4ac: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x18a4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a4b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x18a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a4b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18a4b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18a4b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a4b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18a4bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18a4bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18a4c0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x18a4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x18a4c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x18a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a4c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x18a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a4cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18a4d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18a4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a4d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18a4d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18a4d8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x18a4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x18a4dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18a4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4E0u;
        // 0x18a4e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A4E8u;
}
