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

// Function: sub_001EDA48
// Address: 0x1eda48 - 0x1edce8
void sub_001EDA48_0x1eda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDA48_0x1eda48");
#endif

    switch (ctx->pc) {
        case 0x1eda48u: goto label_1eda48;
        case 0x1eda4cu: goto label_1eda4c;
        case 0x1eda50u: goto label_1eda50;
        case 0x1eda54u: goto label_1eda54;
        case 0x1eda58u: goto label_1eda58;
        case 0x1eda5cu: goto label_1eda5c;
        case 0x1eda60u: goto label_1eda60;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda68u: goto label_1eda68;
        case 0x1eda6cu: goto label_1eda6c;
        case 0x1eda70u: goto label_1eda70;
        case 0x1eda74u: goto label_1eda74;
        case 0x1eda78u: goto label_1eda78;
        case 0x1eda7cu: goto label_1eda7c;
        case 0x1eda80u: goto label_1eda80;
        case 0x1eda84u: goto label_1eda84;
        case 0x1eda88u: goto label_1eda88;
        case 0x1eda8cu: goto label_1eda8c;
        case 0x1eda90u: goto label_1eda90;
        case 0x1eda94u: goto label_1eda94;
        case 0x1eda98u: goto label_1eda98;
        case 0x1eda9cu: goto label_1eda9c;
        case 0x1edaa0u: goto label_1edaa0;
        case 0x1edaa4u: goto label_1edaa4;
        case 0x1edaa8u: goto label_1edaa8;
        case 0x1edaacu: goto label_1edaac;
        case 0x1edab0u: goto label_1edab0;
        case 0x1edab4u: goto label_1edab4;
        case 0x1edab8u: goto label_1edab8;
        case 0x1edabcu: goto label_1edabc;
        case 0x1edac0u: goto label_1edac0;
        case 0x1edac4u: goto label_1edac4;
        case 0x1edac8u: goto label_1edac8;
        case 0x1edaccu: goto label_1edacc;
        case 0x1edad0u: goto label_1edad0;
        case 0x1edad4u: goto label_1edad4;
        case 0x1edad8u: goto label_1edad8;
        case 0x1edadcu: goto label_1edadc;
        case 0x1edae0u: goto label_1edae0;
        case 0x1edae4u: goto label_1edae4;
        case 0x1edae8u: goto label_1edae8;
        case 0x1edaecu: goto label_1edaec;
        case 0x1edaf0u: goto label_1edaf0;
        case 0x1edaf4u: goto label_1edaf4;
        case 0x1edaf8u: goto label_1edaf8;
        case 0x1edafcu: goto label_1edafc;
        case 0x1edb00u: goto label_1edb00;
        case 0x1edb04u: goto label_1edb04;
        case 0x1edb08u: goto label_1edb08;
        case 0x1edb0cu: goto label_1edb0c;
        case 0x1edb10u: goto label_1edb10;
        case 0x1edb14u: goto label_1edb14;
        case 0x1edb18u: goto label_1edb18;
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edb20u: goto label_1edb20;
        case 0x1edb24u: goto label_1edb24;
        case 0x1edb28u: goto label_1edb28;
        case 0x1edb2cu: goto label_1edb2c;
        case 0x1edb30u: goto label_1edb30;
        case 0x1edb34u: goto label_1edb34;
        case 0x1edb38u: goto label_1edb38;
        case 0x1edb3cu: goto label_1edb3c;
        case 0x1edb40u: goto label_1edb40;
        case 0x1edb44u: goto label_1edb44;
        case 0x1edb48u: goto label_1edb48;
        case 0x1edb4cu: goto label_1edb4c;
        case 0x1edb50u: goto label_1edb50;
        case 0x1edb54u: goto label_1edb54;
        case 0x1edb58u: goto label_1edb58;
        case 0x1edb5cu: goto label_1edb5c;
        case 0x1edb60u: goto label_1edb60;
        case 0x1edb64u: goto label_1edb64;
        case 0x1edb68u: goto label_1edb68;
        case 0x1edb6cu: goto label_1edb6c;
        case 0x1edb70u: goto label_1edb70;
        case 0x1edb74u: goto label_1edb74;
        case 0x1edb78u: goto label_1edb78;
        case 0x1edb7cu: goto label_1edb7c;
        case 0x1edb80u: goto label_1edb80;
        case 0x1edb84u: goto label_1edb84;
        case 0x1edb88u: goto label_1edb88;
        case 0x1edb8cu: goto label_1edb8c;
        case 0x1edb90u: goto label_1edb90;
        case 0x1edb94u: goto label_1edb94;
        case 0x1edb98u: goto label_1edb98;
        case 0x1edb9cu: goto label_1edb9c;
        case 0x1edba0u: goto label_1edba0;
        case 0x1edba4u: goto label_1edba4;
        case 0x1edba8u: goto label_1edba8;
        case 0x1edbacu: goto label_1edbac;
        case 0x1edbb0u: goto label_1edbb0;
        case 0x1edbb4u: goto label_1edbb4;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbbcu: goto label_1edbbc;
        case 0x1edbc0u: goto label_1edbc0;
        case 0x1edbc4u: goto label_1edbc4;
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbccu: goto label_1edbcc;
        case 0x1edbd0u: goto label_1edbd0;
        case 0x1edbd4u: goto label_1edbd4;
        case 0x1edbd8u: goto label_1edbd8;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edbe0u: goto label_1edbe0;
        case 0x1edbe4u: goto label_1edbe4;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edbecu: goto label_1edbec;
        case 0x1edbf0u: goto label_1edbf0;
        case 0x1edbf4u: goto label_1edbf4;
        case 0x1edbf8u: goto label_1edbf8;
        case 0x1edbfcu: goto label_1edbfc;
        case 0x1edc00u: goto label_1edc00;
        case 0x1edc04u: goto label_1edc04;
        case 0x1edc08u: goto label_1edc08;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc10u: goto label_1edc10;
        case 0x1edc14u: goto label_1edc14;
        case 0x1edc18u: goto label_1edc18;
        case 0x1edc1cu: goto label_1edc1c;
        case 0x1edc20u: goto label_1edc20;
        case 0x1edc24u: goto label_1edc24;
        case 0x1edc28u: goto label_1edc28;
        case 0x1edc2cu: goto label_1edc2c;
        case 0x1edc30u: goto label_1edc30;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc38u: goto label_1edc38;
        case 0x1edc3cu: goto label_1edc3c;
        case 0x1edc40u: goto label_1edc40;
        case 0x1edc44u: goto label_1edc44;
        case 0x1edc48u: goto label_1edc48;
        case 0x1edc4cu: goto label_1edc4c;
        case 0x1edc50u: goto label_1edc50;
        case 0x1edc54u: goto label_1edc54;
        case 0x1edc58u: goto label_1edc58;
        case 0x1edc5cu: goto label_1edc5c;
        case 0x1edc60u: goto label_1edc60;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edc68u: goto label_1edc68;
        case 0x1edc6cu: goto label_1edc6c;
        case 0x1edc70u: goto label_1edc70;
        case 0x1edc74u: goto label_1edc74;
        case 0x1edc78u: goto label_1edc78;
        case 0x1edc7cu: goto label_1edc7c;
        case 0x1edc80u: goto label_1edc80;
        case 0x1edc84u: goto label_1edc84;
        case 0x1edc88u: goto label_1edc88;
        case 0x1edc8cu: goto label_1edc8c;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edc94u: goto label_1edc94;
        case 0x1edc98u: goto label_1edc98;
        case 0x1edc9cu: goto label_1edc9c;
        case 0x1edca0u: goto label_1edca0;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edca8u: goto label_1edca8;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcbcu: goto label_1edcbc;
        case 0x1edcc0u: goto label_1edcc0;
        case 0x1edcc4u: goto label_1edcc4;
        case 0x1edcc8u: goto label_1edcc8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        default: break;
    }

    ctx->pc = 0x1eda48u;

