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

// Function: sub_0021A288
// Address: 0x21a288 - 0x21a468
void sub_0021A288_0x21a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A288_0x21a288");
#endif

    switch (ctx->pc) {
        case 0x21a298u: goto label_21a298;
        case 0x21a340u: goto label_21a340;
        case 0x21a41cu: goto label_21a41c;
        case 0x21a42cu: goto label_21a42c;
        default: break;
    }

    ctx->pc = 0x21a288u;

    // 0x21a288: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a290: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A290u;
    {
        const bool branch_taken_0x21a290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A290u;
        // 0x21a294: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a290) {
            ctx->pc = 0x21A2A0u;
            goto label_21a2a0;
        }
    }
    ctx->pc = 0x21A298u;
label_21a298:
    // 0x21a298: 0x3e00008  jr          $ra
    ctx->pc = 0x21A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A298u;
        // 0x21a29c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A2A0u;
label_21a2a0:
    // 0x21a2a0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x21a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21a2a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x21a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a2a8: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x21a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21a2ac: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x21a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a2b0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x21a2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x21a2b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a2b8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x21a2b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x21a2bc: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x21a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21a2c0: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x21a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x21a2c4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x21a2c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x21a2c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21a2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21a2cc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x21a2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x21a2d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21a2d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21a2d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21a2d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21a2d8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x21a2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a2dc: 0x0  nop
    ctx->pc = 0x21a2dcu;
    // NOP
    // 0x21a2e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21A2E0u;
    {
        const bool branch_taken_0x21a2e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2E0u;
        // 0x21a2e4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2e0) {
            ctx->pc = 0x21A2ECu;
            goto label_21a2ec;
        }
    }
    ctx->pc = 0x21A2E8u;
    // 0x21a2e8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a2ec:
    // 0x21a2ec: 0x3c01bf7d  lui         $at, 0xBF7D
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49021 << 16));
    // 0x21a2f0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x21a2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x21a2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21a2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21a2f8: 0x0  nop
    ctx->pc = 0x21a2f8u;
    // NOP
    // 0x21a2fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21a2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a300: 0x0  nop
    ctx->pc = 0x21a300u;
    // NOP
    // 0x21a304: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A304u;
            // 0x21a308: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A30Cu;
            goto label_21a30c;
        }
    }
    ctx->pc = 0x21A30Cu;
label_21a30c:
    // 0x21a30c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x21a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21a310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21a310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a31c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a31cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a320: 0x18800036  blez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21A320u;
    {
        const bool branch_taken_0x21a320 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A320u;
        // 0x21a324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a320) {
            ctx->pc = 0x21A3FCu;
            goto label_21a3fc;
        }
    }
    ctx->pc = 0x21A328u;
    // 0x21a328: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x21a328u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x21a32c: 0xc4a8000c  lwc1        $f8, 0xC($a1)
    ctx->pc = 0x21a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21a330: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x21a330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21a334: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x21a338: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x21a338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x21a33c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x21a33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_21a340:
    // 0x21a340: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a344: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x21a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21a348: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x21a348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x21a34c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x21a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21a350: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x21a350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x21a354: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x21a354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x21a358: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21a358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21a35c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21a35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21a360: 0x46080040  add.s       $f1, $f0, $f8
    ctx->pc = 0x21a360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x21a364: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x21a364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a368: 0x0  nop
    ctx->pc = 0x21a368u;
    // NOP
    // 0x21a36c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21A36Cu;
    {
        const bool branch_taken_0x21a36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a36c) {
            ctx->pc = 0x21A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A36Cu;
            // 0x21a370: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A374u;
            goto label_21a374;
        }
    }
    ctx->pc = 0x21A374u;
label_21a374:
    // 0x21a374: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x21a374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a378: 0x0  nop
    ctx->pc = 0x21a378u;
    // NOP
    // 0x21a37c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21A37Cu;
    {
        const bool branch_taken_0x21a37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a37c) {
            ctx->pc = 0x21A380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A37Cu;
            // 0x21a380: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A384u;
            goto label_21a384;
        }
    }
    ctx->pc = 0x21A384u;
label_21a384:
    // 0x21a384: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x21a384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x21a388: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x21a388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a38c: 0x0  nop
    ctx->pc = 0x21a38cu;
    // NOP
    // 0x21a390: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x21A390u;
    {
        const bool branch_taken_0x21a390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a390) {
            ctx->pc = 0x21A3A0u;
            goto label_21a3a0;
        }
    }
    ctx->pc = 0x21A398u;
    // 0x21a398: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A398u;
    {
        const bool branch_taken_0x21a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A398u;
        // 0x21a39c: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a398) {
            ctx->pc = 0x21A3B4u;
            goto label_21a3b4;
        }
    }
    ctx->pc = 0x21A3A0u;
