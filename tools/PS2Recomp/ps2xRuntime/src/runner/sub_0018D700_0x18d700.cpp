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

// Function: sub_0018D700
// Address: 0x18d700 - 0x18d858
void sub_0018D700_0x18d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D700_0x18d700");
#endif

    switch (ctx->pc) {
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        default: break;
    }

    ctx->pc = 0x18d700u;

label_18d700:
    // 0x18d700: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_18d704:
    // 0x18d704: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x18d704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d708:
    // 0x18d708: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_18d70c:
    // 0x18d70c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_18d710:
    // 0x18d710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d714:
    // 0x18d714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_18d718:
    // 0x18d718: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_18d71c:
    if (ctx->pc == 0x18D71Cu) {
        ctx->pc = 0x18D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D718u;
        // 0x18d71c: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D720u;
        goto label_18d720;
    }
    ctx->pc = 0x18D718u;
    {
        const bool branch_taken_0x18d718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D718u;
        // 0x18d71c: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d718) {
            ctx->pc = 0x18D840u;
            goto label_18d840;
        }
    }
    ctx->pc = 0x18D720u;
label_18d720:
    // 0x18d720: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18d724:
    // 0x18d724: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18d728:
    // 0x18d728: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x18d728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_18d72c:
    // 0x18d72c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18d730:
    // 0x18d730: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18d734:
    // 0x18d734: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_18d738:
    if (ctx->pc == 0x18D738u) {
        ctx->pc = 0x18D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D734u;
        // 0x18d738: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D73Cu;
        goto label_18d73c;
    }
    ctx->pc = 0x18D734u;
    {
        const bool branch_taken_0x18d734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D734u;
        // 0x18d738: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d734) {
            ctx->pc = 0x18D844u;
            goto label_18d844;
        }
    }
    ctx->pc = 0x18D73Cu;
label_18d73c:
    // 0x18d73c: 0x263000b0  addiu       $s0, $s1, 0xB0
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_18d740:
    // 0x18d740: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18d740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d744:
    // 0x18d744: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_18d748:
    if (ctx->pc == 0x18D748u) {
        ctx->pc = 0x18D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D744u;
        // 0x18d748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D74Cu;
        goto label_18d74c;
    }
    ctx->pc = 0x18D744u;
    {
        const bool branch_taken_0x18d744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d744) {
            ctx->pc = 0x18D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D744u;
            // 0x18d748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D76Cu;
            goto label_18d76c;
        }
    }
    ctx->pc = 0x18D74Cu;
label_18d74c:
    // 0x18d74c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18d750:
    // 0x18d750: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_18d754:
    if (ctx->pc == 0x18D754u) {
        ctx->pc = 0x18D758u;
        goto label_18d758;
    }
    ctx->pc = 0x18D750u;
    {
        const bool branch_taken_0x18d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d750) {
            ctx->pc = 0x18D76Cu;
            goto label_18d76c;
        }
    }
    ctx->pc = 0x18D758u;
label_18d758:
    // 0x18d758: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18d75c:
    // 0x18d75c: 0x0  nop
    ctx->pc = 0x18d75cu;
    // NOP
label_18d760:
    // 0x18d760: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_18d764:
    if (ctx->pc == 0x18D764u) {
        ctx->pc = 0x18D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D760u;
        // 0x18d764: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D768u;
        goto label_18d768;
    }
    ctx->pc = 0x18D760u;
    {
        const bool branch_taken_0x18d760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d760) {
            ctx->pc = 0x18D764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D760u;
            // 0x18d764: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d750;
        }
    }
    ctx->pc = 0x18D768u;
label_18d768:
    // 0x18d768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d76c:
    // 0x18d76c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_18d770:
    if (ctx->pc == 0x18D770u) {
        ctx->pc = 0x18D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D76Cu;
        // 0x18d770: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D774u;
        goto label_18d774;
    }
    ctx->pc = 0x18D76Cu;
    {
        const bool branch_taken_0x18d76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D76Cu;
        // 0x18d770: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d76c) {
            ctx->pc = 0x18D7BCu;
            goto label_18d7bc;
        }
    }
    ctx->pc = 0x18D774u;
