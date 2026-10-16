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

// Function: sub_001CF4E0
// Address: 0x1cf4e0 - 0x1cf598
void sub_001CF4E0_0x1cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF4E0_0x1cf4e0");
#endif

    switch (ctx->pc) {
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf580u: goto label_1cf580;
        default: break;
    }

    ctx->pc = 0x1cf4e0u;

    // 0x1cf4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf4e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf4f4: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CF4F4u;
    SET_GPR_U32(ctx, 31, 0x1CF4FCu);
    ctx->pc = 0x1CF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4F4u;
    // 0x1cf4f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CF4F4u, 0x1CF4FCu)) {
        return;
    }
    ctx->pc = 0x1CF4FCu;
label_1cf4fc:
    // 0x1cf4fc: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1cf500: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF500u;
    {
        const bool branch_taken_0x1cf500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf500) {
            ctx->pc = 0x1CF504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF500u;
            // 0x1cf504: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF538u;
            goto label_1cf538;
        }
    }
    ctx->pc = 0x1CF508u;
    // 0x1cf508: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CF508u;
    SET_GPR_U32(ctx, 31, 0x1CF510u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CF508u, 0x1CF510u)) {
        return;
    }
    ctx->pc = 0x1CF510u;
label_1cf510:
    // 0x1cf510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf514: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF514u;
    {
        const bool branch_taken_0x1cf514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF514u;
        // 0x1cf518: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf514) {
            ctx->pc = 0x1CF534u;
            goto label_1cf534;
        }
    }
    ctx->pc = 0x1CF51Cu;
    // 0x1cf51c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF51Cu;
    {
        const bool branch_taken_0x1cf51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF51Cu;
        // 0x1cf520: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf51c) {
            ctx->pc = 0x1CF52Cu;
            goto label_1cf52c;
        }
    }
    ctx->pc = 0x1CF524u;
    // 0x1cf524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF524u;
    {
        const bool branch_taken_0x1cf524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF524u;
        // 0x1cf528: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf524) {
            ctx->pc = 0x1CF530u;
            goto label_1cf530;
        }
    }
    ctx->pc = 0x1CF52Cu;
label_1cf52c:
    // 0x1cf52c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cf530:
    // 0x1cf530: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cf530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cf534:
    // 0x1cf534: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1cf538:
    // 0x1cf538: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF538u;
    {
        const bool branch_taken_0x1cf538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf538) {
            ctx->pc = 0x1CF53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF538u;
            // 0x1cf53c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF570u;
            goto label_1cf570;
        }
    }
    ctx->pc = 0x1CF540u;
    // 0x1cf540: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CF540u;
    SET_GPR_U32(ctx, 31, 0x1CF548u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CF540u, 0x1CF548u)) {
        return;
    }
    ctx->pc = 0x1CF548u;
label_1cf548:
    // 0x1cf548: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf54c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF54Cu;
        // 0x1cf550: 0xae030274  sw          $v1, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CF56Cu;
            goto label_1cf56c;
        }
    }
    ctx->pc = 0x1CF554u;
    // 0x1cf554: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF554u;
    {
        const bool branch_taken_0x1cf554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF554u;
        // 0x1cf558: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf554) {
            ctx->pc = 0x1CF564u;
            goto label_1cf564;
        }
    }
    ctx->pc = 0x1CF55Cu;
    // 0x1cf55c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF55Cu;
    {
        const bool branch_taken_0x1cf55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF55Cu;
        // 0x1cf560: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf55c) {
            ctx->pc = 0x1CF568u;
            goto label_1cf568;
        }
    }
    ctx->pc = 0x1CF564u;
label_1cf564:
    // 0x1cf564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cf568:
    // 0x1cf568: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cf568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cf56c:
    // 0x1cf56c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cf570:
    // 0x1cf570: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF570u;
    {
        const bool branch_taken_0x1cf570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF570u;
        // 0x1cf574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf570) {
            ctx->pc = 0x1CF584u;
            goto label_1cf584;
        }
    }
    ctx->pc = 0x1CF578u;
    // 0x1cf578: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CF578u;
    SET_GPR_U32(ctx, 31, 0x1CF580u);
    ctx->pc = 0x1CF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF578u;
    // 0x1cf57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CF578u, 0x1CF580u)) {
        return;
    }
    ctx->pc = 0x1CF580u;
label_1cf580:
    // 0x1cf580: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cf580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cf584:
    // 0x1cf584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF58Cu;
        // 0x1cf590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF594u;
    // 0x1cf594: 0x0  nop
    ctx->pc = 0x1cf594u;
    // NOP
    ctx->pc = 0x1cf598u;
}
