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

// Function: sub_0020CC58
// Address: 0x20cc58 - 0x20cd90
void sub_0020CC58_0x20cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC58_0x20cc58");
#endif

    switch (ctx->pc) {
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        case 0x20ccf0u: goto label_20ccf0;
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20ccfcu: goto label_20ccfc;
        case 0x20cd00u: goto label_20cd00;
        case 0x20cd04u: goto label_20cd04;
        case 0x20cd08u: goto label_20cd08;
        case 0x20cd0cu: goto label_20cd0c;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd18u: goto label_20cd18;
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd20u: goto label_20cd20;
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd2cu: goto label_20cd2c;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd38u: goto label_20cd38;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd44u: goto label_20cd44;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd4cu: goto label_20cd4c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd54u: goto label_20cd54;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd68u: goto label_20cd68;
        case 0x20cd6cu: goto label_20cd6c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd74u: goto label_20cd74;
        case 0x20cd78u: goto label_20cd78;
        case 0x20cd7cu: goto label_20cd7c;
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd84u: goto label_20cd84;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd8cu: goto label_20cd8c;
        default: break;
    }

    ctx->pc = 0x20cc58u;

label_20cc58:
    // 0x20cc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20cc5c:
    // 0x20cc5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20cc5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cc60:
    // 0x20cc60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cc64:
    // 0x20cc64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cc68:
    // 0x20cc68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20cc6c:
    // 0x20cc6c: 0x10a2002d  beq         $a1, $v0, . + 4 + (0x2D << 2)
label_20cc70:
    if (ctx->pc == 0x20CC70u) {
        ctx->pc = 0x20CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC6Cu;
        // 0x20cc70: 0x8cd001b0  lw          $s0, 0x1B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC74u;
        goto label_20cc74;
    }
    ctx->pc = 0x20CC6Cu;
    {
        const bool branch_taken_0x20cc6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC6Cu;
        // 0x20cc70: 0x8cd001b0  lw          $s0, 0x1B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc6c) {
            ctx->pc = 0x20CD24u;
            goto label_20cd24;
        }
    }
    ctx->pc = 0x20CC74u;
label_20cc74:
    // 0x20cc74: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x20cc74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_20cc78:
    // 0x20cc78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20cc7c:
    if (ctx->pc == 0x20CC7Cu) {
        ctx->pc = 0x20CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC78u;
        // 0x20cc7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC80u;
        goto label_20cc80;
    }
    ctx->pc = 0x20CC78u;
    {
        const bool branch_taken_0x20cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC78u;
        // 0x20cc7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc78) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CC80u;
label_20cc80:
    // 0x20cc80: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_20cc84:
    if (ctx->pc == 0x20CC84u) {
        ctx->pc = 0x20CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC80u;
        // 0x20cc84: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC88u;
        goto label_20cc88;
    }
    ctx->pc = 0x20CC80u;
    {
        const bool branch_taken_0x20cc80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cc80) {
            ctx->pc = 0x20CC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC80u;
            // 0x20cc84: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CCA0u;
            goto label_20cca0;
        }
    }
    ctx->pc = 0x20CC88u;
label_20cc88:
    // 0x20cc88: 0x10000034  b           . + 4 + (0x34 << 2)
label_20cc8c:
    if (ctx->pc == 0x20CC8Cu) {
        ctx->pc = 0x20CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC88u;
        // 0x20cc8c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC90u;
        goto label_20cc90;
    }
    ctx->pc = 0x20CC88u;
    {
        const bool branch_taken_0x20cc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC88u;
        // 0x20cc8c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc88) {
            ctx->pc = 0x20CD5Cu;
            goto label_20cd5c;
        }
    }
    ctx->pc = 0x20CC90u;
label_20cc90:
    // 0x20cc90: 0x50a20017  beql        $a1, $v0, . + 4 + (0x17 << 2)
label_20cc94:
    if (ctx->pc == 0x20CC94u) {
        ctx->pc = 0x20CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC90u;
        // 0x20cc94: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC98u;
        goto label_20cc98;
    }
    ctx->pc = 0x20CC90u;
    {
        const bool branch_taken_0x20cc90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x20cc90) {
            ctx->pc = 0x20CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC90u;
            // 0x20cc94: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CCF0u;
            goto label_20ccf0;
        }
    }
    ctx->pc = 0x20CC98u;
label_20cc98:
    // 0x20cc98: 0x10000030  b           . + 4 + (0x30 << 2)
