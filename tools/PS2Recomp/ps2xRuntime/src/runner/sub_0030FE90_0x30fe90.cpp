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

// Function: sub_0030FE90
// Address: 0x30fe90 - 0x310030
void sub_0030FE90_0x30fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FE90_0x30fe90");
#endif

    switch (ctx->pc) {
        case 0x30fec0u: goto label_30fec0;
        case 0x30feccu: goto label_30fecc;
        case 0x30ff94u: goto label_30ff94;
        case 0x30ffb8u: goto label_30ffb8;
        case 0x30fff8u: goto label_30fff8;
        default: break;
    }

    ctx->pc = 0x30fe90u;

    // 0x30fe90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30fe94: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30fe98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30fe98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30fe9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fea0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x30fea4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x30fea8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30feac: 0x26450068  addiu       $a1, $s2, 0x68
    ctx->pc = 0x30feacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x30feb0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x30feb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x30feb4: 0x26470060  addiu       $a3, $s2, 0x60
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x30feb8: 0xc0c47b2  jal         func_311EC8
    ctx->pc = 0x30FEB8u;
    SET_GPR_U32(ctx, 31, 0x30FEC0u);
    ctx->pc = 0x30FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FEB8u;
    // 0x30febc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x311EC8u, 0x30FEB8u, 0x30FEC0u)) {
        return;
    }
    ctx->pc = 0x30FEC0u;
label_30fec0:
    // 0x30fec0: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x30fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x30fec4: 0xc0ad00c  jal         func_2B4030
    ctx->pc = 0x30FEC4u;
    SET_GPR_U32(ctx, 31, 0x30FECCu);
    ctx->pc = 0x30FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FEC4u;
    // 0x30fec8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4030u, 0x30FEC4u, 0x30FECCu)) {
        return;
    }
    ctx->pc = 0x30FECCu;
label_30fecc:
    // 0x30fecc: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x30feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fed0: 0xc6420078  lwc1        $f2, 0x78($s2)
    ctx->pc = 0x30fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30fed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30fed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30fed8: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x30fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fedc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30fedcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30fee0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30fee0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30fee4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30fee8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x30fee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30feec: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x30feecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30fef0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x30fef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30fef4: 0x0  nop
    ctx->pc = 0x30fef4u;
    // NOP
    // 0x30fef8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x30FEF8u;
    {
        const bool branch_taken_0x30fef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEF8u;
        // 0x30fefc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fef8) {
            ctx->pc = 0x30FF08u;
            goto label_30ff08;
        }
    }
    ctx->pc = 0x30FF00u;
    // 0x30ff00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30ff04: 0x0  nop
    ctx->pc = 0x30ff04u;
    // NOP
label_30ff08:
    // 0x30ff08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ff08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ff0c: 0x0  nop
    ctx->pc = 0x30ff0cu;
    // NOP
    // 0x30ff10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30FF10u;
    {
        const bool branch_taken_0x30ff10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ff10) {
            ctx->pc = 0x30FF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF10u;
            // 0x30ff14: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF18u;
            goto label_30ff18;
        }
    }
    ctx->pc = 0x30FF18u;
