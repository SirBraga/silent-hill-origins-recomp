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

// Function: sub_001895E0
// Address: 0x1895e0 - 0x189768
void sub_001895E0_0x1895e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001895E0_0x1895e0");
#endif

    switch (ctx->pc) {
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        case 0x189628u: goto label_189628;
        case 0x18962cu: goto label_18962c;
        case 0x189630u: goto label_189630;
        case 0x189634u: goto label_189634;
        case 0x189638u: goto label_189638;
        case 0x18963cu: goto label_18963c;
        case 0x189640u: goto label_189640;
        case 0x189644u: goto label_189644;
        case 0x189648u: goto label_189648;
        case 0x18964cu: goto label_18964c;
        case 0x189650u: goto label_189650;
        case 0x189654u: goto label_189654;
        case 0x189658u: goto label_189658;
        case 0x18965cu: goto label_18965c;
        case 0x189660u: goto label_189660;
        case 0x189664u: goto label_189664;
        case 0x189668u: goto label_189668;
        case 0x18966cu: goto label_18966c;
        case 0x189670u: goto label_189670;
        case 0x189674u: goto label_189674;
        case 0x189678u: goto label_189678;
        case 0x18967cu: goto label_18967c;
        case 0x189680u: goto label_189680;
        case 0x189684u: goto label_189684;
        case 0x189688u: goto label_189688;
        case 0x18968cu: goto label_18968c;
        case 0x189690u: goto label_189690;
        case 0x189694u: goto label_189694;
        case 0x189698u: goto label_189698;
        case 0x18969cu: goto label_18969c;
        case 0x1896a0u: goto label_1896a0;
        case 0x1896a4u: goto label_1896a4;
        case 0x1896a8u: goto label_1896a8;
        case 0x1896acu: goto label_1896ac;
        case 0x1896b0u: goto label_1896b0;
        case 0x1896b4u: goto label_1896b4;
        case 0x1896b8u: goto label_1896b8;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896c0u: goto label_1896c0;
        case 0x1896c4u: goto label_1896c4;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d0u: goto label_1896d0;
        case 0x1896d4u: goto label_1896d4;
        case 0x1896d8u: goto label_1896d8;
        case 0x1896dcu: goto label_1896dc;
        case 0x1896e0u: goto label_1896e0;
        case 0x1896e4u: goto label_1896e4;
        case 0x1896e8u: goto label_1896e8;
        case 0x1896ecu: goto label_1896ec;
        case 0x1896f0u: goto label_1896f0;
        case 0x1896f4u: goto label_1896f4;
        case 0x1896f8u: goto label_1896f8;
        case 0x1896fcu: goto label_1896fc;
        case 0x189700u: goto label_189700;
        case 0x189704u: goto label_189704;
        case 0x189708u: goto label_189708;
        case 0x18970cu: goto label_18970c;
        case 0x189710u: goto label_189710;
        case 0x189714u: goto label_189714;
        case 0x189718u: goto label_189718;
        case 0x18971cu: goto label_18971c;
        case 0x189720u: goto label_189720;
        case 0x189724u: goto label_189724;
        case 0x189728u: goto label_189728;
        case 0x18972cu: goto label_18972c;
        case 0x189730u: goto label_189730;
        case 0x189734u: goto label_189734;
        case 0x189738u: goto label_189738;
        case 0x18973cu: goto label_18973c;
        case 0x189740u: goto label_189740;
        case 0x189744u: goto label_189744;
        case 0x189748u: goto label_189748;
        case 0x18974cu: goto label_18974c;
        case 0x189750u: goto label_189750;
        case 0x189754u: goto label_189754;
        case 0x189758u: goto label_189758;
        case 0x18975cu: goto label_18975c;
        case 0x189760u: goto label_189760;
        case 0x189764u: goto label_189764;
        default: break;
    }

    ctx->pc = 0x1895e0u;

label_1895e0:
    // 0x1895e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1895e4:
    // 0x1895e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1895e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1895e8:
    // 0x1895e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1895e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1895ec:
    // 0x1895ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1895ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1895f0:
    // 0x1895f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1895f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1895f4:
    // 0x1895f4: 0xc04efda  jal         func_13BF68
label_1895f8:
    if (ctx->pc == 0x1895F8u) {
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895FCu;
        goto label_1895fc;
    }
    ctx->pc = 0x1895F4u;
    SET_GPR_U32(ctx, 31, 0x1895FCu);
    ctx->pc = 0x1895F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895F4u;
    // 0x1895f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1895F4u, 0x1895FCu)) {
        return;
    }
    ctx->pc = 0x1895FCu;
