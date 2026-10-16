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

// Function: sub_0018F650
// Address: 0x18f650 - 0x18f840
void sub_0018F650_0x18f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F650_0x18f650");
#endif

    switch (ctx->pc) {
        case 0x18f650u: goto label_18f650;
        case 0x18f654u: goto label_18f654;
        case 0x18f658u: goto label_18f658;
        case 0x18f65cu: goto label_18f65c;
        case 0x18f660u: goto label_18f660;
        case 0x18f664u: goto label_18f664;
        case 0x18f668u: goto label_18f668;
        case 0x18f66cu: goto label_18f66c;
        case 0x18f670u: goto label_18f670;
        case 0x18f674u: goto label_18f674;
        case 0x18f678u: goto label_18f678;
        case 0x18f67cu: goto label_18f67c;
        case 0x18f680u: goto label_18f680;
        case 0x18f684u: goto label_18f684;
        case 0x18f688u: goto label_18f688;
        case 0x18f68cu: goto label_18f68c;
        case 0x18f690u: goto label_18f690;
        case 0x18f694u: goto label_18f694;
        case 0x18f698u: goto label_18f698;
        case 0x18f69cu: goto label_18f69c;
        case 0x18f6a0u: goto label_18f6a0;
        case 0x18f6a4u: goto label_18f6a4;
        case 0x18f6a8u: goto label_18f6a8;
        case 0x18f6acu: goto label_18f6ac;
        case 0x18f6b0u: goto label_18f6b0;
        case 0x18f6b4u: goto label_18f6b4;
        case 0x18f6b8u: goto label_18f6b8;
        case 0x18f6bcu: goto label_18f6bc;
        case 0x18f6c0u: goto label_18f6c0;
        case 0x18f6c4u: goto label_18f6c4;
        case 0x18f6c8u: goto label_18f6c8;
        case 0x18f6ccu: goto label_18f6cc;
        case 0x18f6d0u: goto label_18f6d0;
        case 0x18f6d4u: goto label_18f6d4;
        case 0x18f6d8u: goto label_18f6d8;
        case 0x18f6dcu: goto label_18f6dc;
        case 0x18f6e0u: goto label_18f6e0;
        case 0x18f6e4u: goto label_18f6e4;
        case 0x18f6e8u: goto label_18f6e8;
        case 0x18f6ecu: goto label_18f6ec;
        case 0x18f6f0u: goto label_18f6f0;
        case 0x18f6f4u: goto label_18f6f4;
        case 0x18f6f8u: goto label_18f6f8;
        case 0x18f6fcu: goto label_18f6fc;
        case 0x18f700u: goto label_18f700;
        case 0x18f704u: goto label_18f704;
        case 0x18f708u: goto label_18f708;
        case 0x18f70cu: goto label_18f70c;
        case 0x18f710u: goto label_18f710;
        case 0x18f714u: goto label_18f714;
        case 0x18f718u: goto label_18f718;
        case 0x18f71cu: goto label_18f71c;
        case 0x18f720u: goto label_18f720;
        case 0x18f724u: goto label_18f724;
        case 0x18f728u: goto label_18f728;
        case 0x18f72cu: goto label_18f72c;
        case 0x18f730u: goto label_18f730;
        case 0x18f734u: goto label_18f734;
        case 0x18f738u: goto label_18f738;
        case 0x18f73cu: goto label_18f73c;
        case 0x18f740u: goto label_18f740;
        case 0x18f744u: goto label_18f744;
        case 0x18f748u: goto label_18f748;
        case 0x18f74cu: goto label_18f74c;
        case 0x18f750u: goto label_18f750;
        case 0x18f754u: goto label_18f754;
        case 0x18f758u: goto label_18f758;
        case 0x18f75cu: goto label_18f75c;
        case 0x18f760u: goto label_18f760;
        case 0x18f764u: goto label_18f764;
        case 0x18f768u: goto label_18f768;
        case 0x18f76cu: goto label_18f76c;
        case 0x18f770u: goto label_18f770;
        case 0x18f774u: goto label_18f774;
        case 0x18f778u: goto label_18f778;
        case 0x18f77cu: goto label_18f77c;
        case 0x18f780u: goto label_18f780;
        case 0x18f784u: goto label_18f784;
        case 0x18f788u: goto label_18f788;
        case 0x18f78cu: goto label_18f78c;
        case 0x18f790u: goto label_18f790;
        case 0x18f794u: goto label_18f794;
        case 0x18f798u: goto label_18f798;
        case 0x18f79cu: goto label_18f79c;
        case 0x18f7a0u: goto label_18f7a0;
        case 0x18f7a4u: goto label_18f7a4;
        case 0x18f7a8u: goto label_18f7a8;
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b0u: goto label_18f7b0;
        case 0x18f7b4u: goto label_18f7b4;
        case 0x18f7b8u: goto label_18f7b8;
        case 0x18f7bcu: goto label_18f7bc;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7c4u: goto label_18f7c4;
        case 0x18f7c8u: goto label_18f7c8;
        case 0x18f7ccu: goto label_18f7cc;
        case 0x18f7d0u: goto label_18f7d0;
        case 0x18f7d4u: goto label_18f7d4;
        case 0x18f7d8u: goto label_18f7d8;
        case 0x18f7dcu: goto label_18f7dc;
        case 0x18f7e0u: goto label_18f7e0;
        case 0x18f7e4u: goto label_18f7e4;
        case 0x18f7e8u: goto label_18f7e8;
        case 0x18f7ecu: goto label_18f7ec;
        case 0x18f7f0u: goto label_18f7f0;
        case 0x18f7f4u: goto label_18f7f4;
        case 0x18f7f8u: goto label_18f7f8;
        case 0x18f7fcu: goto label_18f7fc;
        case 0x18f800u: goto label_18f800;
        case 0x18f804u: goto label_18f804;
        case 0x18f808u: goto label_18f808;
        case 0x18f80cu: goto label_18f80c;
        case 0x18f810u: goto label_18f810;
        case 0x18f814u: goto label_18f814;
        case 0x18f818u: goto label_18f818;
        case 0x18f81cu: goto label_18f81c;
        case 0x18f820u: goto label_18f820;
        case 0x18f824u: goto label_18f824;
        case 0x18f828u: goto label_18f828;
        case 0x18f82cu: goto label_18f82c;
        case 0x18f830u: goto label_18f830;
        case 0x18f834u: goto label_18f834;
        case 0x18f838u: goto label_18f838;
        case 0x18f83cu: goto label_18f83c;
        default: break;
    }

    ctx->pc = 0x18f650u;

