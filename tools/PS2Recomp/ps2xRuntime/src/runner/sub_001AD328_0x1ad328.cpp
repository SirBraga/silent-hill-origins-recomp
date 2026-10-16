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

// Function: sub_001AD328
// Address: 0x1ad328 - 0x1ad480
void sub_001AD328_0x1ad328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD328_0x1ad328");
#endif

    switch (ctx->pc) {
        case 0x1ad464u: goto label_1ad464;
        default: break;
    }

    ctx->pc = 0x1ad328u;

    // 0x1ad328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad32c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ad330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ad338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad340: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1ad340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad344: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ad344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ad348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad34c: 0x0  nop
    ctx->pc = 0x1ad34cu;
    // NOP
    // 0x1ad350: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD350u;
    {
        const bool branch_taken_0x1ad350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD350u;
        // 0x1ad354: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad350) {
            ctx->pc = 0x1AD35Cu;
            goto label_1ad35c;
        }
    }
    ctx->pc = 0x1AD358u;
    // 0x1ad358: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ad358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1ad35c:
    // 0x1ad35c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ad360: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad364: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AD364u;
    {
        const bool branch_taken_0x1ad364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD364u;
        // 0x1ad368: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad364) {
            ctx->pc = 0x1AD3D4u;
            goto label_1ad3d4;
        }
    }
    ctx->pc = 0x1AD36Cu;
    // 0x1ad36c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD36Cu;
    {
        const bool branch_taken_0x1ad36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD36Cu;
        // 0x1ad370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad36c) {
            ctx->pc = 0x1AD384u;
            goto label_1ad384;
        }
    }
    ctx->pc = 0x1AD374u;
    // 0x1ad374: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD374u;
    {
        const bool branch_taken_0x1ad374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad374) {
            ctx->pc = 0x1AD378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD374u;
            // 0x1ad378: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD398u;
            goto label_1ad398;
        }
    }
    ctx->pc = 0x1AD37Cu;
    // 0x1ad37c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1AD37Cu;
    {
        const bool branch_taken_0x1ad37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD37Cu;
        // 0x1ad380: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad37c) {
            ctx->pc = 0x1AD468u;
            goto label_1ad468;
        }
    }
    ctx->pc = 0x1AD384u;
label_1ad384:
    // 0x1ad384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad388: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AD388u;
    {
        const bool branch_taken_0x1ad388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad388) {
            ctx->pc = 0x1AD38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD388u;
            // 0x1ad38c: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD3E4u;
            goto label_1ad3e4;
        }
    }
    ctx->pc = 0x1AD390u;
    // 0x1ad390: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1AD390u;
    {
        const bool branch_taken_0x1ad390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD390u;
        // 0x1ad394: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad390) {
            ctx->pc = 0x1AD468u;
            goto label_1ad468;
        }
    }
    ctx->pc = 0x1AD398u;
label_1ad398:
    // 0x1ad398: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ad398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ad39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad3a0: 0x0  nop
    ctx->pc = 0x1ad3a0u;
    // NOP
    // 0x1ad3a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ad3a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ad3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad3ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad3b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ad3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad3b4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ad3b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad3b8: 0x0  nop
    ctx->pc = 0x1ad3b8u;
    // NOP
    // 0x1ad3bc: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x1AD3BCu;
    {
        const bool branch_taken_0x1ad3bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3BCu;
        // 0x1ad3c0: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3bc) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD3C4u;
    // 0x1ad3c4: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x1ad3c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ad3c8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1ad3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1ad3cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1AD3CCu;
    {
        const bool branch_taken_0x1ad3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3CCu;
        // 0x1ad3d0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3cc) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD3D4u;
label_1ad3d4:
    // 0x1ad3d4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1ad3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad3d8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1ad3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1ad3dc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1AD3DCu;
    {
        const bool branch_taken_0x1ad3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3DCu;
        // 0x1ad3e0: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3dc) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD3E4u;
label_1ad3e4:
    // 0x1ad3e4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ad3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad3ec: 0x0  nop
    ctx->pc = 0x1ad3ecu;
    // NOP
    // 0x1ad3f0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ad3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ad3f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ad3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad3f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ad3f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ad3fc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1ad3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad400: 0x0  nop
    ctx->pc = 0x1ad400u;
    // NOP
    // 0x1ad404: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1AD404u;
    {
        const bool branch_taken_0x1ad404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD404u;
        // 0x1ad408: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad404) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD40Cu;
    // 0x1ad40c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ad410: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x1ad410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ad414: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD414u;
    {
        const bool branch_taken_0x1ad414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD414u;
        // 0x1ad418: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad414) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD41Cu;
    // 0x1ad41c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1ad41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ad420: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ad420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ad424: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1ad424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ad428: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1ad42c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1ad42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1ad430: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD430u;
    {
        const bool branch_taken_0x1ad430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD430u;
        // 0x1ad434: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad430) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD438u;
    // 0x1ad438: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad43c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1ad43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x1ad440: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD440u;
    {
        const bool branch_taken_0x1ad440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad440) {
            ctx->pc = 0x1AD444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD440u;
            // 0x1ad444: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD468u;
            goto label_1ad468;
        }
    }
    ctx->pc = 0x1AD448u;
    // 0x1ad448: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad44c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD44Cu;
    {
        const bool branch_taken_0x1ad44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad44c) {
            ctx->pc = 0x1AD450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD44Cu;
            // 0x1ad450: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD468u;
            goto label_1ad468;
        }
    }
    ctx->pc = 0x1AD454u;
    // 0x1ad454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ad454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ad458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1AD45Cu;
    SET_GPR_U32(ctx, 31, 0x1AD464u);
    ctx->pc = 0x1AD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD45Cu;
    // 0x1ad460: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AD45Cu, 0x1AD464u)) {
        return;
    }
    ctx->pc = 0x1AD464u;
label_1ad464:
    // 0x1ad464: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad468:
    // 0x1ad468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad46c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad470: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ad474: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD474u;
        // 0x1ad478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD47Cu;
    // 0x1ad47c: 0x0  nop
    ctx->pc = 0x1ad47cu;
    // NOP
    ctx->pc = 0x1ad480u;
}