label_1eda48:
    // 0x1eda48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1eda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1eda4c:
    // 0x1eda4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1eda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eda50:
    // 0x1eda50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1eda50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1eda54:
    // 0x1eda54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1eda54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eda58:
    // 0x1eda58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1eda58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1eda5c:
    // 0x1eda5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1eda5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1eda60:
    // 0x1eda60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1eda60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1eda64:
    // 0x1eda64: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1eda64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1eda68:
    // 0x1eda68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eda68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eda6c:
    // 0x1eda6c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1eda6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1eda70:
    // 0x1eda70: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1eda70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1eda74:
    // 0x1eda74: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1eda74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1eda78:
    // 0x1eda78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eda78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eda7c:
    // 0x1eda7c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1eda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_1eda80:
    // 0x1eda80: 0xc0927be  jal         func_249EF8
label_1eda84:
    if (ctx->pc == 0x1EDA84u) {
        ctx->pc = 0x1EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA80u;
        // 0x1eda84: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA88u;
        goto label_1eda88;
    }
    ctx->pc = 0x1EDA80u;
    SET_GPR_U32(ctx, 31, 0x1EDA88u);
    ctx->pc = 0x1EDA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA80u;
    // 0x1eda84: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1EDA80u, 0x1EDA88u)) {
        return;
    }
    ctx->pc = 0x1EDA88u;
label_1eda88:
    // 0x1eda88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1eda8c:
    if (ctx->pc == 0x1EDA8Cu) {
        ctx->pc = 0x1EDA90u;
        goto label_1eda90;
    }
    ctx->pc = 0x1EDA88u;
    {
        const bool branch_taken_0x1eda88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda88) {
            ctx->pc = 0x1EDA98u;
            goto label_1eda98;
        }
    }
    ctx->pc = 0x1EDA90u;
label_1eda90:
    // 0x1eda90: 0x10000088  b           . + 4 + (0x88 << 2)
