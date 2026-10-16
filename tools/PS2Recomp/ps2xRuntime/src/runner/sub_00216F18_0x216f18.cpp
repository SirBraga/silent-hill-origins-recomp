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

// Function: sub_00216F18
// Address: 0x216f18 - 0x216f28
void sub_00216F18_0x216f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216F18_0x216f18");
#endif

    ctx->pc = 0x216f18u;

    // 0x216f18: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x216f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x216f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x216F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F1Cu;
        // 0x216f20: 0xac4402ac  sw          $a0, 0x2AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216F24u;
    // 0x216f24: 0x0  nop
    ctx->pc = 0x216f24u;
    // NOP
    ctx->pc = 0x216f28u;
}
