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

// Function: sub_0030B820
// Address: 0x30b820 - 0x30b950
void sub_0030B820_0x30b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B820_0x30b820");
#endif

    switch (ctx->pc) {
        case 0x30b820u: goto label_30b820;
        case 0x30b824u: goto label_30b824;
        case 0x30b828u: goto label_30b828;
        case 0x30b82cu: goto label_30b82c;
        case 0x30b830u: goto label_30b830;
        case 0x30b834u: goto label_30b834;
        case 0x30b838u: goto label_30b838;
        case 0x30b83cu: goto label_30b83c;
        case 0x30b840u: goto label_30b840;
        case 0x30b844u: goto label_30b844;
        case 0x30b848u: goto label_30b848;
        case 0x30b84cu: goto label_30b84c;
        case 0x30b850u: goto label_30b850;
        case 0x30b854u: goto label_30b854;
        case 0x30b858u: goto label_30b858;
        case 0x30b85cu: goto label_30b85c;
        case 0x30b860u: goto label_30b860;
        case 0x30b864u: goto label_30b864;
        case 0x30b868u: goto label_30b868;
        case 0x30b86cu: goto label_30b86c;
        case 0x30b870u: goto label_30b870;
        case 0x30b874u: goto label_30b874;
        case 0x30b878u: goto label_30b878;
        case 0x30b87cu: goto label_30b87c;
        case 0x30b880u: goto label_30b880;
        case 0x30b884u: goto label_30b884;
        case 0x30b888u: goto label_30b888;
        case 0x30b88cu: goto label_30b88c;
        case 0x30b890u: goto label_30b890;
        case 0x30b894u: goto label_30b894;
        case 0x30b898u: goto label_30b898;
        case 0x30b89cu: goto label_30b89c;
        case 0x30b8a0u: goto label_30b8a0;
        case 0x30b8a4u: goto label_30b8a4;
        case 0x30b8a8u: goto label_30b8a8;
        case 0x30b8acu: goto label_30b8ac;
        case 0x30b8b0u: goto label_30b8b0;
        case 0x30b8b4u: goto label_30b8b4;
        case 0x30b8b8u: goto label_30b8b8;
        case 0x30b8bcu: goto label_30b8bc;
        case 0x30b8c0u: goto label_30b8c0;
        case 0x30b8c4u: goto label_30b8c4;
        case 0x30b8c8u: goto label_30b8c8;
        case 0x30b8ccu: goto label_30b8cc;
        case 0x30b8d0u: goto label_30b8d0;
        case 0x30b8d4u: goto label_30b8d4;
        case 0x30b8d8u: goto label_30b8d8;
        case 0x30b8dcu: goto label_30b8dc;
        case 0x30b8e0u: goto label_30b8e0;
        case 0x30b8e4u: goto label_30b8e4;
        case 0x30b8e8u: goto label_30b8e8;
        case 0x30b8ecu: goto label_30b8ec;
        case 0x30b8f0u: goto label_30b8f0;
        case 0x30b8f4u: goto label_30b8f4;
        case 0x30b8f8u: goto label_30b8f8;
        case 0x30b8fcu: goto label_30b8fc;
        case 0x30b900u: goto label_30b900;
        case 0x30b904u: goto label_30b904;
        case 0x30b908u: goto label_30b908;
        case 0x30b90cu: goto label_30b90c;
        case 0x30b910u: goto label_30b910;
        case 0x30b914u: goto label_30b914;
        case 0x30b918u: goto label_30b918;
        case 0x30b91cu: goto label_30b91c;
        case 0x30b920u: goto label_30b920;
        case 0x30b924u: goto label_30b924;
        case 0x30b928u: goto label_30b928;
        case 0x30b92cu: goto label_30b92c;
        case 0x30b930u: goto label_30b930;
        case 0x30b934u: goto label_30b934;
        case 0x30b938u: goto label_30b938;
        case 0x30b93cu: goto label_30b93c;
        case 0x30b940u: goto label_30b940;
        case 0x30b944u: goto label_30b944;
        case 0x30b948u: goto label_30b948;
        case 0x30b94cu: goto label_30b94c;
        default: break;
    }

    ctx->pc = 0x30b820u;