label_21a3a0:
    // 0x21a3a0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x21a3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a3a4: 0x0  nop
    ctx->pc = 0x21a3a4u;
    // NOP
    // 0x21a3a8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x21A3A8u;
    {
        const bool branch_taken_0x21a3a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a3a8) {
            ctx->pc = 0x21A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A3A8u;
            // 0x21a3ac: 0x34c60004  ori         $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3B4u;
            goto label_21a3b4;
        }
    }
    ctx->pc = 0x21A3B0u;
    // 0x21a3b0: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x21a3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_21a3b4:
    // 0x21a3b4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x21a3b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21a3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21a3bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21a3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21a3c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x21a3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21a3c4: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x21a3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x21a3c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x21a3c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a3cc: 0x0  nop
    ctx->pc = 0x21a3ccu;
    // NOP
    // 0x21a3d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21A3D0u;
    {
        const bool branch_taken_0x21a3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D0u;
        // 0x21a3d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3d0) {
            ctx->pc = 0x21A3DCu;
            goto label_21a3dc;
        }
    }
    ctx->pc = 0x21A3D8u;
    // 0x21a3d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21a3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21a3dc:
    // 0x21a3dc: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x21a3dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21a3e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21a3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a3e4: 0x0  nop
    ctx->pc = 0x21a3e4u;
    // NOP
    // 0x21a3e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21A3E8u;
    {
        const bool branch_taken_0x21a3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a3e8) {
            ctx->pc = 0x21A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A3E8u;
            // 0x21a3ec: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3F0u;
            goto label_21a3f0;
        }
    }
    ctx->pc = 0x21A3F0u;
label_21a3f0:
    // 0x21a3f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21a3f4: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x21A3F4u;
    {
        const bool branch_taken_0x21a3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3F4u;
        // 0x21a3f8: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3f4) {
            ctx->pc = 0x21A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a340;
        }
    }
    ctx->pc = 0x21A3FCu;
label_21a3fc:
    // 0x21a3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a400: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A400u;
    {
        const bool branch_taken_0x21a400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A400u;
        // 0x21a404: 0x30c60006  andi        $a2, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a400) {
            ctx->pc = 0x21A410u;
            goto label_21a410;
        }
    }
    ctx->pc = 0x21A408u;
    // 0x21a408: 0x1580ffa3  bnez        $t4, . + 4 + (-0x5D << 2)
    ctx->pc = 0x21A408u;
    {
        const bool branch_taken_0x21a408 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a408) {
            ctx->pc = 0x21A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a298;
        }
    }
    ctx->pc = 0x21A410u;
label_21a410:
    // 0x21a410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a414: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A414u;
    {
        const bool branch_taken_0x21a414 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A414u;
        // 0x21a418: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a414) {
            ctx->pc = 0x21A424u;
            goto label_21a424;
        }
    }
    ctx->pc = 0x21A41Cu;
label_21a41c:
    // 0x21a41c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A41Cu;
        // 0x21a420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A424u;
label_21a424:
    // 0x21a424: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A424u;
    {
        const bool branch_taken_0x21a424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a424) {
            ctx->pc = 0x21A434u;
            goto label_21a434;
        }
    }
    ctx->pc = 0x21A42Cu;
label_21a42c:
    // 0x21a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A434u;
label_21a434:
    // 0x21a434: 0x1100fff9  beqz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21A434u;
    {
        const bool branch_taken_0x21a434 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a434) {
            ctx->pc = 0x21A41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a41c;
        }
    }
    ctx->pc = 0x21A43Cu;
    // 0x21a43c: 0x1160fffb  beqz        $t3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21A43Cu;
    {
        const bool branch_taken_0x21a43c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a43c) {
            ctx->pc = 0x21A42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a42c;
        }
    }
    ctx->pc = 0x21A444u;
    // 0x21a444: 0x11270005  beq         $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A444u;
    {
        const bool branch_taken_0x21a444 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x21A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A444u;
        // 0x21a448: 0x1472026  xor         $a0, $t2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a444) {
            ctx->pc = 0x21A45Cu;
            goto label_21a45c;
        }
    }
    ctx->pc = 0x21A44Cu;
    // 0x21a44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a450: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a454: 0x3e00008  jr          $ra
    ctx->pc = 0x21A454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A454u;
        // 0x21a458: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A45Cu;
label_21a45c:
    // 0x21a45c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A45Cu;
        // 0x21a460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A464u;
    // 0x21a464: 0x0  nop
    ctx->pc = 0x21a464u;
    // NOP
    ctx->pc = 0x21a468u;
}
