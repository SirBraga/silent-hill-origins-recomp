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

// Function: sub_002126F0
// Address: 0x2126f0 - 0x212848
void sub_002126F0_0x2126f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002126F0_0x2126f0");
#endif

    switch (ctx->pc) {
        case 0x2126f0u: goto label_2126f0;
        case 0x2126f4u: goto label_2126f4;
        case 0x2126f8u: goto label_2126f8;
        case 0x2126fcu: goto label_2126fc;
        case 0x212700u: goto label_212700;
        case 0x212704u: goto label_212704;
        case 0x212708u: goto label_212708;
        case 0x21270cu: goto label_21270c;
        case 0x212710u: goto label_212710;
        case 0x212714u: goto label_212714;
        case 0x212718u: goto label_212718;
        case 0x21271cu: goto label_21271c;
        case 0x212720u: goto label_212720;
        case 0x212724u: goto label_212724;
        case 0x212728u: goto label_212728;
        case 0x21272cu: goto label_21272c;
        case 0x212730u: goto label_212730;
        case 0x212734u: goto label_212734;
        case 0x212738u: goto label_212738;
        case 0x21273cu: goto label_21273c;
        case 0x212740u: goto label_212740;
        case 0x212744u: goto label_212744;
        case 0x212748u: goto label_212748;
        case 0x21274cu: goto label_21274c;
        case 0x212750u: goto label_212750;
        case 0x212754u: goto label_212754;
        case 0x212758u: goto label_212758;
        case 0x21275cu: goto label_21275c;
        case 0x212760u: goto label_212760;
        case 0x212764u: goto label_212764;
        case 0x212768u: goto label_212768;
        case 0x21276cu: goto label_21276c;
        case 0x212770u: goto label_212770;
        case 0x212774u: goto label_212774;
        case 0x212778u: goto label_212778;
        case 0x21277cu: goto label_21277c;
        case 0x212780u: goto label_212780;
        case 0x212784u: goto label_212784;
        case 0x212788u: goto label_212788;
        case 0x21278cu: goto label_21278c;
        case 0x212790u: goto label_212790;
        case 0x212794u: goto label_212794;
        case 0x212798u: goto label_212798;
        case 0x21279cu: goto label_21279c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127a4u: goto label_2127a4;
        case 0x2127a8u: goto label_2127a8;
        case 0x2127acu: goto label_2127ac;
        case 0x2127b0u: goto label_2127b0;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127b8u: goto label_2127b8;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127c0u: goto label_2127c0;
        case 0x2127c4u: goto label_2127c4;
        case 0x2127c8u: goto label_2127c8;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127d0u: goto label_2127d0;
        case 0x2127d4u: goto label_2127d4;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127dcu: goto label_2127dc;
        case 0x2127e0u: goto label_2127e0;
        case 0x2127e4u: goto label_2127e4;
        case 0x2127e8u: goto label_2127e8;
        case 0x2127ecu: goto label_2127ec;
        case 0x2127f0u: goto label_2127f0;
        case 0x2127f4u: goto label_2127f4;
        case 0x2127f8u: goto label_2127f8;
        case 0x2127fcu: goto label_2127fc;
        case 0x212800u: goto label_212800;
        case 0x212804u: goto label_212804;
        case 0x212808u: goto label_212808;
        case 0x21280cu: goto label_21280c;
        case 0x212810u: goto label_212810;
        case 0x212814u: goto label_212814;
        case 0x212818u: goto label_212818;
        case 0x21281cu: goto label_21281c;
        case 0x212820u: goto label_212820;
        case 0x212824u: goto label_212824;
        case 0x212828u: goto label_212828;
        case 0x21282cu: goto label_21282c;
        case 0x212830u: goto label_212830;
        case 0x212834u: goto label_212834;
        case 0x212838u: goto label_212838;
        case 0x21283cu: goto label_21283c;
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        default: break;
    }

    ctx->pc = 0x2126f0u;

label_2126f0:
    // 0x2126f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2126f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2126f4:
    // 0x2126f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2126f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2126f8:
    // 0x2126f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2126f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2126fc:
    // 0x2126fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2126fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_212700:
    // 0x212700: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x212700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212704:
    // 0x212704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_212708:
    // 0x212708: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x212708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_21270c:
    // 0x21270c: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_212710:
    // 0x212710: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x212710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_212714:
    // 0x212714: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_212718:
    if (ctx->pc == 0x212718u) {
        ctx->pc = 0x212718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212714u;
        // 0x212718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21271Cu;
        goto label_21271c;
    }
    ctx->pc = 0x212714u;
    {
        const bool branch_taken_0x212714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212714u;
        // 0x212718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212714) {
            ctx->pc = 0x212748u;
            goto label_212748;
        }
    }
    ctx->pc = 0x21271Cu;
