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

// Function: sub_0019B798
// Address: 0x19b798 - 0x19b958
void sub_0019B798_0x19b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B798_0x19b798");
#endif

    switch (ctx->pc) {
        case 0x19b7ecu: goto label_19b7ec;
        case 0x19b808u: goto label_19b808;
        case 0x19b838u: goto label_19b838;
        case 0x19b8a4u: goto label_19b8a4;
        case 0x19b8b0u: goto label_19b8b0;
        case 0x19b8f4u: goto label_19b8f4;
        case 0x19b910u: goto label_19b910;
        case 0x19b92cu: goto label_19b92c;
        case 0x19b948u: goto label_19b948;
        default: break;
    }

    ctx->pc = 0x19b798u;

    // 0x19b798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b79c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19b7a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b7ac: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x19b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x19b7b0: 0x54820010  bnel        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B7B0u;
    {
        const bool branch_taken_0x19b7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b7b0) {
            ctx->pc = 0x19B7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7B0u;
            // 0x19b7b4: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B7F4u;
            goto label_19b7f4;
        }
    }
    ctx->pc = 0x19B7B8u;
    // 0x19b7b8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x19b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x19b7bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B7BCu;
    {
        const bool branch_taken_0x19b7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b7bc) {
            ctx->pc = 0x19B7E4u;
            goto label_19b7e4;
        }
    }
    ctx->pc = 0x19B7C4u;
    // 0x19b7c4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x19b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19b7c8: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x19B7C8u;
    {
        const bool branch_taken_0x19b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b7c8) {
            ctx->pc = 0x19B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7C8u;
            // 0x19b7cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B7D0u;
    // 0x19b7d0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b7d4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x19b7d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b7dc: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x19B7DCu;
    {
        const bool branch_taken_0x19b7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b7dc) {
            ctx->pc = 0x19B7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B7DCu;
            // 0x19b7e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B7E4u;
label_19b7e4:
    // 0x19b7e4: 0xc066ec2  jal         func_19BB08
    ctx->pc = 0x19B7E4u;
    SET_GPR_U32(ctx, 31, 0x19B7ECu);
    ctx->pc = 0x19B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7E4u;
    // 0x19b7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BB08u, 0x19B7E4u, 0x19B7ECu)) {
        return;
    }
    ctx->pc = 0x19B7ECu;
label_19b7ec:
    // 0x19b7ec: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x19B7ECu;
    {
        const bool branch_taken_0x19b7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7ECu;
        // 0x19b7f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7ec) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B7F4u;
label_19b7f4:
    // 0x19b7f4: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B7F4u;
    {
        const bool branch_taken_0x19b7f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B7F4u;
        // 0x19b7f8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7f4) {
            ctx->pc = 0x19B840u;
            goto label_19b840;
        }
    }
    ctx->pc = 0x19B7FCu;
    // 0x19b7fc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b800: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x19B800u;
    SET_GPR_U32(ctx, 31, 0x19B808u);
    ctx->pc = 0x19B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B800u;
    // 0x19b804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x19B800u, 0x19B808u)) {
        return;
    }
    ctx->pc = 0x19B808u;
label_19b808:
    // 0x19b808: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19b80c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x19b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x19b810: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x19b810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x19b814: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x19B814u;
    {
        const bool branch_taken_0x19b814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B814u;
        // 0x19b818: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b814) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B81Cu;
    // 0x19b81c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b820: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x19B820u;
    {
        const bool branch_taken_0x19b820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B820u;
        // 0x19b824: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b820) {
            ctx->pc = 0x19B950u;
            goto label_19b950;
        }
    }
    ctx->pc = 0x19B828u;
    // 0x19b828: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19b828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19b82c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b830: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19B830u;
    SET_GPR_U32(ctx, 31, 0x19B838u);
    ctx->pc = 0x19B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B830u;
    // 0x19b834: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19B830u, 0x19B838u)) {
        return;
    }
    ctx->pc = 0x19B838u;
