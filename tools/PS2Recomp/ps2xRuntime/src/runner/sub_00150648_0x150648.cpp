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

// Function: sub_00150648
// Address: 0x150648 - 0x150790
void sub_00150648_0x150648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150648_0x150648");
#endif

    switch (ctx->pc) {
        case 0x150648u: goto label_150648;
        case 0x15064cu: goto label_15064c;
        case 0x150650u: goto label_150650;
        case 0x150654u: goto label_150654;
        case 0x150658u: goto label_150658;
        case 0x15065cu: goto label_15065c;
        case 0x150660u: goto label_150660;
        case 0x150664u: goto label_150664;
        case 0x150668u: goto label_150668;
        case 0x15066cu: goto label_15066c;
        case 0x150670u: goto label_150670;
        case 0x150674u: goto label_150674;
        case 0x150678u: goto label_150678;
        case 0x15067cu: goto label_15067c;
        case 0x150680u: goto label_150680;
        case 0x150684u: goto label_150684;
        case 0x150688u: goto label_150688;
        case 0x15068cu: goto label_15068c;
        case 0x150690u: goto label_150690;
        case 0x150694u: goto label_150694;
        case 0x150698u: goto label_150698;
        case 0x15069cu: goto label_15069c;
        case 0x1506a0u: goto label_1506a0;
        case 0x1506a4u: goto label_1506a4;
        case 0x1506a8u: goto label_1506a8;
        case 0x1506acu: goto label_1506ac;
        case 0x1506b0u: goto label_1506b0;
        case 0x1506b4u: goto label_1506b4;
        case 0x1506b8u: goto label_1506b8;
        case 0x1506bcu: goto label_1506bc;
        case 0x1506c0u: goto label_1506c0;
        case 0x1506c4u: goto label_1506c4;
        case 0x1506c8u: goto label_1506c8;
        case 0x1506ccu: goto label_1506cc;
        case 0x1506d0u: goto label_1506d0;
        case 0x1506d4u: goto label_1506d4;
        case 0x1506d8u: goto label_1506d8;
        case 0x1506dcu: goto label_1506dc;
        case 0x1506e0u: goto label_1506e0;
        case 0x1506e4u: goto label_1506e4;
        case 0x1506e8u: goto label_1506e8;
        case 0x1506ecu: goto label_1506ec;
        case 0x1506f0u: goto label_1506f0;
        case 0x1506f4u: goto label_1506f4;
        case 0x1506f8u: goto label_1506f8;
        case 0x1506fcu: goto label_1506fc;
        case 0x150700u: goto label_150700;
        case 0x150704u: goto label_150704;
        case 0x150708u: goto label_150708;
        case 0x15070cu: goto label_15070c;
        case 0x150710u: goto label_150710;
        case 0x150714u: goto label_150714;
        case 0x150718u: goto label_150718;
        case 0x15071cu: goto label_15071c;
        case 0x150720u: goto label_150720;
        case 0x150724u: goto label_150724;
        case 0x150728u: goto label_150728;
        case 0x15072cu: goto label_15072c;
        case 0x150730u: goto label_150730;
        case 0x150734u: goto label_150734;
        case 0x150738u: goto label_150738;
        case 0x15073cu: goto label_15073c;
        case 0x150740u: goto label_150740;
        case 0x150744u: goto label_150744;
        case 0x150748u: goto label_150748;
        case 0x15074cu: goto label_15074c;
        case 0x150750u: goto label_150750;
        case 0x150754u: goto label_150754;
        case 0x150758u: goto label_150758;
        case 0x15075cu: goto label_15075c;
        case 0x150760u: goto label_150760;
        case 0x150764u: goto label_150764;
        case 0x150768u: goto label_150768;
        case 0x15076cu: goto label_15076c;
        case 0x150770u: goto label_150770;
        case 0x150774u: goto label_150774;
        case 0x150778u: goto label_150778;
        case 0x15077cu: goto label_15077c;
        case 0x150780u: goto label_150780;
        case 0x150784u: goto label_150784;
        case 0x150788u: goto label_150788;
        case 0x15078cu: goto label_15078c;
        default: break;
    }

    ctx->pc = 0x150648u;

