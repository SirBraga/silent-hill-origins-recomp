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

// Function: sub_00219720
// Address: 0x219720 - 0x219978
void sub_00219720_0x219720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219720_0x219720");
#endif

    switch (ctx->pc) {
        case 0x219720u: goto label_219720;
        case 0x219724u: goto label_219724;
        case 0x219728u: goto label_219728;
        case 0x21972cu: goto label_21972c;
        case 0x219730u: goto label_219730;
        case 0x219734u: goto label_219734;
        case 0x219738u: goto label_219738;
        case 0x21973cu: goto label_21973c;
        case 0x219740u: goto label_219740;
        case 0x219744u: goto label_219744;
        case 0x219748u: goto label_219748;
        case 0x21974cu: goto label_21974c;
        case 0x219750u: goto label_219750;
        case 0x219754u: goto label_219754;
        case 0x219758u: goto label_219758;
        case 0x21975cu: goto label_21975c;
        case 0x219760u: goto label_219760;
        case 0x219764u: goto label_219764;
        case 0x219768u: goto label_219768;
        case 0x21976cu: goto label_21976c;
        case 0x219770u: goto label_219770;
        case 0x219774u: goto label_219774;
        case 0x219778u: goto label_219778;
        case 0x21977cu: goto label_21977c;
        case 0x219780u: goto label_219780;
        case 0x219784u: goto label_219784;
        case 0x219788u: goto label_219788;
        case 0x21978cu: goto label_21978c;
        case 0x219790u: goto label_219790;
        case 0x219794u: goto label_219794;
        case 0x219798u: goto label_219798;
        case 0x21979cu: goto label_21979c;
        case 0x2197a0u: goto label_2197a0;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197a8u: goto label_2197a8;
        case 0x2197acu: goto label_2197ac;
        case 0x2197b0u: goto label_2197b0;
        case 0x2197b4u: goto label_2197b4;
        case 0x2197b8u: goto label_2197b8;
        case 0x2197bcu: goto label_2197bc;
        case 0x2197c0u: goto label_2197c0;
        case 0x2197c4u: goto label_2197c4;
        case 0x2197c8u: goto label_2197c8;
        case 0x2197ccu: goto label_2197cc;
        case 0x2197d0u: goto label_2197d0;
        case 0x2197d4u: goto label_2197d4;
        case 0x2197d8u: goto label_2197d8;
        case 0x2197dcu: goto label_2197dc;
        case 0x2197e0u: goto label_2197e0;
        case 0x2197e4u: goto label_2197e4;
        case 0x2197e8u: goto label_2197e8;
        case 0x2197ecu: goto label_2197ec;
        case 0x2197f0u: goto label_2197f0;
        case 0x2197f4u: goto label_2197f4;
        case 0x2197f8u: goto label_2197f8;
        case 0x2197fcu: goto label_2197fc;
        case 0x219800u: goto label_219800;
        case 0x219804u: goto label_219804;
        case 0x219808u: goto label_219808;
        case 0x21980cu: goto label_21980c;
        case 0x219810u: goto label_219810;
        case 0x219814u: goto label_219814;
        case 0x219818u: goto label_219818;
        case 0x21981cu: goto label_21981c;
        case 0x219820u: goto label_219820;
        case 0x219824u: goto label_219824;
        case 0x219828u: goto label_219828;
        case 0x21982cu: goto label_21982c;
        case 0x219830u: goto label_219830;
        case 0x219834u: goto label_219834;
        case 0x219838u: goto label_219838;
        case 0x21983cu: goto label_21983c;
        case 0x219840u: goto label_219840;
        case 0x219844u: goto label_219844;
        case 0x219848u: goto label_219848;
        case 0x21984cu: goto label_21984c;
        case 0x219850u: goto label_219850;
        case 0x219854u: goto label_219854;
        case 0x219858u: goto label_219858;
        case 0x21985cu: goto label_21985c;
        case 0x219860u: goto label_219860;
        case 0x219864u: goto label_219864;
        case 0x219868u: goto label_219868;
        case 0x21986cu: goto label_21986c;
        case 0x219870u: goto label_219870;
        case 0x219874u: goto label_219874;
        case 0x219878u: goto label_219878;
        case 0x21987cu: goto label_21987c;
        case 0x219880u: goto label_219880;
        case 0x219884u: goto label_219884;
        case 0x219888u: goto label_219888;
        case 0x21988cu: goto label_21988c;
        case 0x219890u: goto label_219890;
        case 0x219894u: goto label_219894;
        case 0x219898u: goto label_219898;
        case 0x21989cu: goto label_21989c;
        case 0x2198a0u: goto label_2198a0;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198acu: goto label_2198ac;
        case 0x2198b0u: goto label_2198b0;
        case 0x2198b4u: goto label_2198b4;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198bcu: goto label_2198bc;
        case 0x2198c0u: goto label_2198c0;
        case 0x2198c4u: goto label_2198c4;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198ccu: goto label_2198cc;
        case 0x2198d0u: goto label_2198d0;
        case 0x2198d4u: goto label_2198d4;
        case 0x2198d8u: goto label_2198d8;
        case 0x2198dcu: goto label_2198dc;
        case 0x2198e0u: goto label_2198e0;
        case 0x2198e4u: goto label_2198e4;
        case 0x2198e8u: goto label_2198e8;
        case 0x2198ecu: goto label_2198ec;
        case 0x2198f0u: goto label_2198f0;
        case 0x2198f4u: goto label_2198f4;
        case 0x2198f8u: goto label_2198f8;
        case 0x2198fcu: goto label_2198fc;
        case 0x219900u: goto label_219900;
        case 0x219904u: goto label_219904;
        case 0x219908u: goto label_219908;
        case 0x21990cu: goto label_21990c;
        case 0x219910u: goto label_219910;
        case 0x219914u: goto label_219914;
        case 0x219918u: goto label_219918;
        case 0x21991cu: goto label_21991c;
        case 0x219920u: goto label_219920;
        case 0x219924u: goto label_219924;
        case 0x219928u: goto label_219928;
        case 0x21992cu: goto label_21992c;
        case 0x219930u: goto label_219930;
        case 0x219934u: goto label_219934;
        case 0x219938u: goto label_219938;
        case 0x21993cu: goto label_21993c;
        case 0x219940u: goto label_219940;
        case 0x219944u: goto label_219944;
        case 0x219948u: goto label_219948;
        case 0x21994cu: goto label_21994c;
        case 0x219950u: goto label_219950;
        case 0x219954u: goto label_219954;
        case 0x219958u: goto label_219958;
        case 0x21995cu: goto label_21995c;
        case 0x219960u: goto label_219960;
        case 0x219964u: goto label_219964;
        case 0x219968u: goto label_219968;
        case 0x21996cu: goto label_21996c;
        case 0x219970u: goto label_219970;
        case 0x219974u: goto label_219974;
        default: break;
    }

    ctx->pc = 0x219720u;

