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

// Function: sub_0013B750
// Address: 0x13b750 - 0x13b858
void sub_0013B750_0x13b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B750_0x13b750");
#endif

    switch (ctx->pc) {
        case 0x13b78cu: goto label_13b78c;
        case 0x13b7a8u: goto label_13b7a8;
        case 0x13b7c0u: goto label_13b7c0;
        case 0x13b7d4u: goto label_13b7d4;
        case 0x13b7ecu: goto label_13b7ec;
        case 0x13b7f4u: goto label_13b7f4;
        case 0x13b810u: goto label_13b810;
        case 0x13b828u: goto label_13b828;
        case 0x13b830u: goto label_13b830;
        case 0x13b838u: goto label_13b838;
        default: break;
    }

    ctx->pc = 0x13b750u;

    // 0x13b750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13b754: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13b758: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13b75c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13b764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b768: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13b76c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13b76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b770: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B770u;
    {
        const bool branch_taken_0x13b770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B770u;
        // 0x13b774: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b770) {
            ctx->pc = 0x13B794u;
            goto label_13b794;
        }
    }
    ctx->pc = 0x13B778u;
    // 0x13b778: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x13b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13b77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b784: 0xc0803d0  jal         func_200F40
    ctx->pc = 0x13B784u;
    SET_GPR_U32(ctx, 31, 0x13B78Cu);
    ctx->pc = 0x13B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B784u;
    // 0x13b788: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F40u, 0x13B784u, 0x13B78Cu)) {
        return;
    }
    ctx->pc = 0x13B78Cu;
label_13b78c:
    // 0x13b78c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B78Cu;
    {
        const bool branch_taken_0x13b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B78Cu;
        // 0x13b790: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b78c) {
            ctx->pc = 0x13B7ACu;
            goto label_13b7ac;
        }
    }
    ctx->pc = 0x13B794u;
label_13b794:
    // 0x13b794: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x13b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13b798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b79c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7a0: 0xc0803dc  jal         func_200F70
    ctx->pc = 0x13B7A0u;
    SET_GPR_U32(ctx, 31, 0x13B7A8u);
    ctx->pc = 0x13B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7A0u;
    // 0x13b7a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200F70u, 0x13B7A0u, 0x13B7A8u)) {
        return;
    }
    ctx->pc = 0x13B7A8u;
label_13b7a8:
    // 0x13b7a8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x13b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_13b7ac:
    // 0x13b7ac: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x13b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x13b7b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13B7B0u;
    {
        const bool branch_taken_0x13b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7B0u;
        // 0x13b7b4: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b0) {
            ctx->pc = 0x13B7DCu;
            goto label_13b7dc;
        }
    }
    ctx->pc = 0x13B7B8u;
    // 0x13b7b8: 0xc07f8aa  jal         func_1FE2A8
    ctx->pc = 0x13B7B8u;
    SET_GPR_U32(ctx, 31, 0x13B7C0u);
    ctx->pc = 0x13B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7B8u;
    // 0x13b7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x13B7B8u, 0x13B7C0u)) {
        return;
    }
    ctx->pc = 0x13B7C0u;
label_13b7c0:
    // 0x13b7c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7cc: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x13B7CCu;
    SET_GPR_U32(ctx, 31, 0x13B7D4u);
    ctx->pc = 0x13B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7CCu;
    // 0x13b7d0: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x13B7CCu, 0x13B7D4u)) {
        return;
    }
    ctx->pc = 0x13B7D4u;
label_13b7d4:
    // 0x13b7d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13B7D4u;
    {
        const bool branch_taken_0x13b7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7D4u;
        // 0x13b7d8: 0x8e2200c4  lw          $v0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7d4) {
            ctx->pc = 0x13B814u;
            goto label_13b814;
        }
    }
    ctx->pc = 0x13B7DCu;
label_13b7dc:
    // 0x13b7dc: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x13b7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x13b7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7e4: 0xc041c1c  jal         func_107070
    ctx->pc = 0x13B7E4u;
    SET_GPR_U32(ctx, 31, 0x13B7ECu);
    ctx->pc = 0x13B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7E4u;
    // 0x13b7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107070u, 0x13B7E4u, 0x13B7ECu)) {
        return;
    }
    ctx->pc = 0x13B7ECu;
label_13b7ec:
    // 0x13b7ec: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x13B7ECu;
    SET_GPR_U32(ctx, 31, 0x13B7F4u);
    ctx->pc = 0x13B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B7ECu;
    // 0x13b7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x13B7ECu, 0x13B7F4u)) {
        return;
    }
    ctx->pc = 0x13B7F4u;
label_13b7f4:
    // 0x13b7f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x13b7f8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x13b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x13b7fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b800: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x13b804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b808: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x13B808u;
    SET_GPR_U32(ctx, 31, 0x13B810u);
    ctx->pc = 0x13B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B808u;
    // 0x13b80c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x13B808u, 0x13B810u)) {
        return;
    }
    ctx->pc = 0x13B810u;
label_13b810:
    // 0x13b810: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x13b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_13b814:
    // 0x13b814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b818: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x13b818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x13b81c: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x13b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x13b820: 0xc04f0aa  jal         func_13C2A8
    ctx->pc = 0x13B820u;
    SET_GPR_U32(ctx, 31, 0x13B828u);
    ctx->pc = 0x13B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B820u;
    // 0x13b824: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2A8u, 0x13B820u, 0x13B828u)) {
        return;
    }
    ctx->pc = 0x13B828u;
label_13b828:
    // 0x13b828: 0xc089a04  jal         func_226810
    ctx->pc = 0x13B828u;
    SET_GPR_U32(ctx, 31, 0x13B830u);
    ctx->pc = 0x13B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B828u;
    // 0x13b82c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x13B828u, 0x13B830u)) {
        return;
    }
    ctx->pc = 0x13B830u;
label_13b830:
    // 0x13b830: 0xc04ef40  jal         func_13BD00
    ctx->pc = 0x13B830u;
    SET_GPR_U32(ctx, 31, 0x13B838u);
    ctx->pc = 0x13B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B830u;
    // 0x13b834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BD00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BD00u, 0x13B830u, 0x13B838u)) {
        return;
    }
    ctx->pc = 0x13B838u;
label_13b838:
    // 0x13b838: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13b838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b83c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13b83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b840: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13b840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b844: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13b844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b84c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B84Cu;
        // 0x13b850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B854u;
    // 0x13b854: 0x0  nop
    ctx->pc = 0x13b854u;
    // NOP
    ctx->pc = 0x13b858u;
}
