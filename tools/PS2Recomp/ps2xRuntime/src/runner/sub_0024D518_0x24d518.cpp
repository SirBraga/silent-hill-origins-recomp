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

// Function: sub_0024D518
// Address: 0x24d518 - 0x24d6a8
void sub_0024D518_0x24d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D518_0x24d518");
#endif

    switch (ctx->pc) {
        case 0x24d518u: goto label_24d518;
        case 0x24d51cu: goto label_24d51c;
        case 0x24d520u: goto label_24d520;
        case 0x24d524u: goto label_24d524;
        case 0x24d528u: goto label_24d528;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        default: break;
    }

    ctx->pc = 0x24d518u;

label_24d518:
    // 0x24d518: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24d518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24d51c:
    // 0x24d51c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d520:
    // 0x24d520: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24d520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_24d524:
    // 0x24d524: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_24d528:
    // 0x24d528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d52c:
    // 0x24d52c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24d530:
    // 0x24d530: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24d530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24d534:
    // 0x24d534: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_24d538:
    // 0x24d538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24d53c:
    // 0x24d53c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d540:
    // 0x24d540: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_24d544:
    if (ctx->pc == 0x24D544u) {
        ctx->pc = 0x24D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D540u;
        // 0x24d544: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D548u;
        goto label_24d548;
    }
    ctx->pc = 0x24D540u;
    {
        const bool branch_taken_0x24d540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D540u;
        // 0x24d544: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d540) {
            ctx->pc = 0x24D5E8u;
            goto label_24d5e8;
        }
    }
    ctx->pc = 0x24D548u;
label_24d548:
    // 0x24d548: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x24d548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_24d54c:
    // 0x24d54c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24d550:
    if (ctx->pc == 0x24D550u) {
        ctx->pc = 0x24D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D54Cu;
        // 0x24d550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D554u;
        goto label_24d554;
    }
    ctx->pc = 0x24D54Cu;
    {
        const bool branch_taken_0x24d54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D54Cu;
        // 0x24d550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d54c) {
            ctx->pc = 0x24D564u;
            goto label_24d564;
        }
    }
    ctx->pc = 0x24D554u;
label_24d554:
    // 0x24d554: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_24d558:
    if (ctx->pc == 0x24D558u) {
        ctx->pc = 0x24D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D554u;
        // 0x24d558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D55Cu;
        goto label_24d55c;
    }
    ctx->pc = 0x24D554u;
    {
        const bool branch_taken_0x24d554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D554u;
        // 0x24d558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d554) {
            ctx->pc = 0x24D64Cu;
            goto label_24d64c;
        }
    }
    ctx->pc = 0x24D55Cu;
label_24d55c:
    // 0x24d55c: 0x10000044  b           . + 4 + (0x44 << 2)
label_24d560:
    if (ctx->pc == 0x24D560u) {
        ctx->pc = 0x24D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D55Cu;
        // 0x24d560: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D564u;
        goto label_24d564;
    }
    ctx->pc = 0x24D55Cu;
    {
        const bool branch_taken_0x24d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D55Cu;
        // 0x24d560: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d55c) {
            ctx->pc = 0x24D670u;
            goto label_24d670;
        }
    }
    ctx->pc = 0x24D564u;
label_24d564:
    // 0x24d564: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_24d568:
    if (ctx->pc == 0x24D568u) {
        ctx->pc = 0x24D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D564u;
        // 0x24d568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D56Cu;
        goto label_24d56c;
    }
    ctx->pc = 0x24D564u;
    {
        const bool branch_taken_0x24d564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D564u;
        // 0x24d568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d564) {
            ctx->pc = 0x24D668u;
            goto label_24d668;
        }
    }
    ctx->pc = 0x24D56Cu;
label_24d56c:
    // 0x24d56c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x24d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d570:
    // 0x24d570: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d574:
    // 0x24d574: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24d574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d578:
    // 0x24d578: 0xc09ccba  jal         func_2732E8
label_24d57c:
    if (ctx->pc == 0x24D57Cu) {
        ctx->pc = 0x24D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D578u;
        // 0x24d57c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D580u;
        goto label_24d580;
    }
    ctx->pc = 0x24D578u;
    SET_GPR_U32(ctx, 31, 0x24D580u);
    ctx->pc = 0x24D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D578u;
    // 0x24d57c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2732E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2732E8u, 0x24D578u, 0x24D580u)) {
        return;
    }
    ctx->pc = 0x24D580u;
