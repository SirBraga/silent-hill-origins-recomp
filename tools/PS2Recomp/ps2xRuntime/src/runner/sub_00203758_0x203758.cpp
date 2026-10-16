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

// Function: sub_00203758
// Address: 0x203758 - 0x203948
void sub_00203758_0x203758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203758_0x203758");
#endif

    switch (ctx->pc) {
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037f8u: goto label_2037f8;
        case 0x2037fcu: goto label_2037fc;
        case 0x203800u: goto label_203800;
        case 0x203804u: goto label_203804;
        case 0x203808u: goto label_203808;
        case 0x20380cu: goto label_20380c;
        case 0x203810u: goto label_203810;
        case 0x203814u: goto label_203814;
        case 0x203818u: goto label_203818;
        case 0x20381cu: goto label_20381c;
        case 0x203820u: goto label_203820;
        case 0x203824u: goto label_203824;
        case 0x203828u: goto label_203828;
        case 0x20382cu: goto label_20382c;
        case 0x203830u: goto label_203830;
        case 0x203834u: goto label_203834;
        case 0x203838u: goto label_203838;
        case 0x20383cu: goto label_20383c;
        case 0x203840u: goto label_203840;
        case 0x203844u: goto label_203844;
        case 0x203848u: goto label_203848;
        case 0x20384cu: goto label_20384c;
        case 0x203850u: goto label_203850;
        case 0x203854u: goto label_203854;
        case 0x203858u: goto label_203858;
        case 0x20385cu: goto label_20385c;
        case 0x203860u: goto label_203860;
        case 0x203864u: goto label_203864;
        case 0x203868u: goto label_203868;
        case 0x20386cu: goto label_20386c;
        case 0x203870u: goto label_203870;
        case 0x203874u: goto label_203874;
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        default: break;
    }

    ctx->pc = 0x203758u;

label_203758:
    // 0x203758: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x203758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_20375c:
    // 0x20375c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x20375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_203760:
    // 0x203760: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x203760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_203764:
    // 0x203764: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x203764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203768:
    // 0x203768: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x203768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_20376c:
    // 0x20376c: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_203770:
    // 0x203770: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x203770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_203774:
    // 0x203774: 0x3c140070  lui         $s4, 0x70
    ctx->pc = 0x203774u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)112 << 16));
label_203778:
    // 0x203778: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x203778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_20377c:
    // 0x20377c: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_203780:
    // 0x203780: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x203780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_203784:
    // 0x203784: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x203784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_203788:
    // 0x203788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20378c:
    // 0x20378c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_203790:
    // 0x203790: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_203794:
    // 0x203794: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_203798:
    if (ctx->pc == 0x203798u) {
        ctx->pc = 0x203798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203794u;
        // 0x203798: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20379Cu;
        goto label_20379c;
    }
    ctx->pc = 0x203794u;
    {
        const bool branch_taken_0x203794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203794u;
        // 0x203798: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203794) {
            ctx->pc = 0x203858u;
            goto label_203858;
        }
    }
    ctx->pc = 0x20379Cu;
label_20379c:
    // 0x20379c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20379cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2037a0:
    // 0x2037a0: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x2037a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2037a4:
    // 0x2037a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2037a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2037a8:
    // 0x2037a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2037a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2037ac:
    // 0x2037ac: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2037b0:
    // 0x2037b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2037b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2037b4:
    // 0x2037b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2037b8:
    if (ctx->pc == 0x2037B8u) {
        ctx->pc = 0x2037B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B4u;
        // 0x2037b8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037BCu;
        goto label_2037bc;
    }
    ctx->pc = 0x2037B4u;
    {
        const bool branch_taken_0x2037b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037B4u;
        // 0x2037b8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037b4) {
            ctx->pc = 0x2037E0u;
            goto label_2037e0;
        }
    }
    ctx->pc = 0x2037BCu;
label_2037bc:
    // 0x2037bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2037c0:
    // 0x2037c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2037c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2037c4:
    // 0x2037c4: 0x0  nop
    ctx->pc = 0x2037c4u;
    // NOP
label_2037c8:
    // 0x2037c8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2037cc:
    if (ctx->pc == 0x2037CCu) {
        ctx->pc = 0x2037D0u;
        goto label_2037d0;
    }
    ctx->pc = 0x2037C8u;
    {
        const bool branch_taken_0x2037c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2037c8) {
            ctx->pc = 0x2037E4u;
            goto label_2037e4;
        }
    }
    ctx->pc = 0x2037D0u;
