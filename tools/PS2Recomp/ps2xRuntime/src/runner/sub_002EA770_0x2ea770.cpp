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

// Function: sub_002EA770
// Address: 0x2ea770 - 0x2ea8f0
void sub_002EA770_0x2ea770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA770_0x2ea770");
#endif

    switch (ctx->pc) {
        case 0x2ea79cu: goto label_2ea79c;
        case 0x2ea7b8u: goto label_2ea7b8;
        case 0x2ea7d0u: goto label_2ea7d0;
        case 0x2ea7e0u: goto label_2ea7e0;
        case 0x2ea7f8u: goto label_2ea7f8;
        case 0x2ea814u: goto label_2ea814;
        case 0x2ea82cu: goto label_2ea82c;
        case 0x2ea858u: goto label_2ea858;
        case 0x2ea870u: goto label_2ea870;
        case 0x2ea8d0u: goto label_2ea8d0;
        default: break;
    }

    ctx->pc = 0x2ea770u;

    // 0x2ea770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ea774: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ea774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ea778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ea778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ea77c: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x2ea77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x2ea780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea784: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ea784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ea788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ea78c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ea78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ea790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea794: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2EA794u;
    SET_GPR_U32(ctx, 31, 0x2EA79Cu);
    ctx->pc = 0x2EA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA794u;
    // 0x2ea798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2EA794u, 0x2EA79Cu)) {
        return;
    }
    ctx->pc = 0x2EA79Cu;
label_2ea79c:
    // 0x2ea79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea7a0: 0xa6230046  sh          $v1, 0x46($s1)
    ctx->pc = 0x2ea7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ea7a4: 0x24121400  addiu       $s2, $zero, 0x1400
    ctx->pc = 0x2ea7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x2ea7a8: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x2ea7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x2ea7ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ea7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ea7b0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA7B0u;
    SET_GPR_U32(ctx, 31, 0x2EA7B8u);
    ctx->pc = 0x2EA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7B0u;
    // 0x2ea7b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA7B0u, 0x2EA7B8u)) {
        return;
    }
    ctx->pc = 0x2EA7B8u;
label_2ea7b8:
    // 0x2ea7b8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea7bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea7c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA7C0u;
    {
        const bool branch_taken_0x2ea7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7C0u;
        // 0x2ea7c4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7c0) {
            ctx->pc = 0x2EA7D8u;
            goto label_2ea7d8;
        }
    }
    ctx->pc = 0x2EA7C8u;
    // 0x2ea7c8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA7C8u;
    SET_GPR_U32(ctx, 31, 0x2EA7D0u);
    ctx->pc = 0x2EA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7C8u;
    // 0x2ea7cc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA7C8u, 0x2EA7D0u)) {
        return;
    }
    ctx->pc = 0x2EA7D0u;
label_2ea7d0:
    // 0x2ea7d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ea7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ea7d4: 0x0  nop
    ctx->pc = 0x2ea7d4u;
    // NOP
label_2ea7d8:
    // 0x2ea7d8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA7D8u;
    SET_GPR_U32(ctx, 31, 0x2EA7E0u);
    ctx->pc = 0x2EA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7D8u;
    // 0x2ea7dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA7D8u, 0x2EA7E0u)) {
        return;
    }
    ctx->pc = 0x2EA7E0u;
label_2ea7e0:
    // 0x2ea7e0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea7e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea7e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA7E8u;
    {
        const bool branch_taken_0x2ea7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7E8u;
        // 0x2ea7ec: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7e8) {
            ctx->pc = 0x2EA848u;
            goto label_2ea848;
        }
    }
    ctx->pc = 0x2EA7F0u;
    // 0x2ea7f0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA7F0u;
    SET_GPR_U32(ctx, 31, 0x2EA7F8u);
    ctx->pc = 0x2EA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7F0u;
    // 0x2ea7f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA7F0u, 0x2EA7F8u)) {
        return;
    }
    ctx->pc = 0x2EA7F8u;
label_2ea7f8:
    // 0x2ea7f8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea7fc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ea7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ea800: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA800u;
    {
        const bool branch_taken_0x2ea800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA800u;
        // 0x2ea804: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea800) {
            ctx->pc = 0x2EA848u;
            goto label_2ea848;
        }
    }
    ctx->pc = 0x2EA808u;
    // 0x2ea808: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ea808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ea80c: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA80Cu;
    SET_GPR_U32(ctx, 31, 0x2EA814u);
    ctx->pc = 0x2EA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA80Cu;
    // 0x2ea810: 0x24530300  addiu       $s3, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA80Cu, 0x2EA814u)) {
        return;
    }
    ctx->pc = 0x2EA814u;