label_18f650:
    // 0x18f650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18f654:
    // 0x18f654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f658:
    // 0x18f658: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_18f65c:
    // 0x18f65c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_18f660:
    // 0x18f660: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18f660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f664:
    // 0x18f664: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_18f668:
    // 0x18f668: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_18f66c:
    // 0x18f66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18f670:
    // 0x18f670: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_18f674:
    // 0x18f674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f678:
    // 0x18f678: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_18f67c:
    // 0x18f67c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_18f680:
    if (ctx->pc == 0x18F680u) {
        ctx->pc = 0x18F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F67Cu;
        // 0x18f680: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F684u;
        goto label_18f684;
    }
    ctx->pc = 0x18F67Cu;
    {
        const bool branch_taken_0x18f67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F67Cu;
        // 0x18f680: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f67c) {
            ctx->pc = 0x18F748u;
            goto label_18f748;
        }
    }
    ctx->pc = 0x18F684u;
label_18f684:
    // 0x18f684: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x18f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_18f688:
    // 0x18f688: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
label_18f68c:
    if (ctx->pc == 0x18F68Cu) {
        ctx->pc = 0x18F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F688u;
        // 0x18f68c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F690u;
        goto label_18f690;
    }
    ctx->pc = 0x18F688u;
    {
        const bool branch_taken_0x18f688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F688u;
        // 0x18f68c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f688) {
            ctx->pc = 0x18F74Cu;
            goto label_18f74c;
        }
    }
    ctx->pc = 0x18F690u;
label_18f690:
    // 0x18f690: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_18f694:
    if (ctx->pc == 0x18F694u) {
        ctx->pc = 0x18F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F690u;
        // 0x18f694: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F698u;
        goto label_18f698;
    }
    ctx->pc = 0x18F690u;
    {
        const bool branch_taken_0x18f690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F690u;
        // 0x18f694: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f690) {
            ctx->pc = 0x18F6E4u;
            goto label_18f6e4;
        }
    }
    ctx->pc = 0x18F698u;