label_30b820:
    // 0x30b820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30b824:
    // 0x30b824: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30b824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_30b828:
    // 0x30b828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30b82c:
    // 0x30b82c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30b82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30b830:
    // 0x30b830: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30b834:
    // 0x30b834: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30b834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b838:
    // 0x30b838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b83c:
    // 0x30b83c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30b840:
    // 0x30b840: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b844:
    // 0x30b844: 0xc0927be  jal         func_249EF8
label_30b848:
    if (ctx->pc == 0x30B848u) {
        ctx->pc = 0x30B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B844u;
        // 0x30b848: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B84Cu;
        goto label_30b84c;
    }
    ctx->pc = 0x30B844u;
    SET_GPR_U32(ctx, 31, 0x30B84Cu);
    ctx->pc = 0x30B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B844u;
    // 0x30b848: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B844u, 0x30B84Cu)) {
        return;
    }
    ctx->pc = 0x30B84Cu;
label_30b84c:
    // 0x30b84c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_30b850:
    if (ctx->pc == 0x30B850u) {
        ctx->pc = 0x30B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B84Cu;
        // 0x30b850: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B854u;
        goto label_30b854;
    }
    ctx->pc = 0x30B84Cu;
    {
        const bool branch_taken_0x30b84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B84Cu;
        // 0x30b850: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b84c) {
            ctx->pc = 0x30B8F8u;
            goto label_30b8f8;
        }
    }
    ctx->pc = 0x30B854u;
label_30b854:
    // 0x30b854: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x30b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_30b858:
    // 0x30b858: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b85c:
    // 0x30b85c: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_30b860:
    if (ctx->pc == 0x30B860u) {
        ctx->pc = 0x30B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B85Cu;
        // 0x30b860: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B864u;
        goto label_30b864;
    }
    ctx->pc = 0x30B85Cu;
    {
        const bool branch_taken_0x30b85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B85Cu;
        // 0x30b860: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b85c) {
            ctx->pc = 0x30B8F8u;
            goto label_30b8f8;
        }
    }
    ctx->pc = 0x30B864u;
label_30b864:
    // 0x30b864: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_30b868:
    if (ctx->pc == 0x30B868u) {
        ctx->pc = 0x30B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B864u;
        // 0x30b868: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B86Cu;
        goto label_30b86c;
    }
    ctx->pc = 0x30B864u;
    {
        const bool branch_taken_0x30b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B864u;
        // 0x30b868: 0x27b00004  addiu       $s0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b864) {
            ctx->pc = 0x30B8F8u;
            goto label_30b8f8;
        }
    }
    ctx->pc = 0x30B86Cu;
label_30b86c:
    // 0x30b86c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30b870:
    // 0x30b870: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30b870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30b874:
    // 0x30b874: 0xc0927be  jal         func_249EF8
label_30b878:
    if (ctx->pc == 0x30B878u) {
        ctx->pc = 0x30B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B874u;
        // 0x30b878: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B87Cu;
        goto label_30b87c;
    }
    ctx->pc = 0x30B874u;
    SET_GPR_U32(ctx, 31, 0x30B87Cu);
    ctx->pc = 0x30B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B874u;
    // 0x30b878: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B874u, 0x30B87Cu)) {
        return;
    }
    ctx->pc = 0x30B87Cu;
label_30b87c:
    // 0x30b87c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_30b880:
    if (ctx->pc == 0x30B880u) {
        ctx->pc = 0x30B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B87Cu;
        // 0x30b880: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B884u;
        goto label_30b884;
    }
    ctx->pc = 0x30B87Cu;
    {
        const bool branch_taken_0x30b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B87Cu;
        // 0x30b880: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b87c) {
            ctx->pc = 0x30B8B0u;
            goto label_30b8b0;
        }
    }
    ctx->pc = 0x30B884u;
label_30b884:
    // 0x30b884: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30b884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30b888:
    // 0x30b888: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_30b88c:
    // 0x30b88c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_30b890:
    if (ctx->pc == 0x30B890u) {
        ctx->pc = 0x30B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B88Cu;
        // 0x30b890: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B894u;
        goto label_30b894;
    }
    ctx->pc = 0x30B88Cu;
    {
        const bool branch_taken_0x30b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B88Cu;
        // 0x30b890: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b88c) {
            ctx->pc = 0x30B8B0u;
            goto label_30b8b0;
        }
    }
    ctx->pc = 0x30B894u;
