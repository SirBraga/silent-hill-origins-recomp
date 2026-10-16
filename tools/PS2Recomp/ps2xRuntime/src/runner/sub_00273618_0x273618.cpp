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

// Function: sub_00273618
// Address: 0x273618 - 0x2736b0
void sub_00273618_0x273618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273618_0x273618");
#endif

    switch (ctx->pc) {
        case 0x273618u: goto label_273618;
        case 0x27361cu: goto label_27361c;
        case 0x273620u: goto label_273620;
        case 0x273624u: goto label_273624;
        case 0x273628u: goto label_273628;
        case 0x27362cu: goto label_27362c;
        case 0x273630u: goto label_273630;
        case 0x273634u: goto label_273634;
        case 0x273638u: goto label_273638;
        case 0x27363cu: goto label_27363c;
        case 0x273640u: goto label_273640;
        case 0x273644u: goto label_273644;
        case 0x273648u: goto label_273648;
        case 0x27364cu: goto label_27364c;
        case 0x273650u: goto label_273650;
        case 0x273654u: goto label_273654;
        case 0x273658u: goto label_273658;
        case 0x27365cu: goto label_27365c;
        case 0x273660u: goto label_273660;
        case 0x273664u: goto label_273664;
        case 0x273668u: goto label_273668;
        case 0x27366cu: goto label_27366c;
        case 0x273670u: goto label_273670;
        case 0x273674u: goto label_273674;
        case 0x273678u: goto label_273678;
        case 0x27367cu: goto label_27367c;
        case 0x273680u: goto label_273680;
        case 0x273684u: goto label_273684;
        case 0x273688u: goto label_273688;
        case 0x27368cu: goto label_27368c;
        case 0x273690u: goto label_273690;
        case 0x273694u: goto label_273694;
        case 0x273698u: goto label_273698;
        case 0x27369cu: goto label_27369c;
        case 0x2736a0u: goto label_2736a0;
        case 0x2736a4u: goto label_2736a4;
        case 0x2736a8u: goto label_2736a8;
        case 0x2736acu: goto label_2736ac;
        default: break;
    }

    ctx->pc = 0x273618u;

label_273618:
    // 0x273618: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27361c:
    // 0x27361c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x27361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273620:
    // 0x273620: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x273620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_273624:
    // 0x273624: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x273624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_273628:
    // 0x273628: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x273628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_27362c:
    // 0x27362c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27362cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273630:
    // 0x273630: 0x8c5053c8  lw          $s0, 0x53C8($v0)
    ctx->pc = 0x273630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21448)));
label_273634:
    // 0x273634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273638:
    // 0x273638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x273638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27363c:
    // 0x27363c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_273640:
    if (ctx->pc == 0x273640u) {
        ctx->pc = 0x273640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27363Cu;
        // 0x273640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273644u;
        goto label_273644;
    }
    ctx->pc = 0x27363Cu;
    {
        const bool branch_taken_0x27363c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27363Cu;
        // 0x273640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27363c) {
            ctx->pc = 0x273674u;
            goto label_273674;
        }
    }
    ctx->pc = 0x273644u;
label_273644:
    // 0x273644: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x273644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_273648:
    // 0x273648: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x273648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27364c:
    // 0x27364c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x27364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_273650:
    // 0x273650: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x273650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_273654:
    // 0x273654: 0x40f809  jalr        $v0
label_273658:
    if (ctx->pc == 0x273658u) {
        ctx->pc = 0x273658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273654u;
        // 0x273658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27365Cu;
        goto label_27365c;
    }
    ctx->pc = 0x273654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27365Cu);
        ctx->pc = 0x273658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273654u;
        // 0x273658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273654u, 0x27365Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27365Cu;
label_27365c:
    // 0x27365c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_273660:
    if (ctx->pc == 0x273660u) {
        ctx->pc = 0x273660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27365Cu;
        // 0x273660: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273664u;
        goto label_273664;
    }
    ctx->pc = 0x27365Cu;
    {
        const bool branch_taken_0x27365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27365c) {
            ctx->pc = 0x273660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27365Cu;
            // 0x273660: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27366Cu;
            goto label_27366c;
        }
    }
    ctx->pc = 0x273664u;
label_273664:
    // 0x273664: 0x1000000a  b           . + 4 + (0xA << 2)
label_273668:
    if (ctx->pc == 0x273668u) {
        ctx->pc = 0x273668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273664u;
        // 0x273668: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27366Cu;
        goto label_27366c;
    }
    ctx->pc = 0x273664u;
    {
        const bool branch_taken_0x273664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273664u;
        // 0x273668: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273664) {
            ctx->pc = 0x273690u;
            goto label_273690;
        }
    }
    ctx->pc = 0x27366Cu;
label_27366c:
    // 0x27366c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_273670:
    if (ctx->pc == 0x273670u) {
        ctx->pc = 0x273670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27366Cu;
        // 0x273670: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273674u;
        goto label_273674;
    }
    ctx->pc = 0x27366Cu;
    {
        const bool branch_taken_0x27366c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x27366c) {
            ctx->pc = 0x273670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27366Cu;
            // 0x273670: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273650;
        }
    }
    ctx->pc = 0x273674u;
label_273674:
    // 0x273674: 0x266253c8  addiu       $v0, $s3, 0x53C8
    ctx->pc = 0x273674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21448));
label_273678:
    // 0x273678: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x273678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27367c:
    // 0x27367c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_273680:
    if (ctx->pc == 0x273680u) {
        ctx->pc = 0x273680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27367Cu;
        // 0x273680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273684u;
        goto label_273684;
    }
    ctx->pc = 0x27367Cu;
    {
        const bool branch_taken_0x27367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27367c) {
            ctx->pc = 0x273680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27367Cu;
            // 0x273680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273690u;
            goto label_273690;
        }
    }
    ctx->pc = 0x273684u;
label_273684:
    // 0x273684: 0x40f809  jalr        $v0
label_273688:
    if (ctx->pc == 0x273688u) {
        ctx->pc = 0x273688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273684u;
        // 0x273688: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27368Cu;
        goto label_27368c;
    }
    ctx->pc = 0x273684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27368Cu);
        ctx->pc = 0x273688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273684u;
        // 0x273688: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273684u, 0x27368Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27368Cu;
label_27368c:
    // 0x27368c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27368cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273690:
    // 0x273690: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x273690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273694:
    // 0x273694: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x273694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273698:
    // 0x273698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27369c:
    // 0x27369c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x27369cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2736a0:
    // 0x2736a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2736a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2736a4:
    // 0x2736a4: 0x3e00008  jr          $ra
label_2736a8:
    if (ctx->pc == 0x2736A8u) {
        ctx->pc = 0x2736A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736A4u;
        // 0x2736a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2736ACu;
        goto label_2736ac;
    }
    ctx->pc = 0x2736A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2736A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736A4u;
        // 0x2736a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2736A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2736ACu;
label_2736ac:
    // 0x2736ac: 0x0  nop
    ctx->pc = 0x2736acu;
    // NOP
    ctx->pc = 0x2736b0u;
}
