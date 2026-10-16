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

// Function: sub_00256670
// Address: 0x256670 - 0x256948
void sub_00256670_0x256670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256670_0x256670");
#endif

    switch (ctx->pc) {
        case 0x256670u: goto label_256670;
        case 0x256674u: goto label_256674;
        case 0x256678u: goto label_256678;
        case 0x25667cu: goto label_25667c;
        case 0x256680u: goto label_256680;
        case 0x256684u: goto label_256684;
        case 0x256688u: goto label_256688;
        case 0x25668cu: goto label_25668c;
        case 0x256690u: goto label_256690;
        case 0x256694u: goto label_256694;
        case 0x256698u: goto label_256698;
        case 0x25669cu: goto label_25669c;
        case 0x2566a0u: goto label_2566a0;
        case 0x2566a4u: goto label_2566a4;
        case 0x2566a8u: goto label_2566a8;
        case 0x2566acu: goto label_2566ac;
        case 0x2566b0u: goto label_2566b0;
        case 0x2566b4u: goto label_2566b4;
        case 0x2566b8u: goto label_2566b8;
        case 0x2566bcu: goto label_2566bc;
        case 0x2566c0u: goto label_2566c0;
        case 0x2566c4u: goto label_2566c4;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566ccu: goto label_2566cc;
        case 0x2566d0u: goto label_2566d0;
        case 0x2566d4u: goto label_2566d4;
        case 0x2566d8u: goto label_2566d8;
        case 0x2566dcu: goto label_2566dc;
        case 0x2566e0u: goto label_2566e0;
        case 0x2566e4u: goto label_2566e4;
        case 0x2566e8u: goto label_2566e8;
        case 0x2566ecu: goto label_2566ec;
        case 0x2566f0u: goto label_2566f0;
        case 0x2566f4u: goto label_2566f4;
        case 0x2566f8u: goto label_2566f8;
        case 0x2566fcu: goto label_2566fc;
        case 0x256700u: goto label_256700;
        case 0x256704u: goto label_256704;
        case 0x256708u: goto label_256708;
        case 0x25670cu: goto label_25670c;
        case 0x256710u: goto label_256710;
        case 0x256714u: goto label_256714;
        case 0x256718u: goto label_256718;
        case 0x25671cu: goto label_25671c;
        case 0x256720u: goto label_256720;
        case 0x256724u: goto label_256724;
        case 0x256728u: goto label_256728;
        case 0x25672cu: goto label_25672c;
        case 0x256730u: goto label_256730;
        case 0x256734u: goto label_256734;
        case 0x256738u: goto label_256738;
        case 0x25673cu: goto label_25673c;
        case 0x256740u: goto label_256740;
        case 0x256744u: goto label_256744;
        case 0x256748u: goto label_256748;
        case 0x25674cu: goto label_25674c;
        case 0x256750u: goto label_256750;
        case 0x256754u: goto label_256754;
        case 0x256758u: goto label_256758;
        case 0x25675cu: goto label_25675c;
        case 0x256760u: goto label_256760;
        case 0x256764u: goto label_256764;
        case 0x256768u: goto label_256768;
        case 0x25676cu: goto label_25676c;
        case 0x256770u: goto label_256770;
        case 0x256774u: goto label_256774;
        case 0x256778u: goto label_256778;
        case 0x25677cu: goto label_25677c;
        case 0x256780u: goto label_256780;
        case 0x256784u: goto label_256784;
        case 0x256788u: goto label_256788;
        case 0x25678cu: goto label_25678c;
        case 0x256790u: goto label_256790;
        case 0x256794u: goto label_256794;
        case 0x256798u: goto label_256798;
        case 0x25679cu: goto label_25679c;
        case 0x2567a0u: goto label_2567a0;
        case 0x2567a4u: goto label_2567a4;
        case 0x2567a8u: goto label_2567a8;
        case 0x2567acu: goto label_2567ac;
        case 0x2567b0u: goto label_2567b0;
        case 0x2567b4u: goto label_2567b4;
        case 0x2567b8u: goto label_2567b8;
        case 0x2567bcu: goto label_2567bc;
        case 0x2567c0u: goto label_2567c0;
        case 0x2567c4u: goto label_2567c4;
        case 0x2567c8u: goto label_2567c8;
        case 0x2567ccu: goto label_2567cc;
        case 0x2567d0u: goto label_2567d0;
        case 0x2567d4u: goto label_2567d4;
        case 0x2567d8u: goto label_2567d8;
        case 0x2567dcu: goto label_2567dc;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567e4u: goto label_2567e4;
        case 0x2567e8u: goto label_2567e8;
        case 0x2567ecu: goto label_2567ec;
        case 0x2567f0u: goto label_2567f0;
        case 0x2567f4u: goto label_2567f4;
        case 0x2567f8u: goto label_2567f8;
        case 0x2567fcu: goto label_2567fc;
        case 0x256800u: goto label_256800;
        case 0x256804u: goto label_256804;
        case 0x256808u: goto label_256808;
        case 0x25680cu: goto label_25680c;
        case 0x256810u: goto label_256810;
        case 0x256814u: goto label_256814;
        case 0x256818u: goto label_256818;
        case 0x25681cu: goto label_25681c;
        case 0x256820u: goto label_256820;
        case 0x256824u: goto label_256824;
        case 0x256828u: goto label_256828;
        case 0x25682cu: goto label_25682c;
        case 0x256830u: goto label_256830;
        case 0x256834u: goto label_256834;
        case 0x256838u: goto label_256838;
        case 0x25683cu: goto label_25683c;
        case 0x256840u: goto label_256840;
        case 0x256844u: goto label_256844;
        case 0x256848u: goto label_256848;
        case 0x25684cu: goto label_25684c;
        case 0x256850u: goto label_256850;
        case 0x256854u: goto label_256854;
        case 0x256858u: goto label_256858;
        case 0x25685cu: goto label_25685c;
        case 0x256860u: goto label_256860;
        case 0x256864u: goto label_256864;
        case 0x256868u: goto label_256868;
        case 0x25686cu: goto label_25686c;
        case 0x256870u: goto label_256870;
        case 0x256874u: goto label_256874;
        case 0x256878u: goto label_256878;
        case 0x25687cu: goto label_25687c;
        case 0x256880u: goto label_256880;
        case 0x256884u: goto label_256884;
        case 0x256888u: goto label_256888;
        case 0x25688cu: goto label_25688c;
        case 0x256890u: goto label_256890;
        case 0x256894u: goto label_256894;
        case 0x256898u: goto label_256898;
        case 0x25689cu: goto label_25689c;
        case 0x2568a0u: goto label_2568a0;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568a8u: goto label_2568a8;
        case 0x2568acu: goto label_2568ac;
        case 0x2568b0u: goto label_2568b0;
        case 0x2568b4u: goto label_2568b4;
        case 0x2568b8u: goto label_2568b8;
        case 0x2568bcu: goto label_2568bc;
        case 0x2568c0u: goto label_2568c0;
        case 0x2568c4u: goto label_2568c4;
        case 0x2568c8u: goto label_2568c8;
        case 0x2568ccu: goto label_2568cc;
        case 0x2568d0u: goto label_2568d0;
        case 0x2568d4u: goto label_2568d4;
        case 0x2568d8u: goto label_2568d8;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568e0u: goto label_2568e0;
        case 0x2568e4u: goto label_2568e4;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568ecu: goto label_2568ec;
        case 0x2568f0u: goto label_2568f0;
        case 0x2568f4u: goto label_2568f4;
        case 0x2568f8u: goto label_2568f8;
        case 0x2568fcu: goto label_2568fc;
        case 0x256900u: goto label_256900;
        case 0x256904u: goto label_256904;
        case 0x256908u: goto label_256908;
        case 0x25690cu: goto label_25690c;
        case 0x256910u: goto label_256910;
        case 0x256914u: goto label_256914;
        case 0x256918u: goto label_256918;
        case 0x25691cu: goto label_25691c;
        case 0x256920u: goto label_256920;
        case 0x256924u: goto label_256924;
        case 0x256928u: goto label_256928;
        case 0x25692cu: goto label_25692c;
        case 0x256930u: goto label_256930;
        case 0x256934u: goto label_256934;
        case 0x256938u: goto label_256938;
        case 0x25693cu: goto label_25693c;
        case 0x256940u: goto label_256940;
        case 0x256944u: goto label_256944;
        default: break;
    }

    ctx->pc = 0x256670u;

