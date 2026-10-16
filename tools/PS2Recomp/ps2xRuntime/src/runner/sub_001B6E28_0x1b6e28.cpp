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

// Function: sub_001B6E28
// Address: 0x1b6e28 - 0x1b6e38
void sub_001B6E28_0x1b6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E28_0x1b6e28");
#endif

    ctx->pc = 0x1b6e28u;

    // 0x1b6e28: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x1b6e28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1b6e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E2Cu;
        // 0x1b6e30: 0xe48c0010  swc1        $f12, 0x10($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E34u;
    // 0x1b6e34: 0x0  nop
    ctx->pc = 0x1b6e34u;
    // NOP
    ctx->pc = 0x1b6e38u;
}
