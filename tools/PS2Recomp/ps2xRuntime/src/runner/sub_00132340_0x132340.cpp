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

// Function: sub_00132340
// Address: 0x132340 - 0x1324d8
void sub_00132340_0x132340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132340_0x132340");
#endif

    switch (ctx->pc) {
        case 0x132418u: goto label_132418;
        case 0x13244cu: goto label_13244c;
        case 0x132498u: goto label_132498;
        default: break;
    }

    ctx->pc = 0x132340u;

    // 0x132340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x132344: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x132344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x132348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x132348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13234c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x132350: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x132350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x132354: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x132354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132358: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x132358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13235c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13235cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132360: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x132360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x132364: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x132364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x132368: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x132368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13236c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132370: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x132370u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x132374: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x132374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x132378: 0x8c82083c  lw          $v0, 0x83C($a0)
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2108)));
    // 0x13237c: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x13237cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x132380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132384: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x132384u;
    {
        const bool branch_taken_0x132384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132384) {
            ctx->pc = 0x132388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132384u;
            // 0x132388: 0xc6201a5c  lwc1        $f0, 0x1A5C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x132394u;
            goto label_132394;
        }
    }
    ctx->pc = 0x13238Cu;
    // 0x13238c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x13238Cu;
    {
        const bool branch_taken_0x13238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13238Cu;
        // 0x132390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13238c) {
            ctx->pc = 0x1324B4u;
            goto label_1324b4;
        }
    }
    ctx->pc = 0x132394u;
label_132394:
    // 0x132394: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x132394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x132398: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x132398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13239c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13239cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1323a0: 0x0  nop
    ctx->pc = 0x1323a0u;
    // NOP
    // 0x1323a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1323a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1323a8: 0x0  nop
    ctx->pc = 0x1323a8u;
    // NOP
    // 0x1323ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1323ACu;
    {
        const bool branch_taken_0x1323ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ACu;
        // 0x1323b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323ac) {
            ctx->pc = 0x1323B8u;
            goto label_1323b8;
        }
    }
    ctx->pc = 0x1323B4u;
    // 0x1323b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1323b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1323b8:
    // 0x1323b8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x1323b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x1323bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1323bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1323c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1323c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1323c4: 0x0  nop
    ctx->pc = 0x1323c4u;
    // NOP
    // 0x1323c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1323c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1323cc: 0x0  nop
    ctx->pc = 0x1323ccu;
    // NOP
    // 0x1323d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1323D0u;
    {
        const bool branch_taken_0x1323d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1323d0) {
            ctx->pc = 0x1323D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323D0u;
            // 0x1323d4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1323D8u;
            goto label_1323d8;
        }
    }
    ctx->pc = 0x1323D8u;
label_1323d8:
    // 0x1323d8: 0xc6201a60  lwc1        $f0, 0x1A60($s1)
    ctx->pc = 0x1323d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1323dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1323dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1323e0: 0x0  nop
    ctx->pc = 0x1323e0u;
    // NOP
    // 0x1323e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1323E4u;
    {
        const bool branch_taken_0x1323e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1323e4) {
            ctx->pc = 0x1323E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323E4u;
            // 0x1323e8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1323ECu;
            goto label_1323ec;
        }
    }
    ctx->pc = 0x1323ECu;
label_1323ec:
    // 0x1323ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1323ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1323f0: 0x0  nop
    ctx->pc = 0x1323f0u;
    // NOP
    // 0x1323f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1323F4u;
    {
        const bool branch_taken_0x1323f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1323f4) {
            ctx->pc = 0x1323F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1323F4u;
            // 0x1323f8: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1323FCu;
            goto label_1323fc;
        }
    }
    ctx->pc = 0x1323FCu;
label_1323fc:
    // 0x1323fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x132400: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x132400u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x132404: 0x24428390  addiu       $v0, $v0, -0x7C70
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935440));
    // 0x132408: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13240c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x132410: 0xc068248  jal         func_1A0920
    ctx->pc = 0x132410u;
    SET_GPR_U32(ctx, 31, 0x132418u);
    ctx->pc = 0x132414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132410u;
    // 0x132414: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0920u, 0x132410u, 0x132418u)) {
        return;
    }
    ctx->pc = 0x132418u;
