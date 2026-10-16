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

// Function: sub_002D0320
// Address: 0x2d0320 - 0x2d0d30
void sub_002D0320_0x2d0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0320_0x2d0320");
#endif

    switch (ctx->pc) {
        case 0x2d0380u: goto label_2d0380;
        case 0x2d03acu: goto label_2d03ac;
        case 0x2d0414u: goto label_2d0414;
        case 0x2d048cu: goto label_2d048c;
        case 0x2d04b0u: goto label_2d04b0;
        case 0x2d04d0u: goto label_2d04d0;
        case 0x2d0590u: goto label_2d0590;
        case 0x2d05b0u: goto label_2d05b0;
        case 0x2d0670u: goto label_2d0670;
        case 0x2d0690u: goto label_2d0690;
        case 0x2d0750u: goto label_2d0750;
        case 0x2d0770u: goto label_2d0770;
        case 0x2d0820u: goto label_2d0820;
        case 0x2d0840u: goto label_2d0840;
        case 0x2d08f4u: goto label_2d08f4;
        case 0x2d0914u: goto label_2d0914;
        case 0x2d09ccu: goto label_2d09cc;
        case 0x2d09ecu: goto label_2d09ec;
        case 0x2d0aa4u: goto label_2d0aa4;
        case 0x2d0ac4u: goto label_2d0ac4;
        case 0x2d0b80u: goto label_2d0b80;
        case 0x2d0ba0u: goto label_2d0ba0;
        case 0x2d0c58u: goto label_2d0c58;
        case 0x2d0c78u: goto label_2d0c78;
        default: break;
    }

    ctx->pc = 0x2d0320u;

    // 0x2d0320: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2d0324: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d0328: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2d0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2d032c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2d032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2d0330: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2d0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2d0334: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d0334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0338: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2d0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2d033c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2d033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2d0340: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2d0340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2d0344: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2d0344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d0348: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2d0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d034c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2d034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d0350: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d0350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0354: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0354u;
    {
        const bool branch_taken_0x2d0354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2D0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0354u;
        // 0x2d0358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0354) {
            ctx->pc = 0x2D0378u;
            goto label_2d0378;
        }
    }
    ctx->pc = 0x2D035Cu;
    // 0x2d035c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0360: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d0360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0364: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x2d0364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2d0368: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d0368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d036c: 0x5447000c  bnel        $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2D036Cu;
    {
        const bool branch_taken_0x2d036c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2d036c) {
            ctx->pc = 0x2D0370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D036Cu;
            // 0x2d0370: 0x8cc50010  lw          $a1, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D03A0u;
            goto label_2d03a0;
        }
    }
    ctx->pc = 0x2D0374u;
    // 0x2d0374: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d0374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d0378:
    // 0x2d0378: 0xc0b512a  jal         func_2D44A8
    ctx->pc = 0x2D0378u;
    SET_GPR_U32(ctx, 31, 0x2D0380u);
    ctx->pc = 0x2D44A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D44A8u, 0x2D0378u, 0x2D0380u)) {
        return;
    }
    ctx->pc = 0x2D0380u;
label_2d0380:
    // 0x2d0380: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2d0380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d0384: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2d0384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d0388: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d038c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x2d038cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0390: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x2d0390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0394: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d0394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d0398: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2D0398u;
    {
        const bool branch_taken_0x2d0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0398u;
        // 0x2d039c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0398) {
            ctx->pc = 0x2D0490u;
            goto label_2d0490;
        }
    }
    ctx->pc = 0x2D03A0u;
label_2d03a0:
    // 0x2d03a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d03a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03a4: 0xc0aa7e0  jal         func_2A9F80
    ctx->pc = 0x2D03A4u;
    SET_GPR_U32(ctx, 31, 0x2D03ACu);
    ctx->pc = 0x2D03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03A4u;
    // 0x2d03a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9F80u, 0x2D03A4u, 0x2D03ACu)) {
        return;
    }
    ctx->pc = 0x2D03ACu;
label_2d03ac:
    // 0x2d03ac: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d03acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d03b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d03b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d03b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d03b8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2d03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d03bc: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2d03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d03c0: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2d03c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d03c4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2d03c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2d03c8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d03c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d03cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d03d0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2d03d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d03d4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2d03d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2d03d8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2d03d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2d03dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d03dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d03e0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2d03e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2d03e4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2d03e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2d03e8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d03e8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d03ec: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2d03ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2d03f0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2d03f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d03f4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2d03f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d03f8: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2d03f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d03fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0404: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0408: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d040c: 0xc0aa7e0  jal         func_2A9F80
    ctx->pc = 0x2D040Cu;
    SET_GPR_U32(ctx, 31, 0x2D0414u);
    ctx->pc = 0x2D0410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D040Cu;
    // 0x2d0410: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9F80u, 0x2D040Cu, 0x2D0414u)) {
        return;
    }
    ctx->pc = 0x2D0414u;
