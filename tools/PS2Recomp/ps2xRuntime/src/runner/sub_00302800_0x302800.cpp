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

// Function: sub_00302800
// Address: 0x302800 - 0x302808
void sub_00302800_0x302800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302800_0x302800");
#endif

    ctx->pc = 0x302800u;

    // 0x302800: 0x80c0180  j           func_300600
    ctx->pc = 0x302800u;
    ctx->pc = 0x300600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300600u, 0x302800u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x302808u;
}
