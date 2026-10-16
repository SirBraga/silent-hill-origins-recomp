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

// Function: sub_00124650
// Address: 0x124650 - 0x124738
void sub_00124650_0x124650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124650_0x124650");
#endif

    switch (ctx->pc) {
        case 0x124650u: goto label_124650;
        case 0x124654u: goto label_124654;
        case 0x124658u: goto label_124658;
        case 0x12465cu: goto label_12465c;
        case 0x124660u: goto label_124660;
        case 0x124664u: goto label_124664;
        case 0x124668u: goto label_124668;
        case 0x12466cu: goto label_12466c;
        case 0x124670u: goto label_124670;
        case 0x124674u: goto label_124674;
        case 0x124678u: goto label_124678;
        case 0x12467cu: goto label_12467c;
        case 0x124680u: goto label_124680;
        case 0x124684u: goto label_124684;
        case 0x124688u: goto label_124688;
        case 0x12468cu: goto label_12468c;
        case 0x124690u: goto label_124690;
        case 0x124694u: goto label_124694;
        case 0x124698u: goto label_124698;
        case 0x12469cu: goto label_12469c;
        case 0x1246a0u: goto label_1246a0;
        case 0x1246a4u: goto label_1246a4;
        case 0x1246a8u: goto label_1246a8;
        case 0x1246acu: goto label_1246ac;
        case 0x1246b0u: goto label_1246b0;
        case 0x1246b4u: goto label_1246b4;
        case 0x1246b8u: goto label_1246b8;
        case 0x1246bcu: goto label_1246bc;
        case 0x1246c0u: goto label_1246c0;
        case 0x1246c4u: goto label_1246c4;
        case 0x1246c8u: goto label_1246c8;
        case 0x1246ccu: goto label_1246cc;
        case 0x1246d0u: goto label_1246d0;
        case 0x1246d4u: goto label_1246d4;
        case 0x1246d8u: goto label_1246d8;
        case 0x1246dcu: goto label_1246dc;
        case 0x1246e0u: goto label_1246e0;
        case 0x1246e4u: goto label_1246e4;
        case 0x1246e8u: goto label_1246e8;
        case 0x1246ecu: goto label_1246ec;
        case 0x1246f0u: goto label_1246f0;
        case 0x1246f4u: goto label_1246f4;
        case 0x1246f8u: goto label_1246f8;
        case 0x1246fcu: goto label_1246fc;
        case 0x124700u: goto label_124700;
        case 0x124704u: goto label_124704;
        case 0x124708u: goto label_124708;
        case 0x12470cu: goto label_12470c;
        case 0x124710u: goto label_124710;
        case 0x124714u: goto label_124714;
        case 0x124718u: goto label_124718;
        case 0x12471cu: goto label_12471c;
        case 0x124720u: goto label_124720;
        case 0x124724u: goto label_124724;
        case 0x124728u: goto label_124728;
        case 0x12472cu: goto label_12472c;
        case 0x124730u: goto label_124730;
        case 0x124734u: goto label_124734;
        default: break;
    }

    ctx->pc = 0x124650u;

label_124650:
    // 0x124650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124654:
    // 0x124654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x124654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_124658:
    // 0x124658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12465c:
    // 0x12465c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124660:
    // 0x124660: 0x8e020f58  lw          $v0, 0xF58($s0)
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3928)));
label_124664:
    // 0x124664: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x124664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_124668:
    // 0x124668: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_12466c:
    if (ctx->pc == 0x12466Cu) {
        ctx->pc = 0x12466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124668u;
        // 0x12466c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124670u;
        goto label_124670;
    }
    ctx->pc = 0x124668u;
    {
        const bool branch_taken_0x124668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124668) {
            ctx->pc = 0x12466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124668u;
            // 0x12466c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12472Cu;
            goto label_12472c;
        }
    }
    ctx->pc = 0x124670u;
label_124670:
    // 0x124670: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x124670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_124674:
    // 0x124674: 0x50c00019  beql        $a2, $zero, . + 4 + (0x19 << 2)