label_150648:
    // 0x150648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15064c:
    // 0x15064c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_150650:
    // 0x150650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_150654:
    // 0x150654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x150654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150658:
    // 0x150658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15065c:
    // 0x15065c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_150660:
    if (ctx->pc == 0x150660u) {
        ctx->pc = 0x150660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15065Cu;
        // 0x150660: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150664u;
        goto label_150664;
    }
    ctx->pc = 0x15065Cu;
    {
        const bool branch_taken_0x15065c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15065Cu;
        // 0x150660: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15065c) {
            ctx->pc = 0x150720u;
            goto label_150720;
        }
    }
    ctx->pc = 0x150664u;
label_150664:
    // 0x150664: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_150668:
    // 0x150668: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x150668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_15066c:
    // 0x15066c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_150670:
    // 0x150670: 0x40f809  jalr        $v0
label_150674:
    if (ctx->pc == 0x150674u) {
        ctx->pc = 0x150674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150670u;
        // 0x150674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150678u;
        goto label_150678;
    }
    ctx->pc = 0x150670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150678u);
        ctx->pc = 0x150674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150670u;
        // 0x150674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150670u, 0x150678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150678u;
label_150678:
    // 0x150678: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_15067c:
    if (ctx->pc == 0x15067Cu) {
        ctx->pc = 0x15067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150678u;
        // 0x15067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150680u;
        goto label_150680;
    }
    ctx->pc = 0x150678u;
    {
        const bool branch_taken_0x150678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150678u;
        // 0x15067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150678) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x150680u;
label_150680:
    // 0x150680: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_150684:
    // 0x150684: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_150688:
    // 0x150688: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x150688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_15068c:
    // 0x15068c: 0x40f809  jalr        $v0
label_150690:
    if (ctx->pc == 0x150690u) {
        ctx->pc = 0x150690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15068Cu;
        // 0x150690: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150694u;
        goto label_150694;
    }
    ctx->pc = 0x15068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150694u);
        ctx->pc = 0x150690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15068Cu;
        // 0x150690: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15068Cu, 0x150694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150694u;
label_150694:
    // 0x150694: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_150698:
    if (ctx->pc == 0x150698u) {
        ctx->pc = 0x150698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150694u;
        // 0x150698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15069Cu;
        goto label_15069c;
    }
    ctx->pc = 0x150694u;
    {
        const bool branch_taken_0x150694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150694u;
        // 0x150698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150694) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x15069Cu;
label_15069c:
    // 0x15069c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1506a0:
    // 0x1506a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1506a4:
    if (ctx->pc == 0x1506A4u) {
        ctx->pc = 0x1506A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506A0u;
        // 0x1506a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506A8u;
        goto label_1506a8;
    }
    ctx->pc = 0x1506A0u;
    {
        const bool branch_taken_0x1506a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1506A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506A0u;
        // 0x1506a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506a0) {
            ctx->pc = 0x1506BCu;
            goto label_1506bc;
        }
    }
    ctx->pc = 0x1506A8u;
label_1506a8:
    // 0x1506a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1506ac:
    // 0x1506ac: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1506b0:
    if (ctx->pc == 0x1506B0u) {
        ctx->pc = 0x1506B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506ACu;
        // 0x1506b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506B4u;
        goto label_1506b4;
    }
    ctx->pc = 0x1506ACu;
    {
        const bool branch_taken_0x1506ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1506B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506ACu;
        // 0x1506b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506ac) {
            ctx->pc = 0x1506F4u;
            goto label_1506f4;
        }
    }
    ctx->pc = 0x1506B4u;
label_1506b4:
    // 0x1506b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1506b8:
    if (ctx->pc == 0x1506B8u) {
        ctx->pc = 0x1506BCu;
        goto label_1506bc;
    }
    ctx->pc = 0x1506B4u;
    {
        const bool branch_taken_0x1506b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506b4) {
            ctx->pc = 0x1506ECu;
            goto label_1506ec;
        }
    }
    ctx->pc = 0x1506BCu;
