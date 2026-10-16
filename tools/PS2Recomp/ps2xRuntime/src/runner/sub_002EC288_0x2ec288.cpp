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

// Function: sub_002EC288
// Address: 0x2ec288 - 0x2eca28
void sub_002EC288_0x2ec288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC288_0x2ec288");
#endif

    switch (ctx->pc) {
        case 0x2ec2ecu: goto label_2ec2ec;
        case 0x2ec3e0u: goto label_2ec3e0;
        case 0x2ec534u: goto label_2ec534;
        case 0x2ec550u: goto label_2ec550;
        case 0x2ec6a8u: goto label_2ec6a8;
        case 0x2ec9f8u: goto label_2ec9f8;
        default: break;
    }

    ctx->pc = 0x2ec288u;

    // 0x2ec288: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ec288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ec28c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2ec28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2ec290: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2ec290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2ec294: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ec294u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec298: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2ec298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2ec29c: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x2ec29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2ec2a0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2ec2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2ec2a4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2ec2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2ec2a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ec2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ec2ac: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2ec2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2ec2b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ec2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ec2b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ec2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ec2b8: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x2ec2b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ec2bc: 0x8e920030  lw          $s2, 0x30($s4)
    ctx->pc = 0x2ec2bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2ec2c0: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2EC2C0u;
    {
        const bool branch_taken_0x2ec2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2C0u;
        // 0x2ec2c4: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2c0) {
            ctx->pc = 0x2EC610u;
            goto label_2ec610;
        }
    }
    ctx->pc = 0x2EC2C8u;
    // 0x2ec2c8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2ec2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ec2cc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2ec2ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2d0: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2ec2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x2ec2d4: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EC2D4u;
    {
        const bool branch_taken_0x2ec2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2D4u;
        // 0x2ec2d8: 0x2616002c  addiu       $s6, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2d4) {
            ctx->pc = 0x2EC454u;
            goto label_2ec454;
        }
    }
    ctx->pc = 0x2EC2DCu;
    // 0x2ec2dc: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EC2DCu;
    {
        const bool branch_taken_0x2ec2dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2DCu;
        // 0x2ec2e0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2dc) {
            ctx->pc = 0x2EC458u;
            goto label_2ec458;
        }
    }
    ctx->pc = 0x2EC2E4u;
    // 0x2ec2e4: 0xc0bb682  jal         func_2EDA08
    ctx->pc = 0x2EC2E4u;
    SET_GPR_U32(ctx, 31, 0x2EC2ECu);
    ctx->pc = 0x2EC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2E4u;
    // 0x2ec2e8: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDA08u, 0x2EC2E4u, 0x2EC2ECu)) {
        return;
    }
    ctx->pc = 0x2EC2ECu;
label_2ec2ec:
    // 0x2ec2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ec2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f0: 0x32630200  andi        $v1, $s3, 0x200
    ctx->pc = 0x2ec2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    // 0x2ec2f4: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2ec2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2ec2f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC2F8u;
    {
        const bool branch_taken_0x2ec2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2F8u;
        // 0x2ec2fc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2f8) {
            ctx->pc = 0x2EC308u;
            goto label_2ec308;
        }
    }
    ctx->pc = 0x2EC300u;
    // 0x2ec300: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2ec304: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2ec304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_2ec308:
    // 0x2ec308: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x2ec308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
    // 0x2ec30c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC30Cu;
    {
        const bool branch_taken_0x2ec30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC30Cu;
        // 0x2ec310: 0x8e820030  lw          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec30c) {
            ctx->pc = 0x2EC31Cu;
            goto label_2ec31c;
        }
    }
    ctx->pc = 0x2EC314u;
    // 0x2ec314: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2ec314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2ec318: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_2ec31c:
    // 0x2ec31c: 0x32640001  andi        $a0, $s3, 0x1
    ctx->pc = 0x2ec31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2ec320: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ec320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2ec324: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC324u;
    {
        const bool branch_taken_0x2ec324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC324u;
        // 0x2ec328: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec324) {
            ctx->pc = 0x2EC364u;
            goto label_2ec364;
        }
    }
    ctx->pc = 0x2EC32Cu;
    // 0x2ec32c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ec32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ec330: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC330u;
    {
        const bool branch_taken_0x2ec330 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC330u;
        // 0x2ec334: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec330) {
            ctx->pc = 0x2EC348u;
            goto label_2ec348;
        }
    }
    ctx->pc = 0x2EC338u;
    // 0x2ec338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec33c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC340u;
    {
        const bool branch_taken_0x2ec340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC340u;
        // 0x2ec344: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec340) {
            ctx->pc = 0x2EC360u;
            goto label_2ec360;
        }
    }
    ctx->pc = 0x2EC348u;
