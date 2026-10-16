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

// Function: sub_001F3028
// Address: 0x1f3028 - 0x1f3040
void sub_001F3028_0x1f3028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3028_0x1f3028");
#endif

    ctx->pc = 0x1f3028u;

    // 0x1f3028: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f302c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f302cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f3030: 0xac44e974  sw          $a0, -0x168C($v0)
    ctx->pc = 0x1f3030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x33E974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E974u, _value); } while (0);
    // 0x1f3034: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3034u;
        // 0x1f3038: 0xac65e978  sw          $a1, -0x1688($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F303Cu;
    // 0x1f303c: 0x0  nop
    ctx->pc = 0x1f303cu;
    // NOP
    ctx->pc = 0x1f3040u;
}
