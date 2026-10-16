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

// Function: sub_001FC620
// Address: 0x1fc620 - 0x1fc640
void sub_001FC620_0x1fc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC620_0x1fc620");
#endif

    ctx->pc = 0x1fc620u;

    // 0x1fc620: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC620u;
        // 0x1fc624: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC628u;
    // 0x1fc628: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc62c: 0x0  nop
    ctx->pc = 0x1fc62cu;
    // NOP
    // 0x1fc630: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1fc630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1fc634: 0x0  nop
    ctx->pc = 0x1fc634u;
    // NOP
    // 0x1fc638: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc63c: 0x0  nop
    ctx->pc = 0x1fc63cu;
    // NOP
    ctx->pc = 0x1fc640u;
}