label_2037d0:
    // 0x2037d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2037d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2037d4:
    // 0x2037d4: 0x0  nop
    ctx->pc = 0x2037d4u;
    // NOP
label_2037d8:
    // 0x2037d8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_2037dc:
    if (ctx->pc == 0x2037DCu) {
        ctx->pc = 0x2037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D8u;
        // 0x2037dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037E0u;
        goto label_2037e0;
    }
    ctx->pc = 0x2037D8u;
    {
        const bool branch_taken_0x2037d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2037d8) {
            ctx->pc = 0x2037DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037D8u;
            // 0x2037dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2037c8;
        }
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2037e4:
    // 0x2037e4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_2037e8:
    if (ctx->pc == 0x2037E8u) {
        ctx->pc = 0x2037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037E4u;
        // 0x2037e8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037ECu;
        goto label_2037ec;
    }
    ctx->pc = 0x2037E4u;
    {
        const bool branch_taken_0x2037e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037E4u;
        // 0x2037e8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037e4) {
            ctx->pc = 0x203834u;
            goto label_203834;
        }
    }
    ctx->pc = 0x2037ECu;
label_2037ec:
    // 0x2037ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2037ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2037f0:
    // 0x2037f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2037f4:
    if (ctx->pc == 0x2037F4u) {
        ctx->pc = 0x2037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F0u;
        // 0x2037f4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2037F8u;
        goto label_2037f8;
    }
    ctx->pc = 0x2037F0u;
    {
        const bool branch_taken_0x2037f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F0u;
        // 0x2037f4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037f0) {
            ctx->pc = 0x203800u;
            goto label_203800;
        }
    }
    ctx->pc = 0x2037F8u;
label_2037f8:
    // 0x2037f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2037fc:
    if (ctx->pc == 0x2037FCu) {
        ctx->pc = 0x2037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F8u;
        // 0x2037fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203800u;
        goto label_203800;
    }
    ctx->pc = 0x2037F8u;
    {
        const bool branch_taken_0x2037f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037F8u;
        // 0x2037fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037f8) {
            ctx->pc = 0x203804u;
            goto label_203804;
        }
    }
    ctx->pc = 0x203800u;
label_203800:
    // 0x203800: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203804:
    // 0x203804: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203808:
    // 0x203808: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20380c:
    if (ctx->pc == 0x20380Cu) {
        ctx->pc = 0x20380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203808u;
        // 0x20380c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203810u;
        goto label_203810;
    }
    ctx->pc = 0x203808u;
    {
        const bool branch_taken_0x203808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203808u;
        // 0x20380c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203808) {
            ctx->pc = 0x203818u;
            goto label_203818;
        }
    }
    ctx->pc = 0x203810u;
label_203810:
    // 0x203810: 0x10000002  b           . + 4 + (0x2 << 2)
label_203814:
    if (ctx->pc == 0x203814u) {
        ctx->pc = 0x203814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203810u;
        // 0x203814: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203818u;
        goto label_203818;
    }
    ctx->pc = 0x203810u;
    {
        const bool branch_taken_0x203810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203810u;
        // 0x203814: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203810) {
            ctx->pc = 0x20381Cu;
            goto label_20381c;
        }
    }
    ctx->pc = 0x203818u;
label_203818:
    // 0x203818: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x203818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_20381c:
    // 0x20381c: 0xc0808b8  jal         func_2022E0
label_203820:
    if (ctx->pc == 0x203820u) {
        ctx->pc = 0x203824u;
        goto label_203824;
    }
    ctx->pc = 0x20381Cu;
    SET_GPR_U32(ctx, 31, 0x203824u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x20381Cu, 0x203824u)) {
        return;
    }
    ctx->pc = 0x203824u;
label_203824:
    // 0x203824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x203824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203828:
    // 0x203828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20382c:
    // 0x20382c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203830:
    // 0x203830: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_203834:
    // 0x203834: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_203838:
    if (ctx->pc == 0x203838u) {
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20383Cu;
        goto label_20383c;
    }
    ctx->pc = 0x203834u;
    {
        const bool branch_taken_0x203834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203834) {
            ctx->pc = 0x203850u;
            goto label_203850;
        }
    }
    ctx->pc = 0x20383Cu;
label_20383c:
    // 0x20383c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_203840:
    // 0x203840: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x203840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_203844:
    // 0x203844: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x203844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_203848:
    // 0x203848: 0x60f809  jalr        $v1