label_256670:
    // 0x256670: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x256670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_256674:
    // 0x256674: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x256674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_256678:
    // 0x256678: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x256678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25667c:
    // 0x25667c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25667cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256680:
    // 0x256680: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x256680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_256684:
    // 0x256684: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x256684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256688:
    // 0x256688: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x256688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25668c:
    // 0x25668c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_256690:
    // 0x256690: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x256690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_256694:
    // 0x256694: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x256694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_256698:
    // 0x256698: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x256698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25669c:
    // 0x25669c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2566a0:
    // 0x2566a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2566a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2566a4:
    // 0x2566a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2566a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2566a8:
    // 0x2566a8: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2566ac:
    // 0x2566ac: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_2566b0:
    if (ctx->pc == 0x2566B0u) {
        ctx->pc = 0x2566B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566ACu;
        // 0x2566b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2566B4u;
        goto label_2566b4;
    }
    ctx->pc = 0x2566ACu;
    {
        const bool branch_taken_0x2566ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2566B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566ACu;
        // 0x2566b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566ac) {
            ctx->pc = 0x25690Cu;
            goto label_25690c;
        }
    }
    ctx->pc = 0x2566B4u;
label_2566b4:
    // 0x2566b4: 0xc09620e  jal         func_258838
label_2566b8:
    if (ctx->pc == 0x2566B8u) {
        ctx->pc = 0x2566B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566B4u;
        // 0x2566b8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2566BCu;
        goto label_2566bc;
    }
    ctx->pc = 0x2566B4u;
    SET_GPR_U32(ctx, 31, 0x2566BCu);
    ctx->pc = 0x2566B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566B4u;
    // 0x2566b8: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258838u, 0x2566B4u, 0x2566BCu)) {
        return;
    }
    ctx->pc = 0x2566BCu;
