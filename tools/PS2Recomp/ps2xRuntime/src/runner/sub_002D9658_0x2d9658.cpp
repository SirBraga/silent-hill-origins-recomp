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

// Function: sub_002D9658
// Address: 0x2d9658 - 0x2d9738
void sub_002D9658_0x2d9658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9658_0x2d9658");
#endif

    switch (ctx->pc) {
        case 0x2d9658u: goto label_2d9658;
        case 0x2d965cu: goto label_2d965c;
        case 0x2d9660u: goto label_2d9660;
        case 0x2d9664u: goto label_2d9664;
        case 0x2d9668u: goto label_2d9668;
        case 0x2d966cu: goto label_2d966c;
        case 0x2d9670u: goto label_2d9670;
        case 0x2d9674u: goto label_2d9674;
        case 0x2d9678u: goto label_2d9678;
        case 0x2d967cu: goto label_2d967c;
        case 0x2d9680u: goto label_2d9680;
        case 0x2d9684u: goto label_2d9684;
        case 0x2d9688u: goto label_2d9688;
        case 0x2d968cu: goto label_2d968c;
        case 0x2d9690u: goto label_2d9690;
        case 0x2d9694u: goto label_2d9694;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d969cu: goto label_2d969c;
        case 0x2d96a0u: goto label_2d96a0;
        case 0x2d96a4u: goto label_2d96a4;
        case 0x2d96a8u: goto label_2d96a8;
        case 0x2d96acu: goto label_2d96ac;
        case 0x2d96b0u: goto label_2d96b0;
        case 0x2d96b4u: goto label_2d96b4;
        case 0x2d96b8u: goto label_2d96b8;
        case 0x2d96bcu: goto label_2d96bc;
        case 0x2d96c0u: goto label_2d96c0;
        case 0x2d96c4u: goto label_2d96c4;
        case 0x2d96c8u: goto label_2d96c8;
        case 0x2d96ccu: goto label_2d96cc;
        case 0x2d96d0u: goto label_2d96d0;
        case 0x2d96d4u: goto label_2d96d4;
        case 0x2d96d8u: goto label_2d96d8;
        case 0x2d96dcu: goto label_2d96dc;
        case 0x2d96e0u: goto label_2d96e0;
        case 0x2d96e4u: goto label_2d96e4;
        case 0x2d96e8u: goto label_2d96e8;
        case 0x2d96ecu: goto label_2d96ec;
        case 0x2d96f0u: goto label_2d96f0;
        case 0x2d96f4u: goto label_2d96f4;
        case 0x2d96f8u: goto label_2d96f8;
        case 0x2d96fcu: goto label_2d96fc;
        case 0x2d9700u: goto label_2d9700;
        case 0x2d9704u: goto label_2d9704;
        case 0x2d9708u: goto label_2d9708;
        case 0x2d970cu: goto label_2d970c;
        case 0x2d9710u: goto label_2d9710;
        case 0x2d9714u: goto label_2d9714;
        case 0x2d9718u: goto label_2d9718;
        case 0x2d971cu: goto label_2d971c;
        case 0x2d9720u: goto label_2d9720;
        case 0x2d9724u: goto label_2d9724;
        case 0x2d9728u: goto label_2d9728;
        case 0x2d972cu: goto label_2d972c;
        case 0x2d9730u: goto label_2d9730;
        case 0x2d9734u: goto label_2d9734;
        default: break;
    }

    ctx->pc = 0x2d9658u;

label_2d9658:
    // 0x2d9658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d965c:
    // 0x2d965c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d9660:
    // 0x2d9660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d9664:
    // 0x2d9664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9668:
    // 0x2d9668: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d966c:
    // 0x2d966c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d9670:
    // 0x2d9670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9674:
    // 0x2d9674: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d9678:
    // 0x2d9678: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2d967c:
    if (ctx->pc == 0x2D967Cu) {
        ctx->pc = 0x2D967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9678u;
        // 0x2d967c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9680u;
        goto label_2d9680;
    }
    ctx->pc = 0x2D9678u;
    {
        const bool branch_taken_0x2d9678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9678u;
        // 0x2d967c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9678) {
            ctx->pc = 0x2D971Cu;
            goto label_2d971c;
        }
    }
    ctx->pc = 0x2D9680u;