label_20cc9c:
    if (ctx->pc == 0x20CC9Cu) {
        ctx->pc = 0x20CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC98u;
        // 0x20cc9c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCA0u;
        goto label_20cca0;
    }
    ctx->pc = 0x20CC98u;
    {
        const bool branch_taken_0x20cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC98u;
        // 0x20cc9c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc98) {
            ctx->pc = 0x20CD5Cu;
            goto label_20cd5c;
        }
    }
    ctx->pc = 0x20CCA0u;
label_20cca0:
    // 0x20cca0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20cca4:
    if (ctx->pc == 0x20CCA4u) {
        ctx->pc = 0x20CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCA0u;
        // 0x20cca4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCA8u;
        goto label_20cca8;
    }
    ctx->pc = 0x20CCA0u;
    {
        const bool branch_taken_0x20cca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCA0u;
        // 0x20cca4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cca0) {
            ctx->pc = 0x20CCE0u;
            goto label_20cce0;
        }
    }
    ctx->pc = 0x20CCA8u;
label_20cca8:
    // 0x20cca8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x20cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20ccac:
    // 0x20ccac: 0x2442cd90  addiu       $v0, $v0, -0x3270
    ctx->pc = 0x20ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
label_20ccb0:
    // 0x20ccb0: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_20ccb4:
    if (ctx->pc == 0x20CCB4u) {
        ctx->pc = 0x20CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCB0u;
        // 0x20ccb4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCB8u;
        goto label_20ccb8;
    }
    ctx->pc = 0x20CCB0u;
    {
        const bool branch_taken_0x20ccb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCB0u;
        // 0x20ccb4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccb0) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CCB8u;
label_20ccb8:
    // 0x20ccb8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x20ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20ccbc:
    // 0x20ccbc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ccc0:
    // 0x20ccc0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x20ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20ccc4:
    // 0x20ccc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ccc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ccc8:
    // 0x20ccc8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20cccc:
    // 0x20cccc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20ccccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ccd0:
    // 0x20ccd0: 0x40f809  jalr        $v0
label_20ccd4:
    if (ctx->pc == 0x20CCD4u) {
        ctx->pc = 0x20CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD0u;
        // 0x20ccd4: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCD8u;
        goto label_20ccd8;
    }
    ctx->pc = 0x20CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CCD8u);
        ctx->pc = 0x20CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD0u;
        // 0x20ccd4: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CCD0u, 0x20CCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CCD8u;
label_20ccd8:
    // 0x20ccd8: 0x10000026  b           . + 4 + (0x26 << 2)
label_20ccdc:
    if (ctx->pc == 0x20CCDCu) {
        ctx->pc = 0x20CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD8u;
        // 0x20ccdc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCE0u;
        goto label_20cce0;
    }
    ctx->pc = 0x20CCD8u;
    {
        const bool branch_taken_0x20ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD8u;
        // 0x20ccdc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccd8) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CCE0u;
label_20cce0:
    // 0x20cce0: 0x8cc201c4  lw          $v0, 0x1C4($a2)
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 452)));
label_20cce4:
    // 0x20cce4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20cce8:
    // 0x20cce8: 0x10000022  b           . + 4 + (0x22 << 2)
label_20ccec:
    if (ctx->pc == 0x20CCECu) {
        ctx->pc = 0x20CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE8u;
        // 0x20ccec: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCF0u;
        goto label_20ccf0;
    }
    ctx->pc = 0x20CCE8u;
    {
        const bool branch_taken_0x20cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE8u;
        // 0x20ccec: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cce8) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CCF0u;
label_20ccf0:
    // 0x20ccf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20ccf4:
    if (ctx->pc == 0x20CCF4u) {
        ctx->pc = 0x20CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCF0u;
        // 0x20ccf4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCF8u;
        goto label_20ccf8;
    }
    ctx->pc = 0x20CCF0u;
    {
        const bool branch_taken_0x20ccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCF0u;
        // 0x20ccf4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccf0) {
            ctx->pc = 0x20CD18u;
            goto label_20cd18;
        }
    }
    ctx->pc = 0x20CCF8u;
label_20ccf8:
    // 0x20ccf8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20ccfc:
    // 0x20ccfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20cd00:
    // 0x20cd00: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20cd04:
    // 0x20cd04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20cd08:
    // 0x20cd08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cd0c:
    // 0x20cd0c: 0x60f809  jalr        $v1