label_124678:
    if (ctx->pc == 0x124678u) {
        ctx->pc = 0x124678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124674u;
        // 0x124678: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12467Cu;
        goto label_12467c;
    }
    ctx->pc = 0x124674u;
    {
        const bool branch_taken_0x124674 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x124674) {
            ctx->pc = 0x124678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124674u;
            // 0x124678: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246DCu;
            goto label_1246dc;
        }
    }
    ctx->pc = 0x12467Cu;
label_12467c:
    // 0x12467c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x12467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_124680:
    // 0x124680: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_124684:
    // 0x124684: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x124684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_124688:
    // 0x124688: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x124688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_12468c:
    // 0x12468c: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x12468cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_124690:
    // 0x124690: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_124694:
    if (ctx->pc == 0x124694u) {
        ctx->pc = 0x124694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124690u;
        // 0x124694: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124698u;
        goto label_124698;
    }
    ctx->pc = 0x124690u;
    {
        const bool branch_taken_0x124690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124690u;
        // 0x124694: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124690) {
            ctx->pc = 0x1246A0u;
            goto label_1246a0;
        }
    }
    ctx->pc = 0x124698u;
label_124698:
    // 0x124698: 0x10000002  b           . + 4 + (0x2 << 2)
label_12469c:
    if (ctx->pc == 0x12469Cu) {
        ctx->pc = 0x12469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124698u;
        // 0x12469c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246A0u;
        goto label_1246a0;
    }
    ctx->pc = 0x124698u;
    {
        const bool branch_taken_0x124698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124698u;
        // 0x12469c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124698) {
            ctx->pc = 0x1246A4u;
            goto label_1246a4;
        }
    }
    ctx->pc = 0x1246A0u;
label_1246a0:
    // 0x1246a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1246a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1246a4:
    // 0x1246a4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1246a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1246a8:
    // 0x1246a8: 0x40f809  jalr        $v0
label_1246ac:
    if (ctx->pc == 0x1246ACu) {
        ctx->pc = 0x1246B0u;
        goto label_1246b0;
    }
    ctx->pc = 0x1246A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1246B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1246A8u, 0x1246B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1246B0u;
label_1246b0:
    // 0x1246b0: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x1246b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_1246b4:
    // 0x1246b4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1246b8:
    if (ctx->pc == 0x1246B8u) {
        ctx->pc = 0x1246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B4u;
        // 0x1246b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246BCu;
        goto label_1246bc;
    }
    ctx->pc = 0x1246B4u;
    {
        const bool branch_taken_0x1246b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B4u;
        // 0x1246b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b4) {
            ctx->pc = 0x1246D4u;
            goto label_1246d4;
        }
    }
    ctx->pc = 0x1246BCu;
label_1246bc:
    // 0x1246bc: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1246bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1246c0:
    // 0x1246c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1246c4:
    // 0x1246c4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1246c8:
    // 0x1246c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1246c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1246cc:
    // 0x1246cc: 0x40f809  jalr        $v0
label_1246d0:
    if (ctx->pc == 0x1246D0u) {
        ctx->pc = 0x1246D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246CCu;
        // 0x1246d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246D4u;
        goto label_1246d4;
    }
    ctx->pc = 0x1246CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1246D4u);
        ctx->pc = 0x1246D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246CCu;
        // 0x1246d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1246CCu, 0x1246D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1246D4u;
label_1246d4:
    // 0x1246d4: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x1246d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
label_1246d8:
    // 0x1246d8: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_1246dc:
    // 0x1246dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1246e0:
    if (ctx->pc == 0x1246E0u) {
        ctx->pc = 0x1246E4u;
        goto label_1246e4;
    }
    ctx->pc = 0x1246DCu;
    {
        const bool branch_taken_0x1246dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1246dc) {
            ctx->pc = 0x124720u;
            goto label_124720;
        }
    }
    ctx->pc = 0x1246E4u;
label_1246e4:
    // 0x1246e4: 0xc041628  jal         func_1058A0
