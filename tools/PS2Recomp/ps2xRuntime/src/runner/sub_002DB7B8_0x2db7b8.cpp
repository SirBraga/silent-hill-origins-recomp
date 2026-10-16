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

// Function: sub_002DB7B8
// Address: 0x2db7b8 - 0x2db948
void sub_002DB7B8_0x2db7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB7B8_0x2db7b8");
#endif

    switch (ctx->pc) {
        case 0x2db7e8u: goto label_2db7e8;
        case 0x2db7f0u: goto label_2db7f0;
        case 0x2db80cu: goto label_2db80c;
        case 0x2db828u: goto label_2db828;
        case 0x2db838u: goto label_2db838;
        case 0x2db840u: goto label_2db840;
        case 0x2db850u: goto label_2db850;
        case 0x2db878u: goto label_2db878;
        case 0x2db884u: goto label_2db884;
        case 0x2db88cu: goto label_2db88c;
        case 0x2db8b0u: goto label_2db8b0;
        case 0x2db8c8u: goto label_2db8c8;
        case 0x2db8f8u: goto label_2db8f8;
        case 0x2db910u: goto label_2db910;
        default: break;
    }

    ctx->pc = 0x2db7b8u;

label_2db7b8:
    // 0x2db7b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db7bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2db7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2db7c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2db7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2db7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db7cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2db7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2db7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2db7d4: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x2db7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x2db7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db7dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2db7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db7e0: 0x26447c98  addiu       $a0, $s2, 0x7C98
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
    // 0x2db7e4: 0x0  nop
    ctx->pc = 0x2db7e4u;
    // NOP
label_2db7e8:
    // 0x2db7e8: 0xc0b7034  jal         func_2DC0D0
    ctx->pc = 0x2DB7E8u;
    SET_GPR_U32(ctx, 31, 0x2DB7F0u);
    ctx->pc = 0x2DB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7E8u;
    // 0x2db7ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC0D0u, 0x2DB7E8u, 0x2DB7F0u)) {
        return;
    }
    ctx->pc = 0x2DB7F0u;
label_2db7f0:
    // 0x2db7f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB7F0u;
    {
        const bool branch_taken_0x2db7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db7f0) {
            ctx->pc = 0x2DB7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB7F0u;
            // 0x2db7f4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB814u;
            goto label_2db814;
        }
    }
    ctx->pc = 0x2DB7F8u;
    // 0x2db7f8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DB7F8u;
    {
        const bool branch_taken_0x2db7f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2DB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7F8u;
        // 0x2db7fc: 0x26447c98  addiu       $a0, $s2, 0x7C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7f8) {
            ctx->pc = 0x2DB7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db7e8;
        }
    }
    ctx->pc = 0x2DB800u;
    // 0x2db800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db804: 0xc0b6dee  jal         func_2DB7B8
    ctx->pc = 0x2DB804u;
    SET_GPR_U32(ctx, 31, 0x2DB80Cu);
    ctx->pc = 0x2DB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB804u;
    // 0x2db808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7B8u;
    goto label_2db7b8;
    ctx->pc = 0x2DB80Cu;
label_2db80c:
    // 0x2db80c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB80Cu;
    {
        const bool branch_taken_0x2db80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB80Cu;
        // 0x2db810: 0x26447c98  addiu       $a0, $s2, 0x7C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db80c) {
            ctx->pc = 0x2DB7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db7e8;
        }
    }
    ctx->pc = 0x2DB814u;
label_2db814:
    // 0x2db814: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2db814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2db818: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB818u;
    {
        const bool branch_taken_0x2db818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db818) {
            ctx->pc = 0x2DB81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB818u;
            // 0x2db81c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB858u;
            goto label_2db858;
        }
    }
    ctx->pc = 0x2DB820u;
    // 0x2db820: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DB820u;
    {
        const bool branch_taken_0x2db820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB820u;
        // 0x2db824: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db820) {
            ctx->pc = 0x2DB85Cu;
            goto label_2db85c;
        }
    }
    ctx->pc = 0x2DB828u;
label_2db828:
    // 0x2db828: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2db828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2db82c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db830: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DB830u;
    SET_GPR_U32(ctx, 31, 0x2DB838u);
    ctx->pc = 0x2DB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB830u;
    // 0x2db834: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DB830u, 0x2DB838u)) {
        return;
    }
    ctx->pc = 0x2DB838u;
label_2db838:
    // 0x2db838: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DB838u;
    {
        const bool branch_taken_0x2db838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB838u;
        // 0x2db83c: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db838) {
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB840u;
label_2db840:
    // 0x2db840: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2db844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db848: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DB848u;
    SET_GPR_U32(ctx, 31, 0x2DB850u);
    ctx->pc = 0x2DB84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB848u;
    // 0x2db84c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DB848u, 0x2DB850u)) {
        return;
    }
    ctx->pc = 0x2DB850u;
label_2db850:
    // 0x2db850: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB850u;
    {
        const bool branch_taken_0x2db850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB850u;
        // 0x2db854: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db850) {
            ctx->pc = 0x2DB930u;
            goto label_2db930;
        }
    }
    ctx->pc = 0x2DB858u;
