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

// Function: sub_002075F0
// Address: 0x2075f0 - 0x2076f8
void sub_002075F0_0x2075f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002075F0_0x2075f0");
#endif

    switch (ctx->pc) {
        case 0x2075f0u: goto label_2075f0;
        case 0x2075f4u: goto label_2075f4;
        case 0x2075f8u: goto label_2075f8;
        case 0x2075fcu: goto label_2075fc;
        case 0x207600u: goto label_207600;
        case 0x207604u: goto label_207604;
        case 0x207608u: goto label_207608;
        case 0x20760cu: goto label_20760c;
        case 0x207610u: goto label_207610;
        case 0x207614u: goto label_207614;
        case 0x207618u: goto label_207618;
        case 0x20761cu: goto label_20761c;
        case 0x207620u: goto label_207620;
        case 0x207624u: goto label_207624;
        case 0x207628u: goto label_207628;
        case 0x20762cu: goto label_20762c;
        case 0x207630u: goto label_207630;
        case 0x207634u: goto label_207634;
        case 0x207638u: goto label_207638;
        case 0x20763cu: goto label_20763c;
        case 0x207640u: goto label_207640;
        case 0x207644u: goto label_207644;
        case 0x207648u: goto label_207648;
        case 0x20764cu: goto label_20764c;
        case 0x207650u: goto label_207650;
        case 0x207654u: goto label_207654;
        case 0x207658u: goto label_207658;
        case 0x20765cu: goto label_20765c;
        case 0x207660u: goto label_207660;
        case 0x207664u: goto label_207664;
        case 0x207668u: goto label_207668;
        case 0x20766cu: goto label_20766c;
        case 0x207670u: goto label_207670;
        case 0x207674u: goto label_207674;
        case 0x207678u: goto label_207678;
        case 0x20767cu: goto label_20767c;
        case 0x207680u: goto label_207680;
        case 0x207684u: goto label_207684;
        case 0x207688u: goto label_207688;
        case 0x20768cu: goto label_20768c;
        case 0x207690u: goto label_207690;
        case 0x207694u: goto label_207694;
        case 0x207698u: goto label_207698;
        case 0x20769cu: goto label_20769c;
        case 0x2076a0u: goto label_2076a0;
        case 0x2076a4u: goto label_2076a4;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076acu: goto label_2076ac;
        case 0x2076b0u: goto label_2076b0;
        case 0x2076b4u: goto label_2076b4;
        case 0x2076b8u: goto label_2076b8;
        case 0x2076bcu: goto label_2076bc;
        case 0x2076c0u: goto label_2076c0;
        case 0x2076c4u: goto label_2076c4;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076ccu: goto label_2076cc;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076d4u: goto label_2076d4;
        case 0x2076d8u: goto label_2076d8;
        case 0x2076dcu: goto label_2076dc;
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        default: break;
    }

    ctx->pc = 0x2075f0u;

label_2075f0:
    // 0x2075f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2075f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2075f4:
    // 0x2075f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2075f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2075f8:
    // 0x2075f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2075f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2075fc:
    // 0x2075fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2075fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207600:
    // 0x207600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207604:
    // 0x207604: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_207608:
    // 0x207608: 0x2444ff38  addiu       $a0, $v0, -0xC8
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
label_20760c:
    // 0x20760c: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x20760cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_207610:
    // 0x207610: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_207614:
    if (ctx->pc == 0x207614u) {
        ctx->pc = 0x207614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207610u;
        // 0x207614: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207618u;
        goto label_207618;
    }
    ctx->pc = 0x207610u;
    {
        const bool branch_taken_0x207610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207610u;
        // 0x207614: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207610) {
            ctx->pc = 0x2076B0u;
            goto label_2076b0;
        }
    }
    ctx->pc = 0x207618u;
label_207618:
    // 0x207618: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20761c:
    // 0x20761c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20761cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_207620:
    // 0x207620: 0x24423f50  addiu       $v0, $v0, 0x3F50
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16208));
label_207624:
    // 0x207624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207628:
    // 0x207628: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20762c:
    // 0x20762c: 0x800008  jr          $a0
label_207630:
    if (ctx->pc == 0x207630u) {
        ctx->pc = 0x207634u;
        goto label_207634;
    }
    ctx->pc = 0x20762Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207634u: goto label_207634;
            case 0x20765Cu: goto label_20765c;
            case 0x207690u: goto label_207690;
            case 0x207698u: goto label_207698;
            case 0x2076B0u: goto label_2076b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20762Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x207634u;
label_207634:
    // 0x207634: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_207638:
    // 0x207638: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20763c:
    // 0x20763c: 0x40f809  jalr        $v0
label_207640:
    if (ctx->pc == 0x207640u) {
        ctx->pc = 0x207640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20763Cu;
        // 0x207640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207644u;
        goto label_207644;
    }
    ctx->pc = 0x20763Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207644u);
        ctx->pc = 0x207640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20763Cu;
        // 0x207640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20765Cu: goto label_20765c;
            case 0x207690u: goto label_207690;
            case 0x207698u: goto label_207698;
            case 0x2076B0u: goto label_2076b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20763Cu, 0x207644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207644u;
label_207644:
    // 0x207644: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_207648:
    // 0x207648: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20764c:
    // 0x20764c: 0x40f809  jalr        $v0
label_207650:
    if (ctx->pc == 0x207650u) {
        ctx->pc = 0x207650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20764Cu;
        // 0x207650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207654u;
        goto label_207654;
    }
    ctx->pc = 0x20764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207654u);
        ctx->pc = 0x207650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20764Cu;
        // 0x207650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207690u: goto label_207690;
            case 0x207698u: goto label_207698;
            case 0x2076B0u: goto label_2076b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20764Cu, 0x207654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207654u;