label_1eda94:
    if (ctx->pc == 0x1EDA94u) {
        ctx->pc = 0x1EDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA90u;
        // 0x1eda94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA98u;
        goto label_1eda98;
    }
    ctx->pc = 0x1EDA90u;
    {
        const bool branch_taken_0x1eda90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA90u;
        // 0x1eda94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda90) {
            ctx->pc = 0x1EDCB4u;
            goto label_1edcb4;
        }
    }
    ctx->pc = 0x1EDA98u;
label_1eda98:
    // 0x1eda98: 0xc07b036  jal         func_1EC0D8
label_1eda9c:
    if (ctx->pc == 0x1EDA9Cu) {
        ctx->pc = 0x1EDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA98u;
        // 0x1eda9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAA0u;
        goto label_1edaa0;
    }
    ctx->pc = 0x1EDA98u;
    SET_GPR_U32(ctx, 31, 0x1EDAA0u);
    ctx->pc = 0x1EDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA98u;
    // 0x1eda9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC0D8u, 0x1EDA98u, 0x1EDAA0u)) {
        return;
    }
    ctx->pc = 0x1EDAA0u;
label_1edaa0:
    // 0x1edaa0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1edaa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edaa4:
    // 0x1edaa4: 0x13c00082  beqz        $fp, . + 4 + (0x82 << 2)
label_1edaa8:
    if (ctx->pc == 0x1EDAA8u) {
        ctx->pc = 0x1EDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAA4u;
        // 0x1edaa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAACu;
        goto label_1edaac;
    }
    ctx->pc = 0x1EDAA4u;
    {
        const bool branch_taken_0x1edaa4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAA4u;
        // 0x1edaa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edaa4) {
            ctx->pc = 0x1EDCB0u;
            goto label_1edcb0;
        }
    }
    ctx->pc = 0x1EDAACu;
label_1edaac:
    // 0x1edaac: 0x8fd30008  lw          $s3, 0x8($fp)
    ctx->pc = 0x1edaacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1edab0:
    // 0x1edab0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1edab0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_1edab4:
    // 0x1edab4: 0x8fb60000  lw          $s6, 0x0($sp)
    ctx->pc = 0x1edab4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1edab8:
    // 0x1edab8: 0x1ac0002f  blez        $s6, . + 4 + (0x2F << 2)
label_1edabc:
    if (ctx->pc == 0x1EDABCu) {
        ctx->pc = 0x1EDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAB8u;
        // 0x1edabc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAC0u;
        goto label_1edac0;
    }
    ctx->pc = 0x1EDAB8u;
    {
        const bool branch_taken_0x1edab8 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1EDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAB8u;
        // 0x1edabc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edab8) {
            ctx->pc = 0x1EDB78u;
            goto label_1edb78;
        }
    }
    ctx->pc = 0x1EDAC0u;
label_1edac0:
    // 0x1edac0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1edac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1edac4:
    // 0x1edac4: 0xc078e20  jal         func_1E3880
label_1edac8:
    if (ctx->pc == 0x1EDAC8u) {
        ctx->pc = 0x1EDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAC4u;
        // 0x1edac8: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDACCu;
        goto label_1edacc;
    }
    ctx->pc = 0x1EDAC4u;
    SET_GPR_U32(ctx, 31, 0x1EDACCu);
    ctx->pc = 0x1EDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAC4u;
    // 0x1edac8: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3880u, 0x1EDAC4u, 0x1EDACCu)) {
        return;
    }
    ctx->pc = 0x1EDACCu;
label_1edacc:
    // 0x1edacc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1edaccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edad0:
    // 0x1edad0: 0x12a00078  beqz        $s5, . + 4 + (0x78 << 2)
label_1edad4:
    if (ctx->pc == 0x1EDAD4u) {
        ctx->pc = 0x1EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD0u;
        // 0x1edad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAD8u;
        goto label_1edad8;
    }
    ctx->pc = 0x1EDAD0u;
    {
        const bool branch_taken_0x1edad0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD0u;
        // 0x1edad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad0) {
            ctx->pc = 0x1EDCB4u;
            goto label_1edcb4;
        }
    }
    ctx->pc = 0x1EDAD8u;
label_1edad8:
    // 0x1edad8: 0xc078e20  jal         func_1E3880
label_1edadc:
    if (ctx->pc == 0x1EDADCu) {
        ctx->pc = 0x1EDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD8u;
        // 0x1edadc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAE0u;
        goto label_1edae0;
    }
    ctx->pc = 0x1EDAD8u;
    SET_GPR_U32(ctx, 31, 0x1EDAE0u);
    ctx->pc = 0x1EDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAD8u;
    // 0x1edadc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3880u, 0x1EDAD8u, 0x1EDAE0u)) {
        return;
    }
    ctx->pc = 0x1EDAE0u;
label_1edae0:
    // 0x1edae0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1edae0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edae4:
    // 0x1edae4: 0x12e0ffea  beqz        $s7, . + 4 + (-0x16 << 2)