label_2566bc:
    // 0x2566bc: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_2566c0:
    if (ctx->pc == 0x2566C0u) {
        ctx->pc = 0x2566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566BCu;
        // 0x2566c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2566C4u;
        goto label_2566c4;
    }
    ctx->pc = 0x2566BCu;
    {
        const bool branch_taken_0x2566bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566BCu;
        // 0x2566c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566bc) {
            ctx->pc = 0x256904u;
            goto label_256904;
        }
    }
    ctx->pc = 0x2566C4u;
label_2566c4:
    // 0x2566c4: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x2566c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2566c8:
    // 0x2566c8: 0x1a20007e  blez        $s1, . + 4 + (0x7E << 2)
label_2566cc:
    if (ctx->pc == 0x2566CCu) {
        ctx->pc = 0x2566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566C8u;
        // 0x2566cc: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2566D0u;
        goto label_2566d0;
    }
    ctx->pc = 0x2566C8u;
    {
        const bool branch_taken_0x2566c8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566C8u;
        // 0x2566cc: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566c8) {
            ctx->pc = 0x2568C4u;
            goto label_2568c4;
        }
    }
    ctx->pc = 0x2566D0u;
label_2566d0:
    // 0x2566d0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2566d4:
    // 0x2566d4: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x2566d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2566d8:
    // 0x2566d8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2566d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2566dc:
    // 0x2566dc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2566e0:
    // 0x2566e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2566e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2566e4:
    // 0x2566e4: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x2566e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_2566e8:
    // 0x2566e8: 0x40f809  jalr        $v0
label_2566ec:
    if (ctx->pc == 0x2566ECu) {
        ctx->pc = 0x2566ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566E8u;
        // 0x2566ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2566F0u;
        goto label_2566f0;
    }
    ctx->pc = 0x2566E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2566F0u);
        ctx->pc = 0x2566ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566E8u;
        // 0x2566ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2566E8u, 0x2566F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2566F0u;
label_2566f0:
    // 0x2566f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2566f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2566f4:
    // 0x2566f4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2566f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2566f8:
    // 0x2566f8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2566fc:
    // 0x2566fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2566fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256700:
    // 0x256700: 0x40f809  jalr        $v0
