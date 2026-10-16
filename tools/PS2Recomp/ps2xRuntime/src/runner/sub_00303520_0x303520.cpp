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

// Function: sub_00303520
// Address: 0x303520 - 0x303698
void sub_00303520_0x303520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303520_0x303520");
#endif

    switch (ctx->pc) {
        case 0x303520u: goto label_303520;
        case 0x303524u: goto label_303524;
        case 0x303528u: goto label_303528;
        case 0x30352cu: goto label_30352c;
        case 0x303530u: goto label_303530;
        case 0x303534u: goto label_303534;
        case 0x303538u: goto label_303538;
        case 0x30353cu: goto label_30353c;
        case 0x303540u: goto label_303540;
        case 0x303544u: goto label_303544;
        case 0x303548u: goto label_303548;
        case 0x30354cu: goto label_30354c;
        case 0x303550u: goto label_303550;
        case 0x303554u: goto label_303554;
        case 0x303558u: goto label_303558;
        case 0x30355cu: goto label_30355c;
        case 0x303560u: goto label_303560;
        case 0x303564u: goto label_303564;
        case 0x303568u: goto label_303568;
        case 0x30356cu: goto label_30356c;
        case 0x303570u: goto label_303570;
        case 0x303574u: goto label_303574;
        case 0x303578u: goto label_303578;
        case 0x30357cu: goto label_30357c;
        case 0x303580u: goto label_303580;
        case 0x303584u: goto label_303584;
        case 0x303588u: goto label_303588;
        case 0x30358cu: goto label_30358c;
        case 0x303590u: goto label_303590;
        case 0x303594u: goto label_303594;
        case 0x303598u: goto label_303598;
        case 0x30359cu: goto label_30359c;
        case 0x3035a0u: goto label_3035a0;
        case 0x3035a4u: goto label_3035a4;
        case 0x3035a8u: goto label_3035a8;
        case 0x3035acu: goto label_3035ac;
        case 0x3035b0u: goto label_3035b0;
        case 0x3035b4u: goto label_3035b4;
        case 0x3035b8u: goto label_3035b8;
        case 0x3035bcu: goto label_3035bc;
        case 0x3035c0u: goto label_3035c0;
        case 0x3035c4u: goto label_3035c4;
        case 0x3035c8u: goto label_3035c8;
        case 0x3035ccu: goto label_3035cc;
        case 0x3035d0u: goto label_3035d0;
        case 0x3035d4u: goto label_3035d4;
        case 0x3035d8u: goto label_3035d8;
        case 0x3035dcu: goto label_3035dc;
        case 0x3035e0u: goto label_3035e0;
        case 0x3035e4u: goto label_3035e4;
        case 0x3035e8u: goto label_3035e8;
        case 0x3035ecu: goto label_3035ec;
        case 0x3035f0u: goto label_3035f0;
        case 0x3035f4u: goto label_3035f4;
        case 0x3035f8u: goto label_3035f8;
        case 0x3035fcu: goto label_3035fc;
        case 0x303600u: goto label_303600;
        case 0x303604u: goto label_303604;
        case 0x303608u: goto label_303608;
        case 0x30360cu: goto label_30360c;
        case 0x303610u: goto label_303610;
        case 0x303614u: goto label_303614;
        case 0x303618u: goto label_303618;
        case 0x30361cu: goto label_30361c;
        case 0x303620u: goto label_303620;
        case 0x303624u: goto label_303624;
        case 0x303628u: goto label_303628;
        case 0x30362cu: goto label_30362c;
        case 0x303630u: goto label_303630;
        case 0x303634u: goto label_303634;
        case 0x303638u: goto label_303638;
        case 0x30363cu: goto label_30363c;
        case 0x303640u: goto label_303640;
        case 0x303644u: goto label_303644;
        case 0x303648u: goto label_303648;
        case 0x30364cu: goto label_30364c;
        case 0x303650u: goto label_303650;
        case 0x303654u: goto label_303654;
        case 0x303658u: goto label_303658;
        case 0x30365cu: goto label_30365c;
        case 0x303660u: goto label_303660;
        case 0x303664u: goto label_303664;
        case 0x303668u: goto label_303668;
        case 0x30366cu: goto label_30366c;
        case 0x303670u: goto label_303670;
        case 0x303674u: goto label_303674;
        case 0x303678u: goto label_303678;
        case 0x30367cu: goto label_30367c;
        case 0x303680u: goto label_303680;
        case 0x303684u: goto label_303684;
        case 0x303688u: goto label_303688;
        case 0x30368cu: goto label_30368c;
        case 0x303690u: goto label_303690;
        case 0x303694u: goto label_303694;
        default: break;
    }

    ctx->pc = 0x303520u;

