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

// Function: sub_00205A10
// Address: 0x205a10 - 0x205b10
void sub_00205A10_0x205a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A10_0x205a10");
#endif

    switch (ctx->pc) {
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        default: break;
    }

    ctx->pc = 0x205a10u;

label_205a10:
    // 0x205a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x205a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_205a14:
    // 0x205a14: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x205a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_205a18:
    // 0x205a18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x205a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_205a1c:
    // 0x205a1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x205a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_205a20:
    // 0x205a20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x205a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_205a24:
    // 0x205a24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x205a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_205a28:
    // 0x205a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_205a2c:
    // 0x205a2c: 0xc0815b2  jal         func_2056C8
label_205a30:
    if (ctx->pc == 0x205A30u) {
        ctx->pc = 0x205A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A2Cu;
        // 0x205a30: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A34u;
        goto label_205a34;
    }
    ctx->pc = 0x205A2Cu;
    SET_GPR_U32(ctx, 31, 0x205A34u);
    ctx->pc = 0x205A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A2Cu;
    // 0x205a30: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2056C8u, 0x205A2Cu, 0x205A34u)) {
        return;
    }
    ctx->pc = 0x205A34u;
label_205a34:
    // 0x205a34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a38:
    // 0x205a38: 0xc08161c  jal         func_205870
label_205a3c:
    if (ctx->pc == 0x205A3Cu) {
        ctx->pc = 0x205A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A38u;
        // 0x205a3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A40u;
        goto label_205a40;
    }
    ctx->pc = 0x205A38u;
    SET_GPR_U32(ctx, 31, 0x205A40u);
    ctx->pc = 0x205A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A38u;
    // 0x205a3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205870u, 0x205A38u, 0x205A40u)) {
        return;
    }
    ctx->pc = 0x205A40u;
label_205a40:
    // 0x205a40: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_205a44:
    if (ctx->pc == 0x205A44u) {
        ctx->pc = 0x205A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A40u;
        // 0x205a44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A48u;
        goto label_205a48;
    }
    ctx->pc = 0x205A40u;
    {
        const bool branch_taken_0x205a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A40u;
        // 0x205a44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a40) {
            ctx->pc = 0x205AF4u;
            goto label_205af4;
        }
    }
    ctx->pc = 0x205A48u;
label_205a48:
    // 0x205a48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x205a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_205a4c:
    // 0x205a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x205a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205a50:
    // 0x205a50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_205a54:
    // 0x205a54: 0xc0814fa  jal         func_2053E8
label_205a58:
    if (ctx->pc == 0x205A58u) {
        ctx->pc = 0x205A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A54u;
        // 0x205a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A5Cu;
        goto label_205a5c;
    }
    ctx->pc = 0x205A54u;
    SET_GPR_U32(ctx, 31, 0x205A5Cu);
    ctx->pc = 0x205A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A54u;
    // 0x205a58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2053E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2053E8u, 0x205A54u, 0x205A5Cu)) {
        return;
    }
    ctx->pc = 0x205A5Cu;
label_205a5c:
    // 0x205a5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a60:
    // 0x205a60: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_205a64:
    if (ctx->pc == 0x205A64u) {
        ctx->pc = 0x205A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A60u;
        // 0x205a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A68u;
        goto label_205a68;
    }
    ctx->pc = 0x205A60u;
    {
        const bool branch_taken_0x205a60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A60u;
        // 0x205a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a60) {
            ctx->pc = 0x205AF0u;
            goto label_205af0;
        }
    }
    ctx->pc = 0x205A68u;
label_205a68:
    // 0x205a68: 0xc0808f0  jal         func_2023C0
label_205a6c:
    if (ctx->pc == 0x205A6Cu) {
        ctx->pc = 0x205A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A68u;
        // 0x205a6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A70u;
        goto label_205a70;
    }
    ctx->pc = 0x205A68u;
    SET_GPR_U32(ctx, 31, 0x205A70u);
    ctx->pc = 0x205A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A68u;
    // 0x205a6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x205A68u, 0x205A70u)) {
        return;
    }
    ctx->pc = 0x205A70u;
label_205a70:
    // 0x205a70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205a74:
    // 0x205a74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x205a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a78:
    // 0x205a78: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x205a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_205a7c:
    // 0x205a7c: 0xc0815ca  jal         func_205728
