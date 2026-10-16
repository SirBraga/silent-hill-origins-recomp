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

// Function: sub_001F9618
// Address: 0x1f9618 - 0x1f96e0
void sub_001F9618_0x1f9618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9618_0x1f9618");
#endif

    switch (ctx->pc) {
        case 0x1f9618u: goto label_1f9618;
        case 0x1f961cu: goto label_1f961c;
        case 0x1f9620u: goto label_1f9620;
        case 0x1f9624u: goto label_1f9624;
        case 0x1f9628u: goto label_1f9628;
        case 0x1f962cu: goto label_1f962c;
        case 0x1f9630u: goto label_1f9630;
        case 0x1f9634u: goto label_1f9634;
        case 0x1f9638u: goto label_1f9638;
        case 0x1f963cu: goto label_1f963c;
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9644u: goto label_1f9644;
        case 0x1f9648u: goto label_1f9648;
        case 0x1f964cu: goto label_1f964c;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f9654u: goto label_1f9654;
        case 0x1f9658u: goto label_1f9658;
        case 0x1f965cu: goto label_1f965c;
        case 0x1f9660u: goto label_1f9660;
        case 0x1f9664u: goto label_1f9664;
        case 0x1f9668u: goto label_1f9668;
        case 0x1f966cu: goto label_1f966c;
        case 0x1f9670u: goto label_1f9670;
        case 0x1f9674u: goto label_1f9674;
        case 0x1f9678u: goto label_1f9678;
        case 0x1f967cu: goto label_1f967c;
        case 0x1f9680u: goto label_1f9680;
        case 0x1f9684u: goto label_1f9684;
        case 0x1f9688u: goto label_1f9688;
        case 0x1f968cu: goto label_1f968c;
        case 0x1f9690u: goto label_1f9690;
        case 0x1f9694u: goto label_1f9694;
        case 0x1f9698u: goto label_1f9698;
        case 0x1f969cu: goto label_1f969c;
        case 0x1f96a0u: goto label_1f96a0;
        case 0x1f96a4u: goto label_1f96a4;
        case 0x1f96a8u: goto label_1f96a8;
        case 0x1f96acu: goto label_1f96ac;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96b8u: goto label_1f96b8;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        default: break;
    }

    ctx->pc = 0x1f9618u;

label_1f9618:
    // 0x1f9618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f961c:
    // 0x1f961c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f9620:
    // 0x1f9620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9624:
    // 0x1f9624: 0xc07e144  jal         func_1F8510
label_1f9628:
    if (ctx->pc == 0x1F9628u) {
        ctx->pc = 0x1F9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9624u;
        // 0x1f9628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F962Cu;
        goto label_1f962c;
    }
    ctx->pc = 0x1F9624u;
    SET_GPR_U32(ctx, 31, 0x1F962Cu);
    ctx->pc = 0x1F9628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9624u;
    // 0x1f9628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F9624u, 0x1F962Cu)) {
        return;
    }
    ctx->pc = 0x1F962Cu;
label_1f962c:
    // 0x1f962c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1f962cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1f9630:
    // 0x1f9630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9634:
    // 0x1f9634: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x1f9634u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_1f9638:
    // 0x1f9638: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1f963c:
    if (ctx->pc == 0x1F963Cu) {
        ctx->pc = 0x1F963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9638u;
        // 0x1f963c: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9640u;
        goto label_1f9640;
    }
    ctx->pc = 0x1F9638u;
    {
        const bool branch_taken_0x1f9638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9638u;
        // 0x1f963c: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9638) {
            ctx->pc = 0x1F96CCu;
            goto label_1f96cc;
        }
    }
    ctx->pc = 0x1F9640u;
label_1f9640:
    // 0x1f9640: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9644:
    // 0x1f9644: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_1f9648:
    if (ctx->pc == 0x1F9648u) {
        ctx->pc = 0x1F964Cu;
        goto label_1f964c;
    }
    ctx->pc = 0x1F9644u;
    {
        const bool branch_taken_0x1f9644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f9644) {
            ctx->pc = 0x1F9658u;
            goto label_1f9658;
        }
    }
    ctx->pc = 0x1F964Cu;
