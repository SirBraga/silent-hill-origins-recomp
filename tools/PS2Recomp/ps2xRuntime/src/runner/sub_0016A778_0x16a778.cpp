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

// Function: sub_0016A778
// Address: 0x16a778 - 0x16a880
void sub_0016A778_0x16a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A778_0x16a778");
#endif

    switch (ctx->pc) {
        case 0x16a7acu: goto label_16a7ac;
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7c4u: goto label_16a7c4;
        case 0x16a7d0u: goto label_16a7d0;
        case 0x16a7dcu: goto label_16a7dc;
        case 0x16a7f8u: goto label_16a7f8;
        case 0x16a810u: goto label_16a810;
        case 0x16a840u: goto label_16a840;
        case 0x16a85cu: goto label_16a85c;
        case 0x16a86cu: goto label_16a86c;
        default: break;
    }

    ctx->pc = 0x16a778u;

    // 0x16a778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a77c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16a77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a790: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a794: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16a798: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A798u;
        // 0x16a79c: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A818u;
            goto label_16a818;
        }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16a7a4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16A7A4u;
    SET_GPR_U32(ctx, 31, 0x16A7ACu);
    ctx->pc = 0x16A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7A4u;
    // 0x16a7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16A7A4u, 0x16A7ACu)) {
        return;
    }
    ctx->pc = 0x16A7ACu;
label_16a7ac:
    // 0x16a7ac: 0xc07bcd0  jal         func_1EF340
    ctx->pc = 0x16A7ACu;
    SET_GPR_U32(ctx, 31, 0x16A7B4u);
    ctx->pc = 0x1EF340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF340u, 0x16A7ACu, 0x16A7B4u)) {
        return;
    }
    ctx->pc = 0x16A7B4u;
label_16a7b4:
    // 0x16a7b4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x16A7B4u;
    {
        const bool branch_taken_0x16a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B4u;
        // 0x16a7b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7b4) {
            ctx->pc = 0x16A86Cu;
            goto label_16a86c;
        }
    }
    ctx->pc = 0x16A7BCu;
    // 0x16a7bc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x16A7BCu;
    SET_GPR_U32(ctx, 31, 0x16A7C4u);
    ctx->pc = 0x16A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7BCu;
    // 0x16a7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x16A7BCu, 0x16A7C4u)) {
        return;
    }
    ctx->pc = 0x16A7C4u;
label_16a7c4:
    // 0x16a7c4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16a7c8: 0xc07bce8  jal         func_1EF3A0
    ctx->pc = 0x16A7C8u;
    SET_GPR_U32(ctx, 31, 0x16A7D0u);
    ctx->pc = 0x16A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7C8u;
    // 0x16a7cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3A0u, 0x16A7C8u, 0x16A7D0u)) {
        return;
    }
    ctx->pc = 0x16A7D0u;
label_16a7d0:
    // 0x16a7d0: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x16a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a7d4: 0xc07bcf0  jal         func_1EF3C0
    ctx->pc = 0x16A7D4u;
    SET_GPR_U32(ctx, 31, 0x16A7DCu);
    ctx->pc = 0x16A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7D4u;
    // 0x16a7d8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3C0u, 0x16A7D4u, 0x16A7DCu)) {
        return;
    }
    ctx->pc = 0x16A7DCu;
label_16a7dc:
    // 0x16a7dc: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x16a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a7e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16a7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a7e8: 0x0  nop
    ctx->pc = 0x16a7e8u;
    // NOP
    // 0x16a7ec: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x16a7ecu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
    // 0x16a7f0: 0xc07bcf2  jal         func_1EF3C8
    ctx->pc = 0x16A7F0u;
    SET_GPR_U32(ctx, 31, 0x16A7F8u);
    ctx->pc = 0x16A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7F0u;
    // 0x16a7f4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF3C8u, 0x16A7F0u, 0x16A7F8u)) {
        return;
    }
    ctx->pc = 0x16A7F8u;
label_16a7f8:
    // 0x16a7f8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16a7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a800: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16a804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a808: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16A808u;
    SET_GPR_U32(ctx, 31, 0x16A810u);
    ctx->pc = 0x16A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A808u;
    // 0x16a80c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16A808u, 0x16A810u)) {
        return;
    }
    ctx->pc = 0x16A810u;
label_16a810:
    // 0x16a810: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A810u;
    {
        const bool branch_taken_0x16a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A810u;
        // 0x16a814: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a810) {
            ctx->pc = 0x16A870u;
            goto label_16a870;
        }
    }
    ctx->pc = 0x16A818u;
label_16a818:
    // 0x16a818: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16a81c: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x16a820: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A820u;
    {
        const bool branch_taken_0x16a820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A820u;
        // 0x16a824: 0x24718880  addiu       $s1, $v1, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a820) {
            ctx->pc = 0x16A86Cu;
            goto label_16a86c;
        }
    }
    ctx->pc = 0x16A828u;
    // 0x16a828: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16a82c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16a830: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x16A830u;
    {
        const bool branch_taken_0x16a830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A830u;
        // 0x16a834: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a830) {
            ctx->pc = 0x16A86Cu;
            goto label_16a86c;
        }
    }
    ctx->pc = 0x16A838u;
    // 0x16a838: 0xc07bcda  jal         func_1EF368
    ctx->pc = 0x16A838u;
    SET_GPR_U32(ctx, 31, 0x16A840u);
    ctx->pc = 0x1EF368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF368u, 0x16A838u, 0x16A840u)) {
        return;
    }
    ctx->pc = 0x16A840u;
label_16a840:
    // 0x16a840: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x16A840u;
    {
        const bool branch_taken_0x16a840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a840) {
            ctx->pc = 0x16A844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A840u;
            // 0x16a844: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A870u;
            goto label_16a870;
        }
    }
    ctx->pc = 0x16A848u;
    // 0x16a848: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16a84c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A84Cu;
    {
        const bool branch_taken_0x16a84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a84c) {
            ctx->pc = 0x16A850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A84Cu;
            // 0x16a850: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A860u;
            goto label_16a860;
        }
    }
    ctx->pc = 0x16A854u;
    // 0x16a854: 0xc07bcb6  jal         func_1EF2D8
    ctx->pc = 0x16A854u;
    SET_GPR_U32(ctx, 31, 0x16A85Cu);
    ctx->pc = 0x16A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A854u;
    // 0x16a858: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF2D8u, 0x16A854u, 0x16A85Cu)) {
        return;
    }
    ctx->pc = 0x16A85Cu;
label_16a85c:
    // 0x16a85c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_16a860:
    // 0x16a860: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16a864: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16A864u;
    SET_GPR_U32(ctx, 31, 0x16A86Cu);
    ctx->pc = 0x16A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A864u;
    // 0x16a868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16A864u, 0x16A86Cu)) {
        return;
    }
    ctx->pc = 0x16A86Cu;
label_16a86c:
    // 0x16a86c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a870:
    // 0x16a870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a878: 0x3e00008  jr          $ra
    ctx->pc = 0x16A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A878u;
        // 0x16a87c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A880u;
}