label_18f698:
    // 0x18f698: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_18f69c:
    // 0x18f69c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18f6a0:
    if (ctx->pc == 0x18F6A0u) {
        ctx->pc = 0x18F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F69Cu;
        // 0x18f6a0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6A4u;
        goto label_18f6a4;
    }
    ctx->pc = 0x18F69Cu;
    {
        const bool branch_taken_0x18f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F69Cu;
        // 0x18f6a0: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f69c) {
            ctx->pc = 0x18F6E4u;
            goto label_18f6e4;
        }
    }
    ctx->pc = 0x18F6A4u;
label_18f6a4:
    // 0x18f6a4: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_18f6a8:
    // 0x18f6a8: 0x40f809  jalr        $v0
label_18f6ac:
    if (ctx->pc == 0x18F6ACu) {
        ctx->pc = 0x18F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A8u;
        // 0x18f6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6B0u;
        goto label_18f6b0;
    }
    ctx->pc = 0x18F6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F6B0u);
        ctx->pc = 0x18F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A8u;
        // 0x18f6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6A8u, 0x18F6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F6B0u;
label_18f6b0:
    // 0x18f6b0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f6b4:
    // 0x18f6b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f6b8:
    // 0x18f6b8: 0xc080924  jal         func_202490
label_18f6bc:
    if (ctx->pc == 0x18F6BCu) {
        ctx->pc = 0x18F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6B8u;
        // 0x18f6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6C0u;
        goto label_18f6c0;
    }
    ctx->pc = 0x18F6B8u;
    SET_GPR_U32(ctx, 31, 0x18F6C0u);
    ctx->pc = 0x18F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6B8u;
    // 0x18f6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18F6B8u, 0x18F6C0u)) {
        return;
    }
    ctx->pc = 0x18F6C0u;
label_18f6c0:
    // 0x18f6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f6c4:
    // 0x18f6c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f6c8:
    // 0x18f6c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18f6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f6cc:
    // 0x18f6cc: 0xc081b9a  jal         func_206E68
label_18f6d0:
    if (ctx->pc == 0x18F6D0u) {
        ctx->pc = 0x18F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6CCu;
        // 0x18f6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6D4u;
        goto label_18f6d4;
    }
    ctx->pc = 0x18F6CCu;
    SET_GPR_U32(ctx, 31, 0x18F6D4u);
    ctx->pc = 0x18F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6CCu;
    // 0x18f6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18F6CCu, 0x18F6D4u)) {
        return;
    }
    ctx->pc = 0x18F6D4u;
label_18f6d4:
    // 0x18f6d4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x18f6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f6d8:
    // 0x18f6d8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x18f6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_18f6dc:
    // 0x18f6dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f6e0:
    if (ctx->pc == 0x18F6E0u) {
        ctx->pc = 0x18F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6DCu;
        // 0x18f6e0: 0xa220fffb  sb          $zero, -0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294967291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6E4u;
        goto label_18f6e4;
    }
    ctx->pc = 0x18F6DCu;
    {
        const bool branch_taken_0x18f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6DCu;
        // 0x18f6e0: 0xa220fffb  sb          $zero, -0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294967291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6dc) {
            ctx->pc = 0x18F6E8u;
            goto label_18f6e8;
        }
    }
    ctx->pc = 0x18F6E4u;
label_18f6e4:
    // 0x18f6e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18f6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f6e8:
    // 0x18f6e8: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_18f6ec:
    if (ctx->pc == 0x18F6ECu) {
        ctx->pc = 0x18F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6E8u;
        // 0x18f6ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6F0u;
        goto label_18f6f0;
    }
    ctx->pc = 0x18F6E8u;
    {
        const bool branch_taken_0x18f6e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6E8u;
        // 0x18f6ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6e8) {
            ctx->pc = 0x18F714u;
            goto label_18f714;
        }
    }
    ctx->pc = 0x18F6F0u;
label_18f6f0:
    // 0x18f6f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18f6f4:
    // 0x18f6f4: 0x2485004c  addiu       $a1, $a0, 0x4C
    ctx->pc = 0x18f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_18f6f8:
    // 0x18f6f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f6fc:
    // 0x18f6fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f6fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f700:
    // 0x18f700: 0xc063616  jal         func_18D858