label_19b838:
    // 0x19b838: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x19B838u;
    {
        const bool branch_taken_0x19b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B838u;
        // 0x19b83c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b838) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B840u;
label_19b840:
    // 0x19b840: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x19b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x19b844: 0x5483001c  bnel        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19B844u;
    {
        const bool branch_taken_0x19b844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b844) {
            ctx->pc = 0x19B848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B844u;
            // 0x19b848: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8B8u;
            goto label_19b8b8;
        }
    }
    ctx->pc = 0x19B84Cu;
    // 0x19b84c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19b850: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19B850u;
    {
        const bool branch_taken_0x19b850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b850) {
            ctx->pc = 0x19B8A8u;
            goto label_19b8a8;
        }
    }
    ctx->pc = 0x19B858u;
    // 0x19b858: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b85c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x19b860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b864: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B864u;
    {
        const bool branch_taken_0x19b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b864) {
            ctx->pc = 0x19B8A8u;
            goto label_19b8a8;
        }
    }
    ctx->pc = 0x19B86Cu;
    // 0x19b86c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x19b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x19b870: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B870u;
    {
        const bool branch_taken_0x19b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B870u;
        // 0x19b874: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b870) {
            ctx->pc = 0x19B8A8u;
            goto label_19b8a8;
        }
    }
    ctx->pc = 0x19B878u;
    // 0x19b878: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x19b87c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x19b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x19b880: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B880u;
    {
        const bool branch_taken_0x19b880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b880) {
            ctx->pc = 0x19B884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B880u;
            // 0x19b884: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8A8u;
            goto label_19b8a8;
        }
    }
    ctx->pc = 0x19B888u;
    // 0x19b888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b88c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B88Cu;
    {
        const bool branch_taken_0x19b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b88c) {
            ctx->pc = 0x19B890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B88Cu;
            // 0x19b890: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8A8u;
            goto label_19b8a8;
        }
    }
    ctx->pc = 0x19B894u;
    // 0x19b894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19b894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19b898: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b89c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19B89Cu;
    SET_GPR_U32(ctx, 31, 0x19B8A4u);
    ctx->pc = 0x19B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B89Cu;
    // 0x19b8a0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19B89Cu, 0x19B8A4u)) {
        return;
    }
    ctx->pc = 0x19B8A4u;
label_19b8a4:
    // 0x19b8a4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x19b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_19b8a8:
    // 0x19b8a8: 0xc066e56  jal         func_19B958
    ctx->pc = 0x19B8A8u;
    SET_GPR_U32(ctx, 31, 0x19B8B0u);
    ctx->pc = 0x19B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8A8u;
    // 0x19b8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19B958u, 0x19B8A8u, 0x19B8B0u)) {
        return;
    }
    ctx->pc = 0x19B8B0u;
label_19b8b0:
    // 0x19b8b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x19B8B0u;
    {
        const bool branch_taken_0x19b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8B0u;
        // 0x19b8b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8b0) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B8B8u;
label_19b8b8:
    // 0x19b8b8: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8B8u;
    {
        const bool branch_taken_0x19b8b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b8b8) {
            ctx->pc = 0x19B8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B8B8u;
            // 0x19b8bc: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B8CCu;
            goto label_19b8cc;
        }
    }
    ctx->pc = 0x19B8C0u;
    // 0x19b8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b8c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19B8C4u;
    {
        const bool branch_taken_0x19b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8C4u;
        // 0x19b8c8: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8c4) {
            ctx->pc = 0x19B948u;
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B8CCu;
label_19b8cc:
    // 0x19b8cc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B8CCu;
    {
        const bool branch_taken_0x19b8cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8CCu;
        // 0x19b8d0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8cc) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B8D4u;
    // 0x19b8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b8d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19B8D8u;
    {
        const bool branch_taken_0x19b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8D8u;
        // 0x19b8dc: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8d8) {
            ctx->pc = 0x19B948u;
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0x8c438110  lw          $v1, -0x7EF0($v0)
    ctx->pc = 0x19b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934800)));
    // 0x19b8e4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B8E4u;
    {
        const bool branch_taken_0x19b8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8E4u;
        // 0x19b8e8: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8e4) {
            ctx->pc = 0x19B8FCu;
            goto label_19b8fc;
        }
    }
    ctx->pc = 0x19B8ECu;
    // 0x19b8ec: 0xc066eee  jal         func_19BBB8
    ctx->pc = 0x19B8ECu;
    SET_GPR_U32(ctx, 31, 0x19B8F4u);
    ctx->pc = 0x19B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8ECu;
    // 0x19b8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BBB8u, 0x19B8ECu, 0x19B8F4u)) {
        return;
    }
    ctx->pc = 0x19B8F4u;
