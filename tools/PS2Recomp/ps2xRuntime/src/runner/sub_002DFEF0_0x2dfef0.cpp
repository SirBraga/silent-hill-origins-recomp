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

// Function: sub_002DFEF0
// Address: 0x2dfef0 - 0x2e01a8
void sub_002DFEF0_0x2dfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFEF0_0x2dfef0");
#endif

    switch (ctx->pc) {
        case 0x2e0090u: goto label_2e0090;
        case 0x2e0140u: goto label_2e0140;
        default: break;
    }

    ctx->pc = 0x2dfef0u;

    // 0x2dfef0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dfef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfef4: 0xacc00058  sw          $zero, 0x58($a2)
    ctx->pc = 0x2dfef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
    // 0x2dfef8: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2dfef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfefc: 0xc4c10058  lwc1        $f1, 0x58($a2)
    ctx->pc = 0x2dfefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dff00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dff00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff04: 0x0  nop
    ctx->pc = 0x2dff04u;
    // NOP
    // 0x2dff08: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x2DFF08u;
    {
        const bool branch_taken_0x2dff08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF08u;
        // 0x2dff0c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff08) {
            ctx->pc = 0x2E0074u;
            goto label_2e0074;
        }
    }
    ctx->pc = 0x2DFF10u;
    // 0x2dff10: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x2dff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2dff14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2dff18: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2dff18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2dff1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dff20: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2DFF20u;
    {
        const bool branch_taken_0x2dff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF20u;
        // 0x2dff24: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff20) {
            ctx->pc = 0x2E0034u;
            goto label_2e0034;
        }
    }
    ctx->pc = 0x2DFF28u;
    // 0x2dff28: 0xc4c7004c  lwc1        $f7, 0x4C($a2)
    ctx->pc = 0x2dff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2dff2c: 0xc4c80048  lwc1        $f8, 0x48($a2)
    ctx->pc = 0x2dff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2dff30: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dff34: 0x244343e0  addiu       $v1, $v0, 0x43E0
    ctx->pc = 0x2dff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x2dff38: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x2dff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dff3c: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x2dff3cu;
    { uint32_t bits = FAST_READ32(0x6843E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dff40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2dff40u;
    { uint32_t bits = FAST_READ32(0x6843E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dff44: 0xc4c30034  lwc1        $f3, 0x34($a2)
    ctx->pc = 0x2dff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dff48: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x2dff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dff4c: 0xc44443e0  lwc1        $f4, 0x43E0($v0)
    ctx->pc = 0x2dff4cu;
    { uint32_t bits = FAST_READ32(0x6843E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dff50: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2dff50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2dff54: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2dff54u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2dff58: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2dff58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2dff5c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2dff5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dff60: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2dff60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dff64: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2dff64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dff68: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x2dff68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2dff6c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dff6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dff70: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2dff70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2dff74: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x2dff74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2dff78: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2dff78u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2dff7c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2dff7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2dff80: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2dff80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dff84: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2dff84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff88: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x2DFF88u;
    {
        const bool branch_taken_0x2dff88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dff88) {
            ctx->pc = 0x2E003Cu;
            goto label_2e003c;
        }
    }
    ctx->pc = 0x2DFF90u;
    // 0x2dff90: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x2dff90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dff94: 0x0  nop
    ctx->pc = 0x2dff94u;
    // NOP
    // 0x2dff98: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2DFF98u;
    {
        const bool branch_taken_0x2dff98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF98u;
        // 0x2dff9c: 0x225c2  srl         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff98) {
            ctx->pc = 0x2DFFF4u;
            goto label_2dfff4;
        }
    }
    ctx->pc = 0x2DFFA0u;
    // 0x2dffa0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2dffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2dffa4: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x2dffa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2dffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2dffac: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2dffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2dffb0: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x2dffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2dffb4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2dffb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2dffb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFFB8u;
    {
        const bool branch_taken_0x2dffb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFB8u;
        // 0x2dffbc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffb8) {
            ctx->pc = 0x2DFFC8u;
            goto label_2dffc8;
        }
    }
    ctx->pc = 0x2DFFC0u;
    // 0x2dffc0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2dffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2dffc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dffc8:
    // 0x2dffc8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2dffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2dffcc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2dffccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2dffd0: 0x24634400  addiu       $v1, $v1, 0x4400
    ctx->pc = 0x2dffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17408));
    // 0x2dffd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2dffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dffd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dffdc: 0x52443  sra         $a0, $a1, 17
    ctx->pc = 0x2dffdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 17));
    // 0x2dffe0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2dffe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dffe4: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x2dffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2dffe8: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2dffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2dffec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2dffecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2dfff0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2dfff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2dfff4:
    // 0x2dfff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfff8: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x2dfff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfffc: 0x0  nop
    ctx->pc = 0x2dfffcu;
    // NOP
    // 0x2e0000: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E0000u;
    {
        const bool branch_taken_0x2e0000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0000u;
        // 0x2e0004: 0xc7808c20  lwc1        $f0, -0x73E0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0000) {
            ctx->pc = 0x2E0034u;
            goto label_2e0034;
        }
    }
    ctx->pc = 0x2E0008u;
    // 0x2e0008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e0008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e000c: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x2e000cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x2e0010: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x2e0010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x2e0014: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2e0014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0018: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e0018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e001c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e001cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e0020: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2e0020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2e0024: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x2e0024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2e0028: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x2e0028u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e002c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E002Cu;
    {
        const bool branch_taken_0x2e002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E002Cu;
        // 0x2e0030: 0x46023182  mul.s       $f6, $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e002c) {
            ctx->pc = 0x2E003Cu;
            goto label_2e003c;
        }
    }
    ctx->pc = 0x2E0034u;
