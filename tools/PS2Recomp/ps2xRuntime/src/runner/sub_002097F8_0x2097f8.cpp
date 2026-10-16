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

// Function: sub_002097F8
// Address: 0x2097f8 - 0x209ad0
void sub_002097F8_0x2097f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002097F8_0x2097f8");
#endif

    switch (ctx->pc) {
        case 0x2097f8u: goto label_2097f8;
        case 0x2097fcu: goto label_2097fc;
        case 0x209800u: goto label_209800;
        case 0x209804u: goto label_209804;
        case 0x209808u: goto label_209808;
        case 0x20980cu: goto label_20980c;
        case 0x209810u: goto label_209810;
        case 0x209814u: goto label_209814;
        case 0x209818u: goto label_209818;
        case 0x20981cu: goto label_20981c;
        case 0x209820u: goto label_209820;
        case 0x209824u: goto label_209824;
        case 0x209828u: goto label_209828;
        case 0x20982cu: goto label_20982c;
        case 0x209830u: goto label_209830;
        case 0x209834u: goto label_209834;
        case 0x209838u: goto label_209838;
        case 0x20983cu: goto label_20983c;
        case 0x209840u: goto label_209840;
        case 0x209844u: goto label_209844;
        case 0x209848u: goto label_209848;
        case 0x20984cu: goto label_20984c;
        case 0x209850u: goto label_209850;
        case 0x209854u: goto label_209854;
        case 0x209858u: goto label_209858;
        case 0x20985cu: goto label_20985c;
        case 0x209860u: goto label_209860;
        case 0x209864u: goto label_209864;
        case 0x209868u: goto label_209868;
        case 0x20986cu: goto label_20986c;
        case 0x209870u: goto label_209870;
        case 0x209874u: goto label_209874;
        case 0x209878u: goto label_209878;
        case 0x20987cu: goto label_20987c;
        case 0x209880u: goto label_209880;
        case 0x209884u: goto label_209884;
        case 0x209888u: goto label_209888;
        case 0x20988cu: goto label_20988c;
        case 0x209890u: goto label_209890;
        case 0x209894u: goto label_209894;
        case 0x209898u: goto label_209898;
        case 0x20989cu: goto label_20989c;
        case 0x2098a0u: goto label_2098a0;
        case 0x2098a4u: goto label_2098a4;
        case 0x2098a8u: goto label_2098a8;
        case 0x2098acu: goto label_2098ac;
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b4u: goto label_2098b4;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098ccu: goto label_2098cc;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098d4u: goto label_2098d4;
        case 0x2098d8u: goto label_2098d8;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098e0u: goto label_2098e0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098e8u: goto label_2098e8;
        case 0x2098ecu: goto label_2098ec;
        case 0x2098f0u: goto label_2098f0;
        case 0x2098f4u: goto label_2098f4;
        case 0x2098f8u: goto label_2098f8;
        case 0x2098fcu: goto label_2098fc;
        case 0x209900u: goto label_209900;
        case 0x209904u: goto label_209904;
        case 0x209908u: goto label_209908;
        case 0x20990cu: goto label_20990c;
        case 0x209910u: goto label_209910;
        case 0x209914u: goto label_209914;
        case 0x209918u: goto label_209918;
        case 0x20991cu: goto label_20991c;
        case 0x209920u: goto label_209920;
        case 0x209924u: goto label_209924;
        case 0x209928u: goto label_209928;
        case 0x20992cu: goto label_20992c;
        case 0x209930u: goto label_209930;
        case 0x209934u: goto label_209934;
        case 0x209938u: goto label_209938;
        case 0x20993cu: goto label_20993c;
        case 0x209940u: goto label_209940;
        case 0x209944u: goto label_209944;
        case 0x209948u: goto label_209948;
        case 0x20994cu: goto label_20994c;
        case 0x209950u: goto label_209950;
        case 0x209954u: goto label_209954;
        case 0x209958u: goto label_209958;
        case 0x20995cu: goto label_20995c;
        case 0x209960u: goto label_209960;
        case 0x209964u: goto label_209964;
        case 0x209968u: goto label_209968;
        case 0x20996cu: goto label_20996c;
        case 0x209970u: goto label_209970;
        case 0x209974u: goto label_209974;
        case 0x209978u: goto label_209978;
        case 0x20997cu: goto label_20997c;
        case 0x209980u: goto label_209980;
        case 0x209984u: goto label_209984;
        case 0x209988u: goto label_209988;
        case 0x20998cu: goto label_20998c;
        case 0x209990u: goto label_209990;
        case 0x209994u: goto label_209994;
        case 0x209998u: goto label_209998;
        case 0x20999cu: goto label_20999c;
        case 0x2099a0u: goto label_2099a0;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099a8u: goto label_2099a8;
        case 0x2099acu: goto label_2099ac;
        case 0x2099b0u: goto label_2099b0;
        case 0x2099b4u: goto label_2099b4;
        case 0x2099b8u: goto label_2099b8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099c8u: goto label_2099c8;
        case 0x2099ccu: goto label_2099cc;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d4u: goto label_2099d4;
        case 0x2099d8u: goto label_2099d8;
        case 0x2099dcu: goto label_2099dc;
        case 0x2099e0u: goto label_2099e0;
        case 0x2099e4u: goto label_2099e4;
        case 0x2099e8u: goto label_2099e8;
        case 0x2099ecu: goto label_2099ec;
        case 0x2099f0u: goto label_2099f0;
        case 0x2099f4u: goto label_2099f4;
        case 0x2099f8u: goto label_2099f8;
        case 0x2099fcu: goto label_2099fc;
        case 0x209a00u: goto label_209a00;
        case 0x209a04u: goto label_209a04;
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        default: break;
    }

    ctx->pc = 0x2097f8u;