label_21271c:
    // 0x21271c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x21271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_212720:
    // 0x212720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212724:
    // 0x212724: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_212728:
    // 0x212728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21272c:
    // 0x21272c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_212730:
    // 0x212730: 0x40f809  jalr        $v0
label_212734:
    if (ctx->pc == 0x212734u) {
        ctx->pc = 0x212734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212730u;
        // 0x212734: 0x652804  sllv        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212738u;
        goto label_212738;
    }
    ctx->pc = 0x212730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212738u);
        ctx->pc = 0x212734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212730u;
        // 0x212734: 0x652804  sllv        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212730u, 0x212738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212738u;
label_212738:
    // 0x212738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21273c:
    if (ctx->pc == 0x21273Cu) {
        ctx->pc = 0x21273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212738u;
        // 0x21273c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212740u;
        goto label_212740;
    }
    ctx->pc = 0x212738u;
    {
        const bool branch_taken_0x212738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212738u;
        // 0x21273c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212738) {
            ctx->pc = 0x212748u;
            goto label_212748;
        }
    }
    ctx->pc = 0x212740u;
label_212740:
    // 0x212740: 0x1000003a  b           . + 4 + (0x3A << 2)
label_212744:
    if (ctx->pc == 0x212744u) {
        ctx->pc = 0x212744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212740u;
        // 0x212744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212748u;
        goto label_212748;
    }
    ctx->pc = 0x212740u;
    {
        const bool branch_taken_0x212740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212740u;
        // 0x212744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212740) {
            ctx->pc = 0x21282Cu;
            goto label_21282c;
        }
    }
    ctx->pc = 0x212748u;
label_212748:
    // 0x212748: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x212748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_21274c:
    // 0x21274c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_212750:
    if (ctx->pc == 0x212750u) {
        ctx->pc = 0x212750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21274Cu;
        // 0x212750: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212754u;
        goto label_212754;
    }
    ctx->pc = 0x21274Cu;
    {
        const bool branch_taken_0x21274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21274c) {
            ctx->pc = 0x212750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21274Cu;
            // 0x212750: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212770u;
            goto label_212770;
        }
    }
    ctx->pc = 0x212754u;
label_212754:
    // 0x212754: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x212754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_212758:
    // 0x212758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21275c:
    // 0x21275c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_212760:
    // 0x212760: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x212760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_212764:
    // 0x212764: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x212764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_212768:
    // 0x212768: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x212768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_21276c:
    // 0x21276c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x21276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_212770:
    // 0x212770: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_212774:
    // 0x212774: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x212774u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_212778:
    // 0x212778: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x212778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_21277c:
    // 0x21277c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_212780:
    if (ctx->pc == 0x212780u) {
        ctx->pc = 0x212780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21277Cu;
        // 0x212780: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212784u;
        goto label_212784;
    }
    ctx->pc = 0x21277Cu;
    {
        const bool branch_taken_0x21277c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21277c) {
            ctx->pc = 0x212780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21277Cu;
            // 0x212780: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2127A8u;
            goto label_2127a8;
        }
    }
    ctx->pc = 0x212784u;
label_212784:
    // 0x212784: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_212788:
    // 0x212788: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x212788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21278c:
    // 0x21278c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x21278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_212790:
    // 0x212790: 0xc075fdc  jal         func_1D7F70
label_212794:
    if (ctx->pc == 0x212794u) {
        ctx->pc = 0x212794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212790u;
        // 0x212794: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212798u;
        goto label_212798;
    }
    ctx->pc = 0x212790u;
    SET_GPR_U32(ctx, 31, 0x212798u);
    ctx->pc = 0x212794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212790u;
    // 0x212794: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x212790u, 0x212798u)) {
        return;
    }
    ctx->pc = 0x212798u;
label_212798:
    // 0x212798: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_21279c:
    // 0x21279c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21279cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2127a0:
    // 0x2127a0: 0x10000021  b           . + 4 + (0x21 << 2)
label_2127a4:
    if (ctx->pc == 0x2127A4u) {
        ctx->pc = 0x2127A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A0u;
        // 0x2127a4: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127A8u;
        goto label_2127a8;
    }
    ctx->pc = 0x2127A0u;
    {
        const bool branch_taken_0x2127a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A0u;
        // 0x2127a4: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127a0) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x2127A8u;
label_2127a8:
    // 0x2127a8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2127a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2127ac:
    // 0x2127ac: 0xe49023  subu        $s2, $a3, $a0
    ctx->pc = 0x2127acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2127b0:
    // 0x2127b0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2127b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2127b4:
    // 0x2127b4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2127b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2127b8:
    // 0x2127b8: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2127b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2127bc:
    // 0x2127bc: 0x222900b  movn        $s2, $s1, $v0
    ctx->pc = 0x2127bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17));