label_24d580:
    // 0x24d580: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24d580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d584:
    // 0x24d584: 0x12510040  beq         $s2, $s1, . + 4 + (0x40 << 2)
label_24d588:
    if (ctx->pc == 0x24D588u) {
        ctx->pc = 0x24D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D584u;
        // 0x24d588: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D58Cu;
        goto label_24d58c;
    }
    ctx->pc = 0x24D584u;
    {
        const bool branch_taken_0x24d584 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x24D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D584u;
        // 0x24d588: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d584) {
            ctx->pc = 0x24D688u;
            goto label_24d688;
        }
    }
    ctx->pc = 0x24D58Cu;
label_24d58c:
    // 0x24d58c: 0xc09cd18  jal         func_273460
label_24d590:
    if (ctx->pc == 0x24D590u) {
        ctx->pc = 0x24D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D58Cu;
        // 0x24d590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D594u;
        goto label_24d594;
    }
    ctx->pc = 0x24D58Cu;
    SET_GPR_U32(ctx, 31, 0x24D594u);
    ctx->pc = 0x24D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D58Cu;
    // 0x24d590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273460u, 0x24D58Cu, 0x24D594u)) {
        return;
    }
    ctx->pc = 0x24D594u;
label_24d594:
    // 0x24d594: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_24d598:
    if (ctx->pc == 0x24D598u) {
        ctx->pc = 0x24D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D594u;
        // 0x24d598: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D59Cu;
        goto label_24d59c;
    }
    ctx->pc = 0x24D594u;
    {
        const bool branch_taken_0x24d594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D594u;
        // 0x24d598: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d594) {
            ctx->pc = 0x24D5C0u;
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D59Cu;
label_24d59c:
    // 0x24d59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d5a0:
    // 0x24d5a0: 0xc092848  jal         func_24A120
label_24d5a4:
    if (ctx->pc == 0x24D5A4u) {
        ctx->pc = 0x24D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A0u;
        // 0x24d5a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5A8u;
        goto label_24d5a8;
    }
    ctx->pc = 0x24D5A0u;
    SET_GPR_U32(ctx, 31, 0x24D5A8u);
    ctx->pc = 0x24D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5A0u;
    // 0x24d5a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D5A0u, 0x24D5A8u)) {
        return;
    }
    ctx->pc = 0x24D5A8u;
label_24d5a8:
    // 0x24d5a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d5ac:
    // 0x24d5ac: 0xc09281a  jal         func_24A068
label_24d5b0:
    if (ctx->pc == 0x24D5B0u) {
        ctx->pc = 0x24D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5ACu;
        // 0x24d5b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B4u;
        goto label_24d5b4;
    }
    ctx->pc = 0x24D5ACu;
    SET_GPR_U32(ctx, 31, 0x24D5B4u);
    ctx->pc = 0x24D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5ACu;
    // 0x24d5b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D5ACu, 0x24D5B4u)) {
        return;
    }
    ctx->pc = 0x24D5B4u;
label_24d5b4:
    // 0x24d5b4: 0x10000034  b           . + 4 + (0x34 << 2)
label_24d5b8:
    if (ctx->pc == 0x24D5B8u) {
        ctx->pc = 0x24D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B4u;
        // 0x24d5b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5BCu;
        goto label_24d5bc;
    }
    ctx->pc = 0x24D5B4u;
    {
        const bool branch_taken_0x24d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B4u;
        // 0x24d5b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5b4) {
            ctx->pc = 0x24D688u;
            goto label_24d688;
        }
    }
    ctx->pc = 0x24D5BCu;
label_24d5bc:
    // 0x24d5bc: 0x0  nop
    ctx->pc = 0x24d5bcu;
    // NOP
label_24d5c0:
    // 0x24d5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d5c4:
    // 0x24d5c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_24d5c8:
    // 0x24d5c8: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x24d5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
label_24d5cc:
    // 0x24d5cc: 0xc092848  jal         func_24A120