label_2d0414:
    // 0x2d0414: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0418: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2d0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d041c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2d041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0420: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2d0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d0424: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2d0424u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2d0428: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d042c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0430: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2d0430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d0434: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2d0434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2d0438: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2d0438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2d043c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2d043cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d0440: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2d0440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2d0444: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2d0444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2d0448: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d0448u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d044c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x2d044cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2d0450: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2d0450u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d0454: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x2d0454u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d0458: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2d0458u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d045c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2d045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0460: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2d0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0464: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2d0464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d0468: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d046c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2d046cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2d0470: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2d0470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2d0474: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2d0474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0478: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2d0478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d047c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d0480: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d0480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0484: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D0484u;
    SET_GPR_U32(ctx, 31, 0x2D048Cu);
    ctx->pc = 0x2D0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0484u;
    // 0x2d0488: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D0484u, 0x2D048Cu)) {
        return;
    }
    ctx->pc = 0x2D048Cu;
label_2d048c:
    // 0x2d048c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d0490:
    // 0x2d0490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2d0490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2d0494: 0xc4543b6c  lwc1        $f20, 0x3B6C($v0)
    ctx->pc = 0x2d0494u;
    { uint32_t bits = FAST_READ32(0x6B3B6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0498: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d0498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d049c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2d049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d04a0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2d04a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d04a4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d04a8: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D04A8u;
    SET_GPR_U32(ctx, 31, 0x2D04B0u);
    ctx->pc = 0x2D04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04A8u;
    // 0x2d04ac: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D04A8u, 0x2D04B0u)) {
        return;
    }
    ctx->pc = 0x2D04B0u;
label_2d04b0:
    // 0x2d04b0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D04B0u;
    {
        const bool branch_taken_0x2d04b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04B0u;
        // 0x2d04b4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04b0) {
            ctx->pc = 0x2D0560u;
            goto label_2d0560;
        }
    }
    ctx->pc = 0x2D04B8u;
    // 0x2d04b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d04bc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2d04bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d04c0: 0x27a8004c  addiu       $t0, $sp, 0x4C
    ctx->pc = 0x2d04c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2d04c4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d04c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d04c8: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D04C8u;
    SET_GPR_U32(ctx, 31, 0x2D04D0u);
    ctx->pc = 0x2D04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04C8u;
    // 0x2d04cc: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D04C8u, 0x2D04D0u)) {
        return;
    }
    ctx->pc = 0x2D04D0u;
label_2d04d0:
    // 0x2d04d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D04D0u;
    {
        const bool branch_taken_0x2d04d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04D0u;
        // 0x2d04d4: 0xc7a20040  lwc1        $f2, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04d0) {
            ctx->pc = 0x2D0560u;
            goto label_2d0560;
        }
    }
    ctx->pc = 0x2D04D8u;
    // 0x2d04d8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2d04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d04dc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2d04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d04e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2d04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d04e4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d04e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d04e8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d04e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d04ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d04ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d04f0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D04F0u;
    {
        const bool branch_taken_0x2d04f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d04f0) {
            ctx->pc = 0x2D0528u;
            goto label_2d0528;
        }
    }
    ctx->pc = 0x2D04F8u;
    // 0x2d04f8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d04f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d04fc: 0x0  nop
    ctx->pc = 0x2d04fcu;
    // NOP
    // 0x2d0500: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0500u;
    {
        const bool branch_taken_0x2d0500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0500) {
            ctx->pc = 0x2D0504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0500u;
            // 0x2d0504: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0564u;
            goto label_2d0564;
        }
    }
    ctx->pc = 0x2D0508u;
    // 0x2d0508: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x2d0508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d050c: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x2d050cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0510: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d0510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d0514: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d0514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0518: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d0518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d051c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d051cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d0520: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0520u;
    {
        const bool branch_taken_0x2d0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0520u;
        // 0x2d0524: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0520) {
            ctx->pc = 0x2D0560u;
            goto label_2d0560;
        }
    }
    ctx->pc = 0x2D0528u;
label_2d0528:
    // 0x2d0528: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d052c: 0x0  nop
    ctx->pc = 0x2d052cu;
    // NOP
    // 0x2d0530: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D0530u;
    {
        const bool branch_taken_0x2d0530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0530) {
            ctx->pc = 0x2D0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0530u;
            // 0x2d0534: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0564u;
            goto label_2d0564;
        }
    }
    ctx->pc = 0x2D0538u;
    // 0x2d0538: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0538u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d053c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0540: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d0540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0544: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0544u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0548: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d054c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d054cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d0550: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0550u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0554: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0558: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d0558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d055c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d055cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0560:
    // 0x2d0560: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d0564:
    // 0x2d0564: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d0564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d056c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d056cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0570: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2d0570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0574: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0578: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x2d0578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d057c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0580: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d0580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d0584: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2d0584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2d0588: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0588u;
    SET_GPR_U32(ctx, 31, 0x2D0590u);
    ctx->pc = 0x2D058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0588u;
    // 0x2d058c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0588u, 0x2D0590u)) {
        return;
    }
    ctx->pc = 0x2D0590u;
label_2d0590:
    // 0x2d0590: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0590u;
    {
        const bool branch_taken_0x2d0590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0590u;
        // 0x2d0594: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0590) {
            ctx->pc = 0x2D0640u;
            goto label_2d0640;
        }
    }
    ctx->pc = 0x2D0598u;
    // 0x2d0598: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d059c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2d059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d05a0: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2d05a4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d05a8: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D05A8u;
    SET_GPR_U32(ctx, 31, 0x2D05B0u);
    ctx->pc = 0x2D05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05A8u;
    // 0x2d05ac: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D05A8u, 0x2D05B0u)) {
        return;
    }
    ctx->pc = 0x2D05B0u;
