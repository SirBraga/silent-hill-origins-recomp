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

// Function: sub_001C7C30
// Address: 0x1c7c30 - 0x1c7c50
void sub_001C7C30_0x1c7c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7C30_0x1c7c30");
#endif

    ctx->pc = 0x1c7c30u;

    // 0x1c7c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7c34: 0xac8602ac  sw          $a2, 0x2AC($a0)
    ctx->pc = 0x1c7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 6));
    // 0x1c7c38: 0xac8202a4  sw          $v0, 0x2A4($a0)
    ctx->pc = 0x1c7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 2));
    // 0x1c7c3c: 0xac8502a8  sw          $a1, 0x2A8($a0)
    ctx->pc = 0x1c7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 680), GPR_U32(ctx, 5));
    // 0x1c7c40: 0xac8002b0  sw          $zero, 0x2B0($a0)
    ctx->pc = 0x1c7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 0));
    // 0x1c7c44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C44u;
        // 0x1c7c48: 0xac8002b8  sw          $zero, 0x2B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7C4Cu;
    // 0x1c7c4c: 0x0  nop
    ctx->pc = 0x1c7c4cu;
    // NOP
    ctx->pc = 0x1c7c50u;
}
