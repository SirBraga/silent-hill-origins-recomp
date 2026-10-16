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

// Function: sub_00311560
// Address: 0x311560 - 0x311570
void sub_00311560_0x311560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311560_0x311560");
#endif

    ctx->pc = 0x311560u;

    // 0x311560: 0xc780836c  lwc1        $f0, -0x7C94($gp)
    ctx->pc = 0x311560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311564: 0x3e00008  jr          $ra
    ctx->pc = 0x311564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31156Cu;
    // 0x31156c: 0x0  nop
    ctx->pc = 0x31156cu;
    // NOP
    ctx->pc = 0x311570u;
}