label_2097f8:
    // 0x2097f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2097fc:
    // 0x2097fc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2097fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_209800:
    // 0x209800: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x209800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_209804:
    // 0x209804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209808:
    // 0x209808: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x209808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_20980c:
    // 0x20980c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_209810:
    // 0x209810: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x209810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_209814:
    // 0x209814: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x209814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_209818:
    // 0x209818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20981c:
    // 0x20981c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_209820:
    // 0x209820: 0x8e340018  lw          $s4, 0x18($s1)
    ctx->pc = 0x209820u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_209824:
    // 0x209824: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x209824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_209828:
    // 0x209828: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_20982c:
    if (ctx->pc == 0x20982Cu) {
        ctx->pc = 0x20982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209828u;
        // 0x20982c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209830u;
        goto label_209830;
    }
    ctx->pc = 0x209828u;
    {
        const bool branch_taken_0x209828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209828u;
        // 0x20982c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209828) {
            ctx->pc = 0x209850u;
            goto label_209850;
        }
    }
    ctx->pc = 0x209830u;
label_209830:
    // 0x209830: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_209834:
    // 0x209834: 0x40f809  jalr        $v0
label_209838:
    if (ctx->pc == 0x209838u) {
        ctx->pc = 0x20983Cu;
        goto label_20983c;
    }
    ctx->pc = 0x209834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20983Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209834u, 0x20983Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20983Cu;
label_20983c:
    // 0x20983c: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_209840:
    if (ctx->pc == 0x209840u) {
        ctx->pc = 0x209840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20983Cu;
        // 0x209840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209844u;
        goto label_209844;
    }
    ctx->pc = 0x20983Cu;
    {
        const bool branch_taken_0x20983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20983Cu;
        // 0x209840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20983c) {
            ctx->pc = 0x209AA0u;
            goto label_209aa0;
        }
    }
    ctx->pc = 0x209844u;
label_209844:
    // 0x209844: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x209844u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_209848:
    // 0x209848: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x209848u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20984c:
    // 0x20984c: 0x0  nop
    ctx->pc = 0x20984cu;
    // NOP