label_19b8f4:
    // 0x19b8f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19B8F4u;
    {
        const bool branch_taken_0x19b8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8F4u;
        // 0x19b8f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8f4) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B8FCu;
label_19b8fc:
    // 0x19b8fc: 0x8c438118  lw          $v1, -0x7EE8($v0)
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934808)));
    // 0x19b900: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B900u;
    {
        const bool branch_taken_0x19b900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B900u;
        // 0x19b904: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b900) {
            ctx->pc = 0x19B918u;
            goto label_19b918;
        }
    }
    ctx->pc = 0x19B908u;
    // 0x19b908: 0xc066ee2  jal         func_19BB88
    ctx->pc = 0x19B908u;
    SET_GPR_U32(ctx, 31, 0x19B910u);
    ctx->pc = 0x19B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B908u;
    // 0x19b90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BB88u, 0x19B908u, 0x19B910u)) {
        return;
    }
    ctx->pc = 0x19B910u;
label_19b910:
    // 0x19b910: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19B910u;
    {
        const bool branch_taken_0x19b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B910u;
        // 0x19b914: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b910) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B918u;
label_19b918:
    // 0x19b918: 0x8c438128  lw          $v1, -0x7ED8($v0)
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934824)));
    // 0x19b91c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B91Cu;
    {
        const bool branch_taken_0x19b91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B91Cu;
        // 0x19b920: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b91c) {
            ctx->pc = 0x19B934u;
            goto label_19b934;
        }
    }
    ctx->pc = 0x19B924u;
    // 0x19b924: 0xc066f18  jal         func_19BC60
    ctx->pc = 0x19B924u;
    SET_GPR_U32(ctx, 31, 0x19B92Cu);
    ctx->pc = 0x19B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B924u;
    // 0x19b928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BC60u, 0x19B924u, 0x19B92Cu)) {
        return;
    }
    ctx->pc = 0x19B92Cu;
label_19b92c:
    // 0x19b92c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B92Cu;
    {
        const bool branch_taken_0x19b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B92Cu;
        // 0x19b930: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b92c) {
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B934u;
label_19b934:
    // 0x19b934: 0x8c438120  lw          $v1, -0x7EE0($v0)
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934816)));
    // 0x19b938: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B938u;
    {
        const bool branch_taken_0x19b938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b938) {
            ctx->pc = 0x19B93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B938u;
            // 0x19b93c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B94Cu;
            goto label_19b94c;
        }
    }
    ctx->pc = 0x19B940u;
    // 0x19b940: 0xc066efa  jal         func_19BBE8
    ctx->pc = 0x19B940u;
    SET_GPR_U32(ctx, 31, 0x19B948u);
    ctx->pc = 0x19B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B940u;
    // 0x19b944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19BBE8u, 0x19B940u, 0x19B948u)) {
        return;
    }
    ctx->pc = 0x19B948u;
label_19b948:
    // 0x19b948: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19b948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b94c:
    // 0x19b94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b950:
    // 0x19b950: 0x3e00008  jr          $ra
    ctx->pc = 0x19B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B950u;
        // 0x19b954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B958u;
}
