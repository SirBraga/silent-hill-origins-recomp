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

// Function: sub_001AB820
// Address: 0x1ab820 - 0x1ab858
void sub_001AB820_0x1ab820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB820_0x1ab820");
#endif

    switch (ctx->pc) {
        case 0x1ab830u: goto label_1ab830;
        default: break;
    }

    ctx->pc = 0x1ab820u;

    // 0x1ab820: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab82c: 0x0  nop
    ctx->pc = 0x1ab82cu;
    // NOP
label_1ab830:
    // 0x1ab830: 0x0  nop
    ctx->pc = 0x1ab830u;
    // NOP
    // 0x1ab834: 0x0  nop
    ctx->pc = 0x1ab834u;
    // NOP
    // 0x1ab838: 0x0  nop
    ctx->pc = 0x1ab838u;
    // NOP
    // 0x1ab83c: 0x0  nop
    ctx->pc = 0x1ab83cu;
    // NOP
    // 0x1ab840: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AB840u;
    {
        const bool branch_taken_0x1ab840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB840u;
        // 0x1ab844: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab840) {
            ctx->pc = 0x1AB830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab830;
        }
    }
    ctx->pc = 0x1AB848u;
    // 0x1ab848: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ab848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB84Cu;
        // 0x1ab850: 0xac800080  sw          $zero, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB854u;
    // 0x1ab854: 0x0  nop
    ctx->pc = 0x1ab854u;
    // NOP
    ctx->pc = 0x1ab858u;
}