label_1edae8:
    if (ctx->pc == 0x1EDAE8u) {
        ctx->pc = 0x1EDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAE4u;
        // 0x1edae8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAECu;
        goto label_1edaec;
    }
    ctx->pc = 0x1EDAE4u;
    {
        const bool branch_taken_0x1edae4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAE4u;
        // 0x1edae8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edae4) {
            ctx->pc = 0x1EDA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eda90;
        }
    }
    ctx->pc = 0x1EDAECu;
label_1edaec:
    // 0x1edaec: 0xc078ee0  jal         func_1E3B80
label_1edaf0:
    if (ctx->pc == 0x1EDAF0u) {
        ctx->pc = 0x1EDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAECu;
        // 0x1edaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDAF4u;
        goto label_1edaf4;
    }
    ctx->pc = 0x1EDAECu;
    SET_GPR_U32(ctx, 31, 0x1EDAF4u);
    ctx->pc = 0x1EDAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDAECu;
    // 0x1edaf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EDAECu, 0x1EDAF4u)) {
        return;
    }
    ctx->pc = 0x1EDAF4u;
label_1edaf4:
    // 0x1edaf4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1edaf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edaf8:
    // 0x1edaf8: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1edaf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1edafc:
    // 0x1edafc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1edb00:
    if (ctx->pc == 0x1EDB00u) {
        ctx->pc = 0x1EDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAFCu;
        // 0x1edb00: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB04u;
        goto label_1edb04;
    }
    ctx->pc = 0x1EDAFCu;
    {
        const bool branch_taken_0x1edafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAFCu;
        // 0x1edb00: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edafc) {
            ctx->pc = 0x1EDB30u;
            goto label_1edb30;
        }
    }
    ctx->pc = 0x1EDB04u;
label_1edb04:
    // 0x1edb04: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1edb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1edb08:
    // 0x1edb08: 0x24421ec0  addiu       $v0, $v0, 0x1EC0
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
label_1edb0c:
    // 0x1edb0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1edb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1edb10:
    // 0x1edb10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1edb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1edb14:
    // 0x1edb14: 0x800008  jr          $a0
label_1edb18:
    if (ctx->pc == 0x1EDB18u) {
        ctx->pc = 0x1EDB1Cu;
        goto label_1edb1c;
    }
    ctx->pc = 0x1EDB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDB1Cu: goto label_1edb1c;
            case 0x1EDB24u: goto label_1edb24;
            case 0x1EDB2Cu: goto label_1edb2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EDB1Cu;
label_1edb1c:
    // 0x1edb1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1edb20:
    if (ctx->pc == 0x1EDB20u) {
        ctx->pc = 0x1EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB1Cu;
        // 0x1edb20: 0x2411002c  addiu       $s1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB24u;
        goto label_1edb24;
    }
    ctx->pc = 0x1EDB1Cu;
    {
        const bool branch_taken_0x1edb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB1Cu;
        // 0x1edb20: 0x2411002c  addiu       $s1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb1c) {
            ctx->pc = 0x1EDB30u;
            goto label_1edb30;
        }
    }
    ctx->pc = 0x1EDB24u;
label_1edb24:
    // 0x1edb24: 0x10000002  b           . + 4 + (0x2 << 2)
label_1edb28:
    if (ctx->pc == 0x1EDB28u) {
        ctx->pc = 0x1EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB24u;
        // 0x1edb28: 0x24110038  addiu       $s1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB2Cu;
        goto label_1edb2c;
    }
    ctx->pc = 0x1EDB24u;
    {
        const bool branch_taken_0x1edb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB24u;
        // 0x1edb28: 0x24110038  addiu       $s1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb24) {
            ctx->pc = 0x1EDB30u;
            goto label_1edb30;
        }
    }
    ctx->pc = 0x1EDB2Cu;
label_1edb2c:
    // 0x1edb2c: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1edb30:
    // 0x1edb30: 0xc0932d4  jal         func_24CB50
label_1edb34:
    if (ctx->pc == 0x1EDB34u) {
        ctx->pc = 0x1EDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB30u;
        // 0x1edb34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB38u;
        goto label_1edb38;
    }
    ctx->pc = 0x1EDB30u;
    SET_GPR_U32(ctx, 31, 0x1EDB38u);
    ctx->pc = 0x1EDB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB30u;
    // 0x1edb34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EDB30u, 0x1EDB38u)) {
        return;
    }
    ctx->pc = 0x1EDB38u;
label_1edb38:
    // 0x1edb38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edb3c:
    // 0x1edb3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edb40:
    // 0x1edb40: 0x40f809  jalr        $v0
label_1edb44:
    if (ctx->pc == 0x1EDB44u) {
        ctx->pc = 0x1EDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB40u;
        // 0x1edb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB48u;
        goto label_1edb48;
    }
    ctx->pc = 0x1EDB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EDB48u);
        ctx->pc = 0x1EDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB40u;
        // 0x1edb44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB40u, 0x1EDB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDB48u;
