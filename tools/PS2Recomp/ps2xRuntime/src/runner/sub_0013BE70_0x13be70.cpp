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

// Function: sub_0013BE70
// Address: 0x13be70 - 0x13be90
void sub_0013BE70_0x13be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BE70_0x13be70");
#endif

    switch (ctx->pc) {
        case 0x13be84u: goto label_13be84;
        default: break;
    }

    ctx->pc = 0x13be70u;

    // 0x13be70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13be74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13be74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13be78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13be7c: 0xc04ed80  jal         func_13B600
    ctx->pc = 0x13BE7Cu;
    SET_GPR_U32(ctx, 31, 0x13BE84u);
    ctx->pc = 0x13BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE7Cu;
    // 0x13be80: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B600u, 0x13BE7Cu, 0x13BE84u)) {
        return;
    }
    ctx->pc = 0x13BE84u;
label_13be84:
    // 0x13be84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13be84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13be88: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE88u;
        // 0x13be8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE90u;
}
