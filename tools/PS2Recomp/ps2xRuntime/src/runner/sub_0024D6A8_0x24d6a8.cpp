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

// Function: sub_0024D6A8
// Address: 0x24d6a8 - 0x24d880
void sub_0024D6A8_0x24d6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D6A8_0x24d6a8");
#endif

    switch (ctx->pc) {
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        default: break;
    }

    ctx->pc = 0x24d6a8u;

label_24d6a8:
    // 0x24d6a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24d6ac:
    // 0x24d6ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d6b0:
    // 0x24d6b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x24d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_24d6b4:
    // 0x24d6b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24d6b8:
    // 0x24d6b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24d6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24d6bc:
    // 0x24d6bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x24d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_24d6c0:
    // 0x24d6c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24d6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d6c4:
    // 0x24d6c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x24d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_24d6c8:
    // 0x24d6c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x24d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_24d6cc:
    // 0x24d6cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24d6d0:
    // 0x24d6d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24d6d4:
    // 0x24d6d4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_24d6d8:
    if (ctx->pc == 0x24D6D8u) {
        ctx->pc = 0x24D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D4u;
        // 0x24d6d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6DCu;
        goto label_24d6dc;
    }
    ctx->pc = 0x24D6D4u;
    {
        const bool branch_taken_0x24d6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D4u;
        // 0x24d6d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6d4) {
            ctx->pc = 0x24D728u;
            goto label_24d728;
        }
    }
    ctx->pc = 0x24D6DCu;
label_24d6dc:
    // 0x24d6dc: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x24d6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_24d6e0:
    // 0x24d6e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24d6e4:
    if (ctx->pc == 0x24D6E4u) {
        ctx->pc = 0x24D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6E0u;
        // 0x24d6e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6E8u;
        goto label_24d6e8;
    }
    ctx->pc = 0x24D6E0u;
    {
        const bool branch_taken_0x24d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6E0u;
        // 0x24d6e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6e0) {
            ctx->pc = 0x24D6F8u;
            goto label_24d6f8;
        }
    }
    ctx->pc = 0x24D6E8u;
label_24d6e8:
    // 0x24d6e8: 0x5062004d  beql        $v1, $v0, . + 4 + (0x4D << 2)
label_24d6ec:
    if (ctx->pc == 0x24D6ECu) {
        ctx->pc = 0x24D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6E8u;
        // 0x24d6ec: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6F0u;
        goto label_24d6f0;
    }
    ctx->pc = 0x24D6E8u;
    {
        const bool branch_taken_0x24d6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d6e8) {
            ctx->pc = 0x24D6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D6E8u;
            // 0x24d6ec: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D820u;
            goto label_24d820;
        }
    }
    ctx->pc = 0x24D6F0u;
label_24d6f0:
    // 0x24d6f0: 0x10000053  b           . + 4 + (0x53 << 2)
label_24d6f4:
    if (ctx->pc == 0x24D6F4u) {
        ctx->pc = 0x24D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F0u;
        // 0x24d6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6F8u;
        goto label_24d6f8;
    }
    ctx->pc = 0x24D6F0u;
    {
        const bool branch_taken_0x24d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F0u;
        // 0x24d6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6f0) {
            ctx->pc = 0x24D840u;
            goto label_24d840;
        }
    }
    ctx->pc = 0x24D6F8u;
label_24d6f8:
    // 0x24d6f8: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_24d6fc:
    if (ctx->pc == 0x24D6FCu) {
        ctx->pc = 0x24D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F8u;
        // 0x24d6fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D700u;
        goto label_24d700;
    }
    ctx->pc = 0x24D6F8u;
    {
        const bool branch_taken_0x24d6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F8u;
        // 0x24d6fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6f8) {
            ctx->pc = 0x24D83Cu;
            goto label_24d83c;
        }
    }
    ctx->pc = 0x24D700u;
label_24d700:
    // 0x24d700: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24d704:
    // 0x24d704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d708:
    // 0x24d708: 0xc09ccce  jal         func_273338
label_24d70c:
    if (ctx->pc == 0x24D70Cu) {
        ctx->pc = 0x24D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D708u;
        // 0x24d70c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D710u;
        goto label_24d710;
    }
    ctx->pc = 0x24D708u;
    SET_GPR_U32(ctx, 31, 0x24D710u);
    ctx->pc = 0x24D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D708u;
    // 0x24d70c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273338u, 0x24D708u, 0x24D710u)) {
        return;
    }
    ctx->pc = 0x24D710u;