label_2127c0:
    // 0x2127c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2127c4:
    // 0x2127c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2127c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2127c8:
    // 0x2127c8: 0xc075fdc  jal         func_1D7F70
label_2127cc:
    if (ctx->pc == 0x2127CCu) {
        ctx->pc = 0x2127CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127C8u;
        // 0x2127cc: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127D0u;
        goto label_2127d0;
    }
    ctx->pc = 0x2127C8u;
    SET_GPR_U32(ctx, 31, 0x2127D0u);
    ctx->pc = 0x2127CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127C8u;
    // 0x2127cc: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2127C8u, 0x2127D0u)) {
        return;
    }
    ctx->pc = 0x2127D0u;
label_2127d0:
    // 0x2127d0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2127d4:
    if (ctx->pc == 0x2127D4u) {
        ctx->pc = 0x2127D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D0u;
        // 0x2127d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127D8u;
        goto label_2127d8;
    }
    ctx->pc = 0x2127D0u;
    {
        const bool branch_taken_0x2127d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D0u;
        // 0x2127d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127d0) {
            ctx->pc = 0x2127F8u;
            goto label_2127f8;
        }
    }
    ctx->pc = 0x2127D8u;
label_2127d8:
    // 0x2127d8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2127d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2127dc:
    // 0x2127dc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2127dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2127e0:
    // 0x2127e0: 0xc075fdc  jal         func_1D7F70
label_2127e4:
    if (ctx->pc == 0x2127E4u) {
        ctx->pc = 0x2127E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127E0u;
        // 0x2127e4: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127E8u;
        goto label_2127e8;
    }
    ctx->pc = 0x2127E0u;
    SET_GPR_U32(ctx, 31, 0x2127E8u);
    ctx->pc = 0x2127E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127E0u;
    // 0x2127e4: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2127E0u, 0x2127E8u)) {
        return;
    }
    ctx->pc = 0x2127E8u;
label_2127e8:
    // 0x2127e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2127ec:
    // 0x2127ec: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x2127ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_2127f0:
    // 0x2127f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2127f4:
    if (ctx->pc == 0x2127F4u) {
        ctx->pc = 0x2127F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127F0u;
        // 0x2127f4: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127F8u;
        goto label_2127f8;
    }
    ctx->pc = 0x2127F0u;
    {
        const bool branch_taken_0x2127f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2127F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127F0u;
        // 0x2127f4: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2127f0) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x2127F8u;
label_2127f8:
    // 0x2127f8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2127fc:
    // 0x2127fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_212800:
    // 0x212800: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x212800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_212804:
    // 0x212804: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_212808:
    if (ctx->pc == 0x212808u) {
        ctx->pc = 0x212808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212804u;
        // 0x212808: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21280Cu;
        goto label_21280c;
    }
    ctx->pc = 0x212804u;
    {
        const bool branch_taken_0x212804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x212808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212804u;
        // 0x212808: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212804) {
            ctx->pc = 0x212810u;
            goto label_212810;
        }
    }
    ctx->pc = 0x21280Cu;
label_21280c:
    // 0x21280c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_212810:
    // 0x212810: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x212810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_212814:
    // 0x212814: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x212814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_212818:
    // 0x212818: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x212818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21281c:
    // 0x21281c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_212820:
    if (ctx->pc == 0x212820u) {
        ctx->pc = 0x212820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21281Cu;
        // 0x212820: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212824u;
        goto label_212824;
    }
    ctx->pc = 0x21281Cu;
    {
        const bool branch_taken_0x21281c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21281Cu;
        // 0x212820: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21281c) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x212824u;
label_212824:
    // 0x212824: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x212824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_212828:
    // 0x212828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21282c:
    // 0x21282c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x21282cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212830:
    // 0x212830: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x212830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212834:
    // 0x212834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212838:
    // 0x212838: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x212838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21283c:
    // 0x21283c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212840:
    // 0x212840: 0x3e00008  jr          $ra
label_212844:
    if (ctx->pc == 0x212844u) {
        ctx->pc = 0x212844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212840u;
        // 0x212844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212848u;
        goto label_fallthrough_0x212840;
    }
    ctx->pc = 0x212840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212840u;
        // 0x212844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212840:
    ctx->pc = 0x212848u;
}