label_256704:
    if (ctx->pc == 0x256704u) {
        ctx->pc = 0x256704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256700u;
        // 0x256704: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256708u;
        goto label_256708;
    }
    ctx->pc = 0x256700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256708u);
        ctx->pc = 0x256704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256700u;
        // 0x256704: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256700u, 0x256708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256708u;
label_256708:
    // 0x256708: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x256708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25670c:
    // 0x25670c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x25670cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_256710:
    // 0x256710: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_256714:
    // 0x256714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256718:
    // 0x256718: 0x40f809  jalr        $v0
label_25671c:
    if (ctx->pc == 0x25671Cu) {
        ctx->pc = 0x25671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256718u;
        // 0x25671c: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256720u;
        goto label_256720;
    }
    ctx->pc = 0x256718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256720u);
        ctx->pc = 0x25671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256718u;
        // 0x25671c: 0x34a50503  ori         $a1, $a1, 0x503 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1283);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256718u, 0x256720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256720u;
label_256720:
    // 0x256720: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x256720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256724:
    // 0x256724: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x256724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_256728:
    // 0x256728: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
label_25672c:
    if (ctx->pc == 0x25672Cu) {
        ctx->pc = 0x25672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256728u;
        // 0x25672c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256730u;
        goto label_256730;
    }
    ctx->pc = 0x256728u;
    {
        const bool branch_taken_0x256728 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256728u;
        // 0x25672c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256728) {
            ctx->pc = 0x25689Cu;
            goto label_25689c;
        }
    }
    ctx->pc = 0x256730u;
label_256730:
    // 0x256730: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x256730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_256734:
    // 0x256734: 0x0  nop
    ctx->pc = 0x256734u;
    // NOP
label_256738:
    // 0x256738: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x256738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_25673c:
    // 0x25673c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x25673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_256740:
    // 0x256740: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_256744:
    // 0x256744: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x256744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_256748:
    // 0x256748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x256748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25674c:
    // 0x25674c: 0xc096068  jal         func_2581A0
label_256750:
    if (ctx->pc == 0x256750u) {
        ctx->pc = 0x256750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25674Cu;
        // 0x256750: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256754u;
        goto label_256754;
    }
    ctx->pc = 0x25674Cu;
    SET_GPR_U32(ctx, 31, 0x256754u);
    ctx->pc = 0x256750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25674Cu;
    // 0x256750: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2581A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2581A0u, 0x25674Cu, 0x256754u)) {
        return;
    }
    ctx->pc = 0x256754u;
label_256754:
    // 0x256754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256758:
    // 0x256758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25675c:
    // 0x25675c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_256760:
    // 0x256760: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_256764:
    if (ctx->pc == 0x256764u) {
        ctx->pc = 0x256764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256760u;
        // 0x256764: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256768u;
        goto label_256768;
    }
    ctx->pc = 0x256760u;
    {
        const bool branch_taken_0x256760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256760u;
        // 0x256764: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256760) {
            ctx->pc = 0x2567A0u;
            goto label_2567a0;
        }
    }
    ctx->pc = 0x256768u;
label_256768:
    // 0x256768: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x256768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_25676c:
    // 0x25676c: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_256770:
    if (ctx->pc == 0x256770u) {
        ctx->pc = 0x256770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25676Cu;
        // 0x256770: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256774u;
        goto label_256774;
    }
    ctx->pc = 0x25676Cu;
    {
        const bool branch_taken_0x25676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x256770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25676Cu;
        // 0x256770: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25676c) {
            ctx->pc = 0x2567A0u;
            goto label_2567a0;
        }
    }
    ctx->pc = 0x256774u;
label_256774:
    // 0x256774: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_256778:
    // 0x256778: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x256778u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25677c:
    // 0x25677c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_256780:
    // 0x256780: 0x142182b  sltu        $v1, $t2, $v0
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_256784:
    // 0x256784: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_256788:
    if (ctx->pc == 0x256788u) {
        ctx->pc = 0x256788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256784u;
        // 0x256788: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25678Cu;
        goto label_25678c;
    }
    ctx->pc = 0x256784u;
    {
        const bool branch_taken_0x256784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256784u;
        // 0x256788: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256784) {
            ctx->pc = 0x25679Cu;
            goto label_25679c;
        }
    }
    ctx->pc = 0x25678Cu;