label_209850:
    // 0x209850: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x209850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_209854:
    // 0x209854: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_209858:
    // 0x209858: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20985c:
    // 0x20985c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_209860:
    if (ctx->pc == 0x209860u) {
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20985Cu;
        // 0x209860: 0x2aa00  sll         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209864u;
        goto label_209864;
    }
    ctx->pc = 0x20985Cu;
    {
        const bool branch_taken_0x20985c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x209860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20985Cu;
        // 0x209860: 0x2aa00  sll         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20985c) {
            ctx->pc = 0x209880u;
            goto label_209880;
        }
    }
    ctx->pc = 0x209864u;
label_209864:
    // 0x209864: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x209864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_209868:
    // 0x209868: 0x40f809  jalr        $v0
label_20986c:
    if (ctx->pc == 0x20986Cu) {
        ctx->pc = 0x20986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209868u;
        // 0x20986c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209870u;
        goto label_209870;
    }
    ctx->pc = 0x209868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209870u);
        ctx->pc = 0x20986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209868u;
        // 0x20986c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209868u, 0x209870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209870u;
label_209870:
    // 0x209870: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_209874:
    if (ctx->pc == 0x209874u) {
        ctx->pc = 0x209874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209870u;
        // 0x209874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209878u;
        goto label_209878;
    }
    ctx->pc = 0x209870u;
    {
        const bool branch_taken_0x209870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209870u;
        // 0x209874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209870) {
            ctx->pc = 0x209AA0u;
            goto label_209aa0;
        }
    }
    ctx->pc = 0x209878u;
label_209878:
    // 0x209878: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20987c:
    // 0x20987c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_209880:
    // 0x209880: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x209880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_209884:
    // 0x209884: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_209888:
    // 0x209888: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x209888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20988c:
    // 0x20988c: 0x2a2a82d  daddu       $s5, $s5, $v0
    ctx->pc = 0x20988cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 2));
label_209890:
    // 0x209890: 0x66b5fffe  daddiu      $s5, $s5, -0x2
    ctx->pc = 0x209890u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967294);
label_209894:
    // 0x209894: 0x2aa2000e  slti        $v0, $s5, 0xE
    ctx->pc = 0x209894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)14) ? 1 : 0);
label_209898:
    // 0x209898: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20989c:
    if (ctx->pc == 0x20989Cu) {
        ctx->pc = 0x20989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209898u;
        // 0x20989c: 0x2416000e  addiu       $s6, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098A0u;
        goto label_2098a0;
    }
    ctx->pc = 0x209898u;
    {
        const bool branch_taken_0x209898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209898u;
        // 0x20989c: 0x2416000e  addiu       $s6, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209898) {
            ctx->pc = 0x2098B4u;
            goto label_2098b4;
        }
    }
    ctx->pc = 0x2098A0u;
label_2098a0:
    // 0x2098a0: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x2098a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
label_2098a4:
    // 0x2098a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2098a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2098a8:
    // 0x2098a8: 0x2aa20001  slti        $v0, $s5, 0x1
    ctx->pc = 0x2098a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
label_2098ac:
    // 0x2098ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2098acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2098b0:
    // 0x2098b0: 0x62b00a  movz        $s6, $v1, $v0
    ctx->pc = 0x2098b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
label_2098b4:
    // 0x2098b4: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_2098b8:
    if (ctx->pc == 0x2098B8u) {
        ctx->pc = 0x2098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098B4u;
        // 0x2098b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098BCu;
        goto label_2098bc;
    }
    ctx->pc = 0x2098B4u;
    {
        const bool branch_taken_0x2098b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098B4u;
        // 0x2098b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098b4) {
            ctx->pc = 0x209904u;
            goto label_209904;
        }
    }
    ctx->pc = 0x2098BCu;
label_2098bc:
    // 0x2098bc: 0x0  nop
    ctx->pc = 0x2098bcu;
    // NOP