label_2ec348:
    // 0x2ec348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec34c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec358: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ec358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ec35c: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x2ec35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2ec360:
    // 0x2ec360: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x2ec360u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_2ec364:
    // 0x2ec364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec36c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ec36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ec370: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ec370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec374: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x2ec374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2ec378: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x2ec378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2ec37c: 0xe62c0064  swc1        $f12, 0x64($s1)
    ctx->pc = 0x2ec37cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2ec380: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ec380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ec384: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ec384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ec388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec38c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC38Cu;
    {
        const bool branch_taken_0x2ec38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC38Cu;
        // 0x2ec390: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec38c) {
            ctx->pc = 0x2EC3ECu;
            goto label_2ec3ec;
        }
    }
    ctx->pc = 0x2EC394u;
    // 0x2ec394: 0xc78082e0  lwc1        $f0, -0x7D20($gp)
    ctx->pc = 0x2ec394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec398: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x2ec398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2ec39c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x2ec39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2ec3a0: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2ec3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ec3a4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2ec3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2ec3a8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2ec3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2ec3ac: 0x96820058  lhu         $v0, 0x58($s4)
    ctx->pc = 0x2ec3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2ec3b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ec3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ec3b4: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x2ec3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec3b8: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x2ec3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec3bc: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x2ec3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x2ec3c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ec3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ec3c4: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x2ec3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec3c8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x2ec3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec3cc: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x2ec3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x2ec3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC3D0u;
    {
        const bool branch_taken_0x2ec3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3D0u;
        // 0x2ec3d4: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3d0) {
            ctx->pc = 0x2EC3E0u;
            goto label_2ec3e0;
        }
    }
    ctx->pc = 0x2EC3D8u;
    // 0x2ec3d8: 0xc0bb36e  jal         func_2ECDB8
    ctx->pc = 0x2EC3D8u;
    SET_GPR_U32(ctx, 31, 0x2EC3E0u);
    ctx->pc = 0x2EC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC3D8u;
    // 0x2ec3dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECDB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECDB8u, 0x2EC3D8u, 0x2EC3E0u)) {
        return;
    }
    ctx->pc = 0x2EC3E0u;
