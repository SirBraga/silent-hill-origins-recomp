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

// Function: sub_001D7608
// Address: 0x1d7608 - 0x1d7618
void sub_001D7608_0x1d7608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7608_0x1d7608");
#endif

    ctx->pc = 0x1d7608u;

    // 0x1d7608: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d760c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D760Cu;
        // 0x1d7610: 0xac449c80  sw          $a0, -0x6380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941824), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D760Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7614u;
    // 0x1d7614: 0x0  nop
    ctx->pc = 0x1d7614u;
    // NOP
    ctx->pc = 0x1d7618u;
}
