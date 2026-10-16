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

// Function: sub_00246A20
// Address: 0x246a20 - 0x246af8
void sub_00246A20_0x246a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A20_0x246a20");
#endif

    switch (ctx->pc) {
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        default: break;
    }

    ctx->pc = 0x246a20u;

label_246a20:
    // 0x246a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_246a24:
    // 0x246a24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x246a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_246a28:
    // 0x246a28: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x246a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
label_246a2c:
    // 0x246a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_246a30:
    // 0x246a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x246a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_246a34:
    // 0x246a34: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
label_246a38:
    // 0x246a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_246a3c:
    // 0x246a3c: 0x26251180  addiu       $a1, $s1, 0x1180
    ctx->pc = 0x246a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4480));
label_246a40:
    // 0x246a40: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x246a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_246a44:
    // 0x246a44: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
label_246a48:
    if (ctx->pc == 0x246A48u) {
        ctx->pc = 0x246A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A44u;
        // 0x246a48: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A4Cu;
        goto label_246a4c;
    }
    ctx->pc = 0x246A44u;
    {
        const bool branch_taken_0x246a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A44u;
        // 0x246a48: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a44) {
            ctx->pc = 0x246AE0u;
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246A4Cu;
label_246a4c:
    // 0x246a4c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x246a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_246a50:
    // 0x246a50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x246a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_246a54:
    // 0x246a54: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_246a58:
    if (ctx->pc == 0x246A58u) {
        ctx->pc = 0x246A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A54u;
        // 0x246a58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A5Cu;
        goto label_246a5c;
    }
    ctx->pc = 0x246A54u;
    {
        const bool branch_taken_0x246a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a54) {
            ctx->pc = 0x246A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A54u;
            // 0x246a58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246A5Cu;
label_246a5c:
    // 0x246a5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x246a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_246a60:
    // 0x246a60: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_246a64:
    if (ctx->pc == 0x246A64u) {
        ctx->pc = 0x246A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A60u;
        // 0x246a64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A68u;
        goto label_246a68;
    }
    ctx->pc = 0x246A60u;
    {
        const bool branch_taken_0x246a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a60) {
            ctx->pc = 0x246A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A60u;
            // 0x246a64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246A68u;
label_246a68:
    // 0x246a68: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246a6c:
    // 0x246a6c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_246a70:
    if (ctx->pc == 0x246A70u) {
        ctx->pc = 0x246A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A6Cu;
        // 0x246a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A74u;
        goto label_246a74;
    }
    ctx->pc = 0x246A6Cu;
    {
        const bool branch_taken_0x246a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246a6c) {
            ctx->pc = 0x246A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A6Cu;
            // 0x246a70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246A74u;
label_246a74:
    // 0x246a74: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x246a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_246a78:
    // 0x246a78: 0x40f809  jalr        $v0
label_246a7c:
    if (ctx->pc == 0x246A7Cu) {
        ctx->pc = 0x246A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A78u;
        // 0x246a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A80u;
        goto label_246a80;
    }
    ctx->pc = 0x246A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246A80u);
        ctx->pc = 0x246A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A78u;
        // 0x246a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246A78u, 0x246A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246A80u;
label_246a80:
    // 0x246a80: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x246a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246a84:
    // 0x246a84: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_246a88:
    if (ctx->pc == 0x246A88u) {
        ctx->pc = 0x246A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A84u;
        // 0x246a88: 0x8e221180  lw          $v0, 0x1180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A8Cu;
        goto label_246a8c;
    }
    ctx->pc = 0x246A84u;
    {
        const bool branch_taken_0x246a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A84u;
        // 0x246a88: 0x8e221180  lw          $v0, 0x1180($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a84) {
            ctx->pc = 0x246AE0u;
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246A8Cu;
label_246a8c:
    // 0x246a8c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_246a90:
    if (ctx->pc == 0x246A90u) {
        ctx->pc = 0x246A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A8Cu;
        // 0x246a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A94u;
        goto label_246a94;
    }
    ctx->pc = 0x246A8Cu;
    {
        const bool branch_taken_0x246a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a8c) {
            ctx->pc = 0x246A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246A8Cu;
            // 0x246a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246A94u;
label_246a94:
    // 0x246a94: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x246a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_246a98:
    // 0x246a98: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x246a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_246a9c:
    // 0x246a9c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x246a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_246aa0:
    // 0x246aa0: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x246aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_246aa4:
    // 0x246aa4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x246aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_246aa8:
    // 0x246aa8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x246aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_246aac:
    // 0x246aac: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x246aacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246ab0:
    // 0x246ab0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x246ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_246ab4:
    // 0x246ab4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x246ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_246ab8:
    // 0x246ab8: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x246ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_246abc:
    // 0x246abc: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x246abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246ac0:
    // 0x246ac0: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x246ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_246ac4:
    // 0x246ac4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x246ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_246ac8:
    // 0x246ac8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x246ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_246acc:
    // 0x246acc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_246ad0:
    // 0x246ad0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x246ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_246ad4:
    // 0x246ad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x246ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_246ad8:
    // 0x246ad8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x246ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_246adc:
    // 0x246adc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x246adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_246ae0:
    // 0x246ae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x246ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246ae4:
    // 0x246ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246ae8:
    // 0x246ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246aec:
    // 0x246aec: 0x3e00008  jr          $ra
label_246af0:
    if (ctx->pc == 0x246AF0u) {
        ctx->pc = 0x246AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AECu;
        // 0x246af0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AF4u;
        goto label_246af4;
    }
    ctx->pc = 0x246AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AECu;
        // 0x246af0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246AF4u;
label_246af4:
    // 0x246af4: 0x0  nop
    ctx->pc = 0x246af4u;
    // NOP
    ctx->pc = 0x246af8u;
}