label_2db858:
    // 0x2db858: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2db858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2db85c:
    // 0x2db85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2db860: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB860u;
    {
        const bool branch_taken_0x2db860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db860) {
            ctx->pc = 0x2DB864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB860u;
            // 0x2db864: 0x26447c98  addiu       $a0, $s2, 0x7C98 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB87Cu;
            goto label_2db87c;
        }
    }
    ctx->pc = 0x2DB868u;
    // 0x2db868: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2db86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2db86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db870: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DB870u;
    SET_GPR_U32(ctx, 31, 0x2DB878u);
    ctx->pc = 0x2DB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB870u;
    // 0x2db874: 0x24847ca8  addiu       $a0, $a0, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DB870u, 0x2DB878u)) {
        return;
    }
    ctx->pc = 0x2DB878u;
label_2db878:
    // 0x2db878: 0x26447c98  addiu       $a0, $s2, 0x7C98
    ctx->pc = 0x2db878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31896));
label_2db87c:
    // 0x2db87c: 0xc0b7004  jal         func_2DC010
    ctx->pc = 0x2DB87Cu;
    SET_GPR_U32(ctx, 31, 0x2DB884u);
    ctx->pc = 0x2DB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB87Cu;
    // 0x2db880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC010u, 0x2DB87Cu, 0x2DB884u)) {
        return;
    }
    ctx->pc = 0x2DB884u;
label_2db884:
    // 0x2db884: 0xc0b7d76  jal         func_2DF5D8
    ctx->pc = 0x2DB884u;
    SET_GPR_U32(ctx, 31, 0x2DB88Cu);
    ctx->pc = 0x2DB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB884u;
    // 0x2db888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DB884u, 0x2DB88Cu)) {
        return;
    }
    ctx->pc = 0x2DB88Cu;
label_2db88c:
    // 0x2db88c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2db88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2db890: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2db890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2db894: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DB894u;
    {
        const bool branch_taken_0x2db894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db894) {
            ctx->pc = 0x2DB898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB894u;
            // 0x2db898: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB930u;
            goto label_2db930;
        }
    }
    ctx->pc = 0x2DB89Cu;
    // 0x2db89c: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x2db89cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2db8a0: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB8A0u;
    {
        const bool branch_taken_0x2db8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8a0) {
            ctx->pc = 0x2DB8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8A0u;
            // 0x2db8a4: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB8A8u;
    // 0x2db8a8: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB8A8u;
    SET_GPR_U32(ctx, 31, 0x2DB8B0u);
    ctx->pc = 0x2DB8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8A8u;
    // 0x2db8ac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB8A8u, 0x2DB8B0u)) {
        return;
    }
    ctx->pc = 0x2DB8B0u;
label_2db8b0:
    // 0x2db8b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2db8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8b8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2db8bc: 0x244740e8  addiu       $a3, $v0, 0x40E8
    ctx->pc = 0x2db8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2db8c0: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2db8c4: 0x0  nop
    ctx->pc = 0x2db8c4u;
    // NOP
label_2db8c8:
    // 0x2db8c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db8cc: 0x1046ffd6  beq         $v0, $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2DB8CCu;
    {
        const bool branch_taken_0x2db8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8CCu;
        // 0x2db8d0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8cc) {
            ctx->pc = 0x2DB828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db828;
        }
    }
    ctx->pc = 0x2DB8D4u;
    // 0x2db8d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db8d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2db8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2db8dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB8DCu;
    {
        const bool branch_taken_0x2db8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8DCu;
        // 0x2db8e0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8dc) {
            ctx->pc = 0x2DB8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db8c8;
        }
    }
    ctx->pc = 0x2DB8E4u;
    // 0x2db8e4: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x2db8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2db8e8:
    // 0x2db8e8: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DB8E8u;
    {
        const bool branch_taken_0x2db8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8e8) {
            ctx->pc = 0x2DB8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8E8u;
            // 0x2db8ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB930u;
            goto label_2db930;
        }
    }
    ctx->pc = 0x2DB8F0u;
    // 0x2db8f0: 0xc0b70d2  jal         func_2DC348
    ctx->pc = 0x2DB8F0u;
    SET_GPR_U32(ctx, 31, 0x2DB8F8u);
    ctx->pc = 0x2DB8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8F0u;
    // 0x2db8f4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC348u, 0x2DB8F0u, 0x2DB8F8u)) {
        return;
    }
    ctx->pc = 0x2DB8F8u;
label_2db8f8:
    // 0x2db8f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2db8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db900: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2db900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2db904: 0x244740e8  addiu       $a3, $v0, 0x40E8
    ctx->pc = 0x2db904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2db908: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x2db908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2db90c: 0x0  nop
    ctx->pc = 0x2db90cu;
    // NOP
label_2db910:
    // 0x2db910: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db914: 0x1046ffca  beq         $v0, $a2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2DB914u;
    {
        const bool branch_taken_0x2db914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2DB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB914u;
        // 0x2db918: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db914) {
            ctx->pc = 0x2DB840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db840;
        }
    }
    ctx->pc = 0x2DB91Cu;
    // 0x2db91c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2db91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db920: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2db920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2db924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB924u;
    {
        const bool branch_taken_0x2db924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB924u;
        // 0x2db928: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db924) {
            ctx->pc = 0x2DB910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db910;
        }
    }
    ctx->pc = 0x2DB92Cu;
    // 0x2db92c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2db92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db930:
    // 0x2db930: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2db930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db938: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2db938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db940: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB940u;
        // 0x2db944: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB948u;
}