label_24d710:
    // 0x24d710: 0x10520048  beq         $v0, $s2, . + 4 + (0x48 << 2)
label_24d714:
    if (ctx->pc == 0x24D714u) {
        ctx->pc = 0x24D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D710u;
        // 0x24d714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D718u;
        goto label_24d718;
    }
    ctx->pc = 0x24D710u;
    {
        const bool branch_taken_0x24d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x24D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D710u;
        // 0x24d714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d710) {
            ctx->pc = 0x24D834u;
            goto label_24d834;
        }
    }
    ctx->pc = 0x24D718u;
label_24d718:
    // 0x24d718: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24d718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24d71c:
    // 0x24d71c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d720:
    // 0x24d720: 0x10000049  b           . + 4 + (0x49 << 2)
label_24d724:
    if (ctx->pc == 0x24D724u) {
        ctx->pc = 0x24D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D720u;
        // 0x24d724: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D728u;
        goto label_24d728;
    }
    ctx->pc = 0x24D720u;
    {
        const bool branch_taken_0x24d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D720u;
        // 0x24d724: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d720) {
            ctx->pc = 0x24D848u;
            goto label_24d848;
        }
    }
    ctx->pc = 0x24D728u;
label_24d728:
    // 0x24d728: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x24d728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_24d72c:
    // 0x24d72c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d730:
    // 0x24d730: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_24d734:
    if (ctx->pc == 0x24D734u) {
        ctx->pc = 0x24D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D730u;
        // 0x24d734: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D738u;
        goto label_24d738;
    }
    ctx->pc = 0x24D730u;
    {
        const bool branch_taken_0x24d730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d730) {
            ctx->pc = 0x24D734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D730u;
            // 0x24d734: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D784u;
            goto label_24d784;
        }
    }
    ctx->pc = 0x24D738u;
label_24d738:
    // 0x24d738: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24d738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24d73c:
    // 0x24d73c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24d740:
    // 0x24d740: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_24d744:
    // 0x24d744: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x24d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_24d748:
    // 0x24d748: 0x40f809  jalr        $v0
label_24d74c:
    if (ctx->pc == 0x24D74Cu) {
        ctx->pc = 0x24D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D748u;
        // 0x24d74c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D750u;
        goto label_24d750;
    }
    ctx->pc = 0x24D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D750u);
        ctx->pc = 0x24D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D748u;
        // 0x24d74c: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D748u, 0x24D750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D750u;
label_24d750:
    // 0x24d750: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_24d754:
    if (ctx->pc == 0x24D754u) {
        ctx->pc = 0x24D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D750u;
        // 0x24d754: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D758u;
        goto label_24d758;
    }
    ctx->pc = 0x24D750u;
    {
        const bool branch_taken_0x24d750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D750u;
        // 0x24d754: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d750) {
            ctx->pc = 0x24D778u;
            goto label_24d778;
        }
    }
    ctx->pc = 0x24D758u;
label_24d758:
    // 0x24d758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d75c:
    // 0x24d75c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24d760:
    // 0x24d760: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d764:
    // 0x24d764: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x24d764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_24d768:
    // 0x24d768: 0xc092848  jal         func_24A120
label_24d76c:
    if (ctx->pc == 0x24D76Cu) {
        ctx->pc = 0x24D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D768u;
        // 0x24d76c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D770u;
        goto label_24d770;
    }
    ctx->pc = 0x24D768u;
    SET_GPR_U32(ctx, 31, 0x24D770u);
    ctx->pc = 0x24D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D768u;
    // 0x24d76c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D768u, 0x24D770u)) {
        return;
    }
    ctx->pc = 0x24D770u;
label_24d770:
    // 0x24d770: 0x10000038  b           . + 4 + (0x38 << 2)
label_24d774:
    if (ctx->pc == 0x24D774u) {
        ctx->pc = 0x24D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D770u;
        // 0x24d774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D778u;
        goto label_24d778;
    }
    ctx->pc = 0x24D770u;
    {
        const bool branch_taken_0x24d770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D770u;
        // 0x24d774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d770) {
            ctx->pc = 0x24D854u;
            goto label_24d854;
        }
    }
    ctx->pc = 0x24D778u;