label_2098c0:
    // 0x2098c0: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_2098c4:
    if (ctx->pc == 0x2098C4u) {
        ctx->pc = 0x2098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098C0u;
        // 0x2098c4: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098C8u;
        goto label_2098c8;
    }
    ctx->pc = 0x2098C0u;
    {
        const bool branch_taken_0x2098c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2098c0) {
            ctx->pc = 0x2098C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2098C0u;
            // 0x2098c4: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2098E8u;
            goto label_2098e8;
        }
    }
    ctx->pc = 0x2098C8u;
label_2098c8:
    // 0x2098c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2098c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2098cc:
    // 0x2098cc: 0x40f809  jalr        $v0
label_2098d0:
    if (ctx->pc == 0x2098D0u) {
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098D4u;
        goto label_2098d4;
    }
    ctx->pc = 0x2098CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2098D4u);
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2098CCu, 0x2098D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2098D4u;
label_2098d4:
    // 0x2098d4: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_2098d8:
    if (ctx->pc == 0x2098D8u) {
        ctx->pc = 0x2098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098D4u;
        // 0x2098d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098DCu;
        goto label_2098dc;
    }
    ctx->pc = 0x2098D4u;
    {
        const bool branch_taken_0x2098d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098D4u;
        // 0x2098d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098d4) {
            ctx->pc = 0x209AA0u;
            goto label_209aa0;
        }
    }
    ctx->pc = 0x2098DCu;
label_2098dc:
    // 0x2098dc: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2098e0:
    // 0x2098e0: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x2098e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2098e4:
    // 0x2098e4: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2098e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2098e8:
    // 0x2098e8: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_2098ec:
    // 0x2098ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2098ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2098f0:
    // 0x2098f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2098f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_2098f4:
    // 0x2098f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2098f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2098f8:
    // 0x2098f8: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x2098f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2098fc:
    // 0x2098fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_209900:
    if (ctx->pc == 0x209900u) {
        ctx->pc = 0x209900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098FCu;
        // 0x209900: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209904u;
        goto label_209904;
    }
    ctx->pc = 0x2098FCu;
    {
        const bool branch_taken_0x2098fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098FCu;
        // 0x209900: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098fc) {
            ctx->pc = 0x2098C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2098c0;
        }
    }
    ctx->pc = 0x209904u;
label_209904:
    // 0x209904: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_209908:
    // 0x209908: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x209908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_20990c:
    // 0x20990c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_209910:
    // 0x209910: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_209914:
    // 0x209914: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_209918:
    if (ctx->pc == 0x209918u) {
        ctx->pc = 0x209918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209914u;
        // 0x209918: 0x2a2a82f  dsubu       $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20991Cu;
        goto label_20991c;
    }
    ctx->pc = 0x209914u;
    {
        const bool branch_taken_0x209914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x209918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209914u;
        // 0x209918: 0x2a2a82f  dsubu       $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209914) {
            ctx->pc = 0x209930u;
            goto label_209930;
        }
    }
    ctx->pc = 0x20991Cu;
label_20991c:
    // 0x20991c: 0x240200ee  addiu       $v0, $zero, 0xEE
    ctx->pc = 0x20991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_209920:
    // 0x209920: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_209924:
    if (ctx->pc == 0x209924u) {
        ctx->pc = 0x209924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209920u;
        // 0x209924: 0x2ec2000c  sltiu       $v0, $s6, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209928u;
        goto label_209928;
    }
    ctx->pc = 0x209920u;
    {
        const bool branch_taken_0x209920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x209924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209920u;
        // 0x209924: 0x2ec2000c  sltiu       $v0, $s6, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209920) {
            ctx->pc = 0x20994Cu;
            goto label_20994c;
        }
    }
    ctx->pc = 0x209928u;
label_209928:
    // 0x209928: 0x1000004b  b           . + 4 + (0x4B << 2)