label_219720:
    // 0x219720: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x219720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_219724:
    // 0x219724: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x219724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_219728:
    // 0x219728: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x219728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
label_21972c:
    // 0x21972c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21972cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219730:
    // 0x219730: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x219730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_219734:
    // 0x219734: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x219734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219738:
    // 0x219738: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x219738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21973c:
    // 0x21973c: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x21973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_219740:
    // 0x219740: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x219740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_219744:
    // 0x219744: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x219744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
label_219748:
    // 0x219748: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x219748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
label_21974c:
    // 0x21974c: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x21974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
label_219750:
    // 0x219750: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x219750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
label_219754:
    // 0x219754: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x219754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
label_219758:
    // 0x219758: 0xc086c6c  jal         func_21B1B0
label_21975c:
    if (ctx->pc == 0x21975Cu) {
        ctx->pc = 0x21975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219758u;
        // 0x21975c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219760u;
        goto label_219760;
    }
    ctx->pc = 0x219758u;
    SET_GPR_U32(ctx, 31, 0x219760u);
    ctx->pc = 0x21975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219758u;
    // 0x21975c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x219758u, 0x219760u)) {
        return;
    }
    ctx->pc = 0x219760u;
label_219760:
    // 0x219760: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219764:
    // 0x219764: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x219764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_219768:
    // 0x219768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21976c:
    if (ctx->pc == 0x21976Cu) {
        ctx->pc = 0x219770u;
        goto label_219770;
    }
    ctx->pc = 0x219768u;
    {
        const bool branch_taken_0x219768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219768) {
            ctx->pc = 0x219778u;
            goto label_219778;
        }
    }
    ctx->pc = 0x219770u;
