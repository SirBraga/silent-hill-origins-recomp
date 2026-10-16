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

// Function: sub_00288B40
// Address: 0x288b40 - 0x288c40
void sub_00288B40_0x288b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B40_0x288b40");
#endif

    switch (ctx->pc) {
        case 0x288b40u: goto label_288b40;
        case 0x288b44u: goto label_288b44;
        case 0x288b48u: goto label_288b48;
        case 0x288b4cu: goto label_288b4c;
        case 0x288b50u: goto label_288b50;
        case 0x288b54u: goto label_288b54;
        case 0x288b58u: goto label_288b58;
        case 0x288b5cu: goto label_288b5c;
        case 0x288b60u: goto label_288b60;
        case 0x288b64u: goto label_288b64;
        case 0x288b68u: goto label_288b68;
        case 0x288b6cu: goto label_288b6c;
        case 0x288b70u: goto label_288b70;
        case 0x288b74u: goto label_288b74;
        case 0x288b78u: goto label_288b78;
        case 0x288b7cu: goto label_288b7c;
        case 0x288b80u: goto label_288b80;
        case 0x288b84u: goto label_288b84;
        case 0x288b88u: goto label_288b88;
        case 0x288b8cu: goto label_288b8c;
        case 0x288b90u: goto label_288b90;
        case 0x288b94u: goto label_288b94;
        case 0x288b98u: goto label_288b98;
        case 0x288b9cu: goto label_288b9c;
        case 0x288ba0u: goto label_288ba0;
        case 0x288ba4u: goto label_288ba4;
        case 0x288ba8u: goto label_288ba8;
        case 0x288bacu: goto label_288bac;
        case 0x288bb0u: goto label_288bb0;
        case 0x288bb4u: goto label_288bb4;
        case 0x288bb8u: goto label_288bb8;
        case 0x288bbcu: goto label_288bbc;
        case 0x288bc0u: goto label_288bc0;
        case 0x288bc4u: goto label_288bc4;
        case 0x288bc8u: goto label_288bc8;
        case 0x288bccu: goto label_288bcc;
        case 0x288bd0u: goto label_288bd0;
        case 0x288bd4u: goto label_288bd4;
        case 0x288bd8u: goto label_288bd8;
        case 0x288bdcu: goto label_288bdc;
        case 0x288be0u: goto label_288be0;
        case 0x288be4u: goto label_288be4;
        case 0x288be8u: goto label_288be8;
        case 0x288becu: goto label_288bec;
        case 0x288bf0u: goto label_288bf0;
        case 0x288bf4u: goto label_288bf4;
        case 0x288bf8u: goto label_288bf8;
        case 0x288bfcu: goto label_288bfc;
        case 0x288c00u: goto label_288c00;
        case 0x288c04u: goto label_288c04;
        case 0x288c08u: goto label_288c08;
        case 0x288c0cu: goto label_288c0c;
        case 0x288c10u: goto label_288c10;
        case 0x288c14u: goto label_288c14;
        case 0x288c18u: goto label_288c18;
        case 0x288c1cu: goto label_288c1c;
        case 0x288c20u: goto label_288c20;
        case 0x288c24u: goto label_288c24;
        case 0x288c28u: goto label_288c28;
        case 0x288c2cu: goto label_288c2c;
        case 0x288c30u: goto label_288c30;
        case 0x288c34u: goto label_288c34;
        case 0x288c38u: goto label_288c38;
        case 0x288c3cu: goto label_288c3c;
        default: break;
    }

    ctx->pc = 0x288b40u;

label_288b40:
    // 0x288b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_288b44:
    // 0x288b44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x288b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_288b48:
    // 0x288b48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x288b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_288b4c:
    // 0x288b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288b50:
    // 0x288b50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_288b54:
    // 0x288b54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x288b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_288b58:
    // 0x288b58: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_288b5c:
    if (ctx->pc == 0x288B5Cu) {
        ctx->pc = 0x288B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B58u;
        // 0x288b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B60u;
        goto label_288b60;
    }
    ctx->pc = 0x288B58u;
    {
        const bool branch_taken_0x288b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B58u;
        // 0x288b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b58) {
            ctx->pc = 0x288C1Cu;
            goto label_288c1c;
        }
    }
    ctx->pc = 0x288B60u;
label_288b60:
    // 0x288b60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288b64:
    // 0x288b64: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x288b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288b68:
    // 0x288b68: 0x1051002c  beq         $v0, $s1, . + 4 + (0x2C << 2)