label_2d9680:
    // 0x2d9680: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2d9680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9684:
    // 0x2d9684: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2d9688:
    if (ctx->pc == 0x2D9688u) {
        ctx->pc = 0x2D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9684u;
        // 0x2d9688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D968Cu;
        goto label_2d968c;
    }
    ctx->pc = 0x2D9684u;
    {
        const bool branch_taken_0x2d9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9684u;
        // 0x2d9688: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9684) {
            ctx->pc = 0x2D96B0u;
            goto label_2d96b0;
        }
    }
    ctx->pc = 0x2D968Cu;
label_2d968c:
    // 0x2d968c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d968cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9690:
    // 0x2d9690: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2d9690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d9694:
    // 0x2d9694: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d9694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d9698:
    // 0x2d9698: 0xc0acb5a  jal         func_2B2D68
label_2d969c:
    if (ctx->pc == 0x2D969Cu) {
        ctx->pc = 0x2D969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9698u;
        // 0x2d969c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96A0u;
        goto label_2d96a0;
    }
    ctx->pc = 0x2D9698u;
    SET_GPR_U32(ctx, 31, 0x2D96A0u);
    ctx->pc = 0x2D969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9698u;
    // 0x2d969c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2D68u, 0x2D9698u, 0x2D96A0u)) {
        return;
    }
    ctx->pc = 0x2D96A0u;
label_2d96a0:
    // 0x2d96a0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2d96a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2d96a4:
    // 0x2d96a4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d96a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d96a8:
    // 0x2d96a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2d96ac:
    if (ctx->pc == 0x2D96ACu) {
        ctx->pc = 0x2D96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96A8u;
        // 0x2d96ac: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96B0u;
        goto label_2d96b0;
    }
    ctx->pc = 0x2D96A8u;
    {
        const bool branch_taken_0x2d96a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D96ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96A8u;
        // 0x2d96ac: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96a8) {
            ctx->pc = 0x2D9690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9690;
        }
    }
    ctx->pc = 0x2D96B0u;
label_2d96b0:
    // 0x2d96b0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2d96b4:
    // 0x2d96b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d96b8:
    // 0x2d96b8: 0xc0ad2d0  jal         func_2B4B40
label_2d96bc:
    if (ctx->pc == 0x2D96BCu) {
        ctx->pc = 0x2D96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96B8u;
        // 0x2d96bc: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96C0u;
        goto label_2d96c0;
    }
    ctx->pc = 0x2D96B8u;
    SET_GPR_U32(ctx, 31, 0x2D96C0u);
    ctx->pc = 0x2D96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D96B8u;
    // 0x2d96bc: 0x24510fc8  addiu       $s1, $v0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D96B8u, 0x2D96C0u)) {
        return;
    }
    ctx->pc = 0x2D96C0u;
label_2d96c0:
    // 0x2d96c0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d96c4:
    // 0x2d96c4: 0x40f809  jalr        $v0
label_2d96c8:
    if (ctx->pc == 0x2D96C8u) {
        ctx->pc = 0x2D96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96C4u;
        // 0x2d96c8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96CCu;
        goto label_2d96cc;
    }
    ctx->pc = 0x2D96C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96CCu);
        ctx->pc = 0x2D96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96C4u;
        // 0x2d96c8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96C4u, 0x2D96CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D96CCu;
label_2d96cc:
    // 0x2d96cc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d96d0:
    // 0x2d96d0: 0x40f809  jalr        $v0
label_2d96d4:
    if (ctx->pc == 0x2D96D4u) {
        ctx->pc = 0x2D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D0u;
        // 0x2d96d4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96D8u;
        goto label_2d96d8;
    }
    ctx->pc = 0x2D96D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96D8u);
        ctx->pc = 0x2D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D0u;
        // 0x2d96d4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96D0u, 0x2D96D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D96D8u;