label_303520:
    // 0x303520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_303524:
    // 0x303524: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x303524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_303528:
    // 0x303528: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x303528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_30352c:
    // 0x30352c: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x30352cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_303530:
    // 0x303530: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x303530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_303534:
    // 0x303534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x303534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303538:
    // 0x303538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30353c:
    // 0x30353c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30353cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_303540:
    // 0x303540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_303544:
    // 0x303544: 0x8e120020  lw          $s2, 0x20($s0)
    ctx->pc = 0x303544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_303548:
    // 0x303548: 0x34c60409  ori         $a2, $a2, 0x409
    ctx->pc = 0x303548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
label_30354c:
    // 0x30354c: 0x8c6210d8  lw          $v0, 0x10D8($v1)
    ctx->pc = 0x30354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
label_303550:
    // 0x303550: 0x40f809  jalr        $v0
label_303554:
    if (ctx->pc == 0x303554u) {
        ctx->pc = 0x303554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303550u;
        // 0x303554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303558u;
        goto label_303558;
    }
    ctx->pc = 0x303550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x303558u);
        ctx->pc = 0x303554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303550u;
        // 0x303554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303550u, 0x303558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303558u;
label_303558:
    // 0x303558: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_30355c:
    if (ctx->pc == 0x30355Cu) {
        ctx->pc = 0x30355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303558u;
        // 0x30355c: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303560u;
        goto label_303560;
    }
    ctx->pc = 0x303558u;
    {
        const bool branch_taken_0x303558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303558u;
        // 0x30355c: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303558) {
            ctx->pc = 0x303648u;
            goto label_303648;
        }
    }
    ctx->pc = 0x303560u;
label_303560:
    // 0x303560: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x303560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_303564:
    // 0x303564: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x303564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_303568:
    // 0x303568: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x303568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_30356c:
    // 0x30356c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x30356cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_303570:
    // 0x303570: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_303574:
    if (ctx->pc == 0x303574u) {
        ctx->pc = 0x303574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303570u;
        // 0x303574: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303578u;
        goto label_303578;
    }
    ctx->pc = 0x303570u;
    {
        const bool branch_taken_0x303570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303570u;
        // 0x303574: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303570) {
            ctx->pc = 0x303580u;
            goto label_303580;
        }
    }
    ctx->pc = 0x303578u;
label_303578:
    // 0x303578: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x303578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30357c:
    // 0x30357c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x30357cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_303580:
    // 0x303580: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_303584:
    // 0x303584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_303588:
    if (ctx->pc == 0x303588u) {
        ctx->pc = 0x303588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303584u;
        // 0x303588: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30358Cu;
        goto label_30358c;
    }
    ctx->pc = 0x303584u;
    {
        const bool branch_taken_0x303584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303584u;
        // 0x303588: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303584) {
            ctx->pc = 0x303590u;
            goto label_303590;
        }
    }
    ctx->pc = 0x30358Cu;
label_30358c:
    // 0x30358c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_303590:
    // 0x303590: 0x10e00039  beqz        $a3, . + 4 + (0x39 << 2)
label_303594:
    if (ctx->pc == 0x303594u) {
        ctx->pc = 0x303594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303590u;
        // 0x303594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303598u;
        goto label_303598;
    }
    ctx->pc = 0x303590u;
    {
        const bool branch_taken_0x303590 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x303594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303590u;
        // 0x303594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303590) {
            ctx->pc = 0x303678u;
            goto label_303678;
        }
    }
    ctx->pc = 0x303598u;