label_2ec3e0:
    // 0x2ec3e0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ec3e4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EC3E4u;
    {
        const bool branch_taken_0x2ec3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3e4) {
            ctx->pc = 0x2EC3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3E4u;
            // 0x2ec3e8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC3ECu;
label_2ec3ec:
    // 0x2ec3ec: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x2ec3f0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2ec3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ec3f4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC3F4u;
    {
        const bool branch_taken_0x2ec3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3f4) {
            ctx->pc = 0x2EC3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3F4u;
            // 0x2ec3f8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC3FCu;
    // 0x2ec3fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2ec3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ec400: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC400u;
    {
        const bool branch_taken_0x2ec400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC400u;
        // 0x2ec404: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec400) {
            ctx->pc = 0x2EC43Cu;
            goto label_2ec43c;
        }
    }
    ctx->pc = 0x2EC408u;
    // 0x2ec408: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2ec408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2ec40c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC40Cu;
    {
        const bool branch_taken_0x2ec40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC40Cu;
        // 0x2ec410: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec40c) {
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC414u;
    // 0x2ec414: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ec418: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC418u;
    {
        const bool branch_taken_0x2ec418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC418u;
        // 0x2ec41c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec418) {
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC420u;
    // 0x2ec420: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ec420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec424: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2ec424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2ec428: 0x3463fff9  ori         $v1, $v1, 0xFFF9
    ctx->pc = 0x2ec428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65529);
    // 0x2ec42c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2ec42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ec430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC434u;
    {
        const bool branch_taken_0x2ec434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC434u;
        // 0x2ec438: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec434) {
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC43Cu;
label_2ec43c:
    // 0x2ec43c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2ec43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2ec440:
    // 0x2ec440: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2ec440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ec444: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ec444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec448: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x2ec448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x2ec44c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ec44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ec450: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x2ec450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_2ec454:
    // 0x2ec454: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x2ec454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_2ec458:
    // 0x2ec458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC458u;
    {
        const bool branch_taken_0x2ec458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC458u;
        // 0x2ec45c: 0x32620100  andi        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec458) {
            ctx->pc = 0x2EC478u;
            goto label_2ec478;
        }
    }
    ctx->pc = 0x2EC460u;
    // 0x2ec460: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ec460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ec464: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ec464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ec468: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ec468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ec46c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec470: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2ec470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2ec474: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2ec474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2ec478:
    // 0x2ec478: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EC478u;
    {
        const bool branch_taken_0x2ec478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec478) {
            ctx->pc = 0x2EC47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC478u;
            // 0x2ec47c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC500u;
            goto label_2ec500;
        }
    }
    ctx->pc = 0x2EC480u;
    // 0x2ec480: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2ec480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec484: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ec484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec488: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x2ec488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2ec48c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec490: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x2ec490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ec494: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2EC494u;
    {
        const bool branch_taken_0x2ec494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC494u;
        // 0x2ec498: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec494) {
            ctx->pc = 0x2EC4CCu;
            goto label_2ec4cc;
        }
    }
    ctx->pc = 0x2EC49Cu;
    // 0x2ec49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec4a0: 0x26a40640  addiu       $a0, $s5, 0x640
    ctx->pc = 0x2ec4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x2ec4a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ec4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec4a8: 0x26a50648  addiu       $a1, $s5, 0x648
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1608));
    // 0x2ec4ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec4b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ec4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ec4b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ec4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ec4b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ec4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ec4bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ec4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec4c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ec4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ec4c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EC4C4u;
    {
        const bool branch_taken_0x2ec4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4C4u;
        // 0x2ec4c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4c4) {
            ctx->pc = 0x2EC4FCu;
            goto label_2ec4fc;
        }
    }
    ctx->pc = 0x2EC4CCu;
label_2ec4cc:
    // 0x2ec4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec4d0: 0x26a50640  addiu       $a1, $s5, 0x640
    ctx->pc = 0x2ec4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x2ec4d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ec4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ec4d8: 0x63027  nor         $a2, $zero, $a2
    ctx->pc = 0x2ec4d8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x2ec4dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec4e0: 0x26a40648  addiu       $a0, $s5, 0x648
    ctx->pc = 0x2ec4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1608));
    // 0x2ec4e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ec4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec4e8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2ec4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2ec4ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ec4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ec4f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec4f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ec4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ec4f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2ec4fc:
    // 0x2ec4fc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2ec4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2ec500:
    // 0x2ec500: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC500u;
    {
        const bool branch_taken_0x2ec500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC500u;
        // 0x2ec504: 0x32620006  andi        $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec500) {
            ctx->pc = 0x2EC524u;
            goto label_2ec524;
        }
    }
    ctx->pc = 0x2EC508u;
    // 0x2ec508: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x2ec508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec50c: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x2ec50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec510: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ec514: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec518: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec51c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2ec51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ec520: 0x32620006  andi        $v0, $s3, 0x6
    ctx->pc = 0x2ec520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)6);
label_2ec524:
    // 0x2ec524: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC524u;
    {
        const bool branch_taken_0x2ec524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec524) {
            ctx->pc = 0x2EC528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC524u;
            // 0x2ec528: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC538u;
            goto label_2ec538;
        }
    }
    ctx->pc = 0x2EC52Cu;
    // 0x2ec52c: 0xc0bb28a  jal         func_2ECA28
    ctx->pc = 0x2EC52Cu;
    SET_GPR_U32(ctx, 31, 0x2EC534u);
    ctx->pc = 0x2EC530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC52Cu;
    // 0x2ec530: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECA28u, 0x2EC52Cu, 0x2EC534u)) {
        return;
    }
    ctx->pc = 0x2EC534u;