label_1edb48:
    // 0x1edb48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1edb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edb4c:
    // 0x1edb4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1edb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edb50:
    // 0x1edb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edb54:
    // 0x1edb54: 0xc0c493d  jal         func_3124F4
label_1edb58:
    if (ctx->pc == 0x1EDB58u) {
        ctx->pc = 0x1EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB54u;
        // 0x1edb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB5Cu;
        goto label_1edb5c;
    }
    ctx->pc = 0x1EDB54u;
    SET_GPR_U32(ctx, 31, 0x1EDB5Cu);
    ctx->pc = 0x1EDB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDB54u;
    // 0x1edb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EDB54u, 0x1EDB5Cu)) {
        return;
    }
    ctx->pc = 0x1EDB5Cu;
label_1edb5c:
    // 0x1edb5c: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x1edb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_1edb60:
    // 0x1edb60: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1edb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1edb64:
    // 0x1edb64: 0xae170008  sw          $s7, 0x8($s0)
    ctx->pc = 0x1edb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 23));
label_1edb68:
    // 0x1edb68: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1edb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_1edb6c:
    // 0x1edb6c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1edb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1edb70:
    // 0x1edb70: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1edb74:
    if (ctx->pc == 0x1EDB74u) {
        ctx->pc = 0x1EDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB70u;
        // 0x1edb74: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB78u;
        goto label_1edb78;
    }
    ctx->pc = 0x1EDB70u;
    {
        const bool branch_taken_0x1edb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB70u;
        // 0x1edb74: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb70) {
            ctx->pc = 0x1EDAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edac0;
        }
    }
    ctx->pc = 0x1EDB78u;
label_1edb78:
    // 0x1edb78: 0x8fd30008  lw          $s3, 0x8($fp)
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1edb7c:
    // 0x1edb7c: 0x1ac00030  blez        $s6, . + 4 + (0x30 << 2)
label_1edb80:
    if (ctx->pc == 0x1EDB80u) {
        ctx->pc = 0x1EDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB7Cu;
        // 0x1edb80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB84u;
        goto label_1edb84;
    }
    ctx->pc = 0x1EDB7Cu;
    {
        const bool branch_taken_0x1edb7c = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1EDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB7Cu;
        // 0x1edb80: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb7c) {
            ctx->pc = 0x1EDC40u;
            goto label_1edc40;
        }
    }
    ctx->pc = 0x1EDB84u;
label_1edb84:
    // 0x1edb84: 0x0  nop
    ctx->pc = 0x1edb84u;
    // NOP
label_1edb88:
    // 0x1edb88: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1edb8c:
    // 0x1edb8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1edb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1edb90:
    // 0x1edb90: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1edb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1edb94:
    // 0x1edb94: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1edb98:
    if (ctx->pc == 0x1EDB98u) {
        ctx->pc = 0x1EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB94u;
        // 0x1edb98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDB9Cu;
        goto label_1edb9c;
    }
    ctx->pc = 0x1EDB94u;
    {
        const bool branch_taken_0x1edb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB94u;
        // 0x1edb98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb94) {
            ctx->pc = 0x1EDC2Cu;
            goto label_1edc2c;
        }
    }
    ctx->pc = 0x1EDB9Cu;
label_1edb9c:
    // 0x1edb9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1edb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1edba0:
    // 0x1edba0: 0x24421ee0  addiu       $v0, $v0, 0x1EE0
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7904));
label_1edba4:
    // 0x1edba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1edba8:
    // 0x1edba8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1edba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1edbac:
    // 0x1edbac: 0x800008  jr          $a0
label_1edbb0:
    if (ctx->pc == 0x1EDBB0u) {
        ctx->pc = 0x1EDBB4u;
        goto label_1edbb4;
    }
    ctx->pc = 0x1EDBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDBB4u: goto label_1edbb4;
            case 0x1EDBC4u: goto label_1edbc4;
            case 0x1EDBD4u: goto label_1edbd4;
            case 0x1EDBE4u: goto label_1edbe4;
            case 0x1EDBF4u: goto label_1edbf4;
            case 0x1EDC04u: goto label_1edc04;
            case 0x1EDC14u: goto label_1edc14;
            case 0x1EDC24u: goto label_1edc24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDBACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EDBB4u;
label_1edbb4:
    // 0x1edbb4: 0xc07b19a  jal         func_1EC668
label_1edbb8:
    if (ctx->pc == 0x1EDBB8u) {
        ctx->pc = 0x1EDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBB4u;
        // 0x1edbb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBBCu;
        goto label_1edbbc;
    }
    ctx->pc = 0x1EDBB4u;
    SET_GPR_U32(ctx, 31, 0x1EDBBCu);
    ctx->pc = 0x1EDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBB4u;
    // 0x1edbb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC668u, 0x1EDBB4u, 0x1EDBBCu)) {
        return;
    }
    ctx->pc = 0x1EDBBCu;