label_25678c:
    // 0x25678c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_256790:
    // 0x256790: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256794:
    // 0x256794: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
label_256798:
    if (ctx->pc == 0x256798u) {
        ctx->pc = 0x256798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256794u;
        // 0x256798: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25679Cu;
        goto label_25679c;
    }
    ctx->pc = 0x256794u;
    {
        const bool branch_taken_0x256794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x256798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256794u;
        // 0x256798: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256794) {
            ctx->pc = 0x256778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256778;
        }
    }
    ctx->pc = 0x25679Cu;
label_25679c:
    // 0x25679c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2567a0:
    // 0x2567a0: 0x15420006  bne         $t2, $v0, . + 4 + (0x6 << 2)
label_2567a4:
    if (ctx->pc == 0x2567A4u) {
        ctx->pc = 0x2567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567A0u;
        // 0x2567a4: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567A8u;
        goto label_2567a8;
    }
    ctx->pc = 0x2567A0u;
    {
        const bool branch_taken_0x2567a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x2567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567A0u;
        // 0x2567a4: 0x25430001  addiu       $v1, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567a0) {
            ctx->pc = 0x2567BCu;
            goto label_2567bc;
        }
    }
    ctx->pc = 0x2567A8u;
label_2567a8:
    // 0x2567a8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_2567ac:
    // 0x2567ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2567acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2567b0:
    // 0x2567b0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2567b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2567b4:
    // 0x2567b4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2567b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2567b8:
    // 0x2567b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2567b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2567bc:
    // 0x2567bc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_2567c0:
    if (ctx->pc == 0x2567C0u) {
        ctx->pc = 0x2567C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567BCu;
        // 0x2567c0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567C4u;
        goto label_2567c4;
    }
    ctx->pc = 0x2567BCu;
    {
        const bool branch_taken_0x2567bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2567bc) {
            ctx->pc = 0x2567C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2567BCu;
            // 0x2567c0: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567C4u;
            goto label_2567c4;
        }
    }
    ctx->pc = 0x2567C4u;
label_2567c4:
    // 0x2567c4: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_2567c8:
    if (ctx->pc == 0x2567C8u) {
        ctx->pc = 0x2567C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567C4u;
        // 0x2567c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567CCu;
        goto label_2567cc;
    }
    ctx->pc = 0x2567C4u;
    {
        const bool branch_taken_0x2567c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567C4u;
        // 0x2567c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567c4) {
            ctx->pc = 0x2567F8u;
            goto label_2567f8;
        }
    }
    ctx->pc = 0x2567CCu;
label_2567cc:
    // 0x2567cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2567d0:
    // 0x2567d0: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_2567d4:
    if (ctx->pc == 0x2567D4u) {
        ctx->pc = 0x2567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567D0u;
        // 0x2567d4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567D8u;
        goto label_2567d8;
    }
    ctx->pc = 0x2567D0u;
    {
        const bool branch_taken_0x2567d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567D0u;
        // 0x2567d4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567d0) {
            ctx->pc = 0x2567F8u;
            goto label_2567f8;
        }
    }
    ctx->pc = 0x2567D8u;
label_2567d8:
    // 0x2567d8: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x2567d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2567dc:
    // 0x2567dc: 0x17e182b  sltu        $v1, $t3, $fp
    ctx->pc = 0x2567dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_2567e0:
    // 0x2567e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2567e4:
    if (ctx->pc == 0x2567E4u) {
        ctx->pc = 0x2567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567E0u;
        // 0x2567e4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567E8u;
        goto label_2567e8;
    }
    ctx->pc = 0x2567E0u;
    {
        const bool branch_taken_0x2567e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567E0u;
        // 0x2567e4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567e0) {
            ctx->pc = 0x2567F8u;
            goto label_2567f8;
        }
    }
    ctx->pc = 0x2567E8u;
label_2567e8:
    // 0x2567e8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2567ec:
    // 0x2567ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2567ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2567f0:
    // 0x2567f0: 0x1471fff9  bne         $v1, $s1, . + 4 + (-0x7 << 2)