label_288b6c:
    if (ctx->pc == 0x288B6Cu) {
        ctx->pc = 0x288B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B68u;
        // 0x288b6c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B70u;
        goto label_288b70;
    }
    ctx->pc = 0x288B68u;
    {
        const bool branch_taken_0x288b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x288B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B68u;
        // 0x288b6c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b68) {
            ctx->pc = 0x288C1Cu;
            goto label_288c1c;
        }
    }
    ctx->pc = 0x288B70u;
label_288b70:
    // 0x288b70: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x288b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_288b74:
    // 0x288b74: 0xc092858  jal         func_24A160
label_288b78:
    if (ctx->pc == 0x288B78u) {
        ctx->pc = 0x288B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B74u;
        // 0x288b78: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B7Cu;
        goto label_288b7c;
    }
    ctx->pc = 0x288B74u;
    SET_GPR_U32(ctx, 31, 0x288B7Cu);
    ctx->pc = 0x288B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B74u;
    // 0x288b78: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x288B74u, 0x288B7Cu)) {
        return;
    }
    ctx->pc = 0x288B7Cu;
label_288b7c:
    // 0x288b7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288b80:
    // 0x288b80: 0x52600026  beql        $s3, $zero, . + 4 + (0x26 << 2)
label_288b84:
    if (ctx->pc == 0x288B84u) {
        ctx->pc = 0x288B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B80u;
        // 0x288b84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B88u;
        goto label_288b88;
    }
    ctx->pc = 0x288B80u;
    {
        const bool branch_taken_0x288b80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x288b80) {
            ctx->pc = 0x288B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288B80u;
            // 0x288b84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288C1Cu;
            goto label_288c1c;
        }
    }
    ctx->pc = 0x288B88u;
label_288b88:
    // 0x288b88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288b8c:
    // 0x288b8c: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_288b90:
    if (ctx->pc == 0x288B90u) {
        ctx->pc = 0x288B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B8Cu;
        // 0x288b90: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B94u;
        goto label_288b94;
    }
    ctx->pc = 0x288B8Cu;
    {
        const bool branch_taken_0x288b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x288b8c) {
            ctx->pc = 0x288B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288B8Cu;
            // 0x288b90: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288BA0u;
            goto label_288ba0;
        }
    }
    ctx->pc = 0x288B94u;
label_288b94:
    // 0x288b94: 0xc09292a  jal         func_24A4A8
label_288b98:
    if (ctx->pc == 0x288B98u) {
        ctx->pc = 0x288B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B94u;
        // 0x288b98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288B9Cu;
        goto label_288b9c;
    }
    ctx->pc = 0x288B94u;
    SET_GPR_U32(ctx, 31, 0x288B9Cu);
    ctx->pc = 0x288B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B94u;
    // 0x288b98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x288B94u, 0x288B9Cu)) {
        return;
    }
    ctx->pc = 0x288B9Cu;
label_288b9c:
    // 0x288b9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288ba0:
    // 0x288ba0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x288ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288ba4:
    // 0x288ba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288ba8:
    // 0x288ba8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_288bac:
    if (ctx->pc == 0x288BACu) {
        ctx->pc = 0x288BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BA8u;
        // 0x288bac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BB0u;
        goto label_288bb0;
    }
    ctx->pc = 0x288BA8u;
    {
        const bool branch_taken_0x288ba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x288BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BA8u;
        // 0x288bac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ba8) {
            ctx->pc = 0x288BBCu;
            goto label_288bbc;
        }
    }
    ctx->pc = 0x288BB0u;
label_288bb0:
    // 0x288bb0: 0xc09294c  jal         func_24A530
label_288bb4:
    if (ctx->pc == 0x288BB4u) {
        ctx->pc = 0x288BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BB0u;
        // 0x288bb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BB8u;
        goto label_288bb8;
    }
    ctx->pc = 0x288BB0u;
    SET_GPR_U32(ctx, 31, 0x288BB8u);
    ctx->pc = 0x288BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BB0u;
    // 0x288bb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288BB0u, 0x288BB8u)) {
        return;
    }
    ctx->pc = 0x288BB8u;
label_288bb8:
    // 0x288bb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288bbc:
    // 0x288bbc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_288bc0:
    if (ctx->pc == 0x288BC0u) {
        ctx->pc = 0x288BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BBCu;
        // 0x288bc0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BC4u;
        goto label_288bc4;
    }
    ctx->pc = 0x288BBCu;
    {
        const bool branch_taken_0x288bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BBCu;
        // 0x288bc0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bbc) {
            ctx->pc = 0x288C00u;
            goto label_288c00;
        }
    }
    ctx->pc = 0x288BC4u;