label_1f964c:
    // 0x1f964c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1f964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1f9650:
    // 0x1f9650: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1f9654:
    if (ctx->pc == 0x1F9654u) {
        ctx->pc = 0x1F9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9650u;
        // 0x1f9654: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9658u;
        goto label_1f9658;
    }
    ctx->pc = 0x1F9650u;
    {
        const bool branch_taken_0x1f9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9650u;
        // 0x1f9654: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9650) {
            ctx->pc = 0x1F96D0u;
            goto label_1f96d0;
        }
    }
    ctx->pc = 0x1F9658u;
label_1f9658:
    // 0x1f9658: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f965c:
    if (ctx->pc == 0x1F965Cu) {
        ctx->pc = 0x1F9660u;
        goto label_1f9660;
    }
    ctx->pc = 0x1F9658u;
    {
        const bool branch_taken_0x1f9658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9658) {
            ctx->pc = 0x1F968Cu;
            goto label_1f968c;
        }
    }
    ctx->pc = 0x1F9660u;
label_1f9660:
    // 0x1f9660: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_1f9664:
    if (ctx->pc == 0x1F9664u) {
        ctx->pc = 0x1F9668u;
        goto label_1f9668;
    }
    ctx->pc = 0x1F9660u;
    {
        const bool branch_taken_0x1f9660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1f9660) {
            ctx->pc = 0x1F9684u;
            goto label_1f9684;
        }
    }
    ctx->pc = 0x1F9668u;
label_1f9668:
    // 0x1f9668: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f966c:
    if (ctx->pc == 0x1F966Cu) {
        ctx->pc = 0x1F966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9668u;
        // 0x1f966c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9670u;
        goto label_1f9670;
    }
    ctx->pc = 0x1F9668u;
    {
        const bool branch_taken_0x1f9668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9668u;
        // 0x1f966c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9668) {
            ctx->pc = 0x1F9674u;
            goto label_1f9674;
        }
    }
    ctx->pc = 0x1F9670u;
label_1f9670:
    // 0x1f9670: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f9670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f9674:
    // 0x1f9674: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f9678:
    if (ctx->pc == 0x1F9678u) {
        ctx->pc = 0x1F9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9674u;
        // 0x1f9678: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F967Cu;
        goto label_1f967c;
    }
    ctx->pc = 0x1F9674u;
    {
        const bool branch_taken_0x1f9674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9674u;
        // 0x1f9678: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9674) {
            ctx->pc = 0x1F968Cu;
            goto label_1f968c;
        }
    }
    ctx->pc = 0x1F967Cu;
label_1f967c:
    // 0x1f967c: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
label_1f9680:
    if (ctx->pc == 0x1F9680u) {
        ctx->pc = 0x1F9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F967Cu;
        // 0x1f9680: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9684u;
        goto label_1f9684;
    }
    ctx->pc = 0x1F967Cu;
    {
        const bool branch_taken_0x1f967c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F967Cu;
        // 0x1f9680: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f967c) {
            ctx->pc = 0x1F9670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9670;
        }
    }
    ctx->pc = 0x1F9684u;
label_1f9684:
    // 0x1f9684: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_1f9688:
    if (ctx->pc == 0x1F9688u) {
        ctx->pc = 0x1F9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9684u;
        // 0x1f9688: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F968Cu;
        goto label_1f968c;
    }
    ctx->pc = 0x1F9684u;
    {
        const bool branch_taken_0x1f9684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9684) {
            ctx->pc = 0x1F9688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9684u;
            // 0x1f9688: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9694u;
            goto label_1f9694;
        }
    }
    ctx->pc = 0x1F968Cu;
label_1f968c:
    // 0x1f968c: 0xc07e4fc  jal         func_1F93F0
label_1f9690:
    if (ctx->pc == 0x1F9690u) {
        ctx->pc = 0x1F9694u;
        goto label_1f9694;
    }
    ctx->pc = 0x1F968Cu;
    SET_GPR_U32(ctx, 31, 0x1F9694u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F968Cu, 0x1F9694u)) {
        return;
    }
    ctx->pc = 0x1F9694u;