label_20992c:
    if (ctx->pc == 0x20992Cu) {
        ctx->pc = 0x20992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209928u;
        // 0x20992c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209930u;
        goto label_209930;
    }
    ctx->pc = 0x209928u;
    {
        const bool branch_taken_0x209928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209928u;
        // 0x20992c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209928) {
            ctx->pc = 0x209A58u;
            goto label_209a58;
        }
    }
    ctx->pc = 0x209930u;
label_209930:
    // 0x209930: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x209930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_209934:
    // 0x209934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209938:
    // 0x209938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x209938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20993c:
    // 0x20993c: 0xc082538  jal         func_2094E0
label_209940:
    if (ctx->pc == 0x209940u) {
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209944u;
        goto label_209944;
    }
    ctx->pc = 0x20993Cu;
    SET_GPR_U32(ctx, 31, 0x209944u);
    ctx->pc = 0x209940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20993Cu;
    // 0x209940: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2094E0u, 0x20993Cu, 0x209944u)) {
        return;
    }
    ctx->pc = 0x209944u;
label_209944:
    // 0x209944: 0x1000004e  b           . + 4 + (0x4E << 2)
label_209948:
    if (ctx->pc == 0x209948u) {
        ctx->pc = 0x209948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209944u;
        // 0x209948: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20994Cu;
        goto label_20994c;
    }
    ctx->pc = 0x209944u;
    {
        const bool branch_taken_0x209944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209944u;
        // 0x209948: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209944) {
            ctx->pc = 0x209A80u;
            goto label_209a80;
        }
    }
    ctx->pc = 0x20994Cu;