label_1506bc:
    // 0x1506bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1506c0:
    if (ctx->pc == 0x1506C0u) {
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506BCu;
        // 0x1506c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506C4u;
        goto label_1506c4;
    }
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506BCu;
        // 0x1506c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x1506D8u;
            goto label_1506d8;
        }
    }
    ctx->pc = 0x1506C4u;
label_1506c4:
    // 0x1506c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1506c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1506c8:
    // 0x1506c8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1506cc:
    if (ctx->pc == 0x1506CCu) {
        ctx->pc = 0x1506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C8u;
        // 0x1506cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506D0u;
        goto label_1506d0;
    }
    ctx->pc = 0x1506C8u;
    {
        const bool branch_taken_0x1506c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C8u;
        // 0x1506cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506c8) {
            ctx->pc = 0x1506F4u;
            goto label_1506f4;
        }
    }
    ctx->pc = 0x1506D0u;
label_1506d0:
    // 0x1506d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1506d4:
    if (ctx->pc == 0x1506D4u) {
        ctx->pc = 0x1506D8u;
        goto label_1506d8;
    }
    ctx->pc = 0x1506D0u;
    {
        const bool branch_taken_0x1506d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506d0) {
            ctx->pc = 0x1506ECu;
            goto label_1506ec;
        }
    }
    ctx->pc = 0x1506D8u;
label_1506d8:
    // 0x1506d8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_1506dc:
    if (ctx->pc == 0x1506DCu) {
        ctx->pc = 0x1506DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506D8u;
        // 0x1506dc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506E0u;
        goto label_1506e0;
    }
    ctx->pc = 0x1506D8u;
    {
        const bool branch_taken_0x1506d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1506DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506D8u;
        // 0x1506dc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506d8) {
            ctx->pc = 0x150720u;
            goto label_150720;
        }
    }
    ctx->pc = 0x1506E0u;
label_1506e0:
    // 0x1506e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1506e4:
    if (ctx->pc == 0x1506E4u) {
        ctx->pc = 0x1506E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506E0u;
        // 0x1506e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506E8u;
        goto label_1506e8;
    }
    ctx->pc = 0x1506E0u;
    {
        const bool branch_taken_0x1506e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1506e0) {
            ctx->pc = 0x1506E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1506E0u;
            // 0x1506e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1506F8u;
            goto label_1506f8;
        }
    }
    ctx->pc = 0x1506E8u;
label_1506e8:
    // 0x1506e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1506ec:
    // 0x1506ec: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_1506f0:
    if (ctx->pc == 0x1506F0u) {
        ctx->pc = 0x1506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506ECu;
        // 0x1506f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506F4u;
        goto label_1506f4;
    }
    ctx->pc = 0x1506ECu;
    {
        const bool branch_taken_0x1506ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506ECu;
        // 0x1506f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506ec) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x1506F4u;
label_1506f4:
    // 0x1506f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1506f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1506f8:
    // 0x1506f8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1506fc:
    // 0x1506fc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_150700:
    // 0x150700: 0x40f809  jalr        $v0
label_150704:
    if (ctx->pc == 0x150704u) {
        ctx->pc = 0x150704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150700u;
        // 0x150704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150708u;
        goto label_150708;
    }
    ctx->pc = 0x150700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150708u);
        ctx->pc = 0x150704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150700u;
        // 0x150704: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150700u, 0x150708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150708u;
label_150708:
    // 0x150708: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_15070c:
    if (ctx->pc == 0x15070Cu) {
        ctx->pc = 0x15070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150708u;
        // 0x15070c: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150710u;
        goto label_150710;
    }
    ctx->pc = 0x150708u;
    {
        const bool branch_taken_0x150708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150708) {
            ctx->pc = 0x15070Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150708u;
            // 0x15070c: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150728u;
            goto label_150728;
        }
    }
    ctx->pc = 0x150710u;
label_150710:
    // 0x150710: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x150710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_150714:
    // 0x150714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_150718:
    // 0x150718: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_15071c:
    if (ctx->pc == 0x15071Cu) {
        ctx->pc = 0x15071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150718u;
        // 0x15071c: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150720u;
        goto label_150720;
    }
    ctx->pc = 0x150718u;
    {
        const bool branch_taken_0x150718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150718) {
            ctx->pc = 0x15071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150718u;
            // 0x15071c: 0x8e2200d0  lw          $v0, 0xD0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150728u;
            goto label_150728;
        }
    }
    ctx->pc = 0x150720u;