label_18f704:
    if (ctx->pc == 0x18F704u) {
        ctx->pc = 0x18F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F700u;
        // 0x18f704: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F708u;
        goto label_18f708;
    }
    ctx->pc = 0x18F700u;
    SET_GPR_U32(ctx, 31, 0x18F708u);
    ctx->pc = 0x18F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F700u;
    // 0x18f704: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x18F700u, 0x18F708u)) {
        return;
    }
    ctx->pc = 0x18F708u;
label_18f708:
    // 0x18f708: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18f708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f70c:
    // 0x18f70c: 0xc0808b8  jal         func_2022E0
label_18f710:
    if (ctx->pc == 0x18F710u) {
        ctx->pc = 0x18F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F70Cu;
        // 0x18f710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F714u;
        goto label_18f714;
    }
    ctx->pc = 0x18F70Cu;
    SET_GPR_U32(ctx, 31, 0x18F714u);
    ctx->pc = 0x18F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F70Cu;
    // 0x18f710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F70Cu, 0x18F714u)) {
        return;
    }
    ctx->pc = 0x18F714u;
label_18f714:
    // 0x18f714: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_18f718:
    if (ctx->pc == 0x18F718u) {
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F714u;
        // 0x18f718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F71Cu;
        goto label_18f71c;
    }
    ctx->pc = 0x18F714u;
    {
        const bool branch_taken_0x18f714 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F714u;
        // 0x18f718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f714) {
            ctx->pc = 0x18F728u;
            goto label_18f728;
        }
    }
    ctx->pc = 0x18F71Cu;
label_18f71c:
    // 0x18f71c: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_18f720:
    // 0x18f720: 0x8e820064  lw          $v0, 0x64($s4)
    ctx->pc = 0x18f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_18f724:
    // 0x18f724: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x18f724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18f728:
    // 0x18f728: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_18f72c:
    if (ctx->pc == 0x18F72Cu) {
        ctx->pc = 0x18F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F728u;
        // 0x18f72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F730u;
        goto label_18f730;
    }
    ctx->pc = 0x18F728u;
    {
        const bool branch_taken_0x18f728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F728u;
        // 0x18f72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f728) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F730u;
label_18f730:
    // 0x18f730: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x18f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_18f734:
    // 0x18f734: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x18f734u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18f738:
    // 0x18f738: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_18f73c:
    if (ctx->pc == 0x18F73Cu) {
        ctx->pc = 0x18F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F738u;
        // 0x18f73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F740u;
        goto label_18f740;
    }
    ctx->pc = 0x18F738u;
    {
        const bool branch_taken_0x18f738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F738u;
        // 0x18f73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f738) {
            ctx->pc = 0x18F81Cu;
            goto label_18f81c;
        }
    }
    ctx->pc = 0x18F740u;
label_18f740:
    // 0x18f740: 0x10000036  b           . + 4 + (0x36 << 2)
label_18f744:
    if (ctx->pc == 0x18F744u) {
        ctx->pc = 0x18F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F740u;
        // 0x18f744: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F748u;
        goto label_18f748;
    }
    ctx->pc = 0x18F740u;
    {
        const bool branch_taken_0x18f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F740u;
        // 0x18f744: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f740) {
            ctx->pc = 0x18F81Cu;
            goto label_18f81c;
        }
    }
    ctx->pc = 0x18F748u;
label_18f748:
    // 0x18f748: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f74c:
    // 0x18f74c: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
label_18f750:
    if (ctx->pc == 0x18F750u) {
        ctx->pc = 0x18F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F74Cu;
        // 0x18f750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F754u;
        goto label_18f754;
    }
    ctx->pc = 0x18F74Cu;
    {
        const bool branch_taken_0x18f74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F74Cu;
        // 0x18f750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f74c) {
            ctx->pc = 0x18F81Cu;
            goto label_18f81c;
        }
    }
    ctx->pc = 0x18F754u;
label_18f754:
    // 0x18f754: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x18f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_18f758:
    // 0x18f758: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x18f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_18f75c:
    // 0x18f75c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x18f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_18f760:
    // 0x18f760: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_18f764:
    if (ctx->pc == 0x18F764u) {
        ctx->pc = 0x18F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F760u;
        // 0x18f764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F768u;
        goto label_18f768;
    }
    ctx->pc = 0x18F760u;
    {
        const bool branch_taken_0x18f760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F760u;
        // 0x18f764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f760) {
            ctx->pc = 0x18F81Cu;
            goto label_18f81c;
        }
    }
    ctx->pc = 0x18F768u;