label_30b894:
    // 0x30b894: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30b898:
    if (ctx->pc == 0x30B898u) {
        ctx->pc = 0x30B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B894u;
        // 0x30b898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B89Cu;
        goto label_30b89c;
    }
    ctx->pc = 0x30B894u;
    {
        const bool branch_taken_0x30b894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B894u;
        // 0x30b898: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b894) {
            ctx->pc = 0x30B8B0u;
            goto label_30b8b0;
        }
    }
    ctx->pc = 0x30B89Cu;
label_30b89c:
    // 0x30b89c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30b8a0:
    // 0x30b8a0: 0xc0927be  jal         func_249EF8
label_30b8a4:
    if (ctx->pc == 0x30B8A4u) {
        ctx->pc = 0x30B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8A0u;
        // 0x30b8a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8A8u;
        goto label_30b8a8;
    }
    ctx->pc = 0x30B8A0u;
    SET_GPR_U32(ctx, 31, 0x30B8A8u);
    ctx->pc = 0x30B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8A0u;
    // 0x30b8a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30B8A0u, 0x30B8A8u)) {
        return;
    }
    ctx->pc = 0x30B8A8u;
label_30b8a8:
    // 0x30b8a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30b8ac:
    if (ctx->pc == 0x30B8ACu) {
        ctx->pc = 0x30B8B0u;
        goto label_30b8b0;
    }
    ctx->pc = 0x30B8A8u;
    {
        const bool branch_taken_0x30b8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b8a8) {
            ctx->pc = 0x30B8B8u;
            goto label_30b8b8;
        }
    }
    ctx->pc = 0x30B8B0u;
label_30b8b0:
    // 0x30b8b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_30b8b4:
    if (ctx->pc == 0x30B8B4u) {
        ctx->pc = 0x30B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8B0u;
        // 0x30b8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8B8u;
        goto label_30b8b8;
    }
    ctx->pc = 0x30B8B0u;
    {
        const bool branch_taken_0x30b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8B0u;
        // 0x30b8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8b0) {
            ctx->pc = 0x30B8D0u;
            goto label_30b8d0;
        }
    }
    ctx->pc = 0x30B8B8u;
label_30b8b8:
    // 0x30b8b8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_30b8bc:
    if (ctx->pc == 0x30B8BCu) {
        ctx->pc = 0x30B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8B8u;
        // 0x30b8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8C0u;
        goto label_30b8c0;
    }
    ctx->pc = 0x30B8B8u;
    {
        const bool branch_taken_0x30b8b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8B8u;
        // 0x30b8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8b8) {
            ctx->pc = 0x30B8D0u;
            goto label_30b8d0;
        }
    }
    ctx->pc = 0x30B8C0u;
label_30b8c0:
    // 0x30b8c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30b8c4:
    // 0x30b8c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_30b8c8:
    // 0x30b8c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30b8cc:
    // 0x30b8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b8d0:
    // 0x30b8d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_30b8d4:
    if (ctx->pc == 0x30B8D4u) {
        ctx->pc = 0x30B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8D0u;
        // 0x30b8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8D8u;
        goto label_30b8d8;
    }
    ctx->pc = 0x30B8D0u;
    {
        const bool branch_taken_0x30b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8D0u;
        // 0x30b8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8d0) {
            ctx->pc = 0x30B934u;
            goto label_30b934;
        }
    }
    ctx->pc = 0x30B8D8u;
label_30b8d8:
    // 0x30b8d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x30b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_30b8dc:
    // 0x30b8dc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_30b8e0:
    if (ctx->pc == 0x30B8E0u) {
        ctx->pc = 0x30B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8DCu;
        // 0x30b8e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8E4u;
        goto label_30b8e4;
    }
    ctx->pc = 0x30B8DCu;
    {
        const bool branch_taken_0x30b8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8DCu;
        // 0x30b8e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8dc) {
            ctx->pc = 0x30B938u;
            goto label_30b938;
        }
    }
    ctx->pc = 0x30B8E4u;
label_30b8e4:
    // 0x30b8e4: 0xc0ab668  jal         func_2AD9A0