label_20384c:
    if (ctx->pc == 0x20384Cu) {
        ctx->pc = 0x20384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203848u;
        // 0x20384c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203850u;
        goto label_203850;
    }
    ctx->pc = 0x203848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203850u);
        ctx->pc = 0x20384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203848u;
        // 0x20384c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203848u, 0x203850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203850u;
label_203850:
    // 0x203850: 0x5640ffd5  bnel        $s2, $zero, . + 4 + (-0x2B << 2)
label_203854:
    if (ctx->pc == 0x203854u) {
        ctx->pc = 0x203854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203850u;
        // 0x203854: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203858u;
        goto label_203858;
    }
    ctx->pc = 0x203850u;
    {
        const bool branch_taken_0x203850 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x203850) {
            ctx->pc = 0x203854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203850u;
            // 0x203854: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2037A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2037a8;
        }
    }
    ctx->pc = 0x203858u;
label_203858:
    // 0x203858: 0x8ee22cf0  lw          $v0, 0x2CF0($s7)
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11504)));
label_20385c:
    // 0x20385c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_203860:
    if (ctx->pc == 0x203860u) {
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203864u;
        goto label_203864;
    }
    ctx->pc = 0x20385Cu;
    {
        const bool branch_taken_0x20385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20385Cu;
        // 0x203860: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20385c) {
            ctx->pc = 0x203894u;
            goto label_203894;
        }
    }
    ctx->pc = 0x203864u;
label_203864:
    // 0x203864: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_203868:
    // 0x203868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20386c:
    // 0x20386c: 0x26852ce0  addiu       $a1, $s4, 0x2CE0
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11488));
label_203870:
    // 0x203870: 0xaee32cf0  sw          $v1, 0x2CF0($s7)
    ctx->pc = 0x203870u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 11504), GPR_U32(ctx, 3));
label_203874:
    // 0x203874: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
label_203878:
    // 0x203878: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x203878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_20387c:
    // 0x20387c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x20387cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_203880:
    // 0x203880: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_203884:
    // 0x203884: 0xae802ce0  sw          $zero, 0x2CE0($s4)
    ctx->pc = 0x203884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11488), GPR_U32(ctx, 0));
label_203888:
    // 0x203888: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
label_20388c:
    // 0x20388c: 0xc0c53ae  jal         func_314EB8
label_203890:
    if (ctx->pc == 0x203890u) {
        ctx->pc = 0x203890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20388Cu;
        // 0x203890: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203894u;
        goto label_203894;
    }
    ctx->pc = 0x20388Cu;
    SET_GPR_U32(ctx, 31, 0x203894u);
    ctx->pc = 0x203890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20388Cu;
    // 0x203890: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x20388Cu, 0x203894u)) {
        return;
    }
    ctx->pc = 0x203894u;
label_203894:
    // 0x203894: 0x26902ce0  addiu       $s0, $s4, 0x2CE0
    ctx->pc = 0x203894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11488));
label_203898:
    // 0x203898: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x203898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20389c:
    // 0x20389c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2038a0:
    if (ctx->pc == 0x2038A0u) {
        ctx->pc = 0x2038A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20389Cu;
        // 0x2038a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038A4u;
        goto label_2038a4;
    }
    ctx->pc = 0x20389Cu;
    {
        const bool branch_taken_0x20389c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20389c) {
            ctx->pc = 0x2038A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20389Cu;
            // 0x2038a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2038CCu;
            goto label_2038cc;
        }
    }
    ctx->pc = 0x2038A4u;
label_2038a4:
    // 0x2038a4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2038a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2038a8:
    // 0x2038a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2038a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2038ac:
    // 0x2038ac: 0x0  nop
    ctx->pc = 0x2038acu;
    // NOP
label_2038b0:
    // 0x2038b0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2038b4:
    if (ctx->pc == 0x2038B4u) {
        ctx->pc = 0x2038B8u;
        goto label_2038b8;
    }
    ctx->pc = 0x2038B0u;
    {
        const bool branch_taken_0x2038b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2038b0) {
            ctx->pc = 0x2038CCu;
            goto label_2038cc;
        }
    }
    ctx->pc = 0x2038B8u;
label_2038b8:
    // 0x2038b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2038b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2038bc:
    // 0x2038bc: 0x0  nop
    ctx->pc = 0x2038bcu;
    // NOP
label_2038c0:
    // 0x2038c0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
