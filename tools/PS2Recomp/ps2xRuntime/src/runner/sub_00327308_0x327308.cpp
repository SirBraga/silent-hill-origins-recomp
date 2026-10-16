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

// Function: sub_00327308
// Address: 0x327308 - 0x327310
void sub_00327308_0x327308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327308_0x327308");
#endif

    ctx->pc = 0x327308u;

    // 0x327308: 0x80ca1c8  j           func_328720
    ctx->pc = 0x327308u;
    ctx->pc = 0x328720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328720u, 0x327308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327310u;
}