label_2d05b0:
    // 0x2d05b0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D05B0u;
    {
        const bool branch_taken_0x2d05b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B0u;
        // 0x2d05b4: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b0) {
            ctx->pc = 0x2D0640u;
            goto label_2d0640;
        }
    }
    ctx->pc = 0x2D05B8u;
    // 0x2d05b8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2d05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d05bc: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2d05bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d05c0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2d05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d05c4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d05c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d05c8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d05c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d05cc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d05ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d05d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D05D0u;
    {
        const bool branch_taken_0x2d05d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d05d0) {
            ctx->pc = 0x2D0608u;
            goto label_2d0608;
        }
    }
    ctx->pc = 0x2D05D8u;
    // 0x2d05d8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d05d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d05dc: 0x0  nop
    ctx->pc = 0x2d05dcu;
    // NOP
    // 0x2d05e0: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D05E0u;
    {
        const bool branch_taken_0x2d05e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d05e0) {
            ctx->pc = 0x2D05E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D05E0u;
            // 0x2d05e4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0644u;
            goto label_2d0644;
        }
    }
    ctx->pc = 0x2D05E8u;
    // 0x2d05e8: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x2d05e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d05ec: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x2d05ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d05f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d05f4: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x2d05f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d05f8: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x2d05f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d05fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d0600: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0600u;
    {
        const bool branch_taken_0x2d0600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0600u;
        // 0x2d0604: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0600) {
            ctx->pc = 0x2D0640u;
            goto label_2d0640;
        }
    }
    ctx->pc = 0x2D0608u;
label_2d0608:
    // 0x2d0608: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d060c: 0x0  nop
    ctx->pc = 0x2d060cu;
    // NOP
    // 0x2d0610: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D0610u;
    {
        const bool branch_taken_0x2d0610 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0610) {
            ctx->pc = 0x2D0614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0610u;
            // 0x2d0614: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0644u;
            goto label_2d0644;
        }
    }
    ctx->pc = 0x2D0618u;
    // 0x2d0618: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0618u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d061c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0620: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0628: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d062c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d062cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d0630: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0630u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0634: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0638: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d0638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d063c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d063cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0640:
    // 0x2d0640: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d0644:
    // 0x2d0644: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d0644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0648: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d064c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d064cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0650: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2d0650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0654: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0658: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x2d0658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2d065c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0660: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d0664: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2d0664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2d0668: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0668u;
    SET_GPR_U32(ctx, 31, 0x2D0670u);
    ctx->pc = 0x2D066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0668u;
    // 0x2d066c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0668u, 0x2D0670u)) {
        return;
    }
    ctx->pc = 0x2D0670u;
label_2d0670:
    // 0x2d0670: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0670u;
    {
        const bool branch_taken_0x2d0670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0670u;
        // 0x2d0674: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0670) {
            ctx->pc = 0x2D0720u;
            goto label_2d0720;
        }
    }
    ctx->pc = 0x2D0678u;
    // 0x2d0678: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d067c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x2d067cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d0680: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2d0684: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0688: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0688u;
    SET_GPR_U32(ctx, 31, 0x2D0690u);
    ctx->pc = 0x2D068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0688u;
    // 0x2d068c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0688u, 0x2D0690u)) {
        return;
    }
    ctx->pc = 0x2D0690u;
label_2d0690:
    // 0x2d0690: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0690u;
    {
        const bool branch_taken_0x2d0690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0690u;
        // 0x2d0694: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0690) {
            ctx->pc = 0x2D0720u;
            goto label_2d0720;
        }
    }
    ctx->pc = 0x2D0698u;
    // 0x2d0698: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2d0698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d069c: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x2d069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d06a0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2d06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d06a4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d06a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d06a8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d06a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d06ac: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d06acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d06b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D06B0u;
    {
        const bool branch_taken_0x2d06b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d06b0) {
            ctx->pc = 0x2D06E8u;
            goto label_2d06e8;
        }
    }
    ctx->pc = 0x2D06B8u;
    // 0x2d06b8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d06b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d06bc: 0x0  nop
    ctx->pc = 0x2d06bcu;
    // NOP
    // 0x2d06c0: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D06C0u;
    {
        const bool branch_taken_0x2d06c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d06c0) {
            ctx->pc = 0x2D06C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06C0u;
            // 0x2d06c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0724u;
            goto label_2d0724;
        }
    }
    ctx->pc = 0x2D06C8u;
    // 0x2d06c8: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x2d06c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d06cc: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x2d06ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d06d0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2d06d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d06d4: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x2d06d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d06d8: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x2d06d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d06dc: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x2d06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x2d06e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D06E0u;
    {
        const bool branch_taken_0x2d06e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06E0u;
        // 0x2d06e4: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06e0) {
            ctx->pc = 0x2D0720u;
            goto label_2d0720;
        }
    }
    ctx->pc = 0x2D06E8u;
