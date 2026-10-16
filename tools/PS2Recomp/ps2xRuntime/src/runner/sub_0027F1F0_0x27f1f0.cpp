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

// Function: sub_0027F1F0
// Address: 0x27f1f0 - 0x27f210
void sub_0027F1F0_0x27f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1F0_0x27f1f0");
#endif

    ctx->pc = 0x27f1f0u;

    // 0x27f1f0: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x27f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x27f1f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27f1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f1f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27f1fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x27f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x27f200: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x27f200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x27f204: 0x3e00008  jr          $ra
    ctx->pc = 0x27F204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F204u;
        // 0x27f208: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F20Cu;
    // 0x27f20c: 0x0  nop
    ctx->pc = 0x27f20cu;
    // NOP
    ctx->pc = 0x27f210u;
}