label_30b8e8:
    if (ctx->pc == 0x30B8E8u) {
        ctx->pc = 0x30B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8E4u;
        // 0x30b8e8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8ECu;
        goto label_30b8ec;
    }
    ctx->pc = 0x30B8E4u;
    SET_GPR_U32(ctx, 31, 0x30B8ECu);
    ctx->pc = 0x30B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8E4u;
    // 0x30b8e8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD9A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD9A0u, 0x30B8E4u, 0x30B8ECu)) {
        return;
    }
    ctx->pc = 0x30B8ECu;
label_30b8ec:
    // 0x30b8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b8f0:
    // 0x30b8f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_30b8f4:
    if (ctx->pc == 0x30B8F4u) {
        ctx->pc = 0x30B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8F0u;
        // 0x30b8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B8F8u;
        goto label_30b8f8;
    }
    ctx->pc = 0x30B8F0u;
    {
        const bool branch_taken_0x30b8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8F0u;
        // 0x30b8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8f0) {
            ctx->pc = 0x30B900u;
            goto label_30b900;
        }
    }
    ctx->pc = 0x30B8F8u;
label_30b8f8:
    // 0x30b8f8: 0x1000000e  b           . + 4 + (0xE << 2)
label_30b8fc:
    if (ctx->pc == 0x30B8FCu) {
        ctx->pc = 0x30B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8F8u;
        // 0x30b8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B900u;
        goto label_30b900;
    }
    ctx->pc = 0x30B8F8u;
    {
        const bool branch_taken_0x30b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8F8u;
        // 0x30b8fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8f8) {
            ctx->pc = 0x30B934u;
            goto label_30b934;
        }
    }
    ctx->pc = 0x30B900u;
label_30b900:
    // 0x30b900: 0xc0aa872  jal         func_2AA1C8
label_30b904:
    if (ctx->pc == 0x30B904u) {
        ctx->pc = 0x30B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B900u;
        // 0x30b904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B908u;
        goto label_30b908;
    }
    ctx->pc = 0x30B900u;
    SET_GPR_U32(ctx, 31, 0x30B908u);
    ctx->pc = 0x30B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B900u;
    // 0x30b904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x30B900u, 0x30B908u)) {
        return;
    }
    ctx->pc = 0x30B908u;
label_30b908:
    // 0x30b908: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x30b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_30b90c:
    // 0x30b90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b910:
    // 0x30b910: 0x40f809  jalr        $v0
label_30b914:
    if (ctx->pc == 0x30B914u) {
        ctx->pc = 0x30B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B910u;
        // 0x30b914: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B918u;
        goto label_30b918;
    }
    ctx->pc = 0x30B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30B918u);
        ctx->pc = 0x30B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B910u;
        // 0x30b914: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B910u, 0x30B918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B918u;
label_30b918:
    // 0x30b918: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_30b91c:
    if (ctx->pc == 0x30B91Cu) {
        ctx->pc = 0x30B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B918u;
        // 0x30b91c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B920u;
        goto label_30b920;
    }
    ctx->pc = 0x30B918u;
    {
        const bool branch_taken_0x30b918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B918u;
        // 0x30b91c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b918) {
            ctx->pc = 0x30B930u;
            goto label_30b930;
        }
    }
    ctx->pc = 0x30B920u;
label_30b920:
    // 0x30b920: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30b924:
    // 0x30b924: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_30b928:
    // 0x30b928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30b92c:
    // 0x30b92c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30b930:
    // 0x30b930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b934:
    // 0x30b934: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30b934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30b938:
    // 0x30b938: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30b938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30b93c:
    // 0x30b93c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30b940:
    // 0x30b940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b944:
    // 0x30b944: 0x3e00008  jr          $ra
label_30b948:
    if (ctx->pc == 0x30B948u) {
        ctx->pc = 0x30B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B944u;
        // 0x30b948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B94Cu;
        goto label_30b94c;
    }
    ctx->pc = 0x30B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B944u;
        // 0x30b948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B94Cu;
label_30b94c:
    // 0x30b94c: 0x0  nop
    ctx->pc = 0x30b94cu;
    // NOP
    ctx->pc = 0x30b950u;
}