label_2d06e8:
    // 0x2d06e8: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d06e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d06ec: 0x0  nop
    ctx->pc = 0x2d06ecu;
    // NOP
    // 0x2d06f0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D06F0u;
    {
        const bool branch_taken_0x2d06f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d06f0) {
            ctx->pc = 0x2D06F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D06F0u;
            // 0x2d06f4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0724u;
            goto label_2d0724;
        }
    }
    ctx->pc = 0x2D06F8u;
    // 0x2d06f8: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d06f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d06fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d06fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0700: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d0700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0708: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d070c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d070cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d0710: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0710u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0714: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0718: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d0718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d071c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0720:
    // 0x2d0720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d0724:
    // 0x2d0724: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d0724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d0728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d072c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d072cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0730: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2d0730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0734: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0738: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x2d0738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2d073c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0740: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d0740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d0744: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2d0744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2d0748: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0748u;
    SET_GPR_U32(ctx, 31, 0x2D0750u);
    ctx->pc = 0x2D074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0748u;
    // 0x2d074c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0748u, 0x2D0750u)) {
        return;
    }
    ctx->pc = 0x2D0750u;
label_2d0750:
    // 0x2d0750: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0750u;
    {
        const bool branch_taken_0x2d0750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0750u;
        // 0x2d0754: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0750) {
            ctx->pc = 0x2D0800u;
            goto label_2d0800;
        }
    }
    ctx->pc = 0x2D0758u;
    // 0x2d0758: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d075c: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x2d075cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2d0760: 0x27a8007c  addiu       $t0, $sp, 0x7C
    ctx->pc = 0x2d0760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2d0764: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0768: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0768u;
    SET_GPR_U32(ctx, 31, 0x2D0770u);
    ctx->pc = 0x2D076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0768u;
    // 0x2d076c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0768u, 0x2D0770u)) {
        return;
    }
    ctx->pc = 0x2D0770u;
label_2d0770:
    // 0x2d0770: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0770u;
    {
        const bool branch_taken_0x2d0770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0770u;
        // 0x2d0774: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0770) {
            ctx->pc = 0x2D0800u;
            goto label_2d0800;
        }
    }
    ctx->pc = 0x2D0778u;
    // 0x2d0778: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2d0778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d077c: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2d077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0780: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2d0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0784: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0784u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0788: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0788u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d078c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d078cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0790: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0790u;
    {
        const bool branch_taken_0x2d0790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0790) {
            ctx->pc = 0x2D07C8u;
            goto label_2d07c8;
        }
    }
    ctx->pc = 0x2D0798u;
    // 0x2d0798: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d079c: 0x0  nop
    ctx->pc = 0x2d079cu;
    // NOP
    // 0x2d07a0: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D07A0u;
    {
        const bool branch_taken_0x2d07a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d07a0) {
            ctx->pc = 0x2D07A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07A0u;
            // 0x2d07a4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0804u;
            goto label_2d0804;
        }
    }
    ctx->pc = 0x2D07A8u;
    // 0x2d07a8: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x2d07a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d07ac: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x2d07acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d07b0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2d07b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d07b4: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x2d07b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d07b8: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x2d07b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d07bc: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x2d07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x2d07c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D07C0u;
    {
        const bool branch_taken_0x2d07c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07C0u;
        // 0x2d07c4: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d07c0) {
            ctx->pc = 0x2D0800u;
            goto label_2d0800;
        }
    }
    ctx->pc = 0x2D07C8u;
label_2d07c8:
    // 0x2d07c8: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d07c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d07cc: 0x0  nop
    ctx->pc = 0x2d07ccu;
    // NOP
    // 0x2d07d0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D07D0u;
    {
        const bool branch_taken_0x2d07d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d07d0) {
            ctx->pc = 0x2D07D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D07D0u;
            // 0x2d07d4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0804u;
            goto label_2d0804;
        }
    }
    ctx->pc = 0x2D07D8u;
    // 0x2d07d8: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d07d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d07dc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d07e0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2d07e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d07e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d07e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d07e8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d07ec: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2d07ecu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2d07f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d07f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d07f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d07f8: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2d07f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d07fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2d07fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0800:
    // 0x2d0800: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d0804:
    // 0x2d0804: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2d0804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d0808: 0x27a80084  addiu       $t0, $sp, 0x84
    ctx->pc = 0x2d0808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2d080c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2d080cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0810: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d0814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0818: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0818u;
    SET_GPR_U32(ctx, 31, 0x2D0820u);
    ctx->pc = 0x2D081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0818u;
    // 0x2d081c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0818u, 0x2D0820u)) {
        return;
    }
    ctx->pc = 0x2D0820u;
label_2d0820:
    // 0x2d0820: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0820u;
    {
        const bool branch_taken_0x2d0820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0820u;
        // 0x2d0824: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0820) {
            ctx->pc = 0x2D08D0u;
            goto label_2d08d0;
        }
    }
    ctx->pc = 0x2D0828u;
    // 0x2d0828: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d082c: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2d0830: 0x27a8008c  addiu       $t0, $sp, 0x8C
    ctx->pc = 0x2d0830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2d0834: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0838: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0838u;
    SET_GPR_U32(ctx, 31, 0x2D0840u);
    ctx->pc = 0x2D083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0838u;
    // 0x2d083c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0838u, 0x2D0840u)) {
        return;
    }
    ctx->pc = 0x2D0840u;
