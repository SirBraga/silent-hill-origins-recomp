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

// Function: sub_001ABFC8
// Address: 0x1abfc8 - 0x1abfe0
void sub_001ABFC8_0x1abfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABFC8_0x1abfc8");
#endif

    ctx->pc = 0x1abfc8u;

    // 0x1abfc8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1abfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1abfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFCCu;
        // 0x1abfd0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABFD4u;
    // 0x1abfd4: 0x0  nop
    ctx->pc = 0x1abfd4u;
    // NOP
    // 0x1abfd8: 0xac801078  sw          $zero, 0x1078($a0)
    ctx->pc = 0x1abfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4216), GPR_U32(ctx, 0));
    // 0x1abfdc: 0x0  nop
    ctx->pc = 0x1abfdcu;
    // NOP
    ctx->pc = 0x1abfe0u;
}