label_2ec534:
    // 0x2ec534: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2ec534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ec538:
    // 0x2ec538: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ec53c: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EC53Cu;
    {
        const bool branch_taken_0x2ec53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec53c) {
            ctx->pc = 0x2EC540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC53Cu;
            // 0x2ec540: 0xa6200028  sh          $zero, 0x28($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC610u;
            goto label_2ec610;
        }
    }
    ctx->pc = 0x2EC544u;
    // 0x2ec544: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2ec544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ec548: 0xc0bb694  jal         func_2EDA50
    ctx->pc = 0x2EC548u;
    SET_GPR_U32(ctx, 31, 0x2EC550u);
    ctx->pc = 0x2EC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC548u;
    // 0x2ec54c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDA50u, 0x2EC548u, 0x2EC550u)) {
        return;
    }
    ctx->pc = 0x2EC550u;
label_2ec550:
    // 0x2ec550: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ec550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ec554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec558: 0x2ca4008d  sltiu       $a0, $a1, 0x8D
    ctx->pc = 0x2ec558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)141) ? 1 : 0);
    // 0x2ec55c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ec55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ec560: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ec560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ec564: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ec564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ec568: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2ec568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2ec56c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ec56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2ec570: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2ec570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ec574: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EC574u;
    {
        const bool branch_taken_0x2ec574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC574u;
        // 0x2ec578: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec574) {
            ctx->pc = 0x2EC5ECu;
            goto label_2ec5ec;
        }
    }
    ctx->pc = 0x2EC57Cu;
    // 0x2ec57c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ec580: 0x24a4ff74  addiu       $a0, $a1, -0x8C
    ctx->pc = 0x2ec580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967156));
    // 0x2ec584: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2ec584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2ec588: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ec588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ec58c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ec58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ec590: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2ec590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2ec594: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2ec594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2ec598: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ec59c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2ec59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec5a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC5A0u;
    {
        const bool branch_taken_0x2ec5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5a0) {
            ctx->pc = 0x2EC5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC5A0u;
            // 0x2ec5a4: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC5A8u;
            goto label_2ec5a8;
        }
    }
    ctx->pc = 0x2EC5A8u;
label_2ec5a8:
    // 0x2ec5a8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2ec5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ec5ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2ec5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2ec5b0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2ec5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2ec5b4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ec5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ec5b8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2ec5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2ec5bc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2ec5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2ec5c0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EC5C0u;
    {
        const bool branch_taken_0x2ec5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5C0u;
        // 0x2ec5c4: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5c0) {
            ctx->pc = 0x2EC60Cu;
            goto label_2ec60c;
        }
    }
    ctx->pc = 0x2EC5C8u;
    // 0x2ec5c8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ec5cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec5d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC5D0u;
    {
        const bool branch_taken_0x2ec5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D0u;
        // 0x2ec5d4: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5d0) {
            ctx->pc = 0x2EC5E0u;
            goto label_2ec5e0;
        }
    }
    ctx->pc = 0x2EC5D8u;
    // 0x2ec5d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EC5D8u;
    {
        const bool branch_taken_0x2ec5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5D8u;
        // 0x2ec5dc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5d8) {
            ctx->pc = 0x2EC60Cu;
            goto label_2ec60c;
        }
    }
    ctx->pc = 0x2EC5E0u;
label_2ec5e0:
    // 0x2ec5e0: 0x24a2ffe4  addiu       $v0, $a1, -0x1C
    ctx->pc = 0x2ec5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967268));
    // 0x2ec5e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC5E4u;
    {
        const bool branch_taken_0x2ec5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5E4u;
        // 0x2ec5e8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5e4) {
            ctx->pc = 0x2EC60Cu;
            goto label_2ec60c;
        }
    }
    ctx->pc = 0x2EC5ECu;