label_132418:
    // 0x132418: 0xc6201a7c  lwc1        $f0, 0x1A7C($s1)
    ctx->pc = 0x132418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13241c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x132420: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x132420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x132424: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x132424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x132428: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13242c: 0x246383a8  addiu       $v1, $v1, -0x7C58
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935464));
    // 0x132430: 0xae221a70  sw          $v0, 0x1A70($s1)
    ctx->pc = 0x132430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6768), GPR_U32(ctx, 2));
    // 0x132434: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x132434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x132438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13243c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132440: 0xe6201a7c  swc1        $f0, 0x1A7C($s1)
    ctx->pc = 0x132440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6780), bits); }
    // 0x132444: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x132444u;
    SET_GPR_U32(ctx, 31, 0x13244Cu);
    ctx->pc = 0x132448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132444u;
    // 0x132448: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x132444u, 0x13244Cu)) {
        return;
    }
    ctx->pc = 0x13244Cu;
label_13244c:
    // 0x13244c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13244cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132450: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x132450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x132454: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x132454u;
    {
        const bool branch_taken_0x132454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x132458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132454u;
        // 0x132458: 0xae231a68  sw          $v1, 0x1A68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132454) {
            ctx->pc = 0x1324B0u;
            goto label_1324b0;
        }
    }
    ctx->pc = 0x13245Cu;
    // 0x13245c: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x13245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x132460: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x132460u;
    {
        const bool branch_taken_0x132460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x132464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132460u;
        // 0x132464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132460) {
            ctx->pc = 0x1324B4u;
            goto label_1324b4;
        }
    }
    ctx->pc = 0x132468u;
    // 0x132468: 0x8e221a78  lw          $v0, 0x1A78($s1)
    ctx->pc = 0x132468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6776)));
    // 0x13246c: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13246Cu;
            // 0x132470: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13248Cu;
            goto label_13248c;
        }
    }
    ctx->pc = 0x132474u;
    // 0x132474: 0xc6201a7c  lwc1        $f0, 0x1A7C($s1)
    ctx->pc = 0x132474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132478: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x132478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13247c: 0x0  nop
    ctx->pc = 0x13247cu;
    // NOP
    // 0x132480: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x132480u;
    {
        const bool branch_taken_0x132480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132480) {
            ctx->pc = 0x132484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132480u;
            // 0x132484: 0xae201a7c  sw          $zero, 0x1A7C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6780), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132490u;
            goto label_132490;
        }
    }
    ctx->pc = 0x132488u;
    // 0x132488: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x132488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_13248c:
    // 0x13248c: 0xae201a7c  sw          $zero, 0x1A7C($s1)
    ctx->pc = 0x13248cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6780), GPR_U32(ctx, 0));
label_132490:
    // 0x132490: 0xc0680d0  jal         func_1A0340
    ctx->pc = 0x132490u;
    SET_GPR_U32(ctx, 31, 0x132498u);
    ctx->pc = 0x132494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132490u;
    // 0x132494: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0340u, 0x132490u, 0x132498u)) {
        return;
    }
    ctx->pc = 0x132498u;
label_132498:
    // 0x132498: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x132498u;
    {
        const bool branch_taken_0x132498 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132498u;
        // 0x13249c: 0xae201a74  sw          $zero, 0x1A74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132498) {
            ctx->pc = 0x1324ACu;
            goto label_1324ac;
        }
    }
    ctx->pc = 0x1324A0u;
    // 0x1324a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1324a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1324a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1324A4u;
    {
        const bool branch_taken_0x1324a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324A4u;
        // 0x1324a8: 0xae221a78  sw          $v0, 0x1A78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324a4) {
            ctx->pc = 0x1324B4u;
            goto label_1324b4;
        }
    }
    ctx->pc = 0x1324ACu;
label_1324ac:
    // 0x1324ac: 0xae201a78  sw          $zero, 0x1A78($s1)
    ctx->pc = 0x1324acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6776), GPR_U32(ctx, 0));
label_1324b0:
    // 0x1324b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1324b4:
    // 0x1324b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1324b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1324b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1324b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1324bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1324bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1324c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1324c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1324c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1324c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1324c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1324c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1324cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1324ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1324d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1324D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324D0u;
        // 0x1324d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1324D8u;
}