label_1895fc:
    // 0x1895fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_189600:
    // 0x189600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189604:
    // 0x189604: 0x8c46bd30  lw          $a2, -0x42D0($v0)
    ctx->pc = 0x189604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_189608:
    // 0x189608: 0xc07f1c0  jal         func_1FC700
label_18960c:
    if (ctx->pc == 0x18960Cu) {
        ctx->pc = 0x18960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189608u;
        // 0x18960c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189610u;
        goto label_189610;
    }
    ctx->pc = 0x189608u;
    SET_GPR_U32(ctx, 31, 0x189610u);
    ctx->pc = 0x18960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189608u;
    // 0x18960c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x189608u, 0x189610u)) {
        return;
    }
    ctx->pc = 0x189610u;
label_189610:
    // 0x189610: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189614:
    // 0x189614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_189618:
    // 0x189618: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_18961c:
    if (ctx->pc == 0x18961Cu) {
        ctx->pc = 0x18961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189618u;
        // 0x18961c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189620u;
        goto label_189620;
    }
    ctx->pc = 0x189618u;
    {
        const bool branch_taken_0x189618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189618u;
        // 0x18961c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189618) {
            ctx->pc = 0x189744u;
            goto label_189744;
        }
    }
    ctx->pc = 0x189620u;
label_189620:
    // 0x189620: 0x2450108c  addiu       $s0, $v0, 0x108C
    ctx->pc = 0x189620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_189624:
    // 0x189624: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189628:
    // 0x189628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18962c:
    // 0x18962c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_189630:
    // 0x189630: 0x50a20012  beql        $a1, $v0, . + 4 + (0x12 << 2)
label_189634:
    if (ctx->pc == 0x189634u) {
        ctx->pc = 0x189634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189630u;
        // 0x189634: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189638u;
        goto label_189638;
    }
    ctx->pc = 0x189630u;
    {
        const bool branch_taken_0x189630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x189630) {
            ctx->pc = 0x189634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189630u;
            // 0x189634: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18967Cu;
            goto label_18967c;
        }
    }
    ctx->pc = 0x189638u;
label_189638:
    // 0x189638: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_18963c:
    if (ctx->pc == 0x18963Cu) {
        ctx->pc = 0x18963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189638u;
        // 0x18963c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189640u;
        goto label_189640;
    }
    ctx->pc = 0x189638u;
    {
        const bool branch_taken_0x189638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189638u;
        // 0x18963c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189638) {
            ctx->pc = 0x189658u;
            goto label_189658;
        }
    }
    ctx->pc = 0x189640u;
label_189640:
    // 0x189640: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
label_189644:
    if (ctx->pc == 0x189644u) {
        ctx->pc = 0x189644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189640u;
        // 0x189644: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189648u;
        goto label_189648;
    }
    ctx->pc = 0x189640u;
    {
        const bool branch_taken_0x189640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x189644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189640u;
        // 0x189644: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189640) {
            ctx->pc = 0x18969Cu;
            goto label_18969c;
        }
    }
    ctx->pc = 0x189648u;
label_189648:
    // 0x189648: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
label_18964c:
    if (ctx->pc == 0x18964Cu) {
        ctx->pc = 0x18964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189648u;
        // 0x18964c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189650u;
        goto label_189650;
    }
    ctx->pc = 0x189648u;
    {
        const bool branch_taken_0x189648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189648u;
        // 0x18964c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189648) {
            ctx->pc = 0x1896DCu;
            goto label_1896dc;
        }
    }
    ctx->pc = 0x189650u;
label_189650:
    // 0x189650: 0x10000034  b           . + 4 + (0x34 << 2)
label_189654:
    if (ctx->pc == 0x189654u) {
        ctx->pc = 0x189654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189650u;
        // 0x189654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189658u;
        goto label_189658;
    }
    ctx->pc = 0x189650u;
    {
        const bool branch_taken_0x189650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189650u;
        // 0x189654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189650) {
            ctx->pc = 0x189724u;
            goto label_189724;
        }
    }
    ctx->pc = 0x189658u;
label_189658:
    // 0x189658: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_18965c:
    // 0x18965c: 0xae240044  sw          $a0, 0x44($s1)
    ctx->pc = 0x18965cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 4));
label_189660:
    // 0x189660: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x189660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_189664:
    // 0x189664: 0x40f809  jalr        $v0
