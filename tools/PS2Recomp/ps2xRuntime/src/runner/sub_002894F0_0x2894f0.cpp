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

// Function: sub_002894F0
// Address: 0x2894f0 - 0x2895e0
void sub_002894F0_0x2894f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002894F0_0x2894f0");
#endif

    switch (ctx->pc) {
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        case 0x289518u: goto label_289518;
        case 0x28951cu: goto label_28951c;
        case 0x289520u: goto label_289520;
        case 0x289524u: goto label_289524;
        case 0x289528u: goto label_289528;
        case 0x28952cu: goto label_28952c;
        case 0x289530u: goto label_289530;
        case 0x289534u: goto label_289534;
        case 0x289538u: goto label_289538;
        case 0x28953cu: goto label_28953c;
        case 0x289540u: goto label_289540;
        case 0x289544u: goto label_289544;
        case 0x289548u: goto label_289548;
        case 0x28954cu: goto label_28954c;
        case 0x289550u: goto label_289550;
        case 0x289554u: goto label_289554;
        case 0x289558u: goto label_289558;
        case 0x28955cu: goto label_28955c;
        case 0x289560u: goto label_289560;
        case 0x289564u: goto label_289564;
        case 0x289568u: goto label_289568;
        case 0x28956cu: goto label_28956c;
        case 0x289570u: goto label_289570;
        case 0x289574u: goto label_289574;
        case 0x289578u: goto label_289578;
        case 0x28957cu: goto label_28957c;
        case 0x289580u: goto label_289580;
        case 0x289584u: goto label_289584;
        case 0x289588u: goto label_289588;
        case 0x28958cu: goto label_28958c;
        case 0x289590u: goto label_289590;
        case 0x289594u: goto label_289594;
        case 0x289598u: goto label_289598;
        case 0x28959cu: goto label_28959c;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895a4u: goto label_2895a4;
        case 0x2895a8u: goto label_2895a8;
        case 0x2895acu: goto label_2895ac;
        case 0x2895b0u: goto label_2895b0;
        case 0x2895b4u: goto label_2895b4;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895bcu: goto label_2895bc;
        case 0x2895c0u: goto label_2895c0;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ccu: goto label_2895cc;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895d4u: goto label_2895d4;
        case 0x2895d8u: goto label_2895d8;
        case 0x2895dcu: goto label_2895dc;
        default: break;
    }

    ctx->pc = 0x2894f0u;

label_2894f0:
    // 0x2894f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2894f4:
    // 0x2894f4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_2894f8:
    // 0x2894f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2894f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2894fc:
    // 0x2894fc: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x2894fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_289500:
    // 0x289500: 0x8cc468dc  lw          $a0, 0x68DC($a2)
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 26844)));
label_289504:
    // 0x289504: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_289508:
    // 0x289508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28950c:
    // 0x28950c: 0x40f809  jalr        $v0
label_289510:
    if (ctx->pc == 0x289510u) {
        ctx->pc = 0x289510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28950Cu;
        // 0x289510: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289514u;
        goto label_289514;
    }
    ctx->pc = 0x28950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x289514u);
        ctx->pc = 0x289510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28950Cu;
        // 0x289510: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28950Cu, 0x289514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289514u;
label_289514:
    // 0x289514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_289518:
    // 0x289518: 0x3e00008  jr          $ra
label_28951c:
    if (ctx->pc == 0x28951Cu) {
        ctx->pc = 0x28951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289518u;
        // 0x28951c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289520u;
        goto label_289520;
    }
    ctx->pc = 0x289518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289518u;
        // 0x28951c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289520u;
label_289520:
    // 0x289520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_289524:
    // 0x289524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_289528:
    // 0x289528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x289528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28952c:
    // 0x28952c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28952cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289530:
    // 0x289530: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x289530u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_289534:
    // 0x289534: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_289538:
    if (ctx->pc == 0x289538u) {
        ctx->pc = 0x289538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289534u;
        // 0x289538: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28953Cu;
        goto label_28953c;
    }
    ctx->pc = 0x289534u;
    {
        const bool branch_taken_0x289534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x289538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289534u;
        // 0x289538: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289534) {
            ctx->pc = 0x2895C4u;
            goto label_2895c4;
        }
    }
    ctx->pc = 0x28953Cu;
label_28953c:
    // 0x28953c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_289540:
    // 0x289540: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x289540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_289544:
    // 0x289544: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_289548:
    if (ctx->pc == 0x289548u) {
        ctx->pc = 0x289548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289544u;
        // 0x289548: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28954Cu;
        goto label_28954c;
    }
    ctx->pc = 0x289544u;
    {
        const bool branch_taken_0x289544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289544u;
        // 0x289548: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289544) {
            ctx->pc = 0x2895A4u;
            goto label_2895a4;
        }
    }
    ctx->pc = 0x28954Cu;
label_28954c:
    // 0x28954c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28954cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_289550:
    // 0x289550: 0x2442cda0  addiu       $v0, $v0, -0x3260
    ctx->pc = 0x289550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
label_289554:
    // 0x289554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_289558:
    // 0x289558: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28955c:
    // 0x28955c: 0x800008  jr          $a0
label_289560:
    if (ctx->pc == 0x289560u) {
        ctx->pc = 0x289564u;
        goto label_289564;
    }
    ctx->pc = 0x28955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289564u: goto label_289564;
            case 0x289574u: goto label_289574;
            case 0x289584u: goto label_289584;
            case 0x289594u: goto label_289594;
            case 0x2895A4u: goto label_2895a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28955Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289564u;