label_2d0840:
    // 0x2d0840: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0840u;
    {
        const bool branch_taken_0x2d0840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0840u;
        // 0x2d0844: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0840) {
            ctx->pc = 0x2D08D0u;
            goto label_2d08d0;
        }
    }
    ctx->pc = 0x2D0848u;
    // 0x2d0848: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x2d0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d084c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x2d084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0850: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2d0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0854: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0854u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0858: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0858u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d085c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d085cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0860: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0860u;
    {
        const bool branch_taken_0x2d0860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0860) {
            ctx->pc = 0x2D0898u;
            goto label_2d0898;
        }
    }
    ctx->pc = 0x2D0868u;
    // 0x2d0868: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d086c: 0x0  nop
    ctx->pc = 0x2d086cu;
    // NOP
    // 0x2d0870: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0870u;
    {
        const bool branch_taken_0x2d0870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0870) {
            ctx->pc = 0x2D0874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0870u;
            // 0x2d0874: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D08D4u;
            goto label_2d08d4;
        }
    }
    ctx->pc = 0x2D0878u;
    // 0x2d0878: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x2d0878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d087c: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x2d087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d0880: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d0880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d0884: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2d0884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0888: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2d0888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d088c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2d088cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2d0890: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0890u;
    {
        const bool branch_taken_0x2d0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0890u;
        // 0x2d0894: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0890) {
            ctx->pc = 0x2D08D0u;
            goto label_2d08d0;
        }
    }
    ctx->pc = 0x2D0898u;
label_2d0898:
    // 0x2d0898: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d089c: 0x0  nop
    ctx->pc = 0x2d089cu;
    // NOP
    // 0x2d08a0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D08A0u;
    {
        const bool branch_taken_0x2d08a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d08a0) {
            ctx->pc = 0x2D08A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D08A0u;
            // 0x2d08a4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D08D4u;
            goto label_2d08d4;
        }
    }
    ctx->pc = 0x2D08A8u;
    // 0x2d08a8: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d08a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d08ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d08acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d08b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d08b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d08b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d08b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d08bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d08bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d08c0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d08c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d08c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d08c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d08c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d08cc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d08ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d08d0:
    // 0x2d08d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d08d4:
    // 0x2d08d4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2d08d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d08d8: 0x27a80094  addiu       $t0, $sp, 0x94
    ctx->pc = 0x2d08d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2d08dc: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2d08dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d08e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d08e4: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2d08e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d08e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d08e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d08ec: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D08ECu;
    SET_GPR_U32(ctx, 31, 0x2D08F4u);
    ctx->pc = 0x2D08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08ECu;
    // 0x2d08f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D08ECu, 0x2D08F4u)) {
        return;
    }
    ctx->pc = 0x2D08F4u;
label_2d08f4:
    // 0x2d08f4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D08F4u;
    {
        const bool branch_taken_0x2d08f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08F4u;
        // 0x2d08f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08f4) {
            ctx->pc = 0x2D09A8u;
            goto label_2d09a8;
        }
    }
    ctx->pc = 0x2D08FCu;
    // 0x2d08fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0900: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x2d0900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2d0904: 0x27a8009c  addiu       $t0, $sp, 0x9C
    ctx->pc = 0x2d0904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2d0908: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d090c: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D090Cu;
    SET_GPR_U32(ctx, 31, 0x2D0914u);
    ctx->pc = 0x2D0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D090Cu;
    // 0x2d0910: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D090Cu, 0x2D0914u)) {
        return;
    }
    ctx->pc = 0x2D0914u;
label_2d0914:
    // 0x2d0914: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D0914u;
    {
        const bool branch_taken_0x2d0914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0914u;
        // 0x2d0918: 0xc7a20090  lwc1        $f2, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0914) {
            ctx->pc = 0x2D09A8u;
            goto label_2d09a8;
        }
    }
    ctx->pc = 0x2D091Cu;
    // 0x2d091c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2d091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0920: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2d0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0924: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2d0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0928: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0928u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d092c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d092cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d0930: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d0930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0934: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0934u;
    {
        const bool branch_taken_0x2d0934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0934) {
            ctx->pc = 0x2D096Cu;
            goto label_2d096c;
        }
    }
    ctx->pc = 0x2D093Cu;
    // 0x2d093c: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d093cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0940: 0x0  nop
    ctx->pc = 0x2d0940u;
    // NOP
    // 0x2d0944: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0944u;
    {
        const bool branch_taken_0x2d0944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0944) {
            ctx->pc = 0x2D0948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0944u;
            // 0x2d0948: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D09ACu;
            goto label_2d09ac;
        }
    }
    ctx->pc = 0x2D094Cu;
    // 0x2d094c: 0x6a420017  ldl         $v0, 0x17($s2)
    ctx->pc = 0x2d094cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d0950: 0x6e420010  ldr         $v0, 0x10($s2)
    ctx->pc = 0x2d0950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0954: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2d0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d0958: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d0958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d095c: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d095cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0960: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d0960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d0964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0964u;
    {
        const bool branch_taken_0x2d0964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0964u;
        // 0x2d0968: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0964) {
            ctx->pc = 0x2D09A8u;
            goto label_2d09a8;
        }
    }
    ctx->pc = 0x2D096Cu;
label_2d096c:
    // 0x2d096c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d096cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0970: 0x0  nop
    ctx->pc = 0x2d0970u;
    // NOP
    // 0x2d0974: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2D0974u;
    {
        const bool branch_taken_0x2d0974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0974) {
            ctx->pc = 0x2D0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0974u;
            // 0x2d0978: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D09ACu;
            goto label_2d09ac;
        }
    }
    ctx->pc = 0x2D097Cu;
    // 0x2d097c: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d097cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d0980: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2d0980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0984: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0984u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0988: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d098c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0990: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0990u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0994: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d0994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d0998: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d099c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d099cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d09a0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d09a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d09a4: 0x0  nop
    ctx->pc = 0x2d09a4u;
    // NOP