label_219770:
    // 0x219770: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_219774:
    if (ctx->pc == 0x219774u) {
        ctx->pc = 0x219774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219770u;
        // 0x219774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219778u;
        goto label_219778;
    }
    ctx->pc = 0x219770u;
    {
        const bool branch_taken_0x219770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219770u;
        // 0x219774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219770) {
            ctx->pc = 0x2197D0u;
            goto label_2197d0;
        }
    }
    ctx->pc = 0x219778u;
label_219778:
    // 0x219778: 0xc086c6c  jal         func_21B1B0
label_21977c:
    if (ctx->pc == 0x21977Cu) {
        ctx->pc = 0x21977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219778u;
        // 0x21977c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219780u;
        goto label_219780;
    }
    ctx->pc = 0x219778u;
    SET_GPR_U32(ctx, 31, 0x219780u);
    ctx->pc = 0x21977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219778u;
    // 0x21977c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1B0u, 0x219778u, 0x219780u)) {
        return;
    }
    ctx->pc = 0x219780u;
label_219780:
    // 0x219780: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_219784:
    if (ctx->pc == 0x219784u) {
        ctx->pc = 0x219784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219780u;
        // 0x219784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219788u;
        goto label_219788;
    }
    ctx->pc = 0x219780u;
    {
        const bool branch_taken_0x219780 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x219784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219780u;
        // 0x219784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219780) {
            ctx->pc = 0x219790u;
            goto label_219790;
        }
    }
    ctx->pc = 0x219788u;
label_219788:
    // 0x219788: 0xc086bd0  jal         func_21AF40
label_21978c:
    if (ctx->pc == 0x21978Cu) {
        ctx->pc = 0x21978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219788u;
        // 0x21978c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219790u;
        goto label_219790;
    }
    ctx->pc = 0x219788u;
    SET_GPR_U32(ctx, 31, 0x219790u);
    ctx->pc = 0x21978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219788u;
    // 0x21978c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF40u, 0x219788u, 0x219790u)) {
        return;
    }
    ctx->pc = 0x219790u;
label_219790:
    // 0x219790: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x219790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_219794:
    // 0x219794: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x219794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_219798:
    // 0x219798: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x219798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_21979c:
    // 0x21979c: 0x40f809  jalr        $v0
label_2197a0:
    if (ctx->pc == 0x2197A0u) {
        ctx->pc = 0x2197A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21979Cu;
        // 0x2197a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197A4u;
        goto label_2197a4;
    }
    ctx->pc = 0x21979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2197A4u);
        ctx->pc = 0x2197A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21979Cu;
        // 0x2197a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21979Cu, 0x2197A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2197A4u;
label_2197a4:
    // 0x2197a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2197a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2197a8:
    // 0x2197a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2197ac:
    // 0x2197ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2197acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2197b0:
    // 0x2197b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2197b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2197b4:
    // 0x2197b4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2197b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2197b8:
    // 0x2197b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2197b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2197bc:
    // 0x2197bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2197bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2197c0:
    // 0x2197c0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x2197c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2197c4:
    // 0x2197c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2197c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2197c8:
    // 0x2197c8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_2197cc:
    if (ctx->pc == 0x2197CCu) {
        ctx->pc = 0x2197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C8u;
        // 0x2197cc: 0xaea30010  sw          $v1, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197D0u;
        goto label_2197d0;
    }
    ctx->pc = 0x2197C8u;
    {
        const bool branch_taken_0x2197c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197C8u;
        // 0x2197cc: 0xaea30010  sw          $v1, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197c8) {
            ctx->pc = 0x219944u;
            goto label_219944;
        }
    }
    ctx->pc = 0x2197D0u;
label_2197d0:
    // 0x2197d0: 0xc086c78  jal         func_21B1E0