label_2ea814:
    // 0x2ea814: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea818: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea81c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA81Cu;
    {
        const bool branch_taken_0x2ea81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea81c) {
            ctx->pc = 0x2EA820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA81Cu;
            // 0x2ea820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA838u;
            goto label_2ea838;
        }
    }
    ctx->pc = 0x2EA824u;
    // 0x2ea824: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA824u;
    SET_GPR_U32(ctx, 31, 0x2EA82Cu);
    ctx->pc = 0x2EA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA824u;
    // 0x2ea828: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA824u, 0x2EA82Cu)) {
        return;
    }
    ctx->pc = 0x2EA82Cu;
label_2ea82c:
    // 0x2ea82c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea830: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea834: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ea834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2ea838:
    // 0x2ea838: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2ea838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ea83c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ea83cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea840: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EA840u;
    {
        const bool branch_taken_0x2ea840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA840u;
        // 0x2ea844: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea840) {
            ctx->pc = 0x2EA884u;
            goto label_2ea884;
        }
    }
    ctx->pc = 0x2EA848u;
label_2ea848:
    // 0x2ea848: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ea848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ea84c: 0x24530300  addiu       $s3, $v0, 0x300
    ctx->pc = 0x2ea84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2ea850: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA850u;
    SET_GPR_U32(ctx, 31, 0x2EA858u);
    ctx->pc = 0x2EA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA850u;
    // 0x2ea854: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA850u, 0x2EA858u)) {
        return;
    }
    ctx->pc = 0x2EA858u;
label_2ea858:
    // 0x2ea858: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea85c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea860: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA860u;
    {
        const bool branch_taken_0x2ea860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea860) {
            ctx->pc = 0x2EA864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA860u;
            // 0x2ea864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA878u;
            goto label_2ea878;
        }
    }
    ctx->pc = 0x2EA868u;
    // 0x2ea868: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EA868u;
    SET_GPR_U32(ctx, 31, 0x2EA870u);
    ctx->pc = 0x2EA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA868u;
    // 0x2ea86c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EA868u, 0x2EA870u)) {
        return;
    }
    ctx->pc = 0x2EA870u;
label_2ea870:
    // 0x2ea870: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ea870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ea874: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ea878:
    // 0x2ea878: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2ea878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ea87c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ea87cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ea880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ea884:
    // 0x2ea884: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2ea888: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2ea888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2ea88c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2ea88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2ea890: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ea890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ea894: 0x2442a8f0  addiu       $v0, $v0, -0x5710
    ctx->pc = 0x2ea894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945008));
    // 0x2ea898: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2ea898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2ea89c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ea89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ea8a0: 0x2463bae0  addiu       $v1, $v1, -0x4520
    ctx->pc = 0x2ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949600));
    // 0x2ea8a4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2ea8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2ea8a8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2ea8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2ea8ac: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ea8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ea8b0: 0x2442abd0  addiu       $v0, $v0, -0x5430
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
    // 0x2ea8b4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2ea8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2ea8b8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ea8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ea8bc: 0x2463bbe8  addiu       $v1, $v1, -0x4418
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949864));
    // 0x2ea8c0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2ea8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2ea8c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ea8c8: 0xc0ba420  jal         func_2E9080
    ctx->pc = 0x2EA8C8u;
    SET_GPR_U32(ctx, 31, 0x2EA8D0u);
    ctx->pc = 0x2EA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA8C8u;
    // 0x2ea8cc: 0xa6220044  sh          $v0, 0x44($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9080u, 0x2EA8C8u, 0x2EA8D0u)) {
        return;
    }
    ctx->pc = 0x2EA8D0u;
label_2ea8d0:
    // 0x2ea8d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ea8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea8d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ea8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea8d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ea8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea8dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ea8dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA8E4u;
        // 0x2ea8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA8ECu;
    // 0x2ea8ec: 0x0  nop
    ctx->pc = 0x2ea8ecu;
    // NOP
    ctx->pc = 0x2ea8f0u;
}