label_2ec5ec:
    // 0x2ec5ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ec5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ec5f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ec5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ec5f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ec5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ec5f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2ec5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2ec5fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2ec5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2ec600: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ec600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ec604: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2ec608: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2ec608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_2ec60c:
    // 0x2ec60c: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x2ec60cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
label_2ec610:
    // 0x2ec610: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2ec610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2ec614: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ec614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec618: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ec618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ec61c: 0x106200f8  beq         $v1, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2EC61Cu;
    {
        const bool branch_taken_0x2ec61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC61Cu;
        // 0x2ec620: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec61c) {
            ctx->pc = 0x2ECA00u;
            goto label_2eca00;
        }
    }
    ctx->pc = 0x2EC624u;
    // 0x2ec624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ec624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec628: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC628u;
    {
        const bool branch_taken_0x2ec628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ec628) {
            ctx->pc = 0x2EC62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC628u;
            // 0x2ec62c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC63Cu;
            goto label_2ec63c;
        }
    }
    ctx->pc = 0x2EC630u;
    // 0x2ec630: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2ec630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ec634: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC634u;
    {
        const bool branch_taken_0x2ec634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec634) {
            ctx->pc = 0x2EC638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC634u;
            // 0x2ec638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC63Cu;
            goto label_2ec63c;
        }
    }
    ctx->pc = 0x2EC63Cu;
label_2ec63c:
    // 0x2ec63c: 0x108000f0  beqz        $a0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x2EC63Cu;
    {
        const bool branch_taken_0x2ec63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC63Cu;
        // 0x2ec640: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec63c) {
            ctx->pc = 0x2ECA00u;
            goto label_2eca00;
        }
    }
    ctx->pc = 0x2EC644u;
    // 0x2ec644: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x2ec644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec648: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x2ec648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec64c: 0x6a22003b  ldl         $v0, 0x3B($s1)
    ctx->pc = 0x2ec64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ec650: 0x6e220034  ldr         $v0, 0x34($s1)
    ctx->pc = 0x2ec650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ec654: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2ec654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2ec658: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2ec658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec65c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2ec65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec660: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2ec660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2ec664: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec668: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ec668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec66c: 0x6a260047  ldl         $a2, 0x47($s1)
    ctx->pc = 0x2ec66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ec670: 0x6e260040  ldr         $a2, 0x40($s1)
    ctx->pc = 0x2ec670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ec674: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x2ec674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2ec678: 0xb3a60013  sdl         $a2, 0x13($sp)
    ctx->pc = 0x2ec678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec67c: 0xb7a6000c  sdr         $a2, 0xC($sp)
    ctx->pc = 0x2ec67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec680: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2ec680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x2ec684: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2ec684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ec688: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ec688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ec68c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2ec68cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ec690: 0x26a413d8  addiu       $a0, $s5, 0x13D8
    ctx->pc = 0x2ec690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5080));
    // 0x2ec694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ec694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ec698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec69c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2ec69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ec6a0: 0xc0b89f6  jal         func_2E27D8
    ctx->pc = 0x2EC6A0u;
    SET_GPR_U32(ctx, 31, 0x2EC6A8u);
    ctx->pc = 0x2EC6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC6A0u;
    // 0x2ec6a4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E27D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E27D8u, 0x2EC6A0u, 0x2EC6A8u)) {
        return;
    }
    ctx->pc = 0x2EC6A8u;
label_2ec6a8:
    // 0x2ec6a8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ec6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6ac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ec6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ec6b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ec6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ec6b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC6B4u;
    {
        const bool branch_taken_0x2ec6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6B4u;
        // 0x2ec6b8: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6b4) {
            ctx->pc = 0x2EC6C8u;
            goto label_2ec6c8;
        }
    }
    ctx->pc = 0x2EC6BCu;
    // 0x2ec6bc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ec6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6c0: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x2ec6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2ec6c4: 0x0  nop
    ctx->pc = 0x2ec6c4u;
    // NOP