label_24d778:
    // 0x24d778: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x24d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_24d77c:
    // 0x24d77c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x24d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_24d780:
    // 0x24d780: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24d780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24d784:
    // 0x24d784: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d788:
    // 0x24d788: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x24d788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24d78c:
    // 0x24d78c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_24d790:
    // 0x24d790: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_24d794:
    if (ctx->pc == 0x24D794u) {
        ctx->pc = 0x24D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D790u;
        // 0x24d794: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D798u;
        goto label_24d798;
    }
    ctx->pc = 0x24D790u;
    {
        const bool branch_taken_0x24d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D790u;
        // 0x24d794: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d790) {
            ctx->pc = 0x24D7F4u;
            goto label_24d7f4;
        }
    }
    ctx->pc = 0x24D798u;
label_24d798:
    // 0x24d798: 0x24a40200  addiu       $a0, $a1, 0x200
    ctx->pc = 0x24d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_24d79c:
    // 0x24d79c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x24d79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_24d7a0:
    // 0x24d7a0: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x24d7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_24d7a4:
    // 0x24d7a4: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x24d7a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_24d7a8:
    // 0x24d7a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24d7ac:
    // 0x24d7ac: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x24d7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_24d7b0:
    // 0x24d7b0: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x24d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_24d7b4:
    // 0x24d7b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d7b8:
    // 0x24d7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d7bc:
    // 0x24d7bc: 0x40f809  jalr        $v0
label_24d7c0:
    if (ctx->pc == 0x24D7C0u) {
        ctx->pc = 0x24D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7BCu;
        // 0x24d7c0: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7C4u;
        goto label_24d7c4;
    }
    ctx->pc = 0x24D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D7C4u);
        ctx->pc = 0x24D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7BCu;
        // 0x24d7c0: 0x34c60404  ori         $a2, $a2, 0x404 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D7BCu, 0x24D7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D7C4u;
label_24d7c4:
    // 0x24d7c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_24d7c8:
    if (ctx->pc == 0x24D7C8u) {
        ctx->pc = 0x24D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7C4u;
        // 0x24d7c8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7CCu;
        goto label_24d7cc;
    }
    ctx->pc = 0x24D7C4u;
    {
        const bool branch_taken_0x24d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d7c4) {
            ctx->pc = 0x24D7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D7C4u;
            // 0x24d7c8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D7F0u;
            goto label_24d7f0;
        }
    }
    ctx->pc = 0x24D7CCu;
label_24d7cc:
    // 0x24d7cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24d7d0:
    // 0x24d7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d7d4:
    // 0x24d7d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24d7d8:
    // 0x24d7d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d7dc:
    // 0x24d7dc: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_24d7e0:
    // 0x24d7e0: 0xc092848  jal         func_24A120
label_24d7e4:
    if (ctx->pc == 0x24D7E4u) {
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E0u;
        // 0x24d7e4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7E8u;
        goto label_24d7e8;
    }
    ctx->pc = 0x24D7E0u;
    SET_GPR_U32(ctx, 31, 0x24D7E8u);
    ctx->pc = 0x24D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7E0u;
    // 0x24d7e4: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D7E0u, 0x24D7E8u)) {
        return;
    }
    ctx->pc = 0x24D7E8u;
label_24d7e8:
    // 0x24d7e8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_24d7ec:
    if (ctx->pc == 0x24D7ECu) {
        ctx->pc = 0x24D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E8u;
        // 0x24d7ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7F0u;
        goto label_24d7f0;
    }
    ctx->pc = 0x24D7E8u;
    {
        const bool branch_taken_0x24d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E8u;
        // 0x24d7ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7e8) {
            ctx->pc = 0x24D854u;
            goto label_24d854;
        }
    }
    ctx->pc = 0x24D7F0u;
label_24d7f0:
    // 0x24d7f0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x24d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_24d7f4:
    // 0x24d7f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d7f8:
    // 0x24d7f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24d7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d7fc:
    // 0x24d7fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d800:
    // 0x24d800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24d800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d804:
    // 0x24d804: 0xc075fdc  jal         func_1D7F70
