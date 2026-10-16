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

// Function: sub_00281620
// Address: 0x281620 - 0x281730
void sub_00281620_0x281620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281620_0x281620");
#endif

    ctx->pc = 0x281620u;

    // 0x281620: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x281624: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x281624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281628: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x281628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28162c: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x28162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x281630: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x281630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x281634: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x281634u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x281638: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x281638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x28163c: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x28163cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x281640: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x281640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x281644: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x281644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x281648: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x281648u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28164c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28164Cu;
    {
        const bool branch_taken_0x28164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28164Cu;
        // 0x281650: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28164c) {
            ctx->pc = 0x281698u;
            goto label_281698;
        }
    }
    ctx->pc = 0x281654u;
    // 0x281654: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x281654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x281658: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x281658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
    // 0x28165c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281660: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281664: 0x800008  jr          $a0
    ctx->pc = 0x281664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281670u: goto label_281670;
            case 0x281678u: goto label_281678;
            case 0x281680u: goto label_281680;
            case 0x281688u: goto label_281688;
            case 0x281690u: goto label_281690;
            case 0x281698u: goto label_281698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281664u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28166Cu;
    // 0x28166c: 0x0  nop
    ctx->pc = 0x28166cu;
    // NOP
label_281670:
    // 0x281670: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x281670u;
    {
        const bool branch_taken_0x281670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281670u;
        // 0x281674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281670) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281678u;
label_281678:
    // 0x281678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281678u;
    {
        const bool branch_taken_0x281678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281678u;
        // 0x28167c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281678) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281680u;
label_281680:
    // 0x281680: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281680u;
    {
        const bool branch_taken_0x281680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281680u;
        // 0x281684: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281680) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281688u;
label_281688:
    // 0x281688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x281688u;
    {
        const bool branch_taken_0x281688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281688u;
        // 0x28168c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281688) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281690u;
label_281690:
    // 0x281690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281690u;
    {
        const bool branch_taken_0x281690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281690u;
        // 0x281694: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281690) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281698u;
label_281698:
    // 0x281698: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x281698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28169c:
    // 0x28169c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2816a0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2816a4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x2816a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2816a8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2816A8u;
    {
        const bool branch_taken_0x2816a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816A8u;
        // 0x2816ac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816a8) {
            ctx->pc = 0x2816F0u;
            goto label_2816f0;
        }
    }
    ctx->pc = 0x2816B0u;
    // 0x2816b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2816b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2816b4: 0x2442cd00  addiu       $v0, $v0, -0x3300
    ctx->pc = 0x2816b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x2816b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2816b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2816bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2816bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2816c0: 0x800008  jr          $a0
    ctx->pc = 0x2816C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2816C8u: goto label_2816c8;
            case 0x2816D0u: goto label_2816d0;
            case 0x2816D8u: goto label_2816d8;
            case 0x2816E0u: goto label_2816e0;
            case 0x2816E8u: goto label_2816e8;
            case 0x2816F0u: goto label_2816f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2816C8u;
label_2816c8:
    // 0x2816c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2816C8u;
    {
        const bool branch_taken_0x2816c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816C8u;
        // 0x2816cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816c8) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2816D0u;
label_2816d0:
    // 0x2816d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2816D0u;
    {
        const bool branch_taken_0x2816d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D0u;
        // 0x2816d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d0) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2816D8u;
label_2816d8:
    // 0x2816d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2816D8u;
    {
        const bool branch_taken_0x2816d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D8u;
        // 0x2816dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d8) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2816E0u;
label_2816e0:
    // 0x2816e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2816E0u;
    {
        const bool branch_taken_0x2816e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e0) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2816E8u;
label_2816e8:
    // 0x2816e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2816E8u;
    {
        const bool branch_taken_0x2816e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E8u;
        // 0x2816ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e8) {
            ctx->pc = 0x2816F4u;
            goto label_2816f4;
        }
    }
    ctx->pc = 0x2816F0u;
label_2816f0:
    // 0x2816f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2816f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2816f4:
    // 0x2816f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2816f8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2816f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2816fc: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x2816fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x281700: 0x2484e6a0  addiu       $a0, $a0, -0x1960
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960800));
    // 0x281704: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x281704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x281708: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x281708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x28170c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x28170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x281710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x281710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281714: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x281714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x281718: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x281718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x28171c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28171cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281720: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x281720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x281724: 0x3e00008  jr          $ra
    ctx->pc = 0x281724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281724u;
        // 0x281728: 0xfca20028  sd          $v0, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28172Cu;
    // 0x28172c: 0x0  nop
    ctx->pc = 0x28172cu;
    // NOP
    ctx->pc = 0x281730u;
}