label_1246e8:
    if (ctx->pc == 0x1246E8u) {
        ctx->pc = 0x1246E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246E4u;
        // 0x1246e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246ECu;
        goto label_1246ec;
    }
    ctx->pc = 0x1246E4u;
    SET_GPR_U32(ctx, 31, 0x1246ECu);
    ctx->pc = 0x1246E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246E4u;
    // 0x1246e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x1246E4u, 0x1246ECu)) {
        return;
    }
    ctx->pc = 0x1246ECu;
label_1246ec:
    // 0x1246ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1246f0:
    // 0x1246f0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1246f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_1246f4:
    // 0x1246f4: 0xc07fb0c  jal         func_1FEC30
label_1246f8:
    if (ctx->pc == 0x1246F8u) {
        ctx->pc = 0x1246F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246F4u;
        // 0x1246f8: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246FCu;
        goto label_1246fc;
    }
    ctx->pc = 0x1246F4u;
    SET_GPR_U32(ctx, 31, 0x1246FCu);
    ctx->pc = 0x1246F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246F4u;
    // 0x1246f8: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1246F4u, 0x1246FCu)) {
        return;
    }
    ctx->pc = 0x1246FCu;
label_1246fc:
    // 0x1246fc: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x1246fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_124700:
    // 0x124700: 0xc041612  jal         func_105848
label_124704:
    if (ctx->pc == 0x124704u) {
        ctx->pc = 0x124704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124700u;
        // 0x124704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124708u;
        goto label_124708;
    }
    ctx->pc = 0x124700u;
    SET_GPR_U32(ctx, 31, 0x124708u);
    ctx->pc = 0x124704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124700u;
    // 0x124704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105848u, 0x124700u, 0x124708u)) {
        return;
    }
    ctx->pc = 0x124708u;
label_124708:
    // 0x124708: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_12470c:
    // 0x12470c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_124710:
    if (ctx->pc == 0x124710u) {
        ctx->pc = 0x124710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12470Cu;
        // 0x124710: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124714u;
        goto label_124714;
    }
    ctx->pc = 0x12470Cu;
    {
        const bool branch_taken_0x12470c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12470c) {
            ctx->pc = 0x124710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12470Cu;
            // 0x124710: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124720u;
            goto label_124720;
        }
    }
    ctx->pc = 0x124714u;
label_124714:
    // 0x124714: 0xc0410c8  jal         func_104320
label_124718:
    if (ctx->pc == 0x124718u) {
        ctx->pc = 0x124718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124714u;
        // 0x124718: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12471Cu;
        goto label_12471c;
    }
    ctx->pc = 0x124714u;
    SET_GPR_U32(ctx, 31, 0x12471Cu);
    ctx->pc = 0x124718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124714u;
    // 0x124718: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104320u, 0x124714u, 0x12471Cu)) {
        return;
    }
    ctx->pc = 0x12471Cu;
label_12471c:
    // 0x12471c: 0xae000c70  sw          $zero, 0xC70($s0)
    ctx->pc = 0x12471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
label_124720:
    // 0x124720: 0xc040a72  jal         func_1029C8
label_124724:
    if (ctx->pc == 0x124724u) {
        ctx->pc = 0x124724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124720u;
        // 0x124724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124728u;
        goto label_124728;
    }
    ctx->pc = 0x124720u;
    SET_GPR_U32(ctx, 31, 0x124728u);
    ctx->pc = 0x124724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124720u;
    // 0x124724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1029C8u, 0x124720u, 0x124728u)) {
        return;
    }
    ctx->pc = 0x124728u;
label_124728:
    // 0x124728: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x124728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12472c:
    // 0x12472c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124730:
    // 0x124730: 0x3e00008  jr          $ra
label_124734:
    if (ctx->pc == 0x124734u) {
        ctx->pc = 0x124734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124730u;
        // 0x124734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124738u;
        goto label_fallthrough_0x124730;
    }
    ctx->pc = 0x124730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124730u;
        // 0x124734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124730:
    ctx->pc = 0x124738u;
}