label_288bc4:
    // 0x288bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288bc8:
    // 0x288bc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288bcc:
    // 0x288bcc: 0xc0928de  jal         func_24A378
label_288bd0:
    if (ctx->pc == 0x288BD0u) {
        ctx->pc = 0x288BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BCCu;
        // 0x288bd0: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BD4u;
        goto label_288bd4;
    }
    ctx->pc = 0x288BCCu;
    SET_GPR_U32(ctx, 31, 0x288BD4u);
    ctx->pc = 0x288BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BCCu;
    // 0x288bd0: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x288BCCu, 0x288BD4u)) {
        return;
    }
    ctx->pc = 0x288BD4u;
label_288bd4:
    // 0x288bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_288bd8:
    if (ctx->pc == 0x288BD8u) {
        ctx->pc = 0x288BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BD4u;
        // 0x288bd8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BDCu;
        goto label_288bdc;
    }
    ctx->pc = 0x288BD4u;
    {
        const bool branch_taken_0x288bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BD4u;
        // 0x288bd8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288bd4) {
            ctx->pc = 0x288BF0u;
            goto label_288bf0;
        }
    }
    ctx->pc = 0x288BDCu;
label_288bdc:
    // 0x288bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288be0:
    // 0x288be0: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x288be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288be4:
    // 0x288be4: 0x3012  mflo        $a2
    ctx->pc = 0x288be4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_288be8:
    // 0x288be8: 0xc075fdc  jal         func_1D7F70
label_288bec:
    if (ctx->pc == 0x288BECu) {
        ctx->pc = 0x288BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BE8u;
        // 0x288bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288BF0u;
        goto label_288bf0;
    }
    ctx->pc = 0x288BE8u;
    SET_GPR_U32(ctx, 31, 0x288BF0u);
    ctx->pc = 0x288BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BE8u;
    // 0x288bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x288BE8u, 0x288BF0u)) {
        return;
    }
    ctx->pc = 0x288BF0u;
label_288bf0:
    // 0x288bf0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x288bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_288bf4:
    // 0x288bf4: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x288bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_288bf8:
    // 0x288bf8: 0x40f809  jalr        $v0
label_288bfc:
    if (ctx->pc == 0x288BFCu) {
        ctx->pc = 0x288BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BF8u;
        // 0x288bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288C00u;
        goto label_288c00;
    }
    ctx->pc = 0x288BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288C00u);
        ctx->pc = 0x288BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BF8u;
        // 0x288bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288BF8u, 0x288C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288C00u;
label_288c00:
    // 0x288c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x288c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_288c04:
    // 0x288c04: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x288c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_288c08:
    // 0x288c08: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x288c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_288c0c:
    // 0x288c0c: 0xc0a22d0  jal         func_288B40
label_288c10:
    if (ctx->pc == 0x288C10u) {
        ctx->pc = 0x288C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C0Cu;
        // 0x288c10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288C14u;
        goto label_288c14;
    }
    ctx->pc = 0x288C0Cu;
    SET_GPR_U32(ctx, 31, 0x288C14u);
    ctx->pc = 0x288C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C0Cu;
    // 0x288c10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B40u;
    goto label_288b40;
    ctx->pc = 0x288C14u;
label_288c14:
    // 0x288c14: 0x10000002  b           . + 4 + (0x2 << 2)
label_288c18:
    if (ctx->pc == 0x288C18u) {
        ctx->pc = 0x288C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C14u;
        // 0x288c18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288C1Cu;
        goto label_288c1c;
    }
    ctx->pc = 0x288C14u;
    {
        const bool branch_taken_0x288c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C14u;
        // 0x288c18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c14) {
            ctx->pc = 0x288C20u;
            goto label_288c20;
        }
    }
    ctx->pc = 0x288C1Cu;
label_288c1c:
    // 0x288c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288c20:
    // 0x288c20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x288c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288c24:
    // 0x288c24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x288c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288c28:
    // 0x288c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288c2c:
    // 0x288c2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x288c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_288c30:
    // 0x288c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_288c34:
    // 0x288c34: 0x3e00008  jr          $ra
label_288c38:
    if (ctx->pc == 0x288C38u) {
        ctx->pc = 0x288C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C34u;
        // 0x288c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288C3Cu;
        goto label_288c3c;
    }
    ctx->pc = 0x288C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C34u;
        // 0x288c38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C3Cu;
label_288c3c:
    // 0x288c3c: 0x0  nop
    ctx->pc = 0x288c3cu;
    // NOP
    ctx->pc = 0x288c40u;
}