label_20994c:
    // 0x20994c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_209950:
    if (ctx->pc == 0x209950u) {
        ctx->pc = 0x209950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20994Cu;
        // 0x209950: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209954u;
        goto label_209954;
    }
    ctx->pc = 0x20994Cu;
    {
        const bool branch_taken_0x20994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20994c) {
            ctx->pc = 0x209950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20994Cu;
            // 0x209950: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209954u;
label_209954:
    // 0x209954: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x209954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_209958:
    // 0x209958: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x209958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_20995c:
    // 0x20995c: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_209960:
    if (ctx->pc == 0x209960u) {
        ctx->pc = 0x209960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20995Cu;
        // 0x209960: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209964u;
        goto label_209964;
    }
    ctx->pc = 0x20995Cu;
    {
        const bool branch_taken_0x20995c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20995c) {
            ctx->pc = 0x209960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20995Cu;
            // 0x209960: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209964u;
label_209964:
    // 0x209964: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x209964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_209968:
    // 0x209968: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20996c:
    // 0x20996c: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
label_209970:
    if (ctx->pc == 0x209970u) {
        ctx->pc = 0x209970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20996Cu;
        // 0x209970: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209974u;
        goto label_209974;
    }
    ctx->pc = 0x20996Cu;
    {
        const bool branch_taken_0x20996c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20996c) {
            ctx->pc = 0x209970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20996Cu;
            // 0x209970: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209974u;
label_209974:
    // 0x209974: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x209974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_209978:
    // 0x209978: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x209978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_20997c:
    // 0x20997c: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
label_209980:
    if (ctx->pc == 0x209980u) {
        ctx->pc = 0x209980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20997Cu;
        // 0x209980: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209984u;
        goto label_209984;
    }
    ctx->pc = 0x20997Cu;
    {
        const bool branch_taken_0x20997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20997c) {
            ctx->pc = 0x209980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20997Cu;
            // 0x209980: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209984u;
label_209984:
    // 0x209984: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x209984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_209988:
    // 0x209988: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_20998c:
    // 0x20998c: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_209990:
    if (ctx->pc == 0x209990u) {
        ctx->pc = 0x209990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20998Cu;
        // 0x209990: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209994u;
        goto label_209994;
    }
    ctx->pc = 0x20998Cu;
    {
        const bool branch_taken_0x20998c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20998c) {
            ctx->pc = 0x209990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20998Cu;
            // 0x209990: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209994u;
label_209994:
    // 0x209994: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x209994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_209998:
    // 0x209998: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_20999c:
    // 0x20999c: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
label_2099a0:
    if (ctx->pc == 0x2099A0u) {
        ctx->pc = 0x2099A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20999Cu;
        // 0x2099a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099A4u;
        goto label_2099a4;
    }
    ctx->pc = 0x20999Cu;
    {
        const bool branch_taken_0x20999c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20999c) {
            ctx->pc = 0x2099A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20999Cu;
            // 0x2099a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x2099A4u;
label_2099a4:
    // 0x2099a4: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x2099a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
label_2099a8:
    // 0x2099a8: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
label_2099ac:
    // 0x2099ac: 0x93a70009  lbu         $a3, 0x9($sp)
    ctx->pc = 0x2099acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
label_2099b0:
    // 0x2099b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2099b4:
    // 0x2099b4: 0x93a30006  lbu         $v1, 0x6($sp)
    ctx->pc = 0x2099b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
label_2099b8:
    // 0x2099b8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2099b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2099bc:
    // 0x2099bc: 0x93a60008  lbu         $a2, 0x8($sp)
    ctx->pc = 0x2099bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_2099c0:
    // 0x2099c0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2099c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2099c4:
    // 0x2099c4: 0x93a5000a  lbu         $a1, 0xA($sp)
    ctx->pc = 0x2099c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
label_2099c8:
    // 0x2099c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2099cc:
    // 0x2099cc: 0x93b0000b  lbu         $s0, 0xB($sp)
    ctx->pc = 0x2099ccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
label_2099d0:
    // 0x2099d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2099d4:
    // 0x2099d4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2099d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2099d8:
    // 0x2099d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2099dc:
    // 0x2099dc: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2099dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2099e0:
    // 0x2099e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2099e4:
    // 0x2099e4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2099e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2099e8:
    // 0x2099e8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2099e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_2099ec:
    // 0x2099ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2099ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2099f0:
    // 0x2099f0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x2099f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_2099f4:
    // 0x2099f4: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x2099f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_2099f8:
    // 0x2099f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2099f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2099fc:
    // 0x2099fc: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x2099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
label_209a00:
    // 0x209a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209a04:
    // 0x209a04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_209a08:
    // 0x209a08: 0x40f809  jalr        $v0
label_209a0c:
    if (ctx->pc == 0x209A0Cu) {
        ctx->pc = 0x209A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A08u;
        // 0x209a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A10u;
        goto label_209a10;
    }
    ctx->pc = 0x209A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A10u);
        ctx->pc = 0x209A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A08u;
        // 0x209a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A08u, 0x209A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A10u;
label_209a10:
    // 0x209a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209a14:
    // 0x209a14: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x209a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
label_209a18:
    // 0x209a18: 0x10000018  b           . + 4 + (0x18 << 2)
label_209a1c:
    if (ctx->pc == 0x209A1Cu) {
        ctx->pc = 0x209A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A18u;
        // 0x209a1c: 0xa2300128  sb          $s0, 0x128($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A20u;
        goto label_209a20;
    }
    ctx->pc = 0x209A18u;
    {
        const bool branch_taken_0x209a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A18u;
        // 0x209a1c: 0xa2300128  sb          $s0, 0x128($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a18) {
            ctx->pc = 0x209A7Cu;
            goto label_209a7c;
        }
    }
    ctx->pc = 0x209A20u;
label_209a20:
    // 0x209a20: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x209a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_209a24:
    // 0x209a24: 0x15303c  dsll32      $a2, $s5, 0
    ctx->pc = 0x209a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << (32 + 0));
label_209a28:
    // 0x209a28: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x209a28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_209a2c:
    // 0x209a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209a30:
    // 0x209a30: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209a34:
    // 0x209a34: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x209a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_209a38:
    // 0x209a38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x209a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209a3c:
    // 0x209a3c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x209a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_209a40:
    // 0x209a40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209a44:
    // 0x209a44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_209a48:
    // 0x209a48: 0x40f809  jalr        $v0
label_209a4c:
    if (ctx->pc == 0x209A4Cu) {
        ctx->pc = 0x209A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A48u;
        // 0x209a4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A50u;
        goto label_209a50;
    }
    ctx->pc = 0x209A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A50u);
        ctx->pc = 0x209A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A48u;
        // 0x209a4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A48u, 0x209A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A50u;
label_209a50:
    // 0x209a50: 0x1000000b  b           . + 4 + (0xB << 2)
label_209a54:
    if (ctx->pc == 0x209A54u) {
        ctx->pc = 0x209A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A50u;
        // 0x209a54: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A58u;
        goto label_209a58;
    }
    ctx->pc = 0x209A50u;
    {
        const bool branch_taken_0x209a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A50u;
        // 0x209a54: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a50) {
            ctx->pc = 0x209A80u;
            goto label_209a80;
        }
    }
    ctx->pc = 0x209A58u;
label_209a58:
    // 0x209a58: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x209a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_209a5c:
    // 0x209a5c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209a60:
    // 0x209a60: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x209a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_209a64:
    // 0x209a64: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x209a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209a68:
    // 0x209a68: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x209a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_209a6c:
    // 0x209a6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209a70:
    // 0x209a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_209a74:
    // 0x209a74: 0x40f809  jalr        $v0
label_209a78:
    if (ctx->pc == 0x209A78u) {
        ctx->pc = 0x209A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A74u;
        // 0x209a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A7Cu;
        goto label_209a7c;
    }
    ctx->pc = 0x209A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A7Cu);
        ctx->pc = 0x209A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A74u;
        // 0x209a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A74u, 0x209A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A7Cu;