label_18f768:
    // 0x18f768: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_18f76c:
    if (ctx->pc == 0x18F76Cu) {
        ctx->pc = 0x18F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F768u;
        // 0x18f76c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F770u;
        goto label_18f770;
    }
    ctx->pc = 0x18F768u;
    {
        const bool branch_taken_0x18f768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F768u;
        // 0x18f76c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f768) {
            ctx->pc = 0x18F7BCu;
            goto label_18f7bc;
        }
    }
    ctx->pc = 0x18F770u;
label_18f770:
    // 0x18f770: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_18f774:
    // 0x18f774: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18f778:
    if (ctx->pc == 0x18F778u) {
        ctx->pc = 0x18F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F774u;
        // 0x18f778: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F77Cu;
        goto label_18f77c;
    }
    ctx->pc = 0x18F774u;
    {
        const bool branch_taken_0x18f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F774u;
        // 0x18f778: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f774) {
            ctx->pc = 0x18F7BCu;
            goto label_18f7bc;
        }
    }
    ctx->pc = 0x18F77Cu;
label_18f77c:
    // 0x18f77c: 0x2623108c  addiu       $v1, $s1, 0x108C
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4236));
label_18f780:
    // 0x18f780: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18f784:
    // 0x18f784: 0x40f809  jalr        $v0
label_18f788:
    if (ctx->pc == 0x18F788u) {
        ctx->pc = 0x18F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F784u;
        // 0x18f788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F78Cu;
        goto label_18f78c;
    }
    ctx->pc = 0x18F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F78Cu);
        ctx->pc = 0x18F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F784u;
        // 0x18f788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F784u, 0x18F78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F78Cu;
label_18f78c:
    // 0x18f78c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f790:
    // 0x18f790: 0xc080924  jal         func_202490
label_18f794:
    if (ctx->pc == 0x18F794u) {
        ctx->pc = 0x18F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F790u;
        // 0x18f794: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F798u;
        goto label_18f798;
    }
    ctx->pc = 0x18F790u;
    SET_GPR_U32(ctx, 31, 0x18F798u);
    ctx->pc = 0x18F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F790u;
    // 0x18f794: 0x24440005  addiu       $a0, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x18F790u, 0x18F798u)) {
        return;
    }
    ctx->pc = 0x18F798u;
label_18f798:
    // 0x18f798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18f798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f79c:
    // 0x18f79c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_18f7a0:
    // 0x18f7a0: 0x8e22108c  lw          $v0, 0x108C($s1)
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4236)));
label_18f7a4:
    // 0x18f7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f7a8:
    // 0x18f7a8: 0x24a594a8  addiu       $a1, $a1, -0x6B58
    ctx->pc = 0x18f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939816));
label_18f7ac:
    // 0x18f7ac: 0x40f809  jalr        $v0
label_18f7b0:
    if (ctx->pc == 0x18F7B0u) {
        ctx->pc = 0x18F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ACu;
        // 0x18f7b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7B4u;
        goto label_18f7b4;
    }
    ctx->pc = 0x18F7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F7B4u);
        ctx->pc = 0x18F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ACu;
        // 0x18f7b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F7ACu, 0x18F7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F7B4u;
label_18f7b4:
    // 0x18f7b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_18f7b8:
    if (ctx->pc == 0x18F7B8u) {
        ctx->pc = 0x18F7BCu;
        goto label_18f7bc;
    }
    ctx->pc = 0x18F7B4u;
    {
        const bool branch_taken_0x18f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7b4) {
            ctx->pc = 0x18F7C0u;
            goto label_18f7c0;
        }
    }
    ctx->pc = 0x18F7BCu;
label_18f7bc:
    // 0x18f7bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f7c0:
    // 0x18f7c0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_18f7c4:
    if (ctx->pc == 0x18F7C4u) {
        ctx->pc = 0x18F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7C0u;
        // 0x18f7c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7C8u;
        goto label_18f7c8;
    }
    ctx->pc = 0x18F7C0u;
    {
        const bool branch_taken_0x18f7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7C0u;
        // 0x18f7c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7c0) {
            ctx->pc = 0x18F7ECu;
            goto label_18f7ec;
        }
    }
    ctx->pc = 0x18F7C8u;