label_303598:
    // 0x303598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30359c:
    // 0x30359c: 0x0  nop
    ctx->pc = 0x30359cu;
    // NOP
label_3035a0:
    // 0x3035a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3035a4:
    // 0x3035a4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3035a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3035a8:
    // 0x3035a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3035a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3035ac:
    // 0x3035ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3035b0:
    if (ctx->pc == 0x3035B0u) {
        ctx->pc = 0x3035B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035ACu;
        // 0x3035b0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035B4u;
        goto label_3035b4;
    }
    ctx->pc = 0x3035ACu;
    {
        const bool branch_taken_0x3035ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035ACu;
        // 0x3035b0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035ac) {
            ctx->pc = 0x3035B8u;
            goto label_3035b8;
        }
    }
    ctx->pc = 0x3035B4u;
label_3035b4:
    // 0x3035b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3035b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3035b8:
    // 0x3035b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3035b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3035bc:
    // 0x3035bc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3035bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3035c0:
    // 0x3035c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3035c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3035c4:
    // 0x3035c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3035c8:
    if (ctx->pc == 0x3035C8u) {
        ctx->pc = 0x3035C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035C4u;
        // 0x3035c8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035CCu;
        goto label_3035cc;
    }
    ctx->pc = 0x3035C4u;
    {
        const bool branch_taken_0x3035c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035C4u;
        // 0x3035c8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035c4) {
            ctx->pc = 0x3035D0u;
            goto label_3035d0;
        }
    }
    ctx->pc = 0x3035CCu;
label_3035cc:
    // 0x3035cc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3035ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3035d0:
    // 0x3035d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3035d4:
    // 0x3035d4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3035d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3035d8:
    // 0x3035d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3035d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3035dc:
    // 0x3035dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3035e0:
    if (ctx->pc == 0x3035E0u) {
        ctx->pc = 0x3035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035DCu;
        // 0x3035e0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035E4u;
        goto label_3035e4;
    }
    ctx->pc = 0x3035DCu;
    {
        const bool branch_taken_0x3035dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035DCu;
        // 0x3035e0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035dc) {
            ctx->pc = 0x3035E8u;
            goto label_3035e8;
        }
    }
    ctx->pc = 0x3035E4u;
label_3035e4:
    // 0x3035e4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3035e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_3035e8:
    // 0x3035e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3035e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3035ec:
    // 0x3035ec: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3035ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3035f0:
    // 0x3035f0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3035f4:
    // 0x3035f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3035f8:
    if (ctx->pc == 0x3035F8u) {
        ctx->pc = 0x3035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035F4u;
        // 0x3035f8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3035FCu;
        goto label_3035fc;
    }
    ctx->pc = 0x3035F4u;
    {
        const bool branch_taken_0x3035f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3035F4u;
        // 0x3035f8: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3035f4) {
            ctx->pc = 0x303600u;
            goto label_303600;
        }
    }
    ctx->pc = 0x3035FCu;
label_3035fc:
    // 0x3035fc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3035fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_303600:
    // 0x303600: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x303600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_303604:
    // 0x303604: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x303604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_303608:
    // 0x303608: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x303608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_30360c:
    // 0x30360c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_303610:
    if (ctx->pc == 0x303610u) {
        ctx->pc = 0x303610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30360Cu;
        // 0x303610: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303614u;
        goto label_303614;
    }
    ctx->pc = 0x30360Cu;
    {
        const bool branch_taken_0x30360c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30360Cu;
        // 0x303610: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30360c) {
            ctx->pc = 0x303618u;
            goto label_303618;
        }
    }
    ctx->pc = 0x303614u;
label_303614:
    // 0x303614: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x303614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_303618:
    // 0x303618: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x303618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30361c:
    // 0x30361c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x30361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_303620:
    // 0x303620: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x303620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_303624:
    // 0x303624: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_303628:
    if (ctx->pc == 0x303628u) {
        ctx->pc = 0x303628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303624u;
        // 0x303628: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30362Cu;
        goto label_30362c;
    }
    ctx->pc = 0x303624u;
    {
        const bool branch_taken_0x303624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303624u;
        // 0x303628: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303624) {
            ctx->pc = 0x303630u;
            goto label_303630;
        }
    }
    ctx->pc = 0x30362Cu;