label_2d96d8:
    // 0x2d96d8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d96dc:
    // 0x2d96dc: 0x40f809  jalr        $v0
label_2d96e0:
    if (ctx->pc == 0x2D96E0u) {
        ctx->pc = 0x2D96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96DCu;
        // 0x2d96e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96E4u;
        goto label_2d96e4;
    }
    ctx->pc = 0x2D96DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96E4u);
        ctx->pc = 0x2D96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96DCu;
        // 0x2d96e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96DCu, 0x2D96E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D96E4u;
label_2d96e4:
    // 0x2d96e4: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d96e8:
    // 0x2d96e8: 0x40f809  jalr        $v0
label_2d96ec:
    if (ctx->pc == 0x2D96ECu) {
        ctx->pc = 0x2D96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96E8u;
        // 0x2d96ec: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96F0u;
        goto label_2d96f0;
    }
    ctx->pc = 0x2D96E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96F0u);
        ctx->pc = 0x2D96ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96E8u;
        // 0x2d96ec: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96E8u, 0x2D96F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D96F0u;
label_2d96f0:
    // 0x2d96f0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d96f4:
    // 0x2d96f4: 0x40f809  jalr        $v0
label_2d96f8:
    if (ctx->pc == 0x2D96F8u) {
        ctx->pc = 0x2D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96F4u;
        // 0x2d96f8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96FCu;
        goto label_2d96fc;
    }
    ctx->pc = 0x2D96F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D96FCu);
        ctx->pc = 0x2D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96F4u;
        // 0x2d96f8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96F4u, 0x2D96FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D96FCu;
label_2d96fc:
    // 0x2d96fc: 0xc0ad286  jal         func_2B4A18
label_2d9700:
    if (ctx->pc == 0x2D9700u) {
        ctx->pc = 0x2D9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96FCu;
        // 0x2d9700: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9704u;
        goto label_2d9704;
    }
    ctx->pc = 0x2D96FCu;
    SET_GPR_U32(ctx, 31, 0x2D9704u);
    ctx->pc = 0x2D9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D96FCu;
    // 0x2d9700: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4A18u, 0x2D96FCu, 0x2D9704u)) {
        return;
    }
    ctx->pc = 0x2D9704u;
label_2d9704:
    // 0x2d9704: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2d9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2d9708:
    // 0x2d9708: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2d970c:
    if (ctx->pc == 0x2D970Cu) {
        ctx->pc = 0x2D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9708u;
        // 0x2d970c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9710u;
        goto label_2d9710;
    }
    ctx->pc = 0x2D9708u;
    {
        const bool branch_taken_0x2d9708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9708u;
        // 0x2d970c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9708) {
            ctx->pc = 0x2D9720u;
            goto label_2d9720;
        }
    }
    ctx->pc = 0x2D9710u;
label_2d9710:
    // 0x2d9710: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2d9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2d9714:
    // 0x2d9714: 0x40f809  jalr        $v0
label_2d9718:
    if (ctx->pc == 0x2D9718u) {
        ctx->pc = 0x2D971Cu;
        goto label_2d971c;
    }
    ctx->pc = 0x2D9714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D971Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9714u, 0x2D971Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D971Cu;
label_2d971c:
    // 0x2d971c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d971cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9720:
    // 0x2d9720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9724:
    // 0x2d9724: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9728:
    // 0x2d9728: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d9728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d972c:
    // 0x2d972c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d972cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9730:
    // 0x2d9730: 0x3e00008  jr          $ra
label_2d9734:
    if (ctx->pc == 0x2D9734u) {
        ctx->pc = 0x2D9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9730u;
        // 0x2d9734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9738u;
        goto label_fallthrough_0x2d9730;
    }
    ctx->pc = 0x2D9730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9730u;
        // 0x2d9734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9730:
    ctx->pc = 0x2D9738u;
}