label_207654:
    // 0x207654: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_207658:
    // 0x207658: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x207658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_20765c:
    // 0x20765c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_207660:
    // 0x207660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207664:
    // 0x207664: 0x40f809  jalr        $v0
label_207668:
    if (ctx->pc == 0x207668u) {
        ctx->pc = 0x207668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207664u;
        // 0x207668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20766Cu;
        goto label_20766c;
    }
    ctx->pc = 0x207664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20766Cu);
        ctx->pc = 0x207668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207664u;
        // 0x207668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207664u, 0x20766Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20766Cu;
label_20766c:
    // 0x20766c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20766cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207670:
    // 0x207670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207674:
    // 0x207674: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
label_207678:
    if (ctx->pc == 0x207678u) {
        ctx->pc = 0x207678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207674u;
        // 0x207678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20767Cu;
        goto label_20767c;
    }
    ctx->pc = 0x207674u;
    {
        const bool branch_taken_0x207674 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x207678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207674u;
        // 0x207678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207674) {
            ctx->pc = 0x2076DCu;
            goto label_2076dc;
        }
    }
    ctx->pc = 0x20767Cu;
label_20767c:
    // 0x20767c: 0xc081c20  jal         func_207080
label_207680:
    if (ctx->pc == 0x207680u) {
        ctx->pc = 0x207680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20767Cu;
        // 0x207680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207684u;
        goto label_207684;
    }
    ctx->pc = 0x20767Cu;
    SET_GPR_U32(ctx, 31, 0x207684u);
    ctx->pc = 0x207680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20767Cu;
    // 0x207680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207080u, 0x20767Cu, 0x207684u)) {
        return;
    }
    ctx->pc = 0x207684u;
label_207684:
    // 0x207684: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_207688:
    // 0x207688: 0x10000013  b           . + 4 + (0x13 << 2)
label_20768c:
    if (ctx->pc == 0x20768Cu) {
        ctx->pc = 0x20768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207688u;
        // 0x20768c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207690u;
        goto label_207690;
    }
    ctx->pc = 0x207688u;
    {
        const bool branch_taken_0x207688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207688u;
        // 0x20768c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207688) {
            ctx->pc = 0x2076D8u;
            goto label_2076d8;
        }
    }
    ctx->pc = 0x207690u;
label_207690:
    // 0x207690: 0x10000011  b           . + 4 + (0x11 << 2)
label_207694:
    if (ctx->pc == 0x207694u) {
        ctx->pc = 0x207694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207690u;
        // 0x207694: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207698u;
        goto label_207698;
    }
    ctx->pc = 0x207690u;
    {
        const bool branch_taken_0x207690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207690u;
        // 0x207694: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207690) {
            ctx->pc = 0x2076D8u;
            goto label_2076d8;
        }
    }
    ctx->pc = 0x207698u;
label_207698:
    // 0x207698: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x207698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_20769c:
    // 0x20769c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2076a0:
    // 0x2076a0: 0x40f809  jalr        $v0
label_2076a4:
    if (ctx->pc == 0x2076A4u) {
        ctx->pc = 0x2076A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A0u;
        // 0x2076a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076A8u;
        goto label_2076a8;
    }
    ctx->pc = 0x2076A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2076A8u);
        ctx->pc = 0x2076A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A0u;
        // 0x2076a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076A0u, 0x2076A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2076A8u;
label_2076a8:
    // 0x2076a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2076ac:
    if (ctx->pc == 0x2076ACu) {
        ctx->pc = 0x2076ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A8u;
        // 0x2076ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076B0u;
        goto label_2076b0;
    }
    ctx->pc = 0x2076A8u;
    {
        const bool branch_taken_0x2076a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A8u;
        // 0x2076ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076a8) {
            ctx->pc = 0x2076D8u;
            goto label_2076d8;
        }
    }
    ctx->pc = 0x2076B0u;
label_2076b0:
    // 0x2076b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2076b4:
    // 0x2076b4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2076b8:
    // 0x2076b8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2076b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2076bc:
    // 0x2076bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2076c0:
    // 0x2076c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2076c4:
    // 0x2076c4: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x2076c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
label_2076c8:
    // 0x2076c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2076cc:
    // 0x2076cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2076d0:
    // 0x2076d0: 0x40f809  jalr        $v0
label_2076d4:
    if (ctx->pc == 0x2076D4u) {
        ctx->pc = 0x2076D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076D0u;
        // 0x2076d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076D8u;
        goto label_2076d8;
    }
    ctx->pc = 0x2076D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2076D8u);
        ctx->pc = 0x2076D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076D0u;
        // 0x2076d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076D0u, 0x2076D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2076D8u;
label_2076d8:
    // 0x2076d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2076d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2076dc:
    // 0x2076dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2076dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2076e0:
    // 0x2076e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2076e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2076e4:
    // 0x2076e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2076e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2076e8:
    // 0x2076e8: 0x3e00008  jr          $ra
label_2076ec:
    if (ctx->pc == 0x2076ECu) {
        ctx->pc = 0x2076ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076E8u;
        // 0x2076ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076F0u;
        goto label_2076f0;
    }
    ctx->pc = 0x2076E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2076ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076E8u;
        // 0x2076ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2076F0u;
label_2076f0:
    // 0x2076f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2076f4:
    // 0x2076f4: 0x0  nop
    ctx->pc = 0x2076f4u;
    // NOP
    ctx->pc = 0x2076f8u;
}