label_189668:
    if (ctx->pc == 0x189668u) {
        ctx->pc = 0x18966Cu;
        goto label_18966c;
    }
    ctx->pc = 0x189664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18966Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189664u, 0x18966Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18966Cu;
label_18966c:
    // 0x18966c: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_189670:
    if (ctx->pc == 0x189670u) {
        ctx->pc = 0x189670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18966Cu;
        // 0x189670: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189674u;
        goto label_189674;
    }
    ctx->pc = 0x18966Cu;
    {
        const bool branch_taken_0x18966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18966c) {
            ctx->pc = 0x189670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18966Cu;
            // 0x189670: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189718u;
            goto label_189718;
        }
    }
    ctx->pc = 0x189674u;
label_189674:
    // 0x189674: 0x10000029  b           . + 4 + (0x29 << 2)
label_189678:
    if (ctx->pc == 0x189678u) {
        ctx->pc = 0x189678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189674u;
        // 0x189678: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18967Cu;
        goto label_18967c;
    }
    ctx->pc = 0x189674u;
    {
        const bool branch_taken_0x189674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189674u;
        // 0x189678: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189674) {
            ctx->pc = 0x18971Cu;
            goto label_18971c;
        }
    }
    ctx->pc = 0x18967Cu;
label_18967c:
    // 0x18967c: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x18967cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
label_189680:
    // 0x189680: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x189680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_189684:
    // 0x189684: 0x40f809  jalr        $v0
label_189688:
    if (ctx->pc == 0x189688u) {
        ctx->pc = 0x18968Cu;
        goto label_18968c;
    }
    ctx->pc = 0x189684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18968Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189684u, 0x18968Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18968Cu;
label_18968c:
    // 0x18968c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_189690:
    if (ctx->pc == 0x189690u) {
        ctx->pc = 0x189690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18968Cu;
        // 0x189690: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189694u;
        goto label_189694;
    }
    ctx->pc = 0x18968Cu;
    {
        const bool branch_taken_0x18968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18968c) {
            ctx->pc = 0x189690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18968Cu;
            // 0x189690: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189718u;
            goto label_189718;
        }
    }
    ctx->pc = 0x189694u;
label_189694:
    // 0x189694: 0x10000021  b           . + 4 + (0x21 << 2)
label_189698:
    if (ctx->pc == 0x189698u) {
        ctx->pc = 0x189698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189694u;
        // 0x189698: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18969Cu;
        goto label_18969c;
    }
    ctx->pc = 0x189694u;
    {
        const bool branch_taken_0x189694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189694u;
        // 0x189698: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189694) {
            ctx->pc = 0x18971Cu;
            goto label_18971c;
        }
    }
    ctx->pc = 0x18969Cu;
label_18969c:
    // 0x18969c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1896a0:
    // 0x1896a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1896a4:
    if (ctx->pc == 0x1896A4u) {
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896A8u;
        goto label_1896a8;
    }
    ctx->pc = 0x1896A0u;
    {
        const bool branch_taken_0x1896a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896a0) {
            ctx->pc = 0x1896BCu;
            goto label_1896bc;
        }
    }
    ctx->pc = 0x1896A8u;
label_1896a8:
    // 0x1896a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1896a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1896ac:
    // 0x1896ac: 0x0  nop
    ctx->pc = 0x1896acu;
    // NOP
label_1896b0:
    // 0x1896b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1896b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1896b4:
    // 0x1896b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1896b8:
    if (ctx->pc == 0x1896B8u) {
        ctx->pc = 0x1896B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B4u;
        // 0x1896b8: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896BCu;
        goto label_1896bc;
    }
    ctx->pc = 0x1896B4u;
    {
        const bool branch_taken_0x1896b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896B4u;
        // 0x1896b8: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896b4) {
            ctx->pc = 0x189718u;
            goto label_189718;
        }
    }
    ctx->pc = 0x1896BCu;
label_1896bc:
    // 0x1896bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1896bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1896c0:
    // 0x1896c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1896c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1896c4:
    // 0x1896c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1896c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1896c8:
    // 0x1896c8: 0x0  nop
    ctx->pc = 0x1896c8u;
    // NOP