label_18d774:
    // 0x18d774: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18d778:
    // 0x18d778: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18d77c:
    if (ctx->pc == 0x18D77Cu) {
        ctx->pc = 0x18D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D778u;
        // 0x18d77c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D780u;
        goto label_18d780;
    }
    ctx->pc = 0x18D778u;
    {
        const bool branch_taken_0x18d778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D778u;
        // 0x18d77c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d778) {
            ctx->pc = 0x18D788u;
            goto label_18d788;
        }
    }
    ctx->pc = 0x18D780u;
label_18d780:
    // 0x18d780: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d784:
    if (ctx->pc == 0x18D784u) {
        ctx->pc = 0x18D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D780u;
        // 0x18d784: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D788u;
        goto label_18d788;
    }
    ctx->pc = 0x18D780u;
    {
        const bool branch_taken_0x18d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D780u;
        // 0x18d784: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d780) {
            ctx->pc = 0x18D78Cu;
            goto label_18d78c;
        }
    }
    ctx->pc = 0x18D788u;
label_18d788:
    // 0x18d788: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18d788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d78c:
    // 0x18d78c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18d790:
    // 0x18d790: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18d794:
    if (ctx->pc == 0x18D794u) {
        ctx->pc = 0x18D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D790u;
        // 0x18d794: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D798u;
        goto label_18d798;
    }
    ctx->pc = 0x18D790u;
    {
        const bool branch_taken_0x18d790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D790u;
        // 0x18d794: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d790) {
            ctx->pc = 0x18D7A0u;
            goto label_18d7a0;
        }
    }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d79c:
    if (ctx->pc == 0x18D79Cu) {
        ctx->pc = 0x18D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D798u;
        // 0x18d79c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7A0u;
        goto label_18d7a0;
    }
    ctx->pc = 0x18D798u;
    {
        const bool branch_taken_0x18d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D798u;
        // 0x18d79c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d798) {
            ctx->pc = 0x18D7A4u;
            goto label_18d7a4;
        }
    }
    ctx->pc = 0x18D7A0u;
label_18d7a0:
    // 0x18d7a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d7a4:
    // 0x18d7a4: 0xc0808b8  jal         func_2022E0
label_18d7a8:
    if (ctx->pc == 0x18D7A8u) {
        ctx->pc = 0x18D7ACu;
        goto label_18d7ac;
    }
    ctx->pc = 0x18D7A4u;
    SET_GPR_U32(ctx, 31, 0x18D7ACu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D7A4u, 0x18D7ACu)) {
        return;
    }
    ctx->pc = 0x18D7ACu;
label_18d7ac:
    // 0x18d7ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18d7b0:
    // 0x18d7b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18d7b4:
    // 0x18d7b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18d7b8:
    // 0x18d7b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18d7bc:
    // 0x18d7bc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_18d7c0:
    // 0x18d7c0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_18d7c4:
    // 0x18d7c4: 0xc0810bc  jal         func_2042F0
label_18d7c8:
    if (ctx->pc == 0x18D7C8u) {
        ctx->pc = 0x18D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7C4u;
        // 0x18d7c8: 0x3200a  movz        $a0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7CCu;
        goto label_18d7cc;
    }
    ctx->pc = 0x18D7C4u;
    SET_GPR_U32(ctx, 31, 0x18D7CCu);
    ctx->pc = 0x18D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7C4u;
    // 0x18d7c8: 0x3200a  movz        $a0, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2042F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2042F0u, 0x18D7C4u, 0x18D7CCu)) {
        return;
    }
    ctx->pc = 0x18D7CCu;
label_18d7cc:
    // 0x18d7cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18d7d0:
    // 0x18d7d0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_18d7d4:
    // 0x18d7d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d7d8:
    // 0x18d7d8: 0x24a59448  addiu       $a1, $a1, -0x6BB8
    ctx->pc = 0x18d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939720));
label_18d7dc:
    // 0x18d7dc: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x18d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_18d7e0:
    // 0x18d7e0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x18d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_18d7e4:
    // 0x18d7e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18d7e8:
    // 0x18d7e8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x18d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_18d7ec:
    // 0x18d7ec: 0x8c62108c  lw          $v0, 0x108C($v1)
    ctx->pc = 0x18d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4236)));
