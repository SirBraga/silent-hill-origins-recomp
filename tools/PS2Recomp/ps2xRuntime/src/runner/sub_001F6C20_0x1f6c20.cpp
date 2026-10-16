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

// Function: sub_001F6C20
// Address: 0x1f6c20 - 0x1f6c28
void sub_001F6C20_0x1f6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6C20_0x1f6c20");
#endif

    ctx->pc = 0x1f6c20u;

    // 0x1f6c20: 0x807e10c  j           func_1F8430
    ctx->pc = 0x1F6C20u;
    ctx->pc = 0x1F8430u;
    sub_001F8430_0x1f8430(rdram, ctx, runtime); return;
    ctx->pc = 0x1F6C28u;
}
