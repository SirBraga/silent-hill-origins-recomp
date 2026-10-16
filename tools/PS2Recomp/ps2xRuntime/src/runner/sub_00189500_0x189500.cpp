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

// Function: sub_00189500
// Address: 0x189500 - 0x1895a0
void sub_00189500_0x189500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189500_0x189500");
#endif

    switch (ctx->pc) {
        case 0x18952cu: goto label_18952c;
        case 0x189540u: goto label_189540;
        case 0x189554u: goto label_189554;
        default: break;
    }

    ctx->pc = 0x189500u;

    // 0x189500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189508: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x189508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18950c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18950cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189514: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x189514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x189518: 0x8e5100b0  lw          $s1, 0xB0($s2)
    ctx->pc = 0x189518u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x18951c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18951Cu;
    {
        const bool branch_taken_0x18951c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x189520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18951Cu;
        // 0x189520: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18951c) {
            ctx->pc = 0x189580u;
            goto label_189580;
        }
    }
    ctx->pc = 0x189524u;
    // 0x189524: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x189524u;
    SET_GPR_U32(ctx, 31, 0x18952Cu);
    ctx->pc = 0x189528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189524u;
    // 0x189528: 0x8c508ac4  lw          $s0, -0x753C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x189524u, 0x18952Cu)) {
        return;
    }
    ctx->pc = 0x18952Cu;
label_18952c:
    // 0x18952c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18952Cu;
    {
        const bool branch_taken_0x18952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18952Cu;
        // 0x189530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18952c) {
            ctx->pc = 0x18955Cu;
            goto label_18955c;
        }
    }
    ctx->pc = 0x189534u;
    // 0x189534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189538: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x189538u;
    SET_GPR_U32(ctx, 31, 0x189540u);
    ctx->pc = 0x18953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189538u;
    // 0x18953c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x189538u, 0x189540u)) {
        return;
    }
    ctx->pc = 0x189540u;
label_189540:
    // 0x189540: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189540u;
    {
        const bool branch_taken_0x189540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189540u;
        // 0x189544: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189540) {
            ctx->pc = 0x18955Cu;
            goto label_18955c;
        }
    }
    ctx->pc = 0x189548u;
    // 0x189548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18954c: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x18954Cu;
    SET_GPR_U32(ctx, 31, 0x189554u);
    ctx->pc = 0x189550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18954Cu;
    // 0x189550: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x18954Cu, 0x189554u)) {
        return;
    }
    ctx->pc = 0x189554u;
label_189554:
    // 0x189554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189554u;
    {
        const bool branch_taken_0x189554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189554u;
        // 0x189558: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189554) {
            ctx->pc = 0x189560u;
            goto label_189560;
        }
    }
    ctx->pc = 0x18955Cu;
label_18955c:
    // 0x18955c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189560:
    // 0x189560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189560u;
    {
        const bool branch_taken_0x189560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189560u;
        // 0x189564: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189560) {
            ctx->pc = 0x189578u;
            goto label_189578;
        }
    }
    ctx->pc = 0x189568u;
    // 0x189568: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x189568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x18956c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x18956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x189570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189570u;
    {
        const bool branch_taken_0x189570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189570u;
        // 0x189574: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189570) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x189578u;
label_189578:
    // 0x189578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189578u;
    {
        const bool branch_taken_0x189578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189578u;
        // 0x18957c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189578) {
            ctx->pc = 0x189584u;
            goto label_189584;
        }
    }
    ctx->pc = 0x189580u;
label_189580:
    // 0x189580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189584:
    // 0x189584: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x189584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189588: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x189588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18958c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18958cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189594: 0x3e00008  jr          $ra
    ctx->pc = 0x189594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189594u;
        // 0x189598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18959Cu;
    // 0x18959c: 0x0  nop
    ctx->pc = 0x18959cu;
    // NOP
    ctx->pc = 0x1895a0u;
}