label_2567f4:
    if (ctx->pc == 0x2567F4u) {
        ctx->pc = 0x2567F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567F0u;
        // 0x2567f4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2567F8u;
        goto label_2567f8;
    }
    ctx->pc = 0x2567F0u;
    {
        const bool branch_taken_0x2567f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2567F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567F0u;
        // 0x2567f4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567f0) {
            ctx->pc = 0x2567D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2567d8;
        }
    }
    ctx->pc = 0x2567F8u;
label_2567f8:
    // 0x2567f8: 0x557e0007  bnel        $t3, $fp, . + 4 + (0x7 << 2)
label_2567fc:
    if (ctx->pc == 0x2567FCu) {
        ctx->pc = 0x2567FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567F8u;
        // 0x2567fc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256800u;
        goto label_256800;
    }
    ctx->pc = 0x2567F8u;
    {
        const bool branch_taken_0x2567f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 30));
        if (branch_taken_0x2567f8) {
            ctx->pc = 0x2567FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2567F8u;
            // 0x2567fc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256818u;
            goto label_256818;
        }
    }
    ctx->pc = 0x256800u;
label_256800:
    // 0x256800: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x256800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_256804:
    // 0x256804: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_256808:
    // 0x256808: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x256808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_25680c:
    // 0x25680c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x25680cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_256810:
    // 0x256810: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x256810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_256814:
    // 0x256814: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x256814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_256818:
    // 0x256818: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_25681c:
    if (ctx->pc == 0x25681Cu) {
        ctx->pc = 0x25681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256818u;
        // 0x25681c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256820u;
        goto label_256820;
    }
    ctx->pc = 0x256818u;
    {
        const bool branch_taken_0x256818 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256818u;
        // 0x25681c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256818) {
            ctx->pc = 0x256850u;
            goto label_256850;
        }
    }
    ctx->pc = 0x256820u;
label_256820:
    // 0x256820: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x256820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_256824:
    // 0x256824: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_256828:
    if (ctx->pc == 0x256828u) {
        ctx->pc = 0x256828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256824u;
        // 0x256828: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25682Cu;
        goto label_25682c;
    }
    ctx->pc = 0x256824u;
    {
        const bool branch_taken_0x256824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x256828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256824u;
        // 0x256828: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256824) {
            ctx->pc = 0x256850u;
            goto label_256850;
        }
    }
    ctx->pc = 0x25682Cu;
label_25682c:
    // 0x25682c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x25682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_256830:
    // 0x256830: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x256830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_256834:
    // 0x256834: 0x97182b  sltu        $v1, $a0, $s7
    ctx->pc = 0x256834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_256838:
    // 0x256838: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25683c:
    if (ctx->pc == 0x25683Cu) {
        ctx->pc = 0x25683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256838u;
        // 0x25683c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256840u;
        goto label_256840;
    }
    ctx->pc = 0x256838u;
    {
        const bool branch_taken_0x256838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256838u;
        // 0x25683c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256838) {
            ctx->pc = 0x256850u;
            goto label_256850;
        }
    }
    ctx->pc = 0x256840u;
label_256840:
    // 0x256840: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x256840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_256844:
    // 0x256844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_256848:
    // 0x256848: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_25684c:
    if (ctx->pc == 0x25684Cu) {
        ctx->pc = 0x25684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256848u;
        // 0x25684c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256850u;
        goto label_256850;
    }
    ctx->pc = 0x256848u;
    {
        const bool branch_taken_0x256848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x25684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256848u;
        // 0x25684c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256848) {
            ctx->pc = 0x256830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256830;
        }
    }
    ctx->pc = 0x256850u;
label_256850:
    // 0x256850: 0x54970007  bnel        $a0, $s7, . + 4 + (0x7 << 2)
label_256854:
    if (ctx->pc == 0x256854u) {
        ctx->pc = 0x256854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256850u;
        // 0x256854: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256858u;
        goto label_256858;
    }
    ctx->pc = 0x256850u;
    {
        const bool branch_taken_0x256850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x256850) {
            ctx->pc = 0x256854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256850u;
            // 0x256854: 0x96090006  lhu         $t1, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256870u;
            goto label_256870;
        }
    }
    ctx->pc = 0x256858u;