label_24d5d0:
    if (ctx->pc == 0x24D5D0u) {
        ctx->pc = 0x24D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5CCu;
        // 0x24d5d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5D4u;
        goto label_24d5d4;
    }
    ctx->pc = 0x24D5CCu;
    SET_GPR_U32(ctx, 31, 0x24D5D4u);
    ctx->pc = 0x24D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5CCu;
    // 0x24d5d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D5CCu, 0x24D5D4u)) {
        return;
    }
    ctx->pc = 0x24D5D4u;
label_24d5d4:
    // 0x24d5d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d5d8:
    // 0x24d5d8: 0xc09281a  jal         func_24A068
label_24d5dc:
    if (ctx->pc == 0x24D5DCu) {
        ctx->pc = 0x24D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5D8u;
        // 0x24d5dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5E0u;
        goto label_24d5e0;
    }
    ctx->pc = 0x24D5D8u;
    SET_GPR_U32(ctx, 31, 0x24D5E0u);
    ctx->pc = 0x24D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5D8u;
    // 0x24d5dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D5D8u, 0x24D5E0u)) {
        return;
    }
    ctx->pc = 0x24D5E0u;
label_24d5e0:
    // 0x24d5e0: 0x10000029  b           . + 4 + (0x29 << 2)
label_24d5e4:
    if (ctx->pc == 0x24D5E4u) {
        ctx->pc = 0x24D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E0u;
        // 0x24d5e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5E8u;
        goto label_24d5e8;
    }
    ctx->pc = 0x24D5E0u;
    {
        const bool branch_taken_0x24d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E0u;
        // 0x24d5e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5e0) {
            ctx->pc = 0x24D688u;
            goto label_24d688;
        }
    }
    ctx->pc = 0x24D5E8u;
label_24d5e8:
    // 0x24d5e8: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x24d5e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_24d5ec:
    // 0x24d5ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d5f0:
    // 0x24d5f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x24d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_24d5f4:
    // 0x24d5f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24d5f8:
    // 0x24d5f8: 0x71202b  sltu        $a0, $v1, $s1
    ctx->pc = 0x24d5f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24d5fc:
    // 0x24d5fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_24d600:
    if (ctx->pc == 0x24D600u) {
        ctx->pc = 0x24D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5FCu;
        // 0x24d600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D604u;
        goto label_24d604;
    }
    ctx->pc = 0x24D5FCu;
    {
        const bool branch_taken_0x24d5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5FCu;
        // 0x24d600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5fc) {
            ctx->pc = 0x24D620u;
            goto label_24d620;
        }
    }
    ctx->pc = 0x24D604u;
label_24d604:
    // 0x24d604: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x24d604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24d608:
    // 0x24d608: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24d60c:
    // 0x24d60c: 0xc092848  jal         func_24A120
label_24d610:
    if (ctx->pc == 0x24D610u) {
        ctx->pc = 0x24D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D60Cu;
        // 0x24d610: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D614u;
        goto label_24d614;
    }
    ctx->pc = 0x24D60Cu;
    SET_GPR_U32(ctx, 31, 0x24D614u);
    ctx->pc = 0x24D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D60Cu;
    // 0x24d610: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D60Cu, 0x24D614u)) {
        return;
    }
    ctx->pc = 0x24D614u;
label_24d614:
    // 0x24d614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d618:
    // 0x24d618: 0xc09281a  jal         func_24A068
label_24d61c:
    if (ctx->pc == 0x24D61Cu) {
        ctx->pc = 0x24D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D618u;
        // 0x24d61c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D620u;
        goto label_24d620;
    }
    ctx->pc = 0x24D618u;
    SET_GPR_U32(ctx, 31, 0x24D620u);
    ctx->pc = 0x24D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D618u;
    // 0x24d61c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D618u, 0x24D620u)) {
        return;
    }
    ctx->pc = 0x24D620u;
label_24d620:
    // 0x24d620: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x24d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_24d624:
    // 0x24d624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d628:
    // 0x24d628: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24d628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d62c:
    // 0x24d62c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24d62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d630:
    // 0x24d630: 0xc075fdc  jal         func_1D7F70