label_24d808:
    if (ctx->pc == 0x24D808u) {
        ctx->pc = 0x24D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D804u;
        // 0x24d808: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D80Cu;
        goto label_24d80c;
    }
    ctx->pc = 0x24D804u;
    SET_GPR_U32(ctx, 31, 0x24D80Cu);
    ctx->pc = 0x24D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D804u;
    // 0x24d808: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x24D804u, 0x24D80Cu)) {
        return;
    }
    ctx->pc = 0x24D80Cu;
label_24d80c:
    // 0x24d80c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d810:
    // 0x24d810: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24d810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24d814:
    // 0x24d814: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x24d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_24d818:
    // 0x24d818: 0x10000011  b           . + 4 + (0x11 << 2)
label_24d81c:
    if (ctx->pc == 0x24D81Cu) {
        ctx->pc = 0x24D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D818u;
        // 0x24d81c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D820u;
        goto label_24d820;
    }
    ctx->pc = 0x24D818u;
    {
        const bool branch_taken_0x24d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D818u;
        // 0x24d81c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d818) {
            ctx->pc = 0x24D860u;
            goto label_24d860;
        }
    }
    ctx->pc = 0x24D820u;
label_24d820:
    // 0x24d820: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d824:
    // 0x24d824: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x24d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_24d828:
    // 0x24d828: 0x40f809  jalr        $v0
label_24d82c:
    if (ctx->pc == 0x24D82Cu) {
        ctx->pc = 0x24D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D828u;
        // 0x24d82c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D830u;
        goto label_24d830;
    }
    ctx->pc = 0x24D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D830u);
        ctx->pc = 0x24D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D828u;
        // 0x24d82c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D828u, 0x24D830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D830u;
label_24d830:
    // 0x24d830: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x24d830u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
label_24d834:
    // 0x24d834: 0x1000000a  b           . + 4 + (0xA << 2)
label_24d838:
    if (ctx->pc == 0x24D838u) {
        ctx->pc = 0x24D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D834u;
        // 0x24d838: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D83Cu;
        goto label_24d83c;
    }
    ctx->pc = 0x24D834u;
    {
        const bool branch_taken_0x24d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D834u;
        // 0x24d838: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d834) {
            ctx->pc = 0x24D860u;
            goto label_24d860;
        }
    }
    ctx->pc = 0x24D83Cu;
label_24d83c:
    // 0x24d83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d840:
    // 0x24d840: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x24d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_24d844:
    // 0x24d844: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d848:
    // 0x24d848: 0xc092848  jal         func_24A120
label_24d84c:
    if (ctx->pc == 0x24D84Cu) {
        ctx->pc = 0x24D850u;
        goto label_24d850;
    }
    ctx->pc = 0x24D848u;
    SET_GPR_U32(ctx, 31, 0x24D850u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D848u, 0x24D850u)) {
        return;
    }
    ctx->pc = 0x24D850u;
label_24d850:
    // 0x24d850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d854:
    // 0x24d854: 0xc09281a  jal         func_24A068
label_24d858:
    if (ctx->pc == 0x24D858u) {
        ctx->pc = 0x24D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D854u;
        // 0x24d858: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D85Cu;
        goto label_24d85c;
    }
    ctx->pc = 0x24D854u;
    SET_GPR_U32(ctx, 31, 0x24D85Cu);
    ctx->pc = 0x24D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D854u;
    // 0x24d858: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D854u, 0x24D85Cu)) {
        return;
    }
    ctx->pc = 0x24D85Cu;
label_24d85c:
    // 0x24d85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d860:
    // 0x24d860: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x24d860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24d864:
    // 0x24d864: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x24d864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24d868:
    // 0x24d868: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x24d868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24d86c:
    // 0x24d86c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d870:
    // 0x24d870: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x24d870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d874:
    // 0x24d874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24d878:
    // 0x24d878: 0x3e00008  jr          $ra
label_24d87c:
    if (ctx->pc == 0x24D87Cu) {
        ctx->pc = 0x24D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D878u;
        // 0x24d87c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D880u;
        goto label_fallthrough_0x24d878;
    }
    ctx->pc = 0x24D878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D878u;
        // 0x24d87c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24d878:
    ctx->pc = 0x24D880u;
}