label_2197d4:
    if (ctx->pc == 0x2197D4u) {
        ctx->pc = 0x2197D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197D0u;
        // 0x2197d4: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197D8u;
        goto label_2197d8;
    }
    ctx->pc = 0x2197D0u;
    SET_GPR_U32(ctx, 31, 0x2197D8u);
    ctx->pc = 0x2197D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197D0u;
    // 0x2197d4: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B1E0u, 0x2197D0u, 0x2197D8u)) {
        return;
    }
    ctx->pc = 0x2197D8u;
label_2197d8:
    // 0x2197d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2197d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2197dc:
    // 0x2197dc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2197dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2197e0:
    // 0x2197e0: 0x27b701a0  addiu       $s7, $sp, 0x1A0
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2197e4:
    // 0x2197e4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2197e8:
    if (ctx->pc == 0x2197E8u) {
        ctx->pc = 0x2197E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E4u;
        // 0x2197e8: 0x27be01a4  addiu       $fp, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2197ECu;
        goto label_2197ec;
    }
    ctx->pc = 0x2197E4u;
    {
        const bool branch_taken_0x2197e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E4u;
        // 0x2197e8: 0x27be01a4  addiu       $fp, $sp, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197e4) {
            ctx->pc = 0x219870u;
            goto label_219870;
        }
    }
    ctx->pc = 0x2197ECu;
label_2197ec:
    // 0x2197ec: 0x27b400d0  addiu       $s4, $sp, 0xD0
    ctx->pc = 0x2197ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2197f0:
    // 0x2197f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2197f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2197f4:
    // 0x2197f4: 0x0  nop
    ctx->pc = 0x2197f4u;
    // NOP
label_2197f8:
    // 0x2197f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2197f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2197fc:
    // 0x2197fc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2197fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_219800:
    // 0x219800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x219800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219804:
    // 0x219804: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_219808:
    // 0x219808: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x219808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_21980c:
    // 0x21980c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_219810:
    // 0x219810: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_219814:
    // 0x219814: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_219818:
    if (ctx->pc == 0x219818u) {
        ctx->pc = 0x219818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219814u;
        // 0x219818: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21981Cu;
        goto label_21981c;
    }
    ctx->pc = 0x219814u;
    {
        const bool branch_taken_0x219814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x219818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219814u;
        // 0x219818: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219814) {
            ctx->pc = 0x219838u;
            goto label_219838;
        }
    }
    ctx->pc = 0x21981Cu;
label_21981c:
    // 0x21981c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x21981cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219820:
    // 0x219820: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x219820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_219824:
    // 0x219824: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219828:
    // 0x219828: 0x0  nop
    ctx->pc = 0x219828u;
    // NOP
label_21982c:
    // 0x21982c: 0x0  nop
    ctx->pc = 0x21982cu;
    // NOP
label_219830:
    // 0x219830: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
label_219834:
    if (ctx->pc == 0x219834u) {
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219838u;
        goto label_219838;
    }
    ctx->pc = 0x219830u;
    {
        const bool branch_taken_0x219830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219830) {
            ctx->pc = 0x219820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219820;
        }
    }
    ctx->pc = 0x219838u;
label_219838:
    // 0x219838: 0x2121026  xor         $v0, $s0, $s2
    ctx->pc = 0x219838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
label_21983c:
    // 0x21983c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219840:
    // 0x219840: 0xc08684c  jal         func_21A130
label_219844:
    if (ctx->pc == 0x219844u) {
        ctx->pc = 0x219844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219840u;
        // 0x219844: 0xa2900a  movz        $s2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219848u;
        goto label_219848;
    }
    ctx->pc = 0x219840u;
    SET_GPR_U32(ctx, 31, 0x219848u);
    ctx->pc = 0x219844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219840u;
    // 0x219844: 0xa2900a  movz        $s2, $a1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A130u, 0x219840u, 0x219848u)) {
        return;
    }
    ctx->pc = 0x219848u;