label_30362c:
    // 0x30362c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x30362cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_303630:
    // 0x303630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_303634:
    // 0x303634: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x303634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_303638:
    // 0x303638: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_30363c:
    if (ctx->pc == 0x30363Cu) {
        ctx->pc = 0x30363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303638u;
        // 0x30363c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303640u;
        goto label_303640;
    }
    ctx->pc = 0x303638u;
    {
        const bool branch_taken_0x303638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303638u;
        // 0x30363c: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303638) {
            ctx->pc = 0x3035A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3035a0;
        }
    }
    ctx->pc = 0x303640u;
label_303640:
    // 0x303640: 0x1000000e  b           . + 4 + (0xE << 2)
label_303644:
    if (ctx->pc == 0x303644u) {
        ctx->pc = 0x303644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303640u;
        // 0x303644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303648u;
        goto label_303648;
    }
    ctx->pc = 0x303640u;
    {
        const bool branch_taken_0x303640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303640u;
        // 0x303644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303640) {
            ctx->pc = 0x30367Cu;
            goto label_30367c;
        }
    }
    ctx->pc = 0x303648u;
label_303648:
    // 0x303648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30364c:
    // 0x30364c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x30364cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_303650:
    // 0x303650: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x303650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_303654:
    // 0x303654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303658:
    // 0x303658: 0xc092848  jal         func_24A120
label_30365c:
    if (ctx->pc == 0x30365Cu) {
        ctx->pc = 0x30365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303658u;
        // 0x30365c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303660u;
        goto label_303660;
    }
    ctx->pc = 0x303658u;
    SET_GPR_U32(ctx, 31, 0x303660u);
    ctx->pc = 0x30365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303658u;
    // 0x30365c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x303658u, 0x303660u)) {
        return;
    }
    ctx->pc = 0x303660u;
label_303660:
    // 0x303660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_303664:
    // 0x303664: 0xc09281a  jal         func_24A068
label_303668:
    if (ctx->pc == 0x303668u) {
        ctx->pc = 0x303668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303664u;
        // 0x303668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30366Cu;
        goto label_30366c;
    }
    ctx->pc = 0x303664u;
    SET_GPR_U32(ctx, 31, 0x30366Cu);
    ctx->pc = 0x303668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303664u;
    // 0x303668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303664u, 0x30366Cu)) {
        return;
    }
    ctx->pc = 0x30366Cu;
label_30366c:
    // 0x30366c: 0x10000003  b           . + 4 + (0x3 << 2)
label_303670:
    if (ctx->pc == 0x303670u) {
        ctx->pc = 0x303670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30366Cu;
        // 0x303670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303674u;
        goto label_303674;
    }
    ctx->pc = 0x30366Cu;
    {
        const bool branch_taken_0x30366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30366Cu;
        // 0x303670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30366c) {
            ctx->pc = 0x30367Cu;
            goto label_30367c;
        }
    }
    ctx->pc = 0x303674u;
label_303674:
    // 0x303674: 0x0  nop
    ctx->pc = 0x303674u;
    // NOP
label_303678:
    // 0x303678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30367c:
    // 0x30367c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30367cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_303680:
    // 0x303680: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x303680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_303684:
    // 0x303684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_303688:
    // 0x303688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30368c:
    // 0x30368c: 0x3e00008  jr          $ra
label_303690:
    if (ctx->pc == 0x303690u) {
        ctx->pc = 0x303690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30368Cu;
        // 0x303690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303694u;
        goto label_303694;
    }
    ctx->pc = 0x30368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30368Cu;
        // 0x303690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303694u;
label_303694:
    // 0x303694: 0x0  nop
    ctx->pc = 0x303694u;
    // NOP
    ctx->pc = 0x303698u;
}