label_2e0034:
    // 0x2e0034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0038: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e0038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2e003c:
    // 0x2e003c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e003cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0040: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2e0040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0044: 0x0  nop
    ctx->pc = 0x2e0044u;
    // NOP
    // 0x2e0048: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x2E0048u;
    {
        const bool branch_taken_0x2e0048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0048) {
            ctx->pc = 0x2E004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0048u;
            // 0x2e004c: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0078u;
            goto label_2e0078;
        }
    }
    ctx->pc = 0x2E0050u;
    // 0x2e0050: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x2e0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0058: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e005c: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x2e005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0060: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e0060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e0064: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e0064u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e0068: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2e0068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2e006c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2e006cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2e0070: 0xe4c10058  swc1        $f1, 0x58($a2)
    ctx->pc = 0x2e0070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_2e0074:
    // 0x2e0074: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2e0078:
    // 0x2e0078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e007c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E007Cu;
    {
        const bool branch_taken_0x2e007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E007Cu;
        // 0x2e0080: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e007c) {
            ctx->pc = 0x2E0110u;
            goto label_2e0110;
        }
    }
    ctx->pc = 0x2E0084u;
    // 0x2e0084: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x2e0084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0088: 0x27849030  addiu       $a0, $gp, -0x6FD0
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x2e008c: 0x0  nop
    ctx->pc = 0x2e008cu;
    // NOP
label_2e0090:
    // 0x2e0090: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e0094: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e0094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e009c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E009Cu;
    {
        const bool branch_taken_0x2e009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E009Cu;
        // 0x2e00a0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e009c) {
            ctx->pc = 0x2E00A8u;
            goto label_2e00a8;
        }
    }
    ctx->pc = 0x2E00A4u;
    // 0x2e00a4: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x2e00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e00a8:
    // 0x2e00a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e00a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e00ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e00acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e00b0: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E00B0u;
    {
        const bool branch_taken_0x2e00b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e00b0) {
            ctx->pc = 0x2E00B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00B0u;
            // 0x2e00b4: 0xc4600058  lwc1        $f0, 0x58($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E00B8u;
            goto label_2e00b8;
        }
    }
    ctx->pc = 0x2E00B8u;
label_2e00b8:
    // 0x2e00b8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2e00b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e00bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E00BCu;
    {
        const bool branch_taken_0x2e00bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e00bc) {
            ctx->pc = 0x2E00CCu;
            goto label_2e00cc;
        }
    }
    ctx->pc = 0x2E00C4u;
    // 0x2e00c4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2E00C4u;
    {
        const bool branch_taken_0x2e00c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00C4u;
        // 0x2e00c8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00c4) {
            ctx->pc = 0x2E0090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0090;
        }
    }
    ctx->pc = 0x2E00CCu;