label_20cd10:
    if (ctx->pc == 0x20CD10u) {
        ctx->pc = 0x20CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD0Cu;
        // 0x20cd10: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD14u;
        goto label_20cd14;
    }
    ctx->pc = 0x20CD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CD14u);
        ctx->pc = 0x20CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD0Cu;
        // 0x20cd10: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD0Cu, 0x20CD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CD14u;
label_20cd14:
    // 0x20cd14: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20cd18:
    // 0x20cd18: 0x2442ce38  addiu       $v0, $v0, -0x31C8
    ctx->pc = 0x20cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954552));
label_20cd1c:
    // 0x20cd1c: 0x10000015  b           . + 4 + (0x15 << 2)
label_20cd20:
    if (ctx->pc == 0x20CD20u) {
        ctx->pc = 0x20CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD1Cu;
        // 0x20cd20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD24u;
        goto label_20cd24;
    }
    ctx->pc = 0x20CD1Cu;
    {
        const bool branch_taken_0x20cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD1Cu;
        // 0x20cd20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd1c) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CD24u;
label_20cd24:
    // 0x20cd24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20cd28:
    // 0x20cd28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20cd2c:
    if (ctx->pc == 0x20CD2Cu) {
        ctx->pc = 0x20CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD28u;
        // 0x20cd2c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD30u;
        goto label_20cd30;
    }
    ctx->pc = 0x20CD28u;
    {
        const bool branch_taken_0x20cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD28u;
        // 0x20cd2c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd28) {
            ctx->pc = 0x20CD50u;
            goto label_20cd50;
        }
    }
    ctx->pc = 0x20CD30u;
label_20cd30:
    // 0x20cd30: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20cd34:
    // 0x20cd34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20cd38:
    // 0x20cd38: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20cd3c:
    // 0x20cd3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20cd40:
    // 0x20cd40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cd44:
    // 0x20cd44: 0x60f809  jalr        $v1
label_20cd48:
    if (ctx->pc == 0x20CD48u) {
        ctx->pc = 0x20CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD44u;
        // 0x20cd48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD4Cu;
        goto label_20cd4c;
    }
    ctx->pc = 0x20CD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CD4Cu);
        ctx->pc = 0x20CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD44u;
        // 0x20cd48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD44u, 0x20CD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CD4Cu;
label_20cd4c:
    // 0x20cd4c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20cd50:
    // 0x20cd50: 0x2442cf48  addiu       $v0, $v0, -0x30B8
    ctx->pc = 0x20cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954824));
label_20cd54:
    // 0x20cd54: 0x10000007  b           . + 4 + (0x7 << 2)
label_20cd58:
    if (ctx->pc == 0x20CD58u) {
        ctx->pc = 0x20CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD54u;
        // 0x20cd58: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD5Cu;
        goto label_20cd5c;
    }
    ctx->pc = 0x20CD54u;
    {
        const bool branch_taken_0x20cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD54u;
        // 0x20cd58: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd54) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CD5Cu;
label_20cd5c:
    // 0x20cd5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20cd60:
    // 0x20cd60: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20cd64:
    // 0x20cd64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20cd68:
    // 0x20cd68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cd6c:
    // 0x20cd6c: 0x60f809  jalr        $v1
label_20cd70:
    if (ctx->pc == 0x20CD70u) {
        ctx->pc = 0x20CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD6Cu;
        // 0x20cd70: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD74u;
        goto label_20cd74;
    }
    ctx->pc = 0x20CD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CD74u);
        ctx->pc = 0x20CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD6Cu;
        // 0x20cd70: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD6Cu, 0x20CD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CD74u;
label_20cd74:
    // 0x20cd74: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_20cd78:
    // 0x20cd78: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_20cd7c:
    // 0x20cd7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20cd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cd80:
    // 0x20cd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cd84:
    // 0x20cd84: 0x3e00008  jr          $ra
label_20cd88:
    if (ctx->pc == 0x20CD88u) {
        ctx->pc = 0x20CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD84u;
        // 0x20cd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD8Cu;
        goto label_20cd8c;
    }
    ctx->pc = 0x20CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD84u;
        // 0x20cd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CD8Cu;
label_20cd8c:
    // 0x20cd8c: 0x0  nop
    ctx->pc = 0x20cd8cu;
    // NOP
    ctx->pc = 0x20cd90u;
}