label_18f7c8:
    // 0x18f7c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18f7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f7cc:
    // 0x18f7cc: 0x2485002c  addiu       $a1, $a0, 0x2C
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_18f7d0:
    // 0x18f7d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f7d4:
    // 0x18f7d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f7d8:
    // 0x18f7d8: 0xc063616  jal         func_18D858
label_18f7dc:
    if (ctx->pc == 0x18F7DCu) {
        ctx->pc = 0x18F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7D8u;
        // 0x18f7dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7E0u;
        goto label_18f7e0;
    }
    ctx->pc = 0x18F7D8u;
    SET_GPR_U32(ctx, 31, 0x18F7E0u);
    ctx->pc = 0x18F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7D8u;
    // 0x18f7dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x18F7D8u, 0x18F7E0u)) {
        return;
    }
    ctx->pc = 0x18F7E0u;
label_18f7e0:
    // 0x18f7e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18f7e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f7e4:
    // 0x18f7e4: 0xc0808b8  jal         func_2022E0
label_18f7e8:
    if (ctx->pc == 0x18F7E8u) {
        ctx->pc = 0x18F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7E4u;
        // 0x18f7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7ECu;
        goto label_18f7ec;
    }
    ctx->pc = 0x18F7E4u;
    SET_GPR_U32(ctx, 31, 0x18F7ECu);
    ctx->pc = 0x18F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7E4u;
    // 0x18f7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18F7E4u, 0x18F7ECu)) {
        return;
    }
    ctx->pc = 0x18F7ECu;
label_18f7ec:
    // 0x18f7ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_18f7f0:
    if (ctx->pc == 0x18F7F0u) {
        ctx->pc = 0x18F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ECu;
        // 0x18f7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7F4u;
        goto label_18f7f4;
    }
    ctx->pc = 0x18F7ECu;
    {
        const bool branch_taken_0x18f7ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7ECu;
        // 0x18f7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7ec) {
            ctx->pc = 0x18F800u;
            goto label_18f800;
        }
    }
    ctx->pc = 0x18F7F4u;
label_18f7f4:
    // 0x18f7f4: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x18f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_18f7f8:
    // 0x18f7f8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x18f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_18f7fc:
    // 0x18f7fc: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x18f7fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18f800:
    // 0x18f800: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_18f804:
    if (ctx->pc == 0x18F804u) {
        ctx->pc = 0x18F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F800u;
        // 0x18f804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F808u;
        goto label_18f808;
    }
    ctx->pc = 0x18F800u;
    {
        const bool branch_taken_0x18f800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F800u;
        // 0x18f804: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f800) {
            ctx->pc = 0x18F810u;
            goto label_18f810;
        }
    }
    ctx->pc = 0x18F808u;
label_18f808:
    // 0x18f808: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_18f80c:
    // 0x18f80c: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x18f80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18f810:
    // 0x18f810: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_18f814:
    if (ctx->pc == 0x18F814u) {
        ctx->pc = 0x18F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F810u;
        // 0x18f814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F818u;
        goto label_18f818;
    }
    ctx->pc = 0x18F810u;
    {
        const bool branch_taken_0x18f810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F810u;
        // 0x18f814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f810) {
            ctx->pc = 0x18F81Cu;
            goto label_18f81c;
        }
    }
    ctx->pc = 0x18F818u;
label_18f818:
    // 0x18f818: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18f818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18f81c:
    // 0x18f81c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18f81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18f820:
    // 0x18f820: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18f820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18f824:
    // 0x18f824: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18f824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f828:
    // 0x18f828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f82c:
    // 0x18f82c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18f82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f830:
    // 0x18f830: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18f830u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f834:
    // 0x18f834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f838:
    // 0x18f838: 0x3e00008  jr          $ra
label_18f83c:
    if (ctx->pc == 0x18F83Cu) {
        ctx->pc = 0x18F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F838u;
        // 0x18f83c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F840u;
        goto label_fallthrough_0x18f838;
    }
    ctx->pc = 0x18F838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F838u;
        // 0x18f83c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f838:
    ctx->pc = 0x18F840u;
}