label_219848:
    // 0x219848: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x219848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21984c:
    // 0x21984c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_219850:
    // 0x219850: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x219850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219854:
    // 0x219854: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x219854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_219858:
    // 0x219858: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x219858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_21985c:
    // 0x21985c: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_219860:
    // 0x219860: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_219864:
    if (ctx->pc == 0x219864u) {
        ctx->pc = 0x219864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219860u;
        // 0x219864: 0x2a420031  slti        $v0, $s2, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219868u;
        goto label_219868;
    }
    ctx->pc = 0x219860u;
    {
        const bool branch_taken_0x219860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x219864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219860u;
        // 0x219864: 0x2a420031  slti        $v0, $s2, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219860) {
            ctx->pc = 0x219870u;
            goto label_219870;
        }
    }
    ctx->pc = 0x219868u;
label_219868:
    // 0x219868: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
label_21986c:
    if (ctx->pc == 0x21986Cu) {
        ctx->pc = 0x21986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219868u;
        // 0x21986c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219870u;
        goto label_219870;
    }
    ctx->pc = 0x219868u;
    {
        const bool branch_taken_0x219868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219868) {
            ctx->pc = 0x21986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219868u;
            // 0x21986c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2197F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2197f8;
        }
    }
    ctx->pc = 0x219870u;
label_219870:
    // 0x219870: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219874:
    // 0x219874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219878:
    // 0x219878: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x219878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_21987c:
    // 0x21987c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_219880:
    if (ctx->pc == 0x219880u) {
        ctx->pc = 0x219880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21987Cu;
        // 0x219880: 0xc7a100d0  lwc1        $f1, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x219884u;
        goto label_219884;
    }
    ctx->pc = 0x21987Cu;
    {
        const bool branch_taken_0x21987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21987Cu;
        // 0x219880: 0xc7a100d0  lwc1        $f1, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21987c) {
            ctx->pc = 0x2198B4u;
            goto label_2198b4;
        }
    }
    ctx->pc = 0x219884u;
label_219884:
    // 0x219884: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x219884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_219888:
    // 0x219888: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x219888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21988c:
    // 0x21988c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21988cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219890:
    // 0x219890: 0x0  nop
    ctx->pc = 0x219890u;
    // NOP
label_219894:
    // 0x219894: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_219898:
    if (ctx->pc == 0x219898u) {
        ctx->pc = 0x219898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219894u;
        // 0x219898: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21989Cu;
        goto label_21989c;
    }
    ctx->pc = 0x219894u;
    {
        const bool branch_taken_0x219894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219894) {
            ctx->pc = 0x219898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219894u;
            // 0x219898: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2198A8u;
            goto label_2198a8;
        }
    }
    ctx->pc = 0x21989Cu;
label_21989c:
    // 0x21989c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x21989cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2198a0:
    // 0x2198a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2198a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2198a4:
    // 0x2198a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2198a8:
    // 0x2198a8: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x2198a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2198ac:
    // 0x2198ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2198b0:
    if (ctx->pc == 0x2198B0u) {
        ctx->pc = 0x2198B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198ACu;
        // 0x2198b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2198B4u;
        goto label_2198b4;
    }
    ctx->pc = 0x2198ACu;
    {
        const bool branch_taken_0x2198ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2198B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198ACu;
        // 0x2198b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198ac) {
            ctx->pc = 0x219888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219888;
        }
    }
    ctx->pc = 0x2198B4u;
label_2198b4:
    // 0x2198b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2198b8:
    // 0x2198b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2198b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2198bc:
    // 0x2198bc: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2198c0:
    // 0x2198c0: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2198c4:
    // 0x2198c4: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x2198c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_2198c8:
    // 0x2198c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2198cc:
    // 0x2198cc: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x2198ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_2198d0:
    // 0x2198d0: 0x40f809  jalr        $v0
label_2198d4:
    if (ctx->pc == 0x2198D4u) {
        ctx->pc = 0x2198D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198D0u;
        // 0x2198d4: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2198D8u;
        goto label_2198d8;
    }
    ctx->pc = 0x2198D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2198D8u);
        ctx->pc = 0x2198D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198D0u;
        // 0x2198d4: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2198D0u, 0x2198D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2198D8u;
