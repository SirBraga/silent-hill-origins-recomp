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

// Function: sub_002A8EC0
// Address: 0x2a8ec0 - 0x2a8ed0
void sub_002A8EC0_0x2a8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8EC0_0x2a8ec0");
#endif

    ctx->pc = 0x2a8ec0u;

    // 0x2a8ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8ECCu;
    // 0x2a8ecc: 0x0  nop
    ctx->pc = 0x2a8eccu;
    // NOP
    ctx->pc = 0x2a8ed0u;
}