label_1edbbc:
    // 0x1edbbc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1edbc0:
    if (ctx->pc == 0x1EDBC0u) {
        ctx->pc = 0x1EDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBBCu;
        // 0x1edbc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBC4u;
        goto label_1edbc4;
    }
    ctx->pc = 0x1EDBBCu;
    {
        const bool branch_taken_0x1edbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBBCu;
        // 0x1edbc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbbc) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBC4u;
label_1edbc4:
    // 0x1edbc4: 0xc07adb0  jal         func_1EB6C0
label_1edbc8:
    if (ctx->pc == 0x1EDBC8u) {
        ctx->pc = 0x1EDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBC4u;
        // 0x1edbc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBCCu;
        goto label_1edbcc;
    }
    ctx->pc = 0x1EDBC4u;
    SET_GPR_U32(ctx, 31, 0x1EDBCCu);
    ctx->pc = 0x1EDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBC4u;
    // 0x1edbc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EB6C0u, 0x1EDBC4u, 0x1EDBCCu)) {
        return;
    }
    ctx->pc = 0x1EDBCCu;
label_1edbcc:
    // 0x1edbcc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1edbd0:
    if (ctx->pc == 0x1EDBD0u) {
        ctx->pc = 0x1EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBCCu;
        // 0x1edbd0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBD4u;
        goto label_1edbd4;
    }
    ctx->pc = 0x1EDBCCu;
    {
        const bool branch_taken_0x1edbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBCCu;
        // 0x1edbd0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbcc) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBD4u;
label_1edbd4:
    // 0x1edbd4: 0xc07ae02  jal         func_1EB808
label_1edbd8:
    if (ctx->pc == 0x1EDBD8u) {
        ctx->pc = 0x1EDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBD4u;
        // 0x1edbd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBDCu;
        goto label_1edbdc;
    }
    ctx->pc = 0x1EDBD4u;
    SET_GPR_U32(ctx, 31, 0x1EDBDCu);
    ctx->pc = 0x1EDBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBD4u;
    // 0x1edbd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EB808u, 0x1EDBD4u, 0x1EDBDCu)) {
        return;
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1edbe0:
    if (ctx->pc == 0x1EDBE0u) {
        ctx->pc = 0x1EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBDCu;
        // 0x1edbe0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBE4u;
        goto label_1edbe4;
    }
    ctx->pc = 0x1EDBDCu;
    {
        const bool branch_taken_0x1edbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBDCu;
        // 0x1edbe0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbdc) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBE4u;
label_1edbe4:
    // 0x1edbe4: 0xc07ae72  jal         func_1EB9C8
label_1edbe8:
    if (ctx->pc == 0x1EDBE8u) {
        ctx->pc = 0x1EDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBE4u;
        // 0x1edbe8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBECu;
        goto label_1edbec;
    }
    ctx->pc = 0x1EDBE4u;
    SET_GPR_U32(ctx, 31, 0x1EDBECu);
    ctx->pc = 0x1EDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBE4u;
    // 0x1edbe8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EB9C8u, 0x1EDBE4u, 0x1EDBECu)) {
        return;
    }
    ctx->pc = 0x1EDBECu;
label_1edbec:
    // 0x1edbec: 0x10000010  b           . + 4 + (0x10 << 2)
label_1edbf0:
    if (ctx->pc == 0x1EDBF0u) {
        ctx->pc = 0x1EDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBECu;
        // 0x1edbf0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBF4u;
        goto label_1edbf4;
    }
    ctx->pc = 0x1EDBECu;
    {
        const bool branch_taken_0x1edbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBECu;
        // 0x1edbf0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbec) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDBF4u;
label_1edbf4:
    // 0x1edbf4: 0xc07b1ae  jal         func_1EC6B8
label_1edbf8:
    if (ctx->pc == 0x1EDBF8u) {
        ctx->pc = 0x1EDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBF4u;
        // 0x1edbf8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDBFCu;
        goto label_1edbfc;
    }
    ctx->pc = 0x1EDBF4u;
    SET_GPR_U32(ctx, 31, 0x1EDBFCu);
    ctx->pc = 0x1EDBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBF4u;
    // 0x1edbf8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC6B8u, 0x1EDBF4u, 0x1EDBFCu)) {
        return;
    }
    ctx->pc = 0x1EDBFCu;
label_1edbfc:
    // 0x1edbfc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1edc00:
    if (ctx->pc == 0x1EDC00u) {
        ctx->pc = 0x1EDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBFCu;
        // 0x1edc00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC04u;
        goto label_1edc04;
    }
    ctx->pc = 0x1EDBFCu;
    {
        const bool branch_taken_0x1edbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBFCu;
        // 0x1edc00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbfc) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDC04u;
label_1edc04:
    // 0x1edc04: 0xc07a8ec  jal         func_1EA3B0
label_1edc08:
    if (ctx->pc == 0x1EDC08u) {
        ctx->pc = 0x1EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC04u;
        // 0x1edc08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC0Cu;
        goto label_1edc0c;
    }
    ctx->pc = 0x1EDC04u;
    SET_GPR_U32(ctx, 31, 0x1EDC0Cu);
    ctx->pc = 0x1EDC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC04u;
    // 0x1edc08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EA3B0u, 0x1EDC04u, 0x1EDC0Cu)) {
        return;
    }
    ctx->pc = 0x1EDC0Cu;
label_1edc0c:
    // 0x1edc0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1edc10:
    if (ctx->pc == 0x1EDC10u) {
        ctx->pc = 0x1EDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC0Cu;
        // 0x1edc10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC14u;
        goto label_1edc14;
    }
    ctx->pc = 0x1EDC0Cu;
    {
        const bool branch_taken_0x1edc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC0Cu;
        // 0x1edc10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc0c) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDC14u;
label_1edc14:
    // 0x1edc14: 0xc07aec0  jal         func_1EBB00
label_1edc18:
    if (ctx->pc == 0x1EDC18u) {
        ctx->pc = 0x1EDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC14u;
        // 0x1edc18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC1Cu;
        goto label_1edc1c;
    }
    ctx->pc = 0x1EDC14u;
    SET_GPR_U32(ctx, 31, 0x1EDC1Cu);
    ctx->pc = 0x1EDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC14u;
    // 0x1edc18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EBB00u, 0x1EDC14u, 0x1EDC1Cu)) {
        return;
    }
    ctx->pc = 0x1EDC1Cu;
label_1edc1c:
    // 0x1edc1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1edc20:
    if (ctx->pc == 0x1EDC20u) {
        ctx->pc = 0x1EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC1Cu;
        // 0x1edc20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC24u;
        goto label_1edc24;
    }
    ctx->pc = 0x1EDC1Cu;
    {
        const bool branch_taken_0x1edc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC1Cu;
        // 0x1edc20: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc1c) {
            ctx->pc = 0x1EDC30u;
            goto label_1edc30;
        }
    }
    ctx->pc = 0x1EDC24u;