label_2ec6c8:
    // 0x2ec6c8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2ec6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec6cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ec6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ec6d0: 0xe6230064  swc1        $f3, 0x64($s1)
    ctx->pc = 0x2ec6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2ec6d4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ec6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6d8: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2EC6D8u;
    {
        const bool branch_taken_0x2ec6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC6D8u;
        // 0x2ec6dc: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6d8) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC6E0u;
    // 0x2ec6e0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ec6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ec6e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2ec6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ec6e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ec6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ec6ec: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ec6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ec6f0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ec6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ec6f4: 0x46051882  mul.s       $f2, $f3, $f5
    ctx->pc = 0x2ec6f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2ec6f8: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec6f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2ec6fc: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x2ec6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ec700: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec704: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x2ec704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2ec708: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec70c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2ec70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ec710: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2EC710u;
    {
        const bool branch_taken_0x2ec710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC710u;
        // 0x2ec714: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec710) {
            ctx->pc = 0x2EC844u;
            goto label_2ec844;
        }
    }
    ctx->pc = 0x2EC718u;
    // 0x2ec718: 0xc78082e4  lwc1        $f0, -0x7D1C($gp)
    ctx->pc = 0x2ec718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec71c: 0xc78282e8  lwc1        $f2, -0x7D18($gp)
    ctx->pc = 0x2ec71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec720: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x2ec720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x2ec724: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ec724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ec728: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ec728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ec72c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec730: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ec730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ec734: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2ec734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ec738: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2ec738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ec73c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ec73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ec740: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2ec740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ec744: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x2ec744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec748: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2ec748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec750: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x2ec750u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ec754: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ec754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ec758: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ec758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec75c: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x2ec75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ec760: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ec760u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ec764: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x2ec764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec768: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ec768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ec76c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec770: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ec770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec774: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ec774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec778: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x2ec778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec77c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x2ec77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ec780: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ec780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec784: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ec784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ec788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec78c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ec794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec798: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2ec798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec79c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x2ec79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ec7a0: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x2ec7a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ec7a4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec7a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ec7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec7ac: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2ec7acu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2ec7b0: 0xc78682ec  lwc1        $f6, -0x7D14($gp)
    ctx->pc = 0x2ec7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ec7b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ec7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec7b8: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x2ec7b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2ec7bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2ec7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec7c0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2ec7c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2ec7c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec7c8: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2ec7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2ec7cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2ec7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2ec7d0: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x2ec7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x2ec7d4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x2ec7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec7d8: 0xc6240060  lwc1        $f4, 0x60($s1)
    ctx->pc = 0x2ec7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ec7dc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2ec7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec7e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ec7e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ec7e4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2ec7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec7e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ec7e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ec7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec7f0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2ec7f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ec7f4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ec7f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ec7f8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2ec7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2ec7fc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2ec7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2ec800: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2ec800u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2ec804: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec808: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ec808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec80c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2ec80cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2ec810: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec814: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ec814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ec818: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec81c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ec81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ec820: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ec824: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec828: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ec828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ec82c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ec82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ec830: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2ec834: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x2ec834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x2ec838: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2ec838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ec83c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2EC83Cu;
    {
        const bool branch_taken_0x2ec83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC83Cu;
        // 0x2ec840: 0xace50010  sw          $a1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec83c) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC844u;
label_2ec844:
    // 0x2ec844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ec844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec848: 0x28a60080  slti        $a2, $a1, 0x80
    ctx->pc = 0x2ec848u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ec84c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC84Cu;
    {
        const bool branch_taken_0x2ec84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC84Cu;
        // 0x2ec850: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec84c) {
            ctx->pc = 0x2EC894u;
            goto label_2ec894;
        }
    }
    ctx->pc = 0x2EC854u;
    // 0x2ec854: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ec854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ec858: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ec858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ec85c: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x2ec85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x2ec860: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ec860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ec864: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ec864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec86c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ec86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec870: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ec870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ec874: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ec874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec878: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ec87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ec87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec880: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec884: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ec884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec888: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2ec888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ec88c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC88Cu;
    {
        const bool branch_taken_0x2ec88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC88Cu;
        // 0x2ec890: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec88c) {
            ctx->pc = 0x2EC8D4u;
            goto label_2ec8d4;
        }
    }
    ctx->pc = 0x2EC894u;
