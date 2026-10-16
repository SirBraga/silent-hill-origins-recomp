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

// Function: sub_0026CE80
// Address: 0x26ce80 - 0x26cfb0
void sub_0026CE80_0x26ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CE80_0x26ce80");
#endif

    switch (ctx->pc) {
        case 0x26cea4u: goto label_26cea4;
        case 0x26cec0u: goto label_26cec0;
        case 0x26ced0u: goto label_26ced0;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf80u: goto label_26cf80;
        default: break;
    }

    ctx->pc = 0x26ce80u;

    // 0x26ce80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26ce84: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x26ce84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26ce88: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26ce88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26ce8c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x26ce8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x26ce90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26ce94: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x26ce94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26ce98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ce9c: 0xc09bdfc  jal         func_26F7F0
    ctx->pc = 0x26CE9Cu;
    SET_GPR_U32(ctx, 31, 0x26CEA4u);
    ctx->pc = 0x26CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE9Cu;
    // 0x26cea0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26F7F0u, 0x26CE9Cu, 0x26CEA4u)) {
        return;
    }
    ctx->pc = 0x26CEA4u;
label_26cea4:
    // 0x26cea4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26cea8: 0x8c50cb58  lw          $s0, -0x34A8($v0)
    ctx->pc = 0x26cea8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6ACB58u));
    // 0x26ceac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ceb0: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x26CEB0u;
    {
        const bool branch_taken_0x26ceb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEB0u;
        // 0x26ceb4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ceb0) {
            ctx->pc = 0x26CF88u;
            goto label_26cf88;
        }
    }
    ctx->pc = 0x26CEB8u;
    // 0x26ceb8: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26CEB8u;
    SET_GPR_U32(ctx, 31, 0x26CEC0u);
    ctx->pc = 0x26CEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEB8u;
    // 0x26cebc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26CEB8u, 0x26CEC0u)) {
        return;
    }
    ctx->pc = 0x26CEC0u;
label_26cec0:
    // 0x26cec0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x26CEC0u;
    {
        const bool branch_taken_0x26cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEC0u;
        // 0x26cec4: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cec0) {
            ctx->pc = 0x26CF8Cu;
            goto label_26cf8c;
        }
    }
    ctx->pc = 0x26CEC8u;
    // 0x26cec8: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26CEC8u;
    SET_GPR_U32(ctx, 31, 0x26CED0u);
    ctx->pc = 0x26CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEC8u;
    // 0x26cecc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26CEC8u, 0x26CED0u)) {
        return;
    }
    ctx->pc = 0x26CED0u;
label_26ced0:
    // 0x26ced0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26CED0u;
    {
        const bool branch_taken_0x26ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CED0u;
        // 0x26ced4: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ced0) {
            ctx->pc = 0x26CF8Cu;
            goto label_26cf8c;
        }
    }
    ctx->pc = 0x26CED8u;
    // 0x26ced8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ced8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cedc: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x26cedcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cee0: 0x0  nop
    ctx->pc = 0x26cee0u;
    // NOP
    // 0x26cee4: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x26CEE4u;
    {
        const bool branch_taken_0x26cee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cee4) {
            ctx->pc = 0x26CEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CEE4u;
            // 0x26cee8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CF8Cu;
            goto label_26cf8c;
        }
    }
    ctx->pc = 0x26CEECu;
    // 0x26ceec: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x26ceecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cef0: 0x0  nop
    ctx->pc = 0x26cef0u;
    // NOP
    // 0x26cef4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x26CEF4u;
    {
        const bool branch_taken_0x26cef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CEF4u;
        // 0x26cef8: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cef4) {
            ctx->pc = 0x26CF8Cu;
            goto label_26cf8c;
        }
    }
    ctx->pc = 0x26CEFCu;
    // 0x26cefc: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26CEFCu;
    SET_GPR_U32(ctx, 31, 0x26CF04u);
    ctx->pc = 0x26CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CEFCu;
    // 0x26cf00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26CEFCu, 0x26CF04u)) {
        return;
    }
    ctx->pc = 0x26CF04u;
label_26cf04:
    // 0x26cf04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26cf04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x26cf08: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26CF08u;
    SET_GPR_U32(ctx, 31, 0x26CF10u);
    ctx->pc = 0x26CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF08u;
    // 0x26cf0c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26CF08u, 0x26CF10u)) {
        return;
    }
    ctx->pc = 0x26CF10u;
label_26cf10:
    // 0x26cf10: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26cf14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26cf18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26cf18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cf1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cf20: 0x2463bb60  addiu       $v1, $v1, -0x44A0
    ctx->pc = 0x26cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949728));
    // 0x26cf24: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x26cf28: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26cf2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cf30: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26cf34: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CF34u;
    {
        const bool branch_taken_0x26cf34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF34u;
        // 0x26cf38: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf34) {
            ctx->pc = 0x26CF4Cu;
            goto label_26cf4c;
        }
    }
    ctx->pc = 0x26CF3Cu;
    // 0x26cf3c: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26CF3Cu;
    SET_GPR_U32(ctx, 31, 0x26CF44u);
    ctx->pc = 0x26CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF3Cu;
    // 0x26cf40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26CF3Cu, 0x26CF44u)) {
        return;
    }
    ctx->pc = 0x26CF44u;
label_26cf44:
    // 0x26cf44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CF44u;
    {
        const bool branch_taken_0x26cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF44u;
        // 0x26cf48: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf44) {
            ctx->pc = 0x26CF60u;
            goto label_26cf60;
        }
    }
    ctx->pc = 0x26CF4Cu;
label_26cf4c:
    // 0x26cf4c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CF4Cu;
    SET_GPR_U32(ctx, 31, 0x26CF54u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CF4Cu, 0x26CF54u)) {
        return;
    }
    ctx->pc = 0x26CF54u;
label_26cf54:
    // 0x26cf54: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x26cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x26cf58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26cf5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26cf60:
    // 0x26cf60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CF60u;
    {
        const bool branch_taken_0x26cf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf60) {
            ctx->pc = 0x26CF78u;
            goto label_26cf78;
        }
    }
    ctx->pc = 0x26CF68u;
    // 0x26cf68: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CF68u;
    SET_GPR_U32(ctx, 31, 0x26CF70u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CF68u, 0x26CF70u)) {
        return;
    }
    ctx->pc = 0x26CF70u;
label_26cf70:
    // 0x26cf70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cf74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26cf78:
    // 0x26cf78: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26CF78u;
    SET_GPR_U32(ctx, 31, 0x26CF80u);
    ctx->pc = 0x26CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CF78u;
    // 0x26cf7c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26CF78u, 0x26CF80u)) {
        return;
    }
    ctx->pc = 0x26CF80u;
label_26cf80:
    // 0x26cf80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26CF80u;
    {
        const bool branch_taken_0x26cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CF80u;
        // 0x26cf84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cf80) {
            ctx->pc = 0x26CF90u;
            goto label_26cf90;
        }
    }
    ctx->pc = 0x26CF88u;
label_26cf88:
    // 0x26cf88: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x26cf88u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_26cf8c:
    // 0x26cf8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26cf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26cf90:
    // 0x26cf90: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26cf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cf94: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x26cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26cf98: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x26cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26cf9c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26cfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFA0u;
        // 0x26cfa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CFA8u;
    // 0x26cfa8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26cfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26cfac: 0x0  nop
    ctx->pc = 0x26cfacu;
    // NOP
    ctx->pc = 0x26cfb0u;
}
