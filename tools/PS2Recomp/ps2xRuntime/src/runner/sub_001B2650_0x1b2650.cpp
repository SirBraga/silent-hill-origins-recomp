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

// Function: sub_001B2650
// Address: 0x1b2650 - 0x1b26d0
void sub_001B2650_0x1b2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2650_0x1b2650");
#endif

    switch (ctx->pc) {
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2654u: goto label_1b2654;
        case 0x1b2658u: goto label_1b2658;
        case 0x1b265cu: goto label_1b265c;
        case 0x1b2660u: goto label_1b2660;
        case 0x1b2664u: goto label_1b2664;
        case 0x1b2668u: goto label_1b2668;
        case 0x1b266cu: goto label_1b266c;
        case 0x1b2670u: goto label_1b2670;
        case 0x1b2674u: goto label_1b2674;
        case 0x1b2678u: goto label_1b2678;
        case 0x1b267cu: goto label_1b267c;
        case 0x1b2680u: goto label_1b2680;
        case 0x1b2684u: goto label_1b2684;
        case 0x1b2688u: goto label_1b2688;
        case 0x1b268cu: goto label_1b268c;
        case 0x1b2690u: goto label_1b2690;
        case 0x1b2694u: goto label_1b2694;
        case 0x1b2698u: goto label_1b2698;
        case 0x1b269cu: goto label_1b269c;
        case 0x1b26a0u: goto label_1b26a0;
        case 0x1b26a4u: goto label_1b26a4;
        case 0x1b26a8u: goto label_1b26a8;
        case 0x1b26acu: goto label_1b26ac;
        case 0x1b26b0u: goto label_1b26b0;
        case 0x1b26b4u: goto label_1b26b4;
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26bcu: goto label_1b26bc;
        case 0x1b26c0u: goto label_1b26c0;
        case 0x1b26c4u: goto label_1b26c4;
        case 0x1b26c8u: goto label_1b26c8;
        case 0x1b26ccu: goto label_1b26cc;
        default: break;
    }

    ctx->pc = 0x1b2650u;

label_1b2650:
    // 0x1b2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2654:
    // 0x1b2654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b2658:
    // 0x1b2658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b265c:
    // 0x1b265c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b2660:
    // 0x1b2660: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b2660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2664:
    // 0x1b2664: 0xc065c40  jal         func_197100
label_1b2668:
    if (ctx->pc == 0x1B2668u) {
        ctx->pc = 0x1B2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2664u;
        // 0x1b2668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B266Cu;
        goto label_1b266c;
    }
    ctx->pc = 0x1B2664u;
    SET_GPR_U32(ctx, 31, 0x1B266Cu);
    ctx->pc = 0x1B2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2664u;
    // 0x1b2668: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B2664u, 0x1B266Cu)) {
        return;
    }
    ctx->pc = 0x1B266Cu;
label_1b266c:
    // 0x1b266c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b2670:
    // 0x1b2670: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1b2674:
    if (ctx->pc == 0x1B2674u) {
        ctx->pc = 0x1B2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2670u;
        // 0x1b2674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2678u;
        goto label_1b2678;
    }
    ctx->pc = 0x1B2670u;
    {
        const bool branch_taken_0x1b2670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2670u;
        // 0x1b2674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2670) {
            ctx->pc = 0x1B26B8u;
            goto label_1b26b8;
        }
    }
    ctx->pc = 0x1B2678u;
label_1b2678:
    // 0x1b2678: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b2678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b267c:
    // 0x1b267c: 0x0  nop
    ctx->pc = 0x1b267cu;
    // NOP
label_1b2680:
    // 0x1b2680: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_1b2684:
    if (ctx->pc == 0x1B2684u) {
        ctx->pc = 0x1B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2680u;
        // 0x1b2684: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2688u;
        goto label_1b2688;
    }
    ctx->pc = 0x1B2680u;
    {
        const bool branch_taken_0x1b2680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2680) {
            ctx->pc = 0x1B2684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2680u;
            // 0x1b2684: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B26B0u;
            goto label_1b26b0;
        }
    }
    ctx->pc = 0x1B2688u;
label_1b2688:
    // 0x1b2688: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1b2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1b268c:
    // 0x1b268c: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
label_1b2690:
    if (ctx->pc == 0x1B2690u) {
        ctx->pc = 0x1B2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B268Cu;
        // 0x1b2690: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2694u;
        goto label_1b2694;
    }
    ctx->pc = 0x1B268Cu;
    {
        const bool branch_taken_0x1b268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b268c) {
            ctx->pc = 0x1B2690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B268Cu;
            // 0x1b2690: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B26B0u;
            goto label_1b26b0;
        }
    }
    ctx->pc = 0x1B2694u;
label_1b2694:
    // 0x1b2694: 0x8ca30258  lw          $v1, 0x258($a1)
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1b2698:
    // 0x1b2698: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1b269c:
    // 0x1b269c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1b269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1b26a0:
    // 0x1b26a0: 0x40f809  jalr        $v0
label_1b26a4:
    if (ctx->pc == 0x1B26A4u) {
        ctx->pc = 0x1B26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A0u;
        // 0x1b26a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26A8u;
        goto label_1b26a8;
    }
    ctx->pc = 0x1B26A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B26A8u);
        ctx->pc = 0x1B26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A0u;
        // 0x1b26a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26A0u, 0x1B26A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B26A8u;
label_1b26a8:
    // 0x1b26a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b26ac:
    if (ctx->pc == 0x1B26ACu) {
        ctx->pc = 0x1B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A8u;
        // 0x1b26ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26B0u;
        goto label_1b26b0;
    }
    ctx->pc = 0x1B26A8u;
    {
        const bool branch_taken_0x1b26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A8u;
        // 0x1b26ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26a8) {
            ctx->pc = 0x1B26C0u;
            goto label_1b26c0;
        }
    }
    ctx->pc = 0x1B26B0u;
label_1b26b0:
    // 0x1b26b0: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_1b26b4:
    if (ctx->pc == 0x1B26B4u) {
        ctx->pc = 0x1B26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26B0u;
        // 0x1b26b4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26B8u;
        goto label_1b26b8;
    }
    ctx->pc = 0x1B26B0u;
    {
        const bool branch_taken_0x1b26b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b26b0) {
            ctx->pc = 0x1B26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B26B0u;
            // 0x1b26b4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2680;
        }
    }
    ctx->pc = 0x1B26B8u;
label_1b26b8:
    // 0x1b26b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b26b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b26bc:
    // 0x1b26bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b26bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b26c0:
    // 0x1b26c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b26c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b26c4:
    // 0x1b26c4: 0x3e00008  jr          $ra
label_1b26c8:
    if (ctx->pc == 0x1B26C8u) {
        ctx->pc = 0x1B26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C4u;
        // 0x1b26c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26CCu;
        goto label_1b26cc;
    }
    ctx->pc = 0x1B26C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C4u;
        // 0x1b26c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B26CCu;
label_1b26cc:
    // 0x1b26cc: 0x0  nop
    ctx->pc = 0x1b26ccu;
    // NOP
    ctx->pc = 0x1b26d0u;
}
