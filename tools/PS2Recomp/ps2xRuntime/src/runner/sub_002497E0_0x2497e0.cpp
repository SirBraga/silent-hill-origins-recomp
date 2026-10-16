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

// Function: sub_002497E0
// Address: 0x2497e0 - 0x2498c8
void sub_002497E0_0x2497e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002497E0_0x2497e0");
#endif

    switch (ctx->pc) {
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        default: break;
    }

    ctx->pc = 0x2497e0u;

label_2497e0:
    // 0x2497e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2497e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2497e4:
    // 0x2497e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2497e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2497e8:
    // 0x2497e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2497e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2497ec:
    // 0x2497ec: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x2497ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_2497f0:
    // 0x2497f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2497f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2497f4:
    // 0x2497f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2497f8:
    // 0x2497f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2497f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2497fc:
    // 0x2497fc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2497fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_249800:
    // 0x249800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_249804:
    // 0x249804: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x249804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_249808:
    // 0x249808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24980c:
    // 0x24980c: 0x82880b  movn        $s1, $a0, $v0
    ctx->pc = 0x24980cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_249810:
    // 0x249810: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x249810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_249814:
    // 0x249814: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_249818:
    // 0x249818: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x249818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_24981c:
    // 0x24981c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x24981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_249820:
    // 0x249820: 0x40f809  jalr        $v0
label_249824:
    if (ctx->pc == 0x249824u) {
        ctx->pc = 0x249824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249820u;
        // 0x249824: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249828u;
        goto label_249828;
    }
    ctx->pc = 0x249820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249828u);
        ctx->pc = 0x249824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249820u;
        // 0x249824: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249820u, 0x249828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249828u;
label_249828:
    // 0x249828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24982c:
    // 0x24982c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_249830:
    if (ctx->pc == 0x249830u) {
        ctx->pc = 0x249830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24982Cu;
        // 0x249830: 0x2625001f  addiu       $a1, $s1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249834u;
        goto label_249834;
    }
    ctx->pc = 0x24982Cu;
    {
        const bool branch_taken_0x24982c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24982Cu;
        // 0x249830: 0x2625001f  addiu       $a1, $s1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24982c) {
            ctx->pc = 0x2498A4u;
            goto label_2498a4;
        }
    }
    ctx->pc = 0x249834u;
label_249834:
    // 0x249834: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_249838:
    // 0x249838: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x249838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_24983c:
    // 0x24983c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_249840:
    // 0x249840: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x249840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_249844:
    // 0x249844: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249848:
    // 0x249848: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x249848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24984c:
    // 0x24984c: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x24984cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_249850:
    // 0x249850: 0xc0924e8  jal         func_2493A0
label_249854:
    if (ctx->pc == 0x249854u) {
        ctx->pc = 0x249854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249850u;
        // 0x249854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249858u;
        goto label_249858;
    }
    ctx->pc = 0x249850u;
    SET_GPR_U32(ctx, 31, 0x249858u);
    ctx->pc = 0x249854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249850u;
    // 0x249854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2493A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2493A0u, 0x249850u, 0x249858u)) {
        return;
    }
    ctx->pc = 0x249858u;
label_249858:
    // 0x249858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x249858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24985c:
    // 0x24985c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_249860:
    if (ctx->pc == 0x249860u) {
        ctx->pc = 0x249860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24985Cu;
        // 0x249860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249864u;
        goto label_249864;
    }
    ctx->pc = 0x24985Cu;
    {
        const bool branch_taken_0x24985c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x249860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24985Cu;
        // 0x249860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24985c) {
            ctx->pc = 0x249894u;
            goto label_249894;
        }
    }
    ctx->pc = 0x249864u;
label_249864:
    // 0x249864: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x249864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_249868:
    // 0x249868: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x249868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_24986c:
    // 0x24986c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249870:
    // 0x249870: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x249870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_249874:
    // 0x249874: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x249874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_249878:
    // 0x249878: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x249878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_24987c:
    // 0x24987c: 0xc0925a8  jal         func_2496A0
label_249880:
    if (ctx->pc == 0x249880u) {
        ctx->pc = 0x249880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24987Cu;
        // 0x249880: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249884u;
        goto label_249884;
    }
    ctx->pc = 0x24987Cu;
    SET_GPR_U32(ctx, 31, 0x249884u);
    ctx->pc = 0x249880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24987Cu;
    // 0x249880: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2496A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2496A0u, 0x24987Cu, 0x249884u)) {
        return;
    }
    ctx->pc = 0x249884u;
label_249884:
    // 0x249884: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_249888:
    if (ctx->pc == 0x249888u) {
        ctx->pc = 0x249888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249884u;
        // 0x249888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24988Cu;
        goto label_24988c;
    }
    ctx->pc = 0x249884u;
    {
        const bool branch_taken_0x249884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249884u;
        // 0x249888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249884) {
            ctx->pc = 0x2498A8u;
            goto label_2498a8;
        }
    }
    ctx->pc = 0x24988Cu;
label_24988c:
    // 0x24988c: 0xc092500  jal         func_249400
label_249890:
    if (ctx->pc == 0x249890u) {
        ctx->pc = 0x249890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24988Cu;
        // 0x249890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249894u;
        goto label_249894;
    }
    ctx->pc = 0x24988Cu;
    SET_GPR_U32(ctx, 31, 0x249894u);
    ctx->pc = 0x249890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24988Cu;
    // 0x249890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249400u, 0x24988Cu, 0x249894u)) {
        return;
    }
    ctx->pc = 0x249894u;
label_249894:
    // 0x249894: 0x26630fc8  addiu       $v1, $s3, 0xFC8
    ctx->pc = 0x249894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4040));
label_249898:
    // 0x249898: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x249898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_24989c:
    // 0x24989c: 0x40f809  jalr        $v0
label_2498a0:
    if (ctx->pc == 0x2498A0u) {
        ctx->pc = 0x2498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24989Cu;
        // 0x2498a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498A4u;
        goto label_2498a4;
    }
    ctx->pc = 0x24989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2498A4u);
        ctx->pc = 0x2498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24989Cu;
        // 0x2498a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24989Cu, 0x2498A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2498A4u;
label_2498a4:
    // 0x2498a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2498a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2498a8:
    // 0x2498a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2498a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2498ac:
    // 0x2498ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2498acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2498b0:
    // 0x2498b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2498b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2498b4:
    // 0x2498b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2498b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2498b8:
    // 0x2498b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2498b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2498bc:
    // 0x2498bc: 0x3e00008  jr          $ra
label_2498c0:
    if (ctx->pc == 0x2498C0u) {
        ctx->pc = 0x2498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498BCu;
        // 0x2498c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498C4u;
        goto label_2498c4;
    }
    ctx->pc = 0x2498BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498BCu;
        // 0x2498c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2498BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2498C4u;
label_2498c4:
    // 0x2498c4: 0x0  nop
    ctx->pc = 0x2498c4u;
    // NOP
    ctx->pc = 0x2498c8u;
}