label_1896cc:
    // 0x1896cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1896ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1896d0:
    // 0x1896d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1896d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1896d4:
    // 0x1896d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1896d8:
    if (ctx->pc == 0x1896D8u) {
        ctx->pc = 0x1896D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D4u;
        // 0x1896d8: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896DCu;
        goto label_1896dc;
    }
    ctx->pc = 0x1896D4u;
    {
        const bool branch_taken_0x1896d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896D4u;
        // 0x1896d8: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896d4) {
            ctx->pc = 0x189718u;
            goto label_189718;
        }
    }
    ctx->pc = 0x1896DCu;
label_1896dc:
    // 0x1896dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1896dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1896e0:
    // 0x1896e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1896e4:
    if (ctx->pc == 0x1896E4u) {
        ctx->pc = 0x1896E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896E0u;
        // 0x1896e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896E8u;
        goto label_1896e8;
    }
    ctx->pc = 0x1896E0u;
    {
        const bool branch_taken_0x1896e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1896E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896E0u;
        // 0x1896e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896e0) {
            ctx->pc = 0x1896FCu;
            goto label_1896fc;
        }
    }
    ctx->pc = 0x1896E8u;
label_1896e8:
    // 0x1896e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1896e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1896ec:
    // 0x1896ec: 0x0  nop
    ctx->pc = 0x1896ecu;
    // NOP
label_1896f0:
    // 0x1896f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1896f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1896f4:
    // 0x1896f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1896f8:
    if (ctx->pc == 0x1896F8u) {
        ctx->pc = 0x1896F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896F4u;
        // 0x1896f8: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896FCu;
        goto label_1896fc;
    }
    ctx->pc = 0x1896F4u;
    {
        const bool branch_taken_0x1896f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896F4u;
        // 0x1896f8: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896f4) {
            ctx->pc = 0x189718u;
            goto label_189718;
        }
    }
    ctx->pc = 0x1896FCu;
label_1896fc:
    // 0x1896fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1896fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_189700:
    // 0x189700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_189704:
    // 0x189704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189708:
    // 0x189708: 0x0  nop
    ctx->pc = 0x189708u;
    // NOP
label_18970c:
    // 0x18970c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18970cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_189710:
    // 0x189710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x189710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_189714:
    // 0x189714: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x189714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_189718:
    // 0x189718: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x189718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18971c:
    // 0x18971c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_189720:
    // 0x189720: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189724:
    // 0x189724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_189728:
    // 0x189728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18972c:
    // 0x18972c: 0xc07f0c8  jal         func_1FC320
label_189730:
    if (ctx->pc == 0x189730u) {
        ctx->pc = 0x189730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18972Cu;
        // 0x189730: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189734u;
        goto label_189734;
    }
    ctx->pc = 0x18972Cu;
    SET_GPR_U32(ctx, 31, 0x189734u);
    ctx->pc = 0x189730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18972Cu;
    // 0x189730: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x18972Cu, 0x189734u)) {
        return;
    }
    ctx->pc = 0x189734u;
label_189734:
    // 0x189734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189738:
    // 0x189738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18973c:
    // 0x18973c: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_189740:
    if (ctx->pc == 0x189740u) {
        ctx->pc = 0x189740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18973Cu;
        // 0x189740: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189744u;
        goto label_189744;
    }
    ctx->pc = 0x18973Cu;
    {
        const bool branch_taken_0x18973c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18973Cu;
        // 0x189740: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18973c) {
            ctx->pc = 0x189628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189628;
        }
    }
    ctx->pc = 0x189744u;
label_189744:
    // 0x189744: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_189748:
    // 0x189748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18974c:
    // 0x18974c: 0xc062cea  jal         func_18B3A8
label_189750:
    if (ctx->pc == 0x189750u) {
        ctx->pc = 0x189750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18974Cu;
        // 0x189750: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189754u;
        goto label_189754;
    }
    ctx->pc = 0x18974Cu;
    SET_GPR_U32(ctx, 31, 0x189754u);
    ctx->pc = 0x189750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18974Cu;
    // 0x189750: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B3A8u, 0x18974Cu, 0x189754u)) {
        return;
    }
    ctx->pc = 0x189754u;
label_189754:
    // 0x189754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x189754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_189758:
    // 0x189758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18975c:
    // 0x18975c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18975cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189760:
    // 0x189760: 0x3e00008  jr          $ra
label_189764:
    if (ctx->pc == 0x189764u) {
        ctx->pc = 0x189764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189760u;
        // 0x189764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189768u;
        goto label_fallthrough_0x189760;
    }
    ctx->pc = 0x189760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189760u;
        // 0x189764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x189760:
    ctx->pc = 0x189768u;
}
