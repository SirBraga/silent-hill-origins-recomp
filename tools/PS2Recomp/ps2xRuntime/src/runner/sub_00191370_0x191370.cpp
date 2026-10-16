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

// Function: sub_00191370
// Address: 0x191370 - 0x191380
void sub_00191370_0x191370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191370_0x191370");
#endif

    ctx->pc = 0x191370u;

    // 0x191370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191374: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x191374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x191378: 0x3e00008  jr          $ra
    ctx->pc = 0x191378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191378u;
        // 0x19137c: 0xac8200e4  sw          $v0, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191380u;
}