label_1f9694:
    // 0x1f9694: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f9694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9698:
    // 0x1f9698: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f969c:
    if (ctx->pc == 0x1F969Cu) {
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9698u;
        // 0x1f969c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96A0u;
        goto label_1f96a0;
    }
    ctx->pc = 0x1F9698u;
    {
        const bool branch_taken_0x1f9698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9698u;
        // 0x1f969c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9698) {
            ctx->pc = 0x1F96ACu;
            goto label_1f96ac;
        }
    }
    ctx->pc = 0x1F96A0u;
label_1f96a0:
    // 0x1f96a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f96a4:
    // 0x1f96a4: 0x60f809  jalr        $v1
label_1f96a8:
    if (ctx->pc == 0x1F96A8u) {
        ctx->pc = 0x1F96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96A4u;
        // 0x1f96a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96ACu;
        goto label_1f96ac;
    }
    ctx->pc = 0x1F96A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F96ACu);
        ctx->pc = 0x1F96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96A4u;
        // 0x1f96a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F96A4u, 0x1F96ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F96ACu;
label_1f96ac:
    // 0x1f96ac: 0xc07edd0  jal         func_1FB740
label_1f96b0:
    if (ctx->pc == 0x1F96B0u) {
        ctx->pc = 0x1F96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96ACu;
        // 0x1f96b0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96B4u;
        goto label_1f96b4;
    }
    ctx->pc = 0x1F96ACu;
    SET_GPR_U32(ctx, 31, 0x1F96B4u);
    ctx->pc = 0x1F96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96ACu;
    // 0x1f96b0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB740u, 0x1F96ACu, 0x1F96B4u)) {
        return;
    }
    ctx->pc = 0x1F96B4u;
label_1f96b4:
    // 0x1f96b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f96b8:
    if (ctx->pc == 0x1F96B8u) {
        ctx->pc = 0x1F96BCu;
        goto label_1f96bc;
    }
    ctx->pc = 0x1F96B4u;
    {
        const bool branch_taken_0x1f96b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f96b4) {
            ctx->pc = 0x1F96C4u;
            goto label_1f96c4;
        }
    }
    ctx->pc = 0x1F96BCu;
label_1f96bc:
    // 0x1f96bc: 0xc07e53e  jal         func_1F94F8
label_1f96c0:
    if (ctx->pc == 0x1F96C0u) {
        ctx->pc = 0x1F96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96BCu;
        // 0x1f96c0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96C4u;
        goto label_1f96c4;
    }
    ctx->pc = 0x1F96BCu;
    SET_GPR_U32(ctx, 31, 0x1F96C4u);
    ctx->pc = 0x1F96C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96BCu;
    // 0x1f96c0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94F8u, 0x1F96BCu, 0x1F96C4u)) {
        return;
    }
    ctx->pc = 0x1F96C4u;
label_1f96c4:
    // 0x1f96c4: 0xc07e53e  jal         func_1F94F8
label_1f96c8:
    if (ctx->pc == 0x1F96C8u) {
        ctx->pc = 0x1F96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96C4u;
        // 0x1f96c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96CCu;
        goto label_1f96cc;
    }
    ctx->pc = 0x1F96C4u;
    SET_GPR_U32(ctx, 31, 0x1F96CCu);
    ctx->pc = 0x1F96C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96C4u;
    // 0x1f96c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94F8u, 0x1F96C4u, 0x1F96CCu)) {
        return;
    }
    ctx->pc = 0x1F96CCu;
label_1f96cc:
    // 0x1f96cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f96ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f96d0:
    // 0x1f96d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f96d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f96d4:
    // 0x1f96d4: 0x3e00008  jr          $ra
label_1f96d8:
    if (ctx->pc == 0x1F96D8u) {
        ctx->pc = 0x1F96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96D4u;
        // 0x1f96d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96DCu;
        goto label_1f96dc;
    }
    ctx->pc = 0x1F96D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96D4u;
        // 0x1f96d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F96D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F96DCu;
label_1f96dc:
    // 0x1f96dc: 0x0  nop
    ctx->pc = 0x1f96dcu;
    // NOP
    ctx->pc = 0x1f96e0u;
}