label_150720:
    // 0x150720: 0x10000015  b           . + 4 + (0x15 << 2)
label_150724:
    if (ctx->pc == 0x150724u) {
        ctx->pc = 0x150724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150720u;
        // 0x150724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150728u;
        goto label_150728;
    }
    ctx->pc = 0x150720u;
    {
        const bool branch_taken_0x150720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150720u;
        // 0x150724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150720) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x150728u;
label_150728:
    // 0x150728: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15072c:
    if (ctx->pc == 0x15072Cu) {
        ctx->pc = 0x15072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150728u;
        // 0x15072c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150730u;
        goto label_150730;
    }
    ctx->pc = 0x150728u;
    {
        const bool branch_taken_0x150728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150728u;
        // 0x15072c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150728) {
            ctx->pc = 0x150750u;
            goto label_150750;
        }
    }
    ctx->pc = 0x150730u;
label_150730:
    // 0x150730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150734:
    // 0x150734: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x150734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_150738:
    // 0x150738: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15073c:
    // 0x15073c: 0x1050fff8  beq         $v0, $s0, . + 4 + (-0x8 << 2)
label_150740:
    if (ctx->pc == 0x150740u) {
        ctx->pc = 0x150740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15073Cu;
        // 0x150740: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150744u;
        goto label_150744;
    }
    ctx->pc = 0x15073Cu;
    {
        const bool branch_taken_0x15073c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x150740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15073Cu;
        // 0x150740: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15073c) {
            ctx->pc = 0x150720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150720;
        }
    }
    ctx->pc = 0x150744u;
label_150744:
    // 0x150744: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x150744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_150748:
    // 0x150748: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_15074c:
    if (ctx->pc == 0x15074Cu) {
        ctx->pc = 0x15074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150748u;
        // 0x15074c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150750u;
        goto label_150750;
    }
    ctx->pc = 0x150748u;
    {
        const bool branch_taken_0x150748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150748u;
        // 0x15074c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150748) {
            ctx->pc = 0x150738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150738;
        }
    }
    ctx->pc = 0x150750u;
label_150750:
    // 0x150750: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x150750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_150754:
    // 0x150754: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x150754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_150758:
    // 0x150758: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x150758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_15075c:
    // 0x15075c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x15075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_150760:
    // 0x150760: 0x60f809  jalr        $v1
label_150764:
    if (ctx->pc == 0x150764u) {
        ctx->pc = 0x150764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150760u;
        // 0x150764: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150768u;
        goto label_150768;
    }
    ctx->pc = 0x150760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x150768u);
        ctx->pc = 0x150764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150760u;
        // 0x150764: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150760u, 0x150768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150768u;
label_150768:
    // 0x150768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15076c:
    // 0x15076c: 0xc0541e4  jal         func_150790
label_150770:
    if (ctx->pc == 0x150770u) {
        ctx->pc = 0x150770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15076Cu;
        // 0x150770: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150774u;
        goto label_150774;
    }
    ctx->pc = 0x15076Cu;
    SET_GPR_U32(ctx, 31, 0x150774u);
    ctx->pc = 0x150770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15076Cu;
    // 0x150770: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150790u, 0x15076Cu, 0x150774u)) {
        return;
    }
    ctx->pc = 0x150774u;
label_150774:
    // 0x150774: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x150774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_150778:
    // 0x150778: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15077c:
    // 0x15077c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15077cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150780:
    // 0x150780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_150784:
    // 0x150784: 0x3e00008  jr          $ra
label_150788:
    if (ctx->pc == 0x150788u) {
        ctx->pc = 0x150788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150784u;
        // 0x150788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15078Cu;
        goto label_15078c;
    }
    ctx->pc = 0x150784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150784u;
        // 0x150788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15078Cu;
label_15078c:
    // 0x15078c: 0x0  nop
    ctx->pc = 0x15078cu;
    // NOP
    ctx->pc = 0x150790u;
}