label_2198d8:
    // 0x2198d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2198d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2198dc:
    // 0x2198dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2198dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2198e0:
    // 0x2198e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2198e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2198e4:
    // 0x2198e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2198e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2198e8:
    // 0x2198e8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2198e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2198ec:
    // 0x2198ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2198ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2198f0:
    // 0x2198f0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2198f4:
    // 0x2198f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2198f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198f8:
    // 0x2198f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2198fc:
    // 0x2198fc: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2198fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_219900:
    // 0x219900: 0xc0869d6  jal         func_21A758
label_219904:
    if (ctx->pc == 0x219904u) {
        ctx->pc = 0x219904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219900u;
        // 0x219904: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219908u;
        goto label_219908;
    }
    ctx->pc = 0x219900u;
    SET_GPR_U32(ctx, 31, 0x219908u);
    ctx->pc = 0x219904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219900u;
    // 0x219904: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A758u, 0x219900u, 0x219908u)) {
        return;
    }
    ctx->pc = 0x219908u;
label_219908:
    // 0x219908: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_21990c:
    if (ctx->pc == 0x21990Cu) {
        ctx->pc = 0x21990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219908u;
        // 0x21990c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219910u;
        goto label_219910;
    }
    ctx->pc = 0x219908u;
    {
        const bool branch_taken_0x219908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219908u;
        // 0x21990c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219908) {
            ctx->pc = 0x219918u;
            goto label_219918;
        }
    }
    ctx->pc = 0x219910u;
label_219910:
    // 0x219910: 0xc086bd0  jal         func_21AF40
label_219914:
    if (ctx->pc == 0x219914u) {
        ctx->pc = 0x219914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219910u;
        // 0x219914: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219918u;
        goto label_219918;
    }
    ctx->pc = 0x219910u;
    SET_GPR_U32(ctx, 31, 0x219918u);
    ctx->pc = 0x219914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219910u;
    // 0x219914: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21AF40u, 0x219910u, 0x219918u)) {
        return;
    }
    ctx->pc = 0x219918u;
label_219918:
    // 0x219918: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_21991c:
    // 0x21991c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_219920:
    // 0x219920: 0xc0865c8  jal         func_219720
label_219924:
    if (ctx->pc == 0x219924u) {
        ctx->pc = 0x219924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219920u;
        // 0x219924: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219928u;
        goto label_219928;
    }
    ctx->pc = 0x219920u;
    SET_GPR_U32(ctx, 31, 0x219928u);
    ctx->pc = 0x219924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219920u;
    // 0x219924: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219720u;
    goto label_219720;
    ctx->pc = 0x219928u;
label_219928:
    // 0x219928: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x219928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_21992c:
    // 0x21992c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_219930:
    // 0x219930: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x219930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_219934:
    // 0x219934: 0xc0865c8  jal         func_219720
label_219938:
    if (ctx->pc == 0x219938u) {
        ctx->pc = 0x219938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219934u;
        // 0x219938: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21993Cu;
        goto label_21993c;
    }
    ctx->pc = 0x219934u;
    SET_GPR_U32(ctx, 31, 0x21993Cu);
    ctx->pc = 0x219938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219934u;
    // 0x219938: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219720u;
    goto label_219720;
    ctx->pc = 0x21993Cu;
label_21993c:
    // 0x21993c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21993cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_219940:
    // 0x219940: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x219940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219944:
    // 0x219944: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x219944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_219948:
    // 0x219948: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x219948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_21994c:
    // 0x21994c: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x21994cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_219950:
    // 0x219950: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x219950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_219954:
    // 0x219954: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x219954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_219958:
    // 0x219958: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x219958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_21995c:
    // 0x21995c: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x21995cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_219960:
    // 0x219960: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x219960u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_219964:
    // 0x219964: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x219964u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_219968:
    // 0x219968: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x219968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_21996c:
    // 0x21996c: 0x3e00008  jr          $ra
label_219970:
    if (ctx->pc == 0x219970u) {
        ctx->pc = 0x219970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21996Cu;
        // 0x219970: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219974u;
        goto label_219974;
    }
    ctx->pc = 0x21996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21996Cu;
        // 0x219970: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219974u;
label_219974:
    // 0x219974: 0x0  nop
    ctx->pc = 0x219974u;
    // NOP
    ctx->pc = 0x219978u;
}