label_2d09a8:
    // 0x2d09a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d09ac:
    // 0x2d09ac: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2d09acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d09b0: 0x27a800a4  addiu       $t0, $sp, 0xA4
    ctx->pc = 0x2d09b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2d09b4: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x2d09b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d09b8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d09b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d09bc: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x2d09bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2d09c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d09c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c4: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D09C4u;
    SET_GPR_U32(ctx, 31, 0x2D09CCu);
    ctx->pc = 0x2D09C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09C4u;
    // 0x2d09c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D09C4u, 0x2D09CCu)) {
        return;
    }
    ctx->pc = 0x2D09CCu;
label_2d09cc:
    // 0x2d09cc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D09CCu;
    {
        const bool branch_taken_0x2d09cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09CCu;
        // 0x2d09d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09cc) {
            ctx->pc = 0x2D0A80u;
            goto label_2d0a80;
        }
    }
    ctx->pc = 0x2D09D4u;
    // 0x2d09d4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d09d8: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x2d09d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2d09dc: 0x27a800ac  addiu       $t0, $sp, 0xAC
    ctx->pc = 0x2d09dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2d09e0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d09e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d09e4: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D09E4u;
    SET_GPR_U32(ctx, 31, 0x2D09ECu);
    ctx->pc = 0x2D09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09E4u;
    // 0x2d09e8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D09E4u, 0x2D09ECu)) {
        return;
    }
    ctx->pc = 0x2D09ECu;
label_2d09ec:
    // 0x2d09ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D09ECu;
    {
        const bool branch_taken_0x2d09ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09ECu;
        // 0x2d09f0: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09ec) {
            ctx->pc = 0x2D0A80u;
            goto label_2d0a80;
        }
    }
    ctx->pc = 0x2D09F4u;
    // 0x2d09f4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x2d09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d09f8: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2d09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d09fc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0a00: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0a00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0a04: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0a04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d0a08: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d0a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0a0c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0A0Cu;
    {
        const bool branch_taken_0x2d0a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0a0c) {
            ctx->pc = 0x2D0A44u;
            goto label_2d0a44;
        }
    }
    ctx->pc = 0x2D0A14u;
    // 0x2d0a14: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0a18: 0x0  nop
    ctx->pc = 0x2d0a18u;
    // NOP
    // 0x2d0a1c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0A1Cu;
    {
        const bool branch_taken_0x2d0a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0a1c) {
            ctx->pc = 0x2D0A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A1Cu;
            // 0x2d0a20: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A84u;
            goto label_2d0a84;
        }
    }
    ctx->pc = 0x2D0A24u;
    // 0x2d0a24: 0x6a460027  ldl         $a2, 0x27($s2)
    ctx->pc = 0x2d0a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d0a28: 0x6e460020  ldr         $a2, 0x20($s2)
    ctx->pc = 0x2d0a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d0a2c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2d0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2d0a30: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x2d0a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0a34: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x2d0a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0a38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d0a3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0A3Cu;
    {
        const bool branch_taken_0x2d0a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A3Cu;
        // 0x2d0a40: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a3c) {
            ctx->pc = 0x2D0A80u;
            goto label_2d0a80;
        }
    }
    ctx->pc = 0x2D0A44u;
label_2d0a44:
    // 0x2d0a44: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0a44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0a48: 0x0  nop
    ctx->pc = 0x2d0a48u;
    // NOP
    // 0x2d0a4c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2D0A4Cu;
    {
        const bool branch_taken_0x2d0a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0a4c) {
            ctx->pc = 0x2D0A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A4Cu;
            // 0x2d0a50: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A84u;
            goto label_2d0a84;
        }
    }
    ctx->pc = 0x2D0A54u;
    // 0x2d0a54: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0a54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d0a58: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2d0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0a5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0a5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0a60: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0a64: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0a68: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0a68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0a6c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d0a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d0a70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0a74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0a74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0a78: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d0a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d0a7c: 0x0  nop
    ctx->pc = 0x2d0a7cu;
    // NOP
label_2d0a80:
    // 0x2d0a80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d0a84:
    // 0x2d0a84: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2d0a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d0a88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d0a8c: 0x27a800b4  addiu       $t0, $sp, 0xB4
    ctx->pc = 0x2d0a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2d0a90: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x2d0a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d0a94: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0a98: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0a9c: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D0AA4u);
    ctx->pc = 0x2D0AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A9Cu;
    // 0x2d0aa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0A9Cu, 0x2D0AA4u)) {
        return;
    }
    ctx->pc = 0x2D0AA4u;
label_2d0aa4:
    // 0x2d0aa4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D0AA4u;
    {
        const bool branch_taken_0x2d0aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AA4u;
        // 0x2d0aa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0aa4) {
            ctx->pc = 0x2D0B58u;
            goto label_2d0b58;
        }
    }
    ctx->pc = 0x2D0AACu;
    // 0x2d0aac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0ab0: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x2d0ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2d0ab4: 0x27a800bc  addiu       $t0, $sp, 0xBC
    ctx->pc = 0x2d0ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2d0ab8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0abc: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0ABCu;
    SET_GPR_U32(ctx, 31, 0x2D0AC4u);
    ctx->pc = 0x2D0AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0ABCu;
    // 0x2d0ac0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0ABCu, 0x2D0AC4u)) {
        return;
    }
    ctx->pc = 0x2D0AC4u;
