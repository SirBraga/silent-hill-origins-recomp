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

// Function: sub_001654F8
// Address: 0x1654f8 - 0x165588
void sub_001654F8_0x1654f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001654F8_0x1654f8");
#endif

    switch (ctx->pc) {
        case 0x1654f8u: goto label_1654f8;
        case 0x1654fcu: goto label_1654fc;
        case 0x165500u: goto label_165500;
        case 0x165504u: goto label_165504;
        case 0x165508u: goto label_165508;
        case 0x16550cu: goto label_16550c;
        case 0x165510u: goto label_165510;
        case 0x165514u: goto label_165514;
        case 0x165518u: goto label_165518;
        case 0x16551cu: goto label_16551c;
        case 0x165520u: goto label_165520;
        case 0x165524u: goto label_165524;
        case 0x165528u: goto label_165528;
        case 0x16552cu: goto label_16552c;
        case 0x165530u: goto label_165530;
        case 0x165534u: goto label_165534;
        case 0x165538u: goto label_165538;
        case 0x16553cu: goto label_16553c;
        case 0x165540u: goto label_165540;
        case 0x165544u: goto label_165544;
        case 0x165548u: goto label_165548;
        case 0x16554cu: goto label_16554c;
        case 0x165550u: goto label_165550;
        case 0x165554u: goto label_165554;
        case 0x165558u: goto label_165558;
        case 0x16555cu: goto label_16555c;
        case 0x165560u: goto label_165560;
        case 0x165564u: goto label_165564;
        case 0x165568u: goto label_165568;
        case 0x16556cu: goto label_16556c;
        case 0x165570u: goto label_165570;
        case 0x165574u: goto label_165574;
        case 0x165578u: goto label_165578;
        case 0x16557cu: goto label_16557c;
        case 0x165580u: goto label_165580;
        case 0x165584u: goto label_165584;
        default: break;
    }

    ctx->pc = 0x1654f8u;

label_1654f8:
    // 0x1654f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1654fc:
    // 0x1654fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1654fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165500:
    // 0x165500: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_165504:
    // 0x165504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165508:
    // 0x165508: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_16550c:
    // 0x16550c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165510:
    // 0x165510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_165514:
    // 0x165514: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x165514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165518:
    // 0x165518: 0xae206af4  sw          $zero, 0x6AF4($s1)
    ctx->pc = 0x165518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27380), GPR_U32(ctx, 0));
label_16551c:
    // 0x16551c: 0xc08063c  jal         func_2018F0
label_165520:
    if (ctx->pc == 0x165520u) {
        ctx->pc = 0x165520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16551Cu;
        // 0x165520: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165524u;
        goto label_165524;
    }
    ctx->pc = 0x16551Cu;
    SET_GPR_U32(ctx, 31, 0x165524u);
    ctx->pc = 0x165520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16551Cu;
    // 0x165520: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x16551Cu, 0x165524u)) {
        return;
    }
    ctx->pc = 0x165524u;
label_165524:
    // 0x165524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165528:
    // 0x165528: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_16552c:
    if (ctx->pc == 0x16552Cu) {
        ctx->pc = 0x16552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165528u;
        // 0x16552c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165530u;
        goto label_165530;
    }
    ctx->pc = 0x165528u;
    {
        const bool branch_taken_0x165528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165528u;
        // 0x16552c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165528) {
            ctx->pc = 0x165570u;
            goto label_165570;
        }
    }
    ctx->pc = 0x165530u;
label_165530:
    // 0x165530: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
label_165534:
    // 0x165534: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_165538:
    // 0x165538: 0x24843dd0  addiu       $a0, $a0, 0x3DD0
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15824));
label_16553c:
    // 0x16553c: 0x40f809  jalr        $v0
label_165540:
    if (ctx->pc == 0x165540u) {
        ctx->pc = 0x165540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16553Cu;
        // 0x165540: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165544u;
        goto label_165544;
    }
    ctx->pc = 0x16553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165544u);
        ctx->pc = 0x165540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16553Cu;
        // 0x165540: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16553Cu, 0x165544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165544u;
label_165544:
    // 0x165544: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_165548:
    if (ctx->pc == 0x165548u) {
        ctx->pc = 0x165548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165544u;
        // 0x165548: 0x26226494  addiu       $v0, $s1, 0x6494 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16554Cu;
        goto label_16554c;
    }
    ctx->pc = 0x165544u;
    {
        const bool branch_taken_0x165544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165544u;
        // 0x165548: 0x26226494  addiu       $v0, $s1, 0x6494 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165544) {
            ctx->pc = 0x165574u;
            goto label_165574;
        }
    }
    ctx->pc = 0x16554Cu;
label_16554c:
    // 0x16554c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_165550:
    // 0x165550: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_165554:
    // 0x165554: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_165558:
    if (ctx->pc == 0x165558u) {
        ctx->pc = 0x165558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165554u;
        // 0x165558: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16555Cu;
        goto label_16555c;
    }
    ctx->pc = 0x165554u;
    {
        const bool branch_taken_0x165554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165554) {
            ctx->pc = 0x165558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165554u;
            // 0x165558: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165578u;
            goto label_165578;
        }
    }
    ctx->pc = 0x16555Cu;
label_16555c:
    // 0x16555c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_165560:
    // 0x165560: 0xc058e24  jal         func_163890
label_165564:
    if (ctx->pc == 0x165564u) {
        ctx->pc = 0x165564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165560u;
        // 0x165564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165568u;
        goto label_165568;
    }
    ctx->pc = 0x165560u;
    SET_GPR_U32(ctx, 31, 0x165568u);
    ctx->pc = 0x165564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165560u;
    // 0x165564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163890u, 0x165560u, 0x165568u)) {
        return;
    }
    ctx->pc = 0x165568u;
label_165568:
    // 0x165568: 0x10000003  b           . + 4 + (0x3 << 2)
label_16556c:
    if (ctx->pc == 0x16556Cu) {
        ctx->pc = 0x16556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165568u;
        // 0x16556c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165570u;
        goto label_165570;
    }
    ctx->pc = 0x165568u;
    {
        const bool branch_taken_0x165568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165568u;
        // 0x16556c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165568) {
            ctx->pc = 0x165578u;
            goto label_165578;
        }
    }
    ctx->pc = 0x165570u;
label_165570:
    // 0x165570: 0x26226494  addiu       $v0, $s1, 0x6494
    ctx->pc = 0x165570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25748));
label_165574:
    // 0x165574: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165578:
    // 0x165578: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16557c:
    // 0x16557c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165580:
    // 0x165580: 0x3e00008  jr          $ra
label_165584:
    if (ctx->pc == 0x165584u) {
        ctx->pc = 0x165584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165580u;
        // 0x165584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165588u;
        goto label_fallthrough_0x165580;
    }
    ctx->pc = 0x165580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165580u;
        // 0x165584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165580:
    ctx->pc = 0x165588u;
}
