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

// Function: sub_001E3630
// Address: 0x1e3630 - 0x1e36e0
void sub_001E3630_0x1e3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3630_0x1e3630");
#endif

    switch (ctx->pc) {
        case 0x1e3630u: goto label_1e3630;
        case 0x1e3634u: goto label_1e3634;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e363cu: goto label_1e363c;
        case 0x1e3640u: goto label_1e3640;
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3648u: goto label_1e3648;
        case 0x1e364cu: goto label_1e364c;
        case 0x1e3650u: goto label_1e3650;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e3658u: goto label_1e3658;
        case 0x1e365cu: goto label_1e365c;
        case 0x1e3660u: goto label_1e3660;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e3668u: goto label_1e3668;
        case 0x1e366cu: goto label_1e366c;
        case 0x1e3670u: goto label_1e3670;
        case 0x1e3674u: goto label_1e3674;
        case 0x1e3678u: goto label_1e3678;
        case 0x1e367cu: goto label_1e367c;
        case 0x1e3680u: goto label_1e3680;
        case 0x1e3684u: goto label_1e3684;
        case 0x1e3688u: goto label_1e3688;
        case 0x1e368cu: goto label_1e368c;
        case 0x1e3690u: goto label_1e3690;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e3698u: goto label_1e3698;
        case 0x1e369cu: goto label_1e369c;
        case 0x1e36a0u: goto label_1e36a0;
        case 0x1e36a4u: goto label_1e36a4;
        case 0x1e36a8u: goto label_1e36a8;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36b0u: goto label_1e36b0;
        case 0x1e36b4u: goto label_1e36b4;
        case 0x1e36b8u: goto label_1e36b8;
        case 0x1e36bcu: goto label_1e36bc;
        case 0x1e36c0u: goto label_1e36c0;
        case 0x1e36c4u: goto label_1e36c4;
        case 0x1e36c8u: goto label_1e36c8;
        case 0x1e36ccu: goto label_1e36cc;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36d4u: goto label_1e36d4;
        case 0x1e36d8u: goto label_1e36d8;
        case 0x1e36dcu: goto label_1e36dc;
        default: break;
    }

    ctx->pc = 0x1e3630u;

label_1e3630:
    // 0x1e3630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e3634:
    // 0x1e3634: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1e3634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1e3638:
    // 0x1e3638: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e363c:
    // 0x1e363c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3640:
    // 0x1e3640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3644:
    // 0x1e3644: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e3644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e3648:
    // 0x1e3648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e364c:
    // 0x1e364c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3650:
    // 0x1e3650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3654:
    // 0x1e3654: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x1e3654u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3658:
    // 0x1e3658: 0xc093546  jal         func_24D518
label_1e365c:
    if (ctx->pc == 0x1E365Cu) {
        ctx->pc = 0x1E365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3658u;
        // 0x1e365c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3660u;
        goto label_1e3660;
    }
    ctx->pc = 0x1E3658u;
    SET_GPR_U32(ctx, 31, 0x1E3660u);
    ctx->pc = 0x1E365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3658u;
    // 0x1e365c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1E3658u, 0x1E3660u)) {
        return;
    }
    ctx->pc = 0x1E3660u;
label_1e3660:
    // 0x1e3660: 0xc09d7cc  jal         func_275F30
label_1e3664:
    if (ctx->pc == 0x1E3664u) {
        ctx->pc = 0x1E3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3660u;
        // 0x1e3664: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3668u;
        goto label_1e3668;
    }
    ctx->pc = 0x1E3660u;
    SET_GPR_U32(ctx, 31, 0x1E3668u);
    ctx->pc = 0x1E3664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3660u;
    // 0x1e3664: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x1E3660u, 0x1E3668u)) {
        return;
    }
    ctx->pc = 0x1E3668u;
label_1e3668:
    // 0x1e3668: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e3668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e366c:
    // 0x1e366c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3670:
    // 0x1e3670: 0xae530024  sw          $s3, 0x24($s2)
    ctx->pc = 0x1e3670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
label_1e3674:
    // 0x1e3674: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1e3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e3678:
    // 0x1e3678: 0x40f809  jalr        $v0
label_1e367c:
    if (ctx->pc == 0x1E367Cu) {
        ctx->pc = 0x1E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3678u;
        // 0x1e367c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3680u;
        goto label_1e3680;
    }
    ctx->pc = 0x1E3678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3680u);
        ctx->pc = 0x1E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3678u;
        // 0x1e367c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3678u, 0x1E3680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3680u;
label_1e3680:
    // 0x1e3680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e3680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3684:
    // 0x1e3684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e3684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3688:
    // 0x1e3688: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1e368c:
    // 0x1e368c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e3690:
    if (ctx->pc == 0x1E3690u) {
        ctx->pc = 0x1E3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E368Cu;
        // 0x1e3690: 0x8cc50010  lw          $a1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3694u;
        goto label_1e3694;
    }
    ctx->pc = 0x1E368Cu;
    {
        const bool branch_taken_0x1e368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E368Cu;
        // 0x1e3690: 0x8cc50010  lw          $a1, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e368c) {
            ctx->pc = 0x1E36BCu;
            goto label_1e36bc;
        }
    }
    ctx->pc = 0x1E3694u;
label_1e3694:
    // 0x1e3694: 0x0  nop
    ctx->pc = 0x1e3694u;
    // NOP
label_1e3698:
    // 0x1e3698: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e369c:
    // 0x1e369c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e36a0:
    // 0x1e36a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e36a4:
    // 0x1e36a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e36a8:
    // 0x1e36a8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e36ac:
    // 0x1e36ac: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1e36b0:
    // 0x1e36b0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1e36b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e36b4:
    // 0x1e36b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1e36b8:
    if (ctx->pc == 0x1E36B8u) {
        ctx->pc = 0x1E36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36B4u;
        // 0x1e36b8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E36BCu;
        goto label_1e36bc;
    }
    ctx->pc = 0x1E36B4u;
    {
        const bool branch_taken_0x1e36b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36B4u;
        // 0x1e36b8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36b4) {
            ctx->pc = 0x1E3698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3698;
        }
    }
    ctx->pc = 0x1E36BCu;
label_1e36bc:
    // 0x1e36bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e36bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e36c0:
    // 0x1e36c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1e36c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e36c4:
    // 0x1e36c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e36c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e36c8:
    // 0x1e36c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e36c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e36cc:
    // 0x1e36cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e36ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e36d0:
    // 0x1e36d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e36d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e36d4:
    // 0x1e36d4: 0x3e00008  jr          $ra
label_1e36d8:
    if (ctx->pc == 0x1E36D8u) {
        ctx->pc = 0x1E36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36D4u;
        // 0x1e36d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E36DCu;
        goto label_1e36dc;
    }
    ctx->pc = 0x1E36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36D4u;
        // 0x1e36d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E36DCu;
label_1e36dc:
    // 0x1e36dc: 0x0  nop
    ctx->pc = 0x1e36dcu;
    // NOP
    ctx->pc = 0x1e36e0u;
}