label_2ec894:
    // 0x2ec894: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ec898: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ec898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ec89c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x2ec89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec8a0: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x2ec8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x2ec8a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ec8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ec8a8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ec8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ec8ac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ec8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ec8b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec8b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ec8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec8b8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2ec8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ec8bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2ec8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec8c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ec8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec8c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec8c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ec8c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec8cc: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2ec8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ec8d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ec8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ec8d4:
    // 0x2ec8d4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2ec8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec8d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec8dc: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2ec8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2ec8e0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2ec8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2ec8e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ec8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec8e8: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x2ec8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ec8ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC8ECu;
    {
        const bool branch_taken_0x2ec8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8ECu;
        // 0x2ec8f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8ec) {
            ctx->pc = 0x2EC900u;
            goto label_2ec900;
        }
    }
    ctx->pc = 0x2EC8F4u;
    // 0x2ec8f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ec8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec8f8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC8F8u;
    {
        const bool branch_taken_0x2ec8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8F8u;
        // 0x2ec8fc: 0x29420080  slti        $v0, $t2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8f8) {
            ctx->pc = 0x2EC908u;
            goto label_2ec908;
        }
    }
    ctx->pc = 0x2EC900u;
label_2ec900:
    // 0x2ec900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ec900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec904: 0x29420080  slti        $v0, $t2, 0x80
    ctx->pc = 0x2ec904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
label_2ec908:
    // 0x2ec908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC908u;
    {
        const bool branch_taken_0x2ec908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec908) {
            ctx->pc = 0x2EC920u;
            goto label_2ec920;
        }
    }
    ctx->pc = 0x2EC910u;
    // 0x2ec910: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC910u;
    {
        const bool branch_taken_0x2ec910 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec910) {
            ctx->pc = 0x2EC914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC910u;
            // 0x2ec914: 0x4482b  sltu        $t1, $zero, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC92Cu;
            goto label_2ec92c;
        }
    }
    ctx->pc = 0x2EC918u;
    // 0x2ec918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC918u;
    {
        const bool branch_taken_0x2ec918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC918u;
        // 0x2ec91c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec918) {
            ctx->pc = 0x2EC92Cu;
            goto label_2ec92c;
        }
    }
    ctx->pc = 0x2EC920u;
label_2ec920:
    // 0x2ec920: 0x54c00002  bnel        $a2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC920u;
    {
        const bool branch_taken_0x2ec920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec920) {
            ctx->pc = 0x2EC924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC920u;
            // 0x2ec924: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC92Cu;
            goto label_2ec92c;
        }
    }
    ctx->pc = 0x2EC928u;
    // 0x2ec928: 0x2c880001  sltiu       $t0, $a0, 0x1
    ctx->pc = 0x2ec928u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ec92c:
    // 0x2ec92c: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC92Cu;
    {
        const bool branch_taken_0x2ec92c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec92c) {
            ctx->pc = 0x2EC974u;
            goto label_2ec974;
        }
    }
    ctx->pc = 0x2EC934u;
    // 0x2ec934: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2ec934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec938: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2ec938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec940: 0x0  nop
    ctx->pc = 0x2ec940u;
    // NOP
    // 0x2ec944: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC944u;
    {
        const bool branch_taken_0x2ec944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC944u;
        // 0x2ec948: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec944) {
            ctx->pc = 0x2EC960u;
            goto label_2ec960;
        }
    }
    ctx->pc = 0x2EC94Cu;
    // 0x2ec94c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC94Cu;
    {
        const bool branch_taken_0x2ec94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec94c) {
            ctx->pc = 0x2EC950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC94Cu;
            // 0x2ec950: 0x34a20004  ori         $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC954u;
    // 0x2ec954: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ec954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec958: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EC958u;
    {
        const bool branch_taken_0x2ec958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC958u;
        // 0x2ec95c: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec958) {
            ctx->pc = 0x2EC9C4u;
            goto label_2ec9c4;
        }
    }
    ctx->pc = 0x2EC960u;
