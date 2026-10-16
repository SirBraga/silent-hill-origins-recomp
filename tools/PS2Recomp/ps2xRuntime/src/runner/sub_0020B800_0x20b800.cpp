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

// Function: sub_0020B800
// Address: 0x20b800 - 0x20b918
void sub_0020B800_0x20b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B800_0x20b800");
#endif

    switch (ctx->pc) {
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        default: break;
    }

    ctx->pc = 0x20b800u;

label_20b800:
    // 0x20b800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20b804:
    // 0x20b804: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20b804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b808:
    // 0x20b808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20b80c:
    // 0x20b80c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x20b80cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b810:
    // 0x20b810: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_20b814:
    // 0x20b814: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x20b814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20b818:
    // 0x20b818: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20b81c:
    // 0x20b81c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b820:
    // 0x20b820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_20b824:
    // 0x20b824: 0x8cf001c4  lw          $s0, 0x1C4($a3)
    ctx->pc = 0x20b824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
label_20b828:
    // 0x20b828: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20b82c:
    // 0x20b82c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20b830:
    if (ctx->pc == 0x20B830u) {
        ctx->pc = 0x20B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B82Cu;
        // 0x20b830: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B834u;
        goto label_20b834;
    }
    ctx->pc = 0x20B82Cu;
    {
        const bool branch_taken_0x20b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B82Cu;
        // 0x20b830: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b82c) {
            ctx->pc = 0x20B864u;
            goto label_20b864;
        }
    }
    ctx->pc = 0x20B834u;
label_20b834:
    // 0x20b834: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20b838:
    // 0x20b838: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x20b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_20b83c:
    // 0x20b83c: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x20b83cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20b840:
    // 0x20b840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b844:
    // 0x20b844: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20b844u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20b848:
    // 0x20b848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b84c:
    // 0x20b84c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x20b84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_20b850:
    // 0x20b850: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20b850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b854:
    // 0x20b854: 0xc084874  jal         func_2121D0
label_20b858:
    if (ctx->pc == 0x20B858u) {
        ctx->pc = 0x20B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B854u;
        // 0x20b858: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B85Cu;
        goto label_20b85c;
    }
    ctx->pc = 0x20B854u;
    SET_GPR_U32(ctx, 31, 0x20B85Cu);
    ctx->pc = 0x20B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B854u;
    // 0x20b858: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121D0u, 0x20B854u, 0x20B85Cu)) {
        return;
    }
    ctx->pc = 0x20B85Cu;
label_20b85c:
    // 0x20b85c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20b860:
    if (ctx->pc == 0x20B860u) {
        ctx->pc = 0x20B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B85Cu;
        // 0x20b860: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B864u;
        goto label_20b864;
    }
    ctx->pc = 0x20B85Cu;
    {
        const bool branch_taken_0x20b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B85Cu;
        // 0x20b860: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b85c) {
            ctx->pc = 0x20B8D0u;
            goto label_20b8d0;
        }
    }
    ctx->pc = 0x20B864u;
label_20b864:
    // 0x20b864: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x20b864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20b868:
    // 0x20b868: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20b868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b86c:
    // 0x20b86c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20b870:
    // 0x20b870: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b874:
    // 0x20b874: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x20b874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20b878:
    // 0x20b878: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20b878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20b87c:
    // 0x20b87c: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x20b87cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_20b880:
    // 0x20b880: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x20b880u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_20b884:
    // 0x20b884: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x20b884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_20b888:
    // 0x20b888: 0x151102b  sltu        $v0, $t2, $s1
    ctx->pc = 0x20b888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_20b88c:
    // 0x20b88c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20b890:
    // 0x20b890: 0x142880b  movn        $s1, $t2, $v0
    ctx->pc = 0x20b890u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 10));
label_20b894:
    // 0x20b894: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x20b894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20b898:
    // 0x20b898: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20b89c:
    if (ctx->pc == 0x20B89Cu) {
        ctx->pc = 0x20B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B898u;
        // 0x20b89c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8A0u;
        goto label_20b8a0;
    }
    ctx->pc = 0x20B898u;
    {
        const bool branch_taken_0x20b898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B898u;
        // 0x20b89c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b898) {
            ctx->pc = 0x20B8ACu;
            goto label_20b8ac;
        }
    }
    ctx->pc = 0x20B8A0u;
label_20b8a0:
    // 0x20b8a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20b8a4:
    // 0x20b8a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_20b8a8:
    if (ctx->pc == 0x20B8A8u) {
        ctx->pc = 0x20B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8A4u;
        // 0x20b8a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8ACu;
        goto label_20b8ac;
    }
    ctx->pc = 0x20B8A4u;
    {
        const bool branch_taken_0x20b8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8A4u;
        // 0x20b8a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8a4) {
            ctx->pc = 0x20B8B8u;
            goto label_20b8b8;
        }
    }
    ctx->pc = 0x20B8ACu;
label_20b8ac:
    // 0x20b8ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20b8b0:
    // 0x20b8b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20b8b4:
    // 0x20b8b4: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x20b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
label_20b8b8:
    // 0x20b8b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20b8bc:
    // 0x20b8bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20b8c0:
    // 0x20b8c0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20b8c4:
    // 0x20b8c4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x20b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_20b8c8:
    // 0x20b8c8: 0x40f809  jalr        $v0
label_20b8cc:
    if (ctx->pc == 0x20B8CCu) {
        ctx->pc = 0x20B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8C8u;
        // 0x20b8cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8D0u;
        goto label_20b8d0;
    }
    ctx->pc = 0x20B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B8D0u);
        ctx->pc = 0x20B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8C8u;
        // 0x20b8cc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B8C8u, 0x20B8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B8D0u;
label_20b8d0:
    // 0x20b8d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20b8d4:
    // 0x20b8d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20b8d8:
    // 0x20b8d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20b8dc:
    // 0x20b8dc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x20b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_20b8e0:
    // 0x20b8e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20b8e4:
    // 0x20b8e4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20b8e8:
    // 0x20b8e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20b8ec:
    if (ctx->pc == 0x20B8ECu) {
        ctx->pc = 0x20B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8E8u;
        // 0x20b8ec: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B8F0u;
        goto label_20b8f0;
    }
    ctx->pc = 0x20B8E8u;
    {
        const bool branch_taken_0x20b8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8E8u;
        // 0x20b8ec: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8e8) {
            ctx->pc = 0x20B8FCu;
            goto label_20b8fc;
        }
    }
    ctx->pc = 0x20B8F0u;
label_20b8f0:
    // 0x20b8f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20b8f4:
    // 0x20b8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20b8f8:
    // 0x20b8f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_20b8fc:
    // 0x20b8fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20b8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20b900:
    // 0x20b900: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20b900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20b904:
    // 0x20b904: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b908:
    // 0x20b908: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20b908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b90c:
    // 0x20b90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b910:
    // 0x20b910: 0x3e00008  jr          $ra
label_20b914:
    if (ctx->pc == 0x20B914u) {
        ctx->pc = 0x20B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B910u;
        // 0x20b914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B918u;
        goto label_fallthrough_0x20b910;
    }
    ctx->pc = 0x20B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B910u;
        // 0x20b914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b910:
    ctx->pc = 0x20B918u;
}