label_24d634:
    if (ctx->pc == 0x24D634u) {
        ctx->pc = 0x24D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D630u;
        // 0x24d634: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D638u;
        goto label_24d638;
    }
    ctx->pc = 0x24D630u;
    SET_GPR_U32(ctx, 31, 0x24D638u);
    ctx->pc = 0x24D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D630u;
    // 0x24d634: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x24D630u, 0x24D638u)) {
        return;
    }
    ctx->pc = 0x24D638u;
label_24d638:
    // 0x24d638: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d63c:
    // 0x24d63c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24d63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d640:
    // 0x24d640: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24d640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_24d644:
    // 0x24d644: 0x10000010  b           . + 4 + (0x10 << 2)
label_24d648:
    if (ctx->pc == 0x24D648u) {
        ctx->pc = 0x24D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D644u;
        // 0x24d648: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D64Cu;
        goto label_24d64c;
    }
    ctx->pc = 0x24D644u;
    {
        const bool branch_taken_0x24d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D644u;
        // 0x24d648: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d644) {
            ctx->pc = 0x24D688u;
            goto label_24d688;
        }
    }
    ctx->pc = 0x24D64Cu;
label_24d64c:
    // 0x24d64c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x24d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_24d650:
    // 0x24d650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24d650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d654:
    // 0x24d654: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24d658:
    // 0x24d658: 0x40f809  jalr        $v0
label_24d65c:
    if (ctx->pc == 0x24D65Cu) {
        ctx->pc = 0x24D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D658u;
        // 0x24d65c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D660u;
        goto label_24d660;
    }
    ctx->pc = 0x24D658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D660u);
        ctx->pc = 0x24D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D658u;
        // 0x24d65c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D658u, 0x24D660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D660u;
label_24d660:
    // 0x24d660: 0x1000000a  b           . + 4 + (0xA << 2)
label_24d664:
    if (ctx->pc == 0x24D664u) {
        ctx->pc = 0x24D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D660u;
        // 0x24d664: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D668u;
        goto label_24d668;
    }
    ctx->pc = 0x24D660u;
    {
        const bool branch_taken_0x24d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D660u;
        // 0x24d664: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d660) {
            ctx->pc = 0x24D68Cu;
            goto label_24d68c;
        }
    }
    ctx->pc = 0x24D668u;
label_24d668:
    // 0x24d668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d66c:
    // 0x24d66c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x24d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_24d670:
    // 0x24d670: 0xc092848  jal         func_24A120
label_24d674:
    if (ctx->pc == 0x24D674u) {
        ctx->pc = 0x24D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D670u;
        // 0x24d674: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D678u;
        goto label_24d678;
    }
    ctx->pc = 0x24D670u;
    SET_GPR_U32(ctx, 31, 0x24D678u);
    ctx->pc = 0x24D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D670u;
    // 0x24d674: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D670u, 0x24D678u)) {
        return;
    }
    ctx->pc = 0x24D678u;
label_24d678:
    // 0x24d678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24d67c:
    // 0x24d67c: 0xc09281a  jal         func_24A068
label_24d680:
    if (ctx->pc == 0x24D680u) {
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D684u;
        goto label_24d684;
    }
    ctx->pc = 0x24D67Cu;
    SET_GPR_U32(ctx, 31, 0x24D684u);
    ctx->pc = 0x24D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D67Cu;
    // 0x24d680: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D67Cu, 0x24D684u)) {
        return;
    }
    ctx->pc = 0x24D684u;
label_24d684:
    // 0x24d684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d688:
    // 0x24d688: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24d688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24d68c:
    // 0x24d68c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24d68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24d690:
    // 0x24d690: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24d690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d694:
    // 0x24d694: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24d694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d698:
    // 0x24d698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24d69c:
    // 0x24d69c: 0x3e00008  jr          $ra
label_24d6a0:
    if (ctx->pc == 0x24D6A0u) {
        ctx->pc = 0x24D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D69Cu;
        // 0x24d6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6A4u;
        goto label_24d6a4;
    }
    ctx->pc = 0x24D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D69Cu;
        // 0x24d6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D6A4u;
label_24d6a4:
    // 0x24d6a4: 0x0  nop
    ctx->pc = 0x24d6a4u;
    // NOP
    ctx->pc = 0x24d6a8u;
}