label_2e00cc:
    // 0x2e00cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e00ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e00d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E00D0u;
    {
        const bool branch_taken_0x2e00d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e00d0) {
            ctx->pc = 0x2E00E0u;
            goto label_2e00e0;
        }
    }
    ctx->pc = 0x2E00D8u;
    // 0x2e00d8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2E00D8u;
    {
        const bool branch_taken_0x2e00d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00D8u;
        // 0x2e00dc: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00d8) {
            ctx->pc = 0x2E0090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0090;
        }
    }
    ctx->pc = 0x2E00E0u;
label_2e00e0:
    // 0x2e00e0: 0x50a6002d  beql        $a1, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E00E0u;
    {
        const bool branch_taken_0x2e00e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2e00e0) {
            ctx->pc = 0x2E00E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00E0u;
            // 0x2e00e4: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0198u;
            goto label_2e0198;
        }
    }
    ctx->pc = 0x2E00E8u;
    // 0x2e00e8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2e00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e00ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e00f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e00f4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e00f8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e00fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e0100: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e0104: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2e0104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2e0108: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E0108u;
    {
        const bool branch_taken_0x2e0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0108u;
        // 0x2e010c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0108) {
            ctx->pc = 0x2E0188u;
            goto label_2e0188;
        }
    }
    ctx->pc = 0x2E0110u;
label_2e0110:
    // 0x2e0110: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e0110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0114: 0x27879030  addiu       $a3, $gp, -0x6FD0
    ctx->pc = 0x2e0114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x2e0118: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2e0118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e011c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e011cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2e0120: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0124: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e0124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0128: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e0128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e012c: 0x8f859030  lw          $a1, -0x6FD0($gp)
    ctx->pc = 0x2e012cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938672)));
    // 0x2e0130: 0x50a7000d  beql        $a1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0130u;
    {
        const bool branch_taken_0x2e0130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e0130) {
            ctx->pc = 0x2E0134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0130u;
            // 0x2e0134: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0168u;
            goto label_2e0168;
        }
    }
    ctx->pc = 0x2E0138u;
    // 0x2e0138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0138u;
    {
        const bool branch_taken_0x2e0138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0138u;
        // 0x2e013c: 0xc4c10058  lwc1        $f1, 0x58($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0138) {
            ctx->pc = 0x2E0148u;
            goto label_2e0148;
        }
    }
    ctx->pc = 0x2E0140u;
label_2e0140:
    // 0x2e0140: 0x50a70009  beql        $a1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0140u;
    {
        const bool branch_taken_0x2e0140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2e0140) {
            ctx->pc = 0x2E0144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0140u;
            // 0x2e0144: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0168u;
            goto label_2e0168;
        }
    }
    ctx->pc = 0x2E0148u;
label_2e0148:
    // 0x2e0148: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x2e0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e014c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e014cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0150: 0x0  nop
    ctx->pc = 0x2e0150u;
    // NOP
    // 0x2e0154: 0x4502fffa  bc1fl       . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0154u;
    {
        const bool branch_taken_0x2e0154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0154) {
            ctx->pc = 0x2E0158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0154u;
            // 0x2e0158: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0140;
        }
    }
    ctx->pc = 0x2E015Cu;
    // 0x2e015c: 0x54a70008  bnel        $a1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E015Cu;
    {
        const bool branch_taken_0x2e015c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2e015c) {
            ctx->pc = 0x2E0160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E015Cu;
            // 0x2e0160: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0180u;
            goto label_2e0180;
        }
    }
    ctx->pc = 0x2E0164u;
    // 0x2e0164: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2e0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2e0168:
    // 0x2e0168: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2e0168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2e016c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2e016cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2e0170: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0174: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2e0174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2e0178: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0178u;
    {
        const bool branch_taken_0x2e0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0178u;
        // 0x2e017c: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0178) {
            ctx->pc = 0x2E0194u;
            goto label_2e0194;
        }
    }
    ctx->pc = 0x2E0180u;
label_2e0180:
    // 0x2e0180: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2e0180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x2e0184: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2e0184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2e0188:
    // 0x2e0188: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e018c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2e018cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2e0190: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2e0190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_2e0194:
    // 0x2e0194: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e0194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2e0198:
    // 0x2e0198: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e0198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e019c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2e019cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2e01a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01A0u;
        // 0x2e01a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E01A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E01A8u;
}