label_18d7f0:
    // 0x18d7f0: 0x40f809  jalr        $v0
label_18d7f4:
    if (ctx->pc == 0x18D7F4u) {
        ctx->pc = 0x18D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7F0u;
        // 0x18d7f4: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7F8u;
        goto label_18d7f8;
    }
    ctx->pc = 0x18D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D7F8u);
        ctx->pc = 0x18D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7F0u;
        // 0x18d7f4: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D7F0u, 0x18D7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D7F8u;
label_18d7f8:
    // 0x18d7f8: 0xc07f846  jal         func_1FE118
label_18d7fc:
    if (ctx->pc == 0x18D7FCu) {
        ctx->pc = 0x18D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7F8u;
        // 0x18d7fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D800u;
        goto label_18d800;
    }
    ctx->pc = 0x18D7F8u;
    SET_GPR_U32(ctx, 31, 0x18D800u);
    ctx->pc = 0x18D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7F8u;
    // 0x18d7fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE118u, 0x18D7F8u, 0x18D800u)) {
        return;
    }
    ctx->pc = 0x18D800u;
label_18d800:
    // 0x18d800: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x18d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18d804:
    // 0x18d804: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_18d808:
    if (ctx->pc == 0x18D808u) {
        ctx->pc = 0x18D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D804u;
        // 0x18d808: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D80Cu;
        goto label_18d80c;
    }
    ctx->pc = 0x18D804u;
    {
        const bool branch_taken_0x18d804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d804) {
            ctx->pc = 0x18D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D804u;
            // 0x18d808: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D818u;
            goto label_18d818;
        }
    }
    ctx->pc = 0x18D80Cu;
label_18d80c:
    // 0x18d80c: 0xc0808b8  jal         func_2022E0
label_18d810:
    if (ctx->pc == 0x18D810u) {
        ctx->pc = 0x18D814u;
        goto label_18d814;
    }
    ctx->pc = 0x18D80Cu;
    SET_GPR_U32(ctx, 31, 0x18D814u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D80Cu, 0x18D814u)) {
        return;
    }
    ctx->pc = 0x18D814u;
label_18d814:
    // 0x18d814: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_18d818:
    // 0x18d818: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_18d81c:
    if (ctx->pc == 0x18D81Cu) {
        ctx->pc = 0x18D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D818u;
        // 0x18d81c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D820u;
        goto label_18d820;
    }
    ctx->pc = 0x18D818u;
    {
        const bool branch_taken_0x18d818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D818u;
        // 0x18d81c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d818) {
            ctx->pc = 0x18D844u;
            goto label_18d844;
        }
    }
    ctx->pc = 0x18D820u;
label_18d820:
    // 0x18d820: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_18d824:
    // 0x18d824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d828:
    // 0x18d828: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
label_18d82c:
    // 0x18d82c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d830:
    // 0x18d830: 0xc07fc98  jal         func_1FF260
label_18d834:
    if (ctx->pc == 0x18D834u) {
        ctx->pc = 0x18D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D830u;
        // 0x18d834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D838u;
        goto label_18d838;
    }
    ctx->pc = 0x18D830u;
    SET_GPR_U32(ctx, 31, 0x18D838u);
    ctx->pc = 0x18D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D830u;
    // 0x18d834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x18D830u, 0x18D838u)) {
        return;
    }
    ctx->pc = 0x18D838u;
label_18d838:
    // 0x18d838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d83c:
    // 0x18d83c: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x18d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
label_18d840:
    // 0x18d840: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18d840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18d844:
    // 0x18d844: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18d844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18d848:
    // 0x18d848: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18d84c:
    // 0x18d84c: 0x3e00008  jr          $ra
label_18d850:
    if (ctx->pc == 0x18D850u) {
        ctx->pc = 0x18D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D84Cu;
        // 0x18d850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D854u;
        goto label_18d854;
    }
    ctx->pc = 0x18D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D84Cu;
        // 0x18d850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D854u;
label_18d854:
    // 0x18d854: 0x0  nop
    ctx->pc = 0x18d854u;
    // NOP
    ctx->pc = 0x18d858u;
}