label_289564:
    // 0x289564: 0xc0a2ddc  jal         func_28B770
label_289568:
    if (ctx->pc == 0x289568u) {
        ctx->pc = 0x289568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289564u;
        // 0x289568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28956Cu;
        goto label_28956c;
    }
    ctx->pc = 0x289564u;
    SET_GPR_U32(ctx, 31, 0x28956Cu);
    ctx->pc = 0x289568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289564u;
    // 0x289568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B770u, 0x289564u, 0x28956Cu)) {
        return;
    }
    ctx->pc = 0x28956Cu;
label_28956c:
    // 0x28956c: 0x1000000e  b           . + 4 + (0xE << 2)
label_289570:
    if (ctx->pc == 0x289570u) {
        ctx->pc = 0x289570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28956Cu;
        // 0x289570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289574u;
        goto label_289574;
    }
    ctx->pc = 0x28956Cu;
    {
        const bool branch_taken_0x28956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28956Cu;
        // 0x289570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28956c) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x289574u;
label_289574:
    // 0x289574: 0xc0a34ac  jal         func_28D2B0
label_289578:
    if (ctx->pc == 0x289578u) {
        ctx->pc = 0x289578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289574u;
        // 0x289578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28957Cu;
        goto label_28957c;
    }
    ctx->pc = 0x289574u;
    SET_GPR_U32(ctx, 31, 0x28957Cu);
    ctx->pc = 0x289578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289574u;
    // 0x289578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D2B0u, 0x289574u, 0x28957Cu)) {
        return;
    }
    ctx->pc = 0x28957Cu;
label_28957c:
    // 0x28957c: 0x1000000a  b           . + 4 + (0xA << 2)
label_289580:
    if (ctx->pc == 0x289580u) {
        ctx->pc = 0x289580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28957Cu;
        // 0x289580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289584u;
        goto label_289584;
    }
    ctx->pc = 0x28957Cu;
    {
        const bool branch_taken_0x28957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28957Cu;
        // 0x289580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28957c) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x289584u;
label_289584:
    // 0x289584: 0xc0a26b4  jal         func_289AD0
label_289588:
    if (ctx->pc == 0x289588u) {
        ctx->pc = 0x289588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289584u;
        // 0x289588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28958Cu;
        goto label_28958c;
    }
    ctx->pc = 0x289584u;
    SET_GPR_U32(ctx, 31, 0x28958Cu);
    ctx->pc = 0x289588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289584u;
    // 0x289588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289AD0u, 0x289584u, 0x28958Cu)) {
        return;
    }
    ctx->pc = 0x28958Cu;
label_28958c:
    // 0x28958c: 0x10000006  b           . + 4 + (0x6 << 2)
label_289590:
    if (ctx->pc == 0x289590u) {
        ctx->pc = 0x289590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28958Cu;
        // 0x289590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289594u;
        goto label_289594;
    }
    ctx->pc = 0x28958Cu;
    {
        const bool branch_taken_0x28958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28958Cu;
        // 0x289590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28958c) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x289594u;
label_289594:
    // 0x289594: 0xc0a439c  jal         func_290E70
label_289598:
    if (ctx->pc == 0x289598u) {
        ctx->pc = 0x289598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289594u;
        // 0x289598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28959Cu;
        goto label_28959c;
    }
    ctx->pc = 0x289594u;
    SET_GPR_U32(ctx, 31, 0x28959Cu);
    ctx->pc = 0x289598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289594u;
    // 0x289598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290E70u, 0x289594u, 0x28959Cu)) {
        return;
    }
    ctx->pc = 0x28959Cu;
label_28959c:
    // 0x28959c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2895a0:
    if (ctx->pc == 0x2895A0u) {
        ctx->pc = 0x2895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28959Cu;
        // 0x2895a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895A4u;
        goto label_2895a4;
    }
    ctx->pc = 0x28959Cu;
    {
        const bool branch_taken_0x28959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28959Cu;
        // 0x2895a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28959c) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x2895A4u;
label_2895a4:
    // 0x2895a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2895a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2895a8:
    // 0x2895a8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_2895ac:
    // 0x2895ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2895acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2895b0:
    // 0x2895b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2895b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2895b4:
    // 0x2895b4: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x2895b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_2895b8:
    // 0x2895b8: 0x8ca468dc  lw          $a0, 0x68DC($a1)
    ctx->pc = 0x2895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 26844)));
label_2895bc:
    // 0x2895bc: 0x40f809  jalr        $v0
label_2895c0:
    if (ctx->pc == 0x2895C0u) {
        ctx->pc = 0x2895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895BCu;
        // 0x2895c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895C4u;
        goto label_2895c4;
    }
    ctx->pc = 0x2895BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2895C4u);
        ctx->pc = 0x2895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895BCu;
        // 0x2895c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2895BCu, 0x2895C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2895C4u;
label_2895c4:
    // 0x2895c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2895c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2895c8:
    // 0x2895c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2895c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2895cc:
    // 0x2895cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2895ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2895d0:
    // 0x2895d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2895d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2895d4:
    // 0x2895d4: 0x3e00008  jr          $ra
label_2895d8:
    if (ctx->pc == 0x2895D8u) {
        ctx->pc = 0x2895D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895D4u;
        // 0x2895d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895DCu;
        goto label_2895dc;
    }
    ctx->pc = 0x2895D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2895D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895D4u;
        // 0x2895d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2895D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2895DCu;
label_2895dc:
    // 0x2895dc: 0x0  nop
    ctx->pc = 0x2895dcu;
    // NOP
    ctx->pc = 0x2895e0u;
}
