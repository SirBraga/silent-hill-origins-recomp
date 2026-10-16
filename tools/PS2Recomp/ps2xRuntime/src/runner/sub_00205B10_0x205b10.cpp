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

// Function: sub_00205B10
// Address: 0x205b10 - 0x205bf8
void sub_00205B10_0x205b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B10_0x205b10");
#endif

    switch (ctx->pc) {
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        default: break;
    }

    ctx->pc = 0x205b10u;

label_205b10:
    // 0x205b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x205b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_205b14:
    // 0x205b14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x205b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_205b18:
    // 0x205b18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x205b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_205b1c:
    // 0x205b1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x205b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_205b20:
    // 0x205b20: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x205b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_205b24:
    // 0x205b24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205b28:
    // 0x205b28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x205b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_205b2c:
    // 0x205b2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x205b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205b30:
    // 0x205b30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x205b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_205b34:
    // 0x205b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_205b38:
    // 0x205b38: 0xc0815b2  jal         func_2056C8
label_205b3c:
    if (ctx->pc == 0x205B3Cu) {
        ctx->pc = 0x205B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B38u;
        // 0x205b3c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B40u;
        goto label_205b40;
    }
    ctx->pc = 0x205B38u;
    SET_GPR_U32(ctx, 31, 0x205B40u);
    ctx->pc = 0x205B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B38u;
    // 0x205b3c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205B38u, 0x205B40u)) {
        return;
    }
    ctx->pc = 0x205B40u;
label_205b40:
    // 0x205b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b44:
    // 0x205b44: 0xc08161c  jal         func_205870
label_205b48:
    if (ctx->pc == 0x205B48u) {
        ctx->pc = 0x205B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B44u;
        // 0x205b48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B4Cu;
        goto label_205b4c;
    }
    ctx->pc = 0x205B44u;
    SET_GPR_U32(ctx, 31, 0x205B4Cu);
    ctx->pc = 0x205B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B44u;
    // 0x205b48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205870u, 0x205B44u, 0x205B4Cu)) {
        return;
    }
    ctx->pc = 0x205B4Cu;
label_205b4c:
    // 0x205b4c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_205b50:
    if (ctx->pc == 0x205B50u) {
        ctx->pc = 0x205B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B4Cu;
        // 0x205b50: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B54u;
        goto label_205b54;
    }
    ctx->pc = 0x205B4Cu;
    {
        const bool branch_taken_0x205b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B4Cu;
        // 0x205b50: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b4c) {
            ctx->pc = 0x205BDCu;
            goto label_205bdc;
        }
    }
    ctx->pc = 0x205B54u;
label_205b54:
    // 0x205b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205b58:
    // 0x205b58: 0xc0808f0  jal         func_2023C0
label_205b5c:
    if (ctx->pc == 0x205B5Cu) {
        ctx->pc = 0x205B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B58u;
        // 0x205b5c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B60u;
        goto label_205b60;
    }
    ctx->pc = 0x205B58u;
    SET_GPR_U32(ctx, 31, 0x205B60u);
    ctx->pc = 0x205B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B58u;
    // 0x205b5c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x205B58u, 0x205B60u)) {
        return;
    }
    ctx->pc = 0x205B60u;
label_205b60:
    // 0x205b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b64:
    // 0x205b64: 0xc0815ca  jal         func_205728
label_205b68:
    if (ctx->pc == 0x205B68u) {
        ctx->pc = 0x205B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B64u;
        // 0x205b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B6Cu;
        goto label_205b6c;
    }
    ctx->pc = 0x205B64u;
    SET_GPR_U32(ctx, 31, 0x205B6Cu);
    ctx->pc = 0x205B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B64u;
    // 0x205b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205728u, 0x205B64u, 0x205B6Cu)) {
        return;
    }
    ctx->pc = 0x205B6Cu;
label_205b6c:
    // 0x205b6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_205b70:
    // 0x205b70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x205b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205b74:
    // 0x205b74: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