label_209a7c:
    // 0x209a7c: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x209a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_209a80:
    // 0x209a80: 0x1aa00006  blez        $s5, . + 4 + (0x6 << 2)
label_209a84:
    if (ctx->pc == 0x209A84u) {
        ctx->pc = 0x209A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A80u;
        // 0x209a84: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A88u;
        goto label_209a88;
    }
    ctx->pc = 0x209A80u;
    {
        const bool branch_taken_0x209a80 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x209A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A80u;
        // 0x209a84: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a80) {
            ctx->pc = 0x209A9Cu;
            goto label_209a9c;
        }
    }
    ctx->pc = 0x209A88u;
label_209a88:
    // 0x209a88: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x209a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_209a8c:
    // 0x209a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209a90:
    // 0x209a90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_209a94:
    // 0x209a94: 0x40f809  jalr        $v0
label_209a98:
    if (ctx->pc == 0x209A98u) {
        ctx->pc = 0x209A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A94u;
        // 0x209a98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A9Cu;
        goto label_209a9c;
    }
    ctx->pc = 0x209A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A9Cu);
        ctx->pc = 0x209A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A94u;
        // 0x209a98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A94u, 0x209A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A9Cu;
label_209a9c:
    // 0x209a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209aa0:
    // 0x209aa0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x209aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_209aa4:
    // 0x209aa4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x209aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_209aa8:
    // 0x209aa8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x209aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_209aac:
    // 0x209aac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x209aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209ab0:
    // 0x209ab0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x209ab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209ab4:
    // 0x209ab4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x209ab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209ab8:
    // 0x209ab8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x209ab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209abc:
    // 0x209abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_209ac0:
    // 0x209ac0: 0x3e00008  jr          $ra
label_209ac4:
    if (ctx->pc == 0x209AC4u) {
        ctx->pc = 0x209AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC0u;
        // 0x209ac4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AC8u;
        goto label_209ac8;
    }
    ctx->pc = 0x209AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC0u;
        // 0x209ac4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209AC8u;
label_209ac8:
    // 0x209ac8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x209ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_209acc:
    // 0x209acc: 0x0  nop
    ctx->pc = 0x209accu;
    // NOP
    ctx->pc = 0x209ad0u;
}
