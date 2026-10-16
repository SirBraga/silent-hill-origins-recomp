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

// Function: sub_001F4CD0
// Address: 0x1f4cd0 - 0x1f4cf8
void sub_001F4CD0_0x1f4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4CD0_0x1f4cd0");
#endif

    switch (ctx->pc) {
        case 0x1f4ce8u: goto label_1f4ce8;
        default: break;
    }

    ctx->pc = 0x1f4cd0u;

    // 0x1f4cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4cd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4cdc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4ce0: 0xc07d43a  jal         func_1F50E8
    ctx->pc = 0x1F4CE0u;
    SET_GPR_U32(ctx, 31, 0x1F4CE8u);
    ctx->pc = 0x1F4CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CE0u;
    // 0x1f4ce4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F50E8u, 0x1F4CE0u, 0x1F4CE8u)) {
        return;
    }
    ctx->pc = 0x1F4CE8u;
label_1f4ce8:
    // 0x1f4ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CECu;
        // 0x1f4cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4CF4u;
    // 0x1f4cf4: 0x0  nop
    ctx->pc = 0x1f4cf4u;
    // NOP
    ctx->pc = 0x1f4cf8u;
}