label_2ec960:
    // 0x2ec960: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2ec960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2ec964: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EC964u;
    {
        const bool branch_taken_0x2ec964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC964u;
        // 0x2ec968: 0x34a20002  ori         $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec964) {
            ctx->pc = 0x2EC9BCu;
            goto label_2ec9bc;
        }
    }
    ctx->pc = 0x2EC96Cu;
    // 0x2ec96c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC96Cu;
    {
        const bool branch_taken_0x2ec96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC96Cu;
        // 0x2ec970: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec96c) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC974u;
label_2ec974:
    // 0x2ec974: 0x51200016  beql        $t1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EC974u;
    {
        const bool branch_taken_0x2ec974 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec974) {
            ctx->pc = 0x2EC978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC974u;
            // 0x2ec978: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9D0u;
            goto label_2ec9d0;
        }
    }
    ctx->pc = 0x2EC97Cu;
    // 0x2ec97c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2ec97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec980: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2ec980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ec984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec988: 0x0  nop
    ctx->pc = 0x2ec988u;
    // NOP
    // 0x2ec98c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC98Cu;
    {
        const bool branch_taken_0x2ec98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC98Cu;
        // 0x2ec990: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec98c) {
            ctx->pc = 0x2EC9B0u;
            goto label_2ec9b0;
        }
    }
    ctx->pc = 0x2EC994u;
    // 0x2ec994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC994u;
    {
        const bool branch_taken_0x2ec994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec994) {
            ctx->pc = 0x2EC9A4u;
            goto label_2ec9a4;
        }
    }
    ctx->pc = 0x2EC99Cu;
    // 0x2ec99c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC99Cu;
    {
        const bool branch_taken_0x2ec99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC99Cu;
        // 0x2ec9a0: 0x34a20004  ori         $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec99c) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC9A4u;
label_2ec9a4:
    // 0x2ec9a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec9a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC9A8u;
    {
        const bool branch_taken_0x2ec9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9A8u;
        // 0x2ec9ac: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9a8) {
            ctx->pc = 0x2EC9C4u;
            goto label_2ec9c4;
        }
    }
    ctx->pc = 0x2EC9B0u;
label_2ec9b0:
    // 0x2ec9b0: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2ec9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2ec9b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC9B4u;
    {
        const bool branch_taken_0x2ec9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9B4u;
        // 0x2ec9b8: 0x34a20002  ori         $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9b4) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ec9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ec9c0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2ec9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_2ec9c4:
    // 0x2ec9c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2ec9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2ec9c8:
    // 0x2ec9c8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2ec9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2ec9cc:
    // 0x2ec9cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ec9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ec9d0:
    // 0x2ec9d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ec9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2ec9d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC9D4u;
    {
        const bool branch_taken_0x2ec9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D4u;
        // 0x2ec9d8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9d4) {
            ctx->pc = 0x2ECA00u;
            goto label_2eca00;
        }
    }
    ctx->pc = 0x2EC9DCu;
    // 0x2ec9dc: 0x96820058  lhu         $v0, 0x58($s4)
    ctx->pc = 0x2ec9dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2ec9e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ec9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ec9e4: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x2ec9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec9e8: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x2ec9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec9ec: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x2ec9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x2ec9f0: 0xc0bb28a  jal         func_2ECA28
    ctx->pc = 0x2EC9F0u;
    SET_GPR_U32(ctx, 31, 0x2EC9F8u);
    ctx->pc = 0x2EC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9F0u;
    // 0x2ec9f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECA28u, 0x2EC9F0u, 0x2EC9F8u)) {
        return;
    }
    ctx->pc = 0x2EC9F8u;
label_2ec9f8:
    // 0x2ec9f8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ec9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9fc: 0x0  nop
    ctx->pc = 0x2ec9fcu;
    // NOP
label_2eca00:
    // 0x2eca00: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2eca00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eca04: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2eca04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eca08: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2eca08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eca0c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2eca0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eca10: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2eca10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eca14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2eca14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eca18: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2eca18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eca1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2eca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eca20: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA20u;
        // 0x2eca24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECA28u;
}