label_2d0ac4:
    // 0x2d0ac4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D0AC4u;
    {
        const bool branch_taken_0x2d0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AC4u;
        // 0x2d0ac8: 0xc7a200b0  lwc1        $f2, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ac4) {
            ctx->pc = 0x2D0B58u;
            goto label_2d0b58;
        }
    }
    ctx->pc = 0x2D0ACCu;
    // 0x2d0acc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2d0accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0ad0: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x2d0ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0ad4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2d0ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ad8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0ad8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0adc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0adcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d0ae0: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d0ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0ae4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0AE4u;
    {
        const bool branch_taken_0x2d0ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0ae4) {
            ctx->pc = 0x2D0B1Cu;
            goto label_2d0b1c;
        }
    }
    ctx->pc = 0x2D0AECu;
    // 0x2d0aec: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0af0: 0x0  nop
    ctx->pc = 0x2d0af0u;
    // NOP
    // 0x2d0af4: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0AF4u;
    {
        const bool branch_taken_0x2d0af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0af4) {
            ctx->pc = 0x2D0AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0AF4u;
            // 0x2d0af8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0B5Cu;
            goto label_2d0b5c;
        }
    }
    ctx->pc = 0x2D0AFCu;
    // 0x2d0afc: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x2d0afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d0b00: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x2d0b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d0b04: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2d0b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d0b08: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x2d0b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0b0c: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x2d0b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0b10: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2d0b10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2d0b14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0B14u;
    {
        const bool branch_taken_0x2d0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B14u;
        // 0x2d0b18: 0xae260008  sw          $a2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b14) {
            ctx->pc = 0x2D0B58u;
            goto label_2d0b58;
        }
    }
    ctx->pc = 0x2D0B1Cu;
label_2d0b1c:
    // 0x2d0b1c: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0b20: 0x0  nop
    ctx->pc = 0x2d0b20u;
    // NOP
    // 0x2d0b24: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x2D0B24u;
    {
        const bool branch_taken_0x2d0b24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0b24) {
            ctx->pc = 0x2D0B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0B24u;
            // 0x2d0b28: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0B5Cu;
            goto label_2d0b5c;
        }
    }
    ctx->pc = 0x2D0B2Cu;
    // 0x2d0b2c: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0b2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d0b30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0b34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0b38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0b3c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0b40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0b40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0b44: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d0b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d0b48: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0b50: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d0b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d0b54: 0x0  nop
    ctx->pc = 0x2d0b54u;
    // NOP
label_2d0b58:
    // 0x2d0b58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d0b5c:
    // 0x2d0b5c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2d0b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d0b60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d0b64: 0x27a800c4  addiu       $t0, $sp, 0xC4
    ctx->pc = 0x2d0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2d0b68: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x2d0b68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d0b6c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0b70: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d0b74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0b78: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0B78u;
    SET_GPR_U32(ctx, 31, 0x2D0B80u);
    ctx->pc = 0x2D0B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B78u;
    // 0x2d0b7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0B78u, 0x2D0B80u)) {
        return;
    }
    ctx->pc = 0x2D0B80u;
label_2d0b80:
    // 0x2d0b80: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0B80u;
    {
        const bool branch_taken_0x2d0b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B80u;
        // 0x2d0b84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b80) {
            ctx->pc = 0x2D0C30u;
            goto label_2d0c30;
        }
    }
    ctx->pc = 0x2D0B88u;
    // 0x2d0b88: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0b8c: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x2d0b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2d0b90: 0x27a800cc  addiu       $t0, $sp, 0xCC
    ctx->pc = 0x2d0b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2d0b94: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0b98: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0B98u;
    SET_GPR_U32(ctx, 31, 0x2D0BA0u);
    ctx->pc = 0x2D0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B98u;
    // 0x2d0b9c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0B98u, 0x2D0BA0u)) {
        return;
    }
    ctx->pc = 0x2D0BA0u;
label_2d0ba0:
    // 0x2d0ba0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0BA0u;
    {
        const bool branch_taken_0x2d0ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BA0u;
        // 0x2d0ba4: 0xc7a200c0  lwc1        $f2, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ba0) {
            ctx->pc = 0x2D0C30u;
            goto label_2d0c30;
        }
    }
    ctx->pc = 0x2D0BA8u;
    // 0x2d0ba8: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x2d0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0bac: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x2d0bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0bb0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2d0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0bb4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0bb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0bb8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0bb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d0bbc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d0bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0bc0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0BC0u;
    {
        const bool branch_taken_0x2d0bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0bc0) {
            ctx->pc = 0x2D0BF8u;
            goto label_2d0bf8;
        }
    }
    ctx->pc = 0x2D0BC8u;
    // 0x2d0bc8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0bcc: 0x0  nop
    ctx->pc = 0x2d0bccu;
    // NOP
    // 0x2d0bd0: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0BD0u;
    {
        const bool branch_taken_0x2d0bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0bd0) {
            ctx->pc = 0x2D0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0BD0u;
            // 0x2d0bd4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C34u;
            goto label_2d0c34;
        }
    }
    ctx->pc = 0x2D0BD8u;
    // 0x2d0bd8: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x2d0bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d0bdc: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x2d0bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d0be0: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2d0be4: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x2d0be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0be8: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x2d0be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0bec: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x2d0becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x2d0bf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0BF0u;
    {
        const bool branch_taken_0x2d0bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BF0u;
        // 0x2d0bf4: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bf0) {
            ctx->pc = 0x2D0C30u;
            goto label_2d0c30;
        }
    }
    ctx->pc = 0x2D0BF8u;