label_1edc24:
    // 0x1edc24: 0xc07aec0  jal         func_1EBB00
label_1edc28:
    if (ctx->pc == 0x1EDC28u) {
        ctx->pc = 0x1EDC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC24u;
        // 0x1edc28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC2Cu;
        goto label_1edc2c;
    }
    ctx->pc = 0x1EDC24u;
    SET_GPR_U32(ctx, 31, 0x1EDC2Cu);
    ctx->pc = 0x1EDC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC24u;
    // 0x1edc28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EBB00u, 0x1EDC24u, 0x1EDC2Cu)) {
        return;
    }
    ctx->pc = 0x1EDC2Cu;
label_1edc2c:
    // 0x1edc2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1edc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1edc30:
    // 0x1edc30: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1edc30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1edc34:
    // 0x1edc34: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1edc38:
    if (ctx->pc == 0x1EDC38u) {
        ctx->pc = 0x1EDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC34u;
        // 0x1edc38: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC3Cu;
        goto label_1edc3c;
    }
    ctx->pc = 0x1EDC34u;
    {
        const bool branch_taken_0x1edc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC34u;
        // 0x1edc38: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc34) {
            ctx->pc = 0x1EDB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edb88;
        }
    }
    ctx->pc = 0x1EDC3Cu;
label_1edc3c:
    // 0x1edc3c: 0x8fd30008  lw          $s3, 0x8($fp)
    ctx->pc = 0x1edc3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1edc40:
    // 0x1edc40: 0x1ac0000d  blez        $s6, . + 4 + (0xD << 2)
label_1edc44:
    if (ctx->pc == 0x1EDC44u) {
        ctx->pc = 0x1EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC40u;
        // 0x1edc44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC48u;
        goto label_1edc48;
    }
    ctx->pc = 0x1EDC40u;
    {
        const bool branch_taken_0x1edc40 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1EDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC40u;
        // 0x1edc44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc40) {
            ctx->pc = 0x1EDC78u;
            goto label_1edc78;
        }
    }
    ctx->pc = 0x1EDC48u;
label_1edc48:
    // 0x1edc48: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1edc48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1edc4c:
    // 0x1edc4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1edc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1edc50:
    // 0x1edc50: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1edc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1edc54:
    // 0x1edc54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1edc58:
    if (ctx->pc == 0x1EDC58u) {
        ctx->pc = 0x1EDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC54u;
        // 0x1edc58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC5Cu;
        goto label_1edc5c;
    }
    ctx->pc = 0x1EDC54u;
    {
        const bool branch_taken_0x1edc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC54u;
        // 0x1edc58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc54) {
            ctx->pc = 0x1EDC68u;
            goto label_1edc68;
        }
    }
    ctx->pc = 0x1EDC5Cu;
label_1edc5c:
    // 0x1edc5c: 0xc07b13a  jal         func_1EC4E8
label_1edc60:
    if (ctx->pc == 0x1EDC60u) {
        ctx->pc = 0x1EDC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC5Cu;
        // 0x1edc60: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC64u;
        goto label_1edc64;
    }
    ctx->pc = 0x1EDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC64u);
    ctx->pc = 0x1EDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC5Cu;
    // 0x1edc60: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC4E8u, 0x1EDC5Cu, 0x1EDC64u)) {
        return;
    }
    ctx->pc = 0x1EDC64u;
