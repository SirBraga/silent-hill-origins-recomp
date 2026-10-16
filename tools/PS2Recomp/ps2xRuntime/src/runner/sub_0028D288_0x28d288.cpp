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

// Function: sub_0028D288
// Address: 0x28d288 - 0x28d2b0
void sub_0028D288_0x28d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D288_0x28d288");
#endif

    ctx->pc = 0x28d288u;

    // 0x28d288: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28d28c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28d290: 0x3e00008  jr          $ra
    ctx->pc = 0x28D290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D290u;
        // 0x28d294: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D298u;
    // 0x28d298: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28d298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28d29c: 0x0  nop
    ctx->pc = 0x28d29cu;
    // NOP
    // 0x28d2a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28d2a4: 0x0  nop
    ctx->pc = 0x28d2a4u;
    // NOP
    // 0x28d2a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28d2ac: 0x0  nop
    ctx->pc = 0x28d2acu;
    // NOP
    ctx->pc = 0x28d2b0u;
}