label_205b78:
    // 0x205b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205b7c:
    // 0x205b7c: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x205b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_205b80:
    // 0x205b80: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x205b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_205b84:
    // 0x205b84: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x205b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
label_205b88:
    // 0x205b88: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x205b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_205b8c:
    // 0x205b8c: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x205b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
label_205b90:
    // 0x205b90: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x205b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_205b94:
    // 0x205b94: 0xc0936ae  jal         func_24DAB8
label_205b98:
    if (ctx->pc == 0x205B98u) {
        ctx->pc = 0x205B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B94u;
        // 0x205b98: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B9Cu;
        goto label_205b9c;
    }
    ctx->pc = 0x205B94u;
    SET_GPR_U32(ctx, 31, 0x205B9Cu);
    ctx->pc = 0x205B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B94u;
    // 0x205b98: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x205B94u, 0x205B9Cu)) {
        return;
    }
    ctx->pc = 0x205B9Cu;
label_205b9c:
    // 0x205b9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205ba0:
    // 0x205ba0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x205ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205ba4:
    // 0x205ba4: 0xc081384  jal         func_204E10
label_205ba8:
    if (ctx->pc == 0x205BA8u) {
        ctx->pc = 0x205BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BA4u;
        // 0x205ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BACu;
        goto label_205bac;
    }
    ctx->pc = 0x205BA4u;
    SET_GPR_U32(ctx, 31, 0x205BACu);
    ctx->pc = 0x205BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BA4u;
    // 0x205ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204E10u, 0x205BA4u, 0x205BACu)) {
        return;
    }
    ctx->pc = 0x205BACu;
label_205bac:
    // 0x205bac: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_205bb0:
    if (ctx->pc == 0x205BB0u) {
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BB4u;
        goto label_205bb4;
    }
    ctx->pc = 0x205BACu;
    {
        const bool branch_taken_0x205bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bac) {
            ctx->pc = 0x205BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205BACu;
            // 0x205bb0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205BDCu;
            goto label_205bdc;
        }
    }
    ctx->pc = 0x205BB4u;
label_205bb4:
    // 0x205bb4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_205bb8:
    // 0x205bb8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_205bbc:
    if (ctx->pc == 0x205BBCu) {
        ctx->pc = 0x205BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB8u;
        // 0x205bbc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BC0u;
        goto label_205bc0;
    }
    ctx->pc = 0x205BB8u;
    {
        const bool branch_taken_0x205bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205bb8) {
            ctx->pc = 0x205BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205BB8u;
            // 0x205bbc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205BDCu;
            goto label_205bdc;
        }
    }
    ctx->pc = 0x205BC0u;
label_205bc0:
    // 0x205bc0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x205bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_205bc4:
    // 0x205bc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x205bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205bc8:
    // 0x205bc8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_205bcc:
    // 0x205bcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_205bd0:
    // 0x205bd0: 0x60f809  jalr        $v1
label_205bd4:
    if (ctx->pc == 0x205BD4u) {
        ctx->pc = 0x205BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD0u;
        // 0x205bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BD8u;
        goto label_205bd8;
    }
    ctx->pc = 0x205BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205BD8u);
        ctx->pc = 0x205BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD0u;
        // 0x205bd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205BD0u, 0x205BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205BD8u;
label_205bd8:
    // 0x205bd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x205bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_205bdc:
    // 0x205bdc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x205bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_205be0:
    // 0x205be0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x205be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205be4:
    // 0x205be4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x205be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205be8:
    // 0x205be8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x205be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205bec:
    // 0x205bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205bf0:
    // 0x205bf0: 0x3e00008  jr          $ra
label_205bf4:
    if (ctx->pc == 0x205BF4u) {
        ctx->pc = 0x205BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF0u;
        // 0x205bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BF8u;
        goto label_fallthrough_0x205bf0;
    }
    ctx->pc = 0x205BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF0u;
        // 0x205bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205bf0:
    ctx->pc = 0x205BF8u;
}