label_2038c4:
    if (ctx->pc == 0x2038C4u) {
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038C8u;
        goto label_2038c8;
    }
    ctx->pc = 0x2038C0u;
    {
        const bool branch_taken_0x2038c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2038c0) {
            ctx->pc = 0x2038C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2038C0u;
            // 0x2038c4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2038B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2038b0;
        }
    }
    ctx->pc = 0x2038C8u;
label_2038c8:
    // 0x2038c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2038c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2038cc:
    // 0x2038cc: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_2038d0:
    if (ctx->pc == 0x2038D0u) {
        ctx->pc = 0x2038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038CCu;
        // 0x2038d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038D4u;
        goto label_2038d4;
    }
    ctx->pc = 0x2038CCu;
    {
        const bool branch_taken_0x2038cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2038cc) {
            ctx->pc = 0x2038D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2038CCu;
            // 0x2038d0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20391Cu;
            goto label_20391c;
        }
    }
    ctx->pc = 0x2038D4u;
label_2038d4:
    // 0x2038d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2038d8:
    // 0x2038d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2038dc:
    if (ctx->pc == 0x2038DCu) {
        ctx->pc = 0x2038DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038D8u;
        // 0x2038dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038E0u;
        goto label_2038e0;
    }
    ctx->pc = 0x2038D8u;
    {
        const bool branch_taken_0x2038d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2038DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038D8u;
        // 0x2038dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038d8) {
            ctx->pc = 0x2038E8u;
            goto label_2038e8;
        }
    }
    ctx->pc = 0x2038E0u;
label_2038e0:
    // 0x2038e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2038e4:
    if (ctx->pc == 0x2038E4u) {
        ctx->pc = 0x2038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E0u;
        // 0x2038e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038E8u;
        goto label_2038e8;
    }
    ctx->pc = 0x2038E0u;
    {
        const bool branch_taken_0x2038e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038E0u;
        // 0x2038e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038e0) {
            ctx->pc = 0x2038ECu;
            goto label_2038ec;
        }
    }
    ctx->pc = 0x2038E8u;
label_2038e8:
    // 0x2038e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2038e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2038ec:
    // 0x2038ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2038f0:
    // 0x2038f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2038f4:
    if (ctx->pc == 0x2038F4u) {
        ctx->pc = 0x2038F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038F0u;
        // 0x2038f4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038F8u;
        goto label_2038f8;
    }
    ctx->pc = 0x2038F0u;
    {
        const bool branch_taken_0x2038f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2038F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038F0u;
        // 0x2038f4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038f0) {
            ctx->pc = 0x203900u;
            goto label_203900;
        }
    }
    ctx->pc = 0x2038F8u;
label_2038f8:
    // 0x2038f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2038fc:
    if (ctx->pc == 0x2038FCu) {
        ctx->pc = 0x2038FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038F8u;
        // 0x2038fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203900u;
        goto label_203900;
    }
    ctx->pc = 0x2038F8u;
    {
        const bool branch_taken_0x2038f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038F8u;
        // 0x2038fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038f8) {
            ctx->pc = 0x203904u;
            goto label_203904;
        }
    }
    ctx->pc = 0x203900u;
label_203900:
    // 0x203900: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x203900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_203904:
    // 0x203904: 0xc0808b8  jal         func_2022E0
label_203908:
    if (ctx->pc == 0x203908u) {
        ctx->pc = 0x20390Cu;
        goto label_20390c;
    }
    ctx->pc = 0x203904u;
    SET_GPR_U32(ctx, 31, 0x20390Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x203904u, 0x20390Cu)) {
        return;
    }
    ctx->pc = 0x20390Cu;
label_20390c:
    // 0x20390c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203910:
    // 0x203910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_203914:
    // 0x203914: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203918:
    // 0x203918: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x203918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20391c:
    // 0x20391c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x20391cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_203920:
    // 0x203920: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x203920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_203924:
    // 0x203924: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x203924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_203928:
    // 0x203928: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x203928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20392c:
    // 0x20392c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x20392cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203930:
    // 0x203930: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x203930u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203934:
    // 0x203934: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x203934u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203938:
    // 0x203938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20393c:
    // 0x20393c: 0x3e00008  jr          $ra
label_203940:
    if (ctx->pc == 0x203940u) {
        ctx->pc = 0x203940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20393Cu;
        // 0x203940: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203944u;
        goto label_203944;
    }
    ctx->pc = 0x20393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20393Cu;
        // 0x203940: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203944u;
label_203944:
    // 0x203944: 0x0  nop
    ctx->pc = 0x203944u;
    // NOP
    ctx->pc = 0x203948u;
}