label_256858:
    // 0x256858: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x256858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25685c:
    // 0x25685c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_256860:
    // 0x256860: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_256864:
    // 0x256864: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x256864u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_256868:
    // 0x256868: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x256868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_25686c:
    // 0x25686c: 0x96090006  lhu         $t1, 0x6($s0)
    ctx->pc = 0x25686cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_256870:
    // 0x256870: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x256870u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_256874:
    // 0x256874: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x256874u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_256878:
    // 0x256878: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x256878u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_25687c:
    // 0x25687c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_256880:
    // 0x256880: 0xc096278  jal         func_2589E0
label_256884:
    if (ctx->pc == 0x256884u) {
        ctx->pc = 0x256884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256880u;
        // 0x256884: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256888u;
        goto label_256888;
    }
    ctx->pc = 0x256880u;
    SET_GPR_U32(ctx, 31, 0x256888u);
    ctx->pc = 0x256884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256880u;
    // 0x256884: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2589E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2589E0u, 0x256880u, 0x256888u)) {
        return;
    }
    ctx->pc = 0x256888u;
label_256888:
    // 0x256888: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x256888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_25688c:
    // 0x25688c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25688cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_256890:
    // 0x256890: 0x5460ffa9  bnel        $v1, $zero, . + 4 + (-0x57 << 2)
label_256894:
    if (ctx->pc == 0x256894u) {
        ctx->pc = 0x256894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256890u;
        // 0x256894: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256898u;
        goto label_256898;
    }
    ctx->pc = 0x256890u;
    {
        const bool branch_taken_0x256890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256890) {
            ctx->pc = 0x256894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256890u;
            // 0x256894: 0x8e63002c  lw          $v1, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256738;
        }
    }
    ctx->pc = 0x256898u;
label_256898:
    // 0x256898: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25689c:
    // 0x25689c: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2568a0:
    // 0x2568a0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2568a4:
    // 0x2568a4: 0x40f809  jalr        $v0
label_2568a8:
    if (ctx->pc == 0x2568A8u) {
        ctx->pc = 0x2568A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568A4u;
        // 0x2568a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568ACu;
        goto label_2568ac;
    }
    ctx->pc = 0x2568A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2568ACu);
        ctx->pc = 0x2568A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568A4u;
        // 0x2568a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2568A4u, 0x2568ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2568ACu;
label_2568ac:
    // 0x2568ac: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2568acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2568b0:
    // 0x2568b0: 0x60f809  jalr        $v1
label_2568b4:
    if (ctx->pc == 0x2568B4u) {
        ctx->pc = 0x2568B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568B0u;
        // 0x2568b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568B8u;
        goto label_2568b8;
    }
    ctx->pc = 0x2568B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2568B8u);
        ctx->pc = 0x2568B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568B0u;
        // 0x2568b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2568B0u, 0x2568B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2568B8u;
label_2568b8:
    // 0x2568b8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2568bc:
    // 0x2568bc: 0x40f809  jalr        $v0
label_2568c0:
    if (ctx->pc == 0x2568C0u) {
        ctx->pc = 0x2568C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568BCu;
        // 0x2568c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568C4u;
        goto label_2568c4;
    }
    ctx->pc = 0x2568BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2568C4u);
        ctx->pc = 0x2568C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568BCu;
        // 0x2568c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2568BCu, 0x2568C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2568C4u;
label_2568c4:
    // 0x2568c4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2568c8:
    // 0x2568c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2568c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2568cc:
    // 0x2568cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2568d0:
    if (ctx->pc == 0x2568D0u) {
        ctx->pc = 0x2568D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568CCu;
        // 0x2568d0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568D4u;
        goto label_2568d4;
    }
    ctx->pc = 0x2568CCu;
    {
        const bool branch_taken_0x2568cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568CCu;
        // 0x2568d0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568cc) {
            ctx->pc = 0x2568E4u;
            goto label_2568e4;
        }
    }
    ctx->pc = 0x2568D4u;
label_2568d4:
    // 0x2568d4: 0xc096da6  jal         func_25B698
label_2568d8:
    if (ctx->pc == 0x2568D8u) {
        ctx->pc = 0x2568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568D4u;
        // 0x2568d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568DCu;
        goto label_2568dc;
    }
    ctx->pc = 0x2568D4u;
    SET_GPR_U32(ctx, 31, 0x2568DCu);
    ctx->pc = 0x2568D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568D4u;
    // 0x2568d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B698u, 0x2568D4u, 0x2568DCu)) {
        return;
    }
    ctx->pc = 0x2568DCu;