label_1edc64:
    // 0x1edc64: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1edc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1edc68:
    // 0x1edc68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1edc68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1edc6c:
    // 0x1edc6c: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1edc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1edc70:
    // 0x1edc70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1edc74:
    if (ctx->pc == 0x1EDC74u) {
        ctx->pc = 0x1EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC70u;
        // 0x1edc74: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC78u;
        goto label_1edc78;
    }
    ctx->pc = 0x1EDC70u;
    {
        const bool branch_taken_0x1edc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC70u;
        // 0x1edc74: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc70) {
            ctx->pc = 0x1EDC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edc48;
        }
    }
    ctx->pc = 0x1EDC78u;
label_1edc78:
    // 0x1edc78: 0x1ac0000d  blez        $s6, . + 4 + (0xD << 2)
label_1edc7c:
    if (ctx->pc == 0x1EDC7Cu) {
        ctx->pc = 0x1EDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC78u;
        // 0x1edc7c: 0x8fd30008  lw          $s3, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC80u;
        goto label_1edc80;
    }
    ctx->pc = 0x1EDC78u;
    {
        const bool branch_taken_0x1edc78 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x1EDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC78u;
        // 0x1edc7c: 0x8fd30008  lw          $s3, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc78) {
            ctx->pc = 0x1EDCB0u;
            goto label_1edcb0;
        }
    }
    ctx->pc = 0x1EDC80u;
label_1edc80:
    // 0x1edc80: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1edc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1edc84:
    // 0x1edc84: 0x0  nop
    ctx->pc = 0x1edc84u;
    // NOP
label_1edc88:
    // 0x1edc88: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1edc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1edc8c:
    // 0x1edc8c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1edc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1edc90:
    // 0x1edc90: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1edc94:
    // 0x1edc94: 0xc078e90  jal         func_1E3A40
label_1edc98:
    if (ctx->pc == 0x1EDC98u) {
        ctx->pc = 0x1EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC94u;
        // 0x1edc98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDC9Cu;
        goto label_1edc9c;
    }
    ctx->pc = 0x1EDC94u;
    SET_GPR_U32(ctx, 31, 0x1EDC9Cu);
    ctx->pc = 0x1EDC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC94u;
    // 0x1edc98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A40u, 0x1EDC94u, 0x1EDC9Cu)) {
        return;
    }
    ctx->pc = 0x1EDC9Cu;
label_1edc9c:
    // 0x1edc9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1edc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1edca0:
    // 0x1edca0: 0xc078e90  jal         func_1E3A40
label_1edca4:
    if (ctx->pc == 0x1EDCA4u) {
        ctx->pc = 0x1EDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA0u;
        // 0x1edca4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCA8u;
        goto label_1edca8;
    }
    ctx->pc = 0x1EDCA0u;
    SET_GPR_U32(ctx, 31, 0x1EDCA8u);
    ctx->pc = 0x1EDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCA0u;
    // 0x1edca4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A40u, 0x1EDCA0u, 0x1EDCA8u)) {
        return;
    }
    ctx->pc = 0x1EDCA8u;
label_1edca8:
    // 0x1edca8: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
label_1edcac:
    if (ctx->pc == 0x1EDCACu) {
        ctx->pc = 0x1EDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA8u;
        // 0x1edcac: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCB0u;
        goto label_1edcb0;
    }
    ctx->pc = 0x1EDCA8u;
    {
        const bool branch_taken_0x1edca8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA8u;
        // 0x1edcac: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edca8) {
            ctx->pc = 0x1EDC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edc88;
        }
    }
    ctx->pc = 0x1EDCB0u;
label_1edcb0:
    // 0x1edcb0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1edcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1edcb4:
    // 0x1edcb4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1edcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1edcb8:
    // 0x1edcb8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1edcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1edcbc:
    // 0x1edcbc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1edcbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1edcc0:
    // 0x1edcc0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1edcc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1edcc4:
    // 0x1edcc4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1edcc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1edcc8:
    // 0x1edcc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1edcc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1edccc:
    // 0x1edccc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1edcccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1edcd0:
    // 0x1edcd0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1edcd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1edcd4:
    // 0x1edcd4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1edcd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1edcd8:
    // 0x1edcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1edcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1edcdc:
    // 0x1edcdc: 0x3e00008  jr          $ra
label_1edce0:
    if (ctx->pc == 0x1EDCE0u) {
        ctx->pc = 0x1EDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCDCu;
        // 0x1edce0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCE4u;
        goto label_1edce4;
    }
    ctx->pc = 0x1EDCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCDCu;
        // 0x1edce0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDCE4u;
label_1edce4:
    // 0x1edce4: 0x0  nop
    ctx->pc = 0x1edce4u;
    // NOP
    ctx->pc = 0x1edce8u;
}
