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

// Function: sub_00254F28
// Address: 0x254f28 - 0x254f40
void sub_00254F28_0x254f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F28_0x254f28");
#endif

    ctx->pc = 0x254f28u;

    // 0x254f28: 0xaf8485c4  sw          $a0, -0x7A3C($gp)
    ctx->pc = 0x254f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 4));
    // 0x254f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x254F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F2Cu;
        // 0x254f30: 0xaf8585c8  sw          $a1, -0x7A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F34u;
    // 0x254f34: 0x0  nop
    ctx->pc = 0x254f34u;
    // NOP
    // 0x254f38: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x254f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x254f3c: 0x0  nop
    ctx->pc = 0x254f3cu;
    // NOP
    ctx->pc = 0x254f40u;
}