label_30ff18:
    // 0x30ff18: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x30ff18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ff1c: 0x0  nop
    ctx->pc = 0x30ff1cu;
    // NOP
    // 0x30ff20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30FF20u;
    {
        const bool branch_taken_0x30ff20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF20u;
        // 0x30ff24: 0x3c022131  lui         $v0, 0x2131 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff20) {
            ctx->pc = 0x30FF2Cu;
            goto label_30ff2c;
        }
    }
    ctx->pc = 0x30FF28u;
    // 0x30ff28: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x30ff28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_30ff2c:
    // 0x30ff2c: 0x34422300  ori         $v0, $v0, 0x2300
    ctx->pc = 0x30ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8960);
    // 0x30ff30: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x30ff30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x30ff34: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x30ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30ff38: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FF38u;
    {
        const bool branch_taken_0x30ff38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ff38) {
            ctx->pc = 0x30FF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF38u;
            // 0x30ff3c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF4Cu;
            goto label_30ff4c;
        }
    }
    ctx->pc = 0x30FF40u;
    // 0x30ff40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ff44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30ff44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ff48: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x30ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_30ff4c:
    // 0x30ff4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ff50: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FF50u;
    {
        const bool branch_taken_0x30ff50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ff50) {
            ctx->pc = 0x30FF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF50u;
            // 0x30ff54: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF64u;
            goto label_30ff64;
        }
    }
    ctx->pc = 0x30FF58u;
    // 0x30ff58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ff5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30ff5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ff60: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x30ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_30ff64:
    // 0x30ff64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ff68: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30FF68u;
    {
        const bool branch_taken_0x30ff68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ff68) {
            ctx->pc = 0x30FF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF68u;
            // 0x30ff6c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF7Cu;
            goto label_30ff7c;
        }
    }
    ctx->pc = 0x30FF70u;
    // 0x30ff70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ff74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30ff74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ff78: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x30ff78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_30ff7c:
    // 0x30ff7c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x30ff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30ff80: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x30ff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30ff84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff88: 0x26470080  addiu       $a3, $s2, 0x80
    ctx->pc = 0x30ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x30ff8c: 0xc0a4c74  jal         func_2931D0
    ctx->pc = 0x30FF8Cu;
    SET_GPR_U32(ctx, 31, 0x30FF94u);
    ctx->pc = 0x30FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FF8Cu;
    // 0x30ff90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2931D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2931D0u, 0x30FF8Cu, 0x30FF94u)) {
        return;
    }
    ctx->pc = 0x30FF94u;
label_30ff94:
    // 0x30ff94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x30ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x30ff98: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x30ff98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30ff9c: 0xc4753de8  lwc1        $f21, 0x3DE8($v1)
    ctx->pc = 0x30ff9cu;
    { uint32_t bits = FAST_READ32(0x6B3DE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30ffa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ffa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x30ffacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x30ffb0: 0xc0c400c  jal         func_310030
    ctx->pc = 0x30FFB0u;
    SET_GPR_U32(ctx, 31, 0x30FFB8u);
    ctx->pc = 0x30FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFB0u;
    // 0x30ffb4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310030u, 0x30FFB0u, 0x30FFB8u)) {
        return;
    }
    ctx->pc = 0x30FFB8u;
label_30ffb8:
    // 0x30ffb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30ffb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30ffbc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x30ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ffc0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x30ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ffc4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30ffc4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30ffc8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x30ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ffcc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30ffccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30ffd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30ffd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30ffd4: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x30ffd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30ffd8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x30ffd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30ffdc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x30ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30ffe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ffe8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x30ffe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x30ffec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30ffecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fff0: 0xc0c400c  jal         func_310030
    ctx->pc = 0x30FFF0u;
    SET_GPR_U32(ctx, 31, 0x30FFF8u);
    ctx->pc = 0x30FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFF0u;
    // 0x30fff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310030u, 0x30FFF0u, 0x30FFF8u)) {
        return;
    }
    ctx->pc = 0x30FFF8u;
label_30fff8:
    // 0x30fff8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x30fffc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x30fffcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x310000: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x310000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x310004: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x310004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x310008: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x310008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31000c: 0xe6540064  swc1        $f20, 0x64($s2)
    ctx->pc = 0x31000cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x310010: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x310010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x310014: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x310014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x310018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x310018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31001c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x31001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310020: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x310020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310024: 0x3e00008  jr          $ra
    ctx->pc = 0x310024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310024u;
        // 0x310028: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31002Cu;
    // 0x31002c: 0x0  nop
    ctx->pc = 0x31002cu;
    // NOP
    ctx->pc = 0x310030u;
}
