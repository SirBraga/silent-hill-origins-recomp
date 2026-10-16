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

// Function: sub_0026CC80
// Address: 0x26cc80 - 0x26cd80
void sub_0026CC80_0x26cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CC80_0x26cc80");
#endif

    switch (ctx->pc) {
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd58u: goto label_26cd58;
        default: break;
    }

    ctx->pc = 0x26cc80u;

    // 0x26cc80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26cc84: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26cc84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26cc88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26cc8c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x26cc8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26cc90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26cc94: 0xc09bc08  jal         func_26F020
    ctx->pc = 0x26CC94u;
    SET_GPR_U32(ctx, 31, 0x26CC9Cu);
    ctx->pc = 0x26CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC94u;
    // 0x26cc98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26F020u, 0x26CC94u, 0x26CC9Cu)) {
        return;
    }
    ctx->pc = 0x26CC9Cu;
label_26cc9c:
    // 0x26cc9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26cca0: 0x8c50cb58  lw          $s0, -0x34A8($v0)
    ctx->pc = 0x26cca0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6ACB58u));
    // 0x26cca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26cca8: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26CCA8u;
    {
        const bool branch_taken_0x26cca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA8u;
        // 0x26ccac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cca8) {
            ctx->pc = 0x26CD60u;
            goto label_26cd60;
        }
    }
    ctx->pc = 0x26CCB0u;
    // 0x26ccb0: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26CCB0u;
    SET_GPR_U32(ctx, 31, 0x26CCB8u);
    ctx->pc = 0x26CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCB0u;
    // 0x26ccb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26CCB0u, 0x26CCB8u)) {
        return;
    }
    ctx->pc = 0x26CCB8u;
label_26ccb8:
    // 0x26ccb8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26CCB8u;
    {
        const bool branch_taken_0x26ccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCB8u;
        // 0x26ccbc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccb8) {
            ctx->pc = 0x26CD64u;
            goto label_26cd64;
        }
    }
    ctx->pc = 0x26CCC0u;
    // 0x26ccc0: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26CCC0u;
    SET_GPR_U32(ctx, 31, 0x26CCC8u);
    ctx->pc = 0x26CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCC0u;
    // 0x26ccc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26CCC0u, 0x26CCC8u)) {
        return;
    }
    ctx->pc = 0x26CCC8u;
label_26ccc8:
    // 0x26ccc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26cccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ccccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ccd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ccd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ccd4: 0x0  nop
    ctx->pc = 0x26ccd4u;
    // NOP
    // 0x26ccd8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x26CCD8u;
    {
        const bool branch_taken_0x26ccd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCD8u;
        // 0x26ccdc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccd8) {
            ctx->pc = 0x26CD60u;
            goto label_26cd60;
        }
    }
    ctx->pc = 0x26CCE0u;
    // 0x26cce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cce4: 0x2442bb50  addiu       $v0, $v0, -0x44B0
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949712));
    // 0x26cce8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26ccec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26ccf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26ccf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26ccf4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26CCF4u;
    SET_GPR_U32(ctx, 31, 0x26CCFCu);
    ctx->pc = 0x26CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CCF4u;
    // 0x26ccf8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26CCF4u, 0x26CCFCu)) {
        return;
    }
    ctx->pc = 0x26CCFCu;
label_26ccfc:
    // 0x26ccfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26ccfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd00: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26cd04: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x26cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x26cd08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26cd0c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CD0Cu;
    {
        const bool branch_taken_0x26cd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD0Cu;
        // 0x26cd10: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd0c) {
            ctx->pc = 0x26CD24u;
            goto label_26cd24;
        }
    }
    ctx->pc = 0x26CD14u;
    // 0x26cd14: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26CD14u;
    SET_GPR_U32(ctx, 31, 0x26CD1Cu);
    ctx->pc = 0x26CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD14u;
    // 0x26cd18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26CD14u, 0x26CD1Cu)) {
        return;
    }
    ctx->pc = 0x26CD1Cu;
label_26cd1c:
    // 0x26cd1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CD1Cu;
    {
        const bool branch_taken_0x26cd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD1Cu;
        // 0x26cd20: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd1c) {
            ctx->pc = 0x26CD38u;
            goto label_26cd38;
        }
    }
    ctx->pc = 0x26CD24u;
label_26cd24:
    // 0x26cd24: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CD24u;
    SET_GPR_U32(ctx, 31, 0x26CD2Cu);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CD24u, 0x26CD2Cu)) {
        return;
    }
    ctx->pc = 0x26CD2Cu;
label_26cd2c:
    // 0x26cd2c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x26cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x26cd30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26cd34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26cd38:
    // 0x26cd38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CD38u;
    {
        const bool branch_taken_0x26cd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd38) {
            ctx->pc = 0x26CD50u;
            goto label_26cd50;
        }
    }
    ctx->pc = 0x26CD40u;
    // 0x26cd40: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CD40u;
    SET_GPR_U32(ctx, 31, 0x26CD48u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CD40u, 0x26CD48u)) {
        return;
    }
    ctx->pc = 0x26CD48u;
label_26cd48:
    // 0x26cd48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cd4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26cd50:
    // 0x26cd50: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26CD50u;
    SET_GPR_U32(ctx, 31, 0x26CD58u);
    ctx->pc = 0x26CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD50u;
    // 0x26cd54: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26CD50u, 0x26CD58u)) {
        return;
    }
    ctx->pc = 0x26CD58u;
label_26cd58:
    // 0x26cd58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26CD58u;
    {
        const bool branch_taken_0x26cd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD58u;
        // 0x26cd5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd58) {
            ctx->pc = 0x26CD68u;
            goto label_26cd68;
        }
    }
    ctx->pc = 0x26CD60u;
label_26cd60:
    // 0x26cd60: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x26cd60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_26cd64:
    // 0x26cd64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26cd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26cd68:
    // 0x26cd68: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26cd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cd6c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x26cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26cd70: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26cd74: 0x3e00008  jr          $ra
    ctx->pc = 0x26CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CD74u;
        // 0x26cd78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CD7Cu;
    // 0x26cd7c: 0x0  nop
    ctx->pc = 0x26cd7cu;
    // NOP
    ctx->pc = 0x26cd80u;
}