label_205a80:
    if (ctx->pc == 0x205A80u) {
        ctx->pc = 0x205A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A7Cu;
        // 0x205a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A84u;
        goto label_205a84;
    }
    ctx->pc = 0x205A7Cu;
    SET_GPR_U32(ctx, 31, 0x205A84u);
    ctx->pc = 0x205A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A7Cu;
    // 0x205a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205728u, 0x205A7Cu, 0x205A84u)) {
        return;
    }
    ctx->pc = 0x205A84u;
label_205a84:
    // 0x205a84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_205a88:
    // 0x205a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x205a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205a8c:
    // 0x205a8c: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x205a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
label_205a90:
    // 0x205a90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205a94:
    // 0x205a94: 0x26460038  addiu       $a2, $s2, 0x38
    ctx->pc = 0x205a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_205a98:
    // 0x205a98: 0xae500034  sw          $s0, 0x34($s2)
    ctx->pc = 0x205a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 16));
label_205a9c:
    // 0x205a9c: 0xae530038  sw          $s3, 0x38($s2)
    ctx->pc = 0x205a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 19));
label_205aa0:
    // 0x205aa0: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x205aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_205aa4:
    // 0x205aa4: 0xae51003c  sw          $s1, 0x3C($s2)
    ctx->pc = 0x205aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
label_205aa8:
    // 0x205aa8: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x205aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
label_205aac:
    // 0x205aac: 0xc0936ae  jal         func_24DAB8
label_205ab0:
    if (ctx->pc == 0x205AB0u) {
        ctx->pc = 0x205AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AACu;
        // 0x205ab0: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AB4u;
        goto label_205ab4;
    }
    ctx->pc = 0x205AACu;
    SET_GPR_U32(ctx, 31, 0x205AB4u);
    ctx->pc = 0x205AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AACu;
    // 0x205ab0: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x205AACu, 0x205AB4u)) {
        return;
    }
    ctx->pc = 0x205AB4u;
label_205ab4:
    // 0x205ab4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x205ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205ab8:
    // 0x205ab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x205ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205abc:
    // 0x205abc: 0xc081384  jal         func_204E10
label_205ac0:
    if (ctx->pc == 0x205AC0u) {
        ctx->pc = 0x205AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ABCu;
        // 0x205ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AC4u;
        goto label_205ac4;
    }
    ctx->pc = 0x205ABCu;
    SET_GPR_U32(ctx, 31, 0x205AC4u);
    ctx->pc = 0x205AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205ABCu;
    // 0x205ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204E10u, 0x205ABCu, 0x205AC4u)) {
        return;
    }
    ctx->pc = 0x205AC4u;
label_205ac4:
    // 0x205ac4: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_205ac8:
    if (ctx->pc == 0x205AC8u) {
        ctx->pc = 0x205AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC4u;
        // 0x205ac8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205ACCu;
        goto label_205acc;
    }
    ctx->pc = 0x205AC4u;
    {
        const bool branch_taken_0x205ac4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC4u;
        // 0x205ac8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ac4) {
            ctx->pc = 0x205AF4u;
            goto label_205af4;
        }
    }
    ctx->pc = 0x205ACCu;
label_205acc:
    // 0x205acc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x205accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_205ad0:
    // 0x205ad0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_205ad4:
    if (ctx->pc == 0x205AD4u) {
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AD8u;
        goto label_205ad8;
    }
    ctx->pc = 0x205AD0u;
    {
        const bool branch_taken_0x205ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ad0) {
            ctx->pc = 0x205AF8u;
            goto label_205af8;
        }
    }
    ctx->pc = 0x205AD8u;
label_205ad8:
    // 0x205ad8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_205adc:
    // 0x205adc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x205adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205ae0:
    // 0x205ae0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_205ae4:
    // 0x205ae4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_205ae8:
    // 0x205ae8: 0x60f809  jalr        $v1
label_205aec:
    if (ctx->pc == 0x205AECu) {
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF0u;
        goto label_205af0;
    }
    ctx->pc = 0x205AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205AF0u);
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AE8u, 0x205AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205AF0u;
label_205af0:
    // 0x205af0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x205af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_205af4:
    // 0x205af4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x205af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_205af8:
    // 0x205af8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x205af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_205afc:
    // 0x205afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x205afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205b00:
    // 0x205b00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x205b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_205b04:
    // 0x205b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_205b08:
    // 0x205b08: 0x3e00008  jr          $ra
label_205b0c:
    if (ctx->pc == 0x205B0Cu) {
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B10u;
        goto label_fallthrough_0x205b08;
    }
    ctx->pc = 0x205B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B08u;
        // 0x205b0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205b08:
    ctx->pc = 0x205B10u;
}