label_2568dc:
    // 0x2568dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2568e0:
    if (ctx->pc == 0x2568E0u) {
        ctx->pc = 0x2568E4u;
        goto label_2568e4;
    }
    ctx->pc = 0x2568DCu;
    {
        const bool branch_taken_0x2568dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568dc) {
            ctx->pc = 0x2568ECu;
            goto label_2568ec;
        }
    }
    ctx->pc = 0x2568E4u;
label_2568e4:
    // 0x2568e4: 0xc096da6  jal         func_25B698
label_2568e8:
    if (ctx->pc == 0x2568E8u) {
        ctx->pc = 0x2568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568E4u;
        // 0x2568e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568ECu;
        goto label_2568ec;
    }
    ctx->pc = 0x2568E4u;
    SET_GPR_U32(ctx, 31, 0x2568ECu);
    ctx->pc = 0x2568E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568E4u;
    // 0x2568e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B698u, 0x2568E4u, 0x2568ECu)) {
        return;
    }
    ctx->pc = 0x2568ECu;
label_2568ec:
    // 0x2568ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2568f0:
    if (ctx->pc == 0x2568F0u) {
        ctx->pc = 0x2568F4u;
        goto label_2568f4;
    }
    ctx->pc = 0x2568ECu;
    {
        const bool branch_taken_0x2568ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568ec) {
            ctx->pc = 0x2568FCu;
            goto label_2568fc;
        }
    }
    ctx->pc = 0x2568F4u;
label_2568f4:
    // 0x2568f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2568f8:
    if (ctx->pc == 0x2568F8u) {
        ctx->pc = 0x2568F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568F4u;
        // 0x2568f8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2568FCu;
        goto label_2568fc;
    }
    ctx->pc = 0x2568F4u;
    {
        const bool branch_taken_0x2568f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568F4u;
        // 0x2568f8: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568f4) {
            ctx->pc = 0x25690Cu;
            goto label_25690c;
        }
    }
    ctx->pc = 0x2568FCu;
label_2568fc:
    // 0x2568fc: 0xc09624c  jal         func_258930
label_256900:
    if (ctx->pc == 0x256900u) {
        ctx->pc = 0x256900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568FCu;
        // 0x256900: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256904u;
        goto label_256904;
    }
    ctx->pc = 0x2568FCu;
    SET_GPR_U32(ctx, 31, 0x256904u);
    ctx->pc = 0x256900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2568FCu;
    // 0x256900: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258930u, 0x2568FCu, 0x256904u)) {
        return;
    }
    ctx->pc = 0x256904u;
label_256904:
    // 0x256904: 0x10000002  b           . + 4 + (0x2 << 2)
label_256908:
    if (ctx->pc == 0x256908u) {
        ctx->pc = 0x256908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256904u;
        // 0x256908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25690Cu;
        goto label_25690c;
    }
    ctx->pc = 0x256904u;
    {
        const bool branch_taken_0x256904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256904u;
        // 0x256908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256904) {
            ctx->pc = 0x256910u;
            goto label_256910;
        }
    }
    ctx->pc = 0x25690Cu;
label_25690c:
    // 0x25690c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25690cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256910:
    // 0x256910: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x256910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_256914:
    // 0x256914: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x256914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_256918:
    // 0x256918: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x256918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25691c:
    // 0x25691c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25691cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_256920:
    // 0x256920: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x256920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_256924:
    // 0x256924: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x256924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_256928:
    // 0x256928: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x256928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25692c:
    // 0x25692c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25692cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256930:
    // 0x256930: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x256930u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256934:
    // 0x256934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_256938:
    // 0x256938: 0x3e00008  jr          $ra
label_25693c:
    if (ctx->pc == 0x25693Cu) {
        ctx->pc = 0x25693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256938u;
        // 0x25693c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256940u;
        goto label_256940;
    }
    ctx->pc = 0x256938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256938u;
        // 0x25693c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256940u;
label_256940:
    // 0x256940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x256940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_256944:
    // 0x256944: 0x0  nop
    ctx->pc = 0x256944u;
    // NOP
    ctx->pc = 0x256948u;
}
