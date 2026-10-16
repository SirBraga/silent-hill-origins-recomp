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

// Function: sub_00151548
// Address: 0x151548 - 0x1515a8
void sub_00151548_0x151548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151548_0x151548");
#endif

    switch (ctx->pc) {
        case 0x151560u: goto label_151560;
        case 0x151580u: goto label_151580;
        default: break;
    }

    ctx->pc = 0x151548u;

    // 0x151548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15154c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151554: 0x249000dc  addiu       $s0, $a0, 0xDC
    ctx->pc = 0x151554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x151558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15155c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15155cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151560:
    // 0x151560: 0x2e220030  sltiu       $v0, $s1, 0x30
    ctx->pc = 0x151560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x151564: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x151564u;
    {
        const bool branch_taken_0x151564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151564) {
            ctx->pc = 0x151568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151564u;
            // 0x151568: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151588u;
            goto label_151588;
        }
    }
    ctx->pc = 0x15156Cu;
    // 0x15156c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151570: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151570u;
    {
        const bool branch_taken_0x151570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x151574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151570u;
        // 0x151574: 0xae00ff78  sw          $zero, -0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151570) {
            ctx->pc = 0x151584u;
            goto label_151584;
        }
    }
    ctx->pc = 0x151578u;
    // 0x151578: 0xc07bcb6  jal         func_1EF2D8
    ctx->pc = 0x151578u;
    SET_GPR_U32(ctx, 31, 0x151580u);
    ctx->pc = 0x15157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151578u;
    // 0x15157c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF2D8u, 0x151578u, 0x151580u)) {
        return;
    }
    ctx->pc = 0x151580u;
label_151580:
    // 0x151580: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x151580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_151584:
    // 0x151584: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_151588:
    // 0x151588: 0x2a220030  slti        $v0, $s1, 0x30
    ctx->pc = 0x151588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x15158c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15158Cu;
    {
        const bool branch_taken_0x15158c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15158Cu;
        // 0x151590: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15158c) {
            ctx->pc = 0x151560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151560;
        }
    }
    ctx->pc = 0x151594u;
    // 0x151594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15159c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1515a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515A0u;
        // 0x1515a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515A8u;
}