label_2d0bf8:
    // 0x2d0bf8: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0bfc: 0x0  nop
    ctx->pc = 0x2d0bfcu;
    // NOP
    // 0x2d0c00: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x2D0C00u;
    {
        const bool branch_taken_0x2d0c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0c00) {
            ctx->pc = 0x2D0C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C00u;
            // 0x2d0c04: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C34u;
            goto label_2d0c34;
        }
    }
    ctx->pc = 0x2D0C08u;
    // 0x2d0c08: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0c08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d0c0c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2d0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0c10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0c14: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0c18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0c1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0c20: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d0c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d0c24: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0c28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0c2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d0c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0c30:
    // 0x2d0c30: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2d0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d0c34:
    // 0x2d0c34: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2d0c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d0c38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d0c3c: 0x27a800d4  addiu       $t0, $sp, 0xD4
    ctx->pc = 0x2d0c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2d0c40: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x2d0c40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d0c44: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0c48: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x2d0c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2d0c4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2d0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d0c50: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0C50u;
    SET_GPR_U32(ctx, 31, 0x2D0C58u);
    ctx->pc = 0x2D0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C50u;
    // 0x2d0c54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0C50u, 0x2D0C58u)) {
        return;
    }
    ctx->pc = 0x2D0C58u;
label_2d0c58:
    // 0x2d0c58: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0C58u;
    {
        const bool branch_taken_0x2d0c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C58u;
        // 0x2d0c5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c58) {
            ctx->pc = 0x2D0D08u;
            goto label_2d0d08;
        }
    }
    ctx->pc = 0x2D0C60u;
    // 0x2d0c60: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d0c64: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x2d0c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2d0c68: 0x27a800dc  addiu       $t0, $sp, 0xDC
    ctx->pc = 0x2d0c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2d0c6c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2d0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d0c70: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2D0C70u;
    SET_GPR_U32(ctx, 31, 0x2D0C78u);
    ctx->pc = 0x2D0C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C70u;
    // 0x2d0c74: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2D0C70u, 0x2D0C78u)) {
        return;
    }
    ctx->pc = 0x2D0C78u;
label_2d0c78:
    // 0x2d0c78: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0C78u;
    {
        const bool branch_taken_0x2d0c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C78u;
        // 0x2d0c7c: 0xc7a200d0  lwc1        $f2, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c78) {
            ctx->pc = 0x2D0D08u;
            goto label_2d0d08;
        }
    }
    ctx->pc = 0x2D0C80u;
    // 0x2d0c80: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2d0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0c84: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x2d0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0c88: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0c8c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2d0c8cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d0c90: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2d0c90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d0c94: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2d0c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0c98: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D0C98u;
    {
        const bool branch_taken_0x2d0c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0c98) {
            ctx->pc = 0x2D0CD0u;
            goto label_2d0cd0;
        }
    }
    ctx->pc = 0x2D0CA0u;
    // 0x2d0ca0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2d0ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0ca4: 0x0  nop
    ctx->pc = 0x2d0ca4u;
    // NOP
    // 0x2d0ca8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0CA8u;
    {
        const bool branch_taken_0x2d0ca8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CA8u;
        // 0x2d0cac: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ca8) {
            ctx->pc = 0x2D0D0Cu;
            goto label_2d0d0c;
        }
    }
    ctx->pc = 0x2D0CB0u;
    // 0x2d0cb0: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x2d0cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d0cb4: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x2d0cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d0cb8: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2d0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2d0cbc: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2d0cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0cc0: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2d0cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0cc4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2d0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2d0cc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0CC8u;
    {
        const bool branch_taken_0x2d0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CC8u;
        // 0x2d0ccc: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cc8) {
            ctx->pc = 0x2D0D08u;
            goto label_2d0d08;
        }
    }
    ctx->pc = 0x2D0CD0u;
label_2d0cd0:
    // 0x2d0cd0: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x2d0cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0cd4: 0x0  nop
    ctx->pc = 0x2d0cd4u;
    // NOP
    // 0x2d0cd8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2D0CD8u;
    {
        const bool branch_taken_0x2d0cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CD8u;
        // 0x2d0cdc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cd8) {
            ctx->pc = 0x2D0D0Cu;
            goto label_2d0d0c;
        }
    }
    ctx->pc = 0x2D0CE0u;
    // 0x2d0ce0: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x2d0ce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x2d0ce4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2d0ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0ce8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0ce8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0cec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d0cf0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0cf4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d0cf4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d0cf8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2d0cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d0cfc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2d0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0d00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d0d00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d0d04: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d0d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2d0d08:
    // 0x2d0d08: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2d0d08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2d0d0c:
    // 0x2d0d0c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d0d10: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2d0d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d0d14: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2d0d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d0d18: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2d0d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d0d1c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2d0d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d0d20: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2d0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D24u;
        // 0x2d0d28: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D2Cu;
    // 0x2d0d2c: 0x0  nop
    ctx->pc = 0x2d0d2cu;
    // NOP
    ctx->pc = 0x2d0d30u;
}
