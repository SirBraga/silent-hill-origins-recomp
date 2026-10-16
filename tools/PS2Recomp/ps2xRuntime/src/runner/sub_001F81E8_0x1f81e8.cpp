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

// Function: sub_001F81E8
// Address: 0x1f81e8 - 0x1f81f0
void sub_001F81E8_0x1f81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F81E8_0x1f81e8");
#endif

    ctx->pc = 0x1f81e8u;

    // 0x1f81e8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1F81E8u;
    {
        const bool branch_taken_0x1f81e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f81e8) {
            ctx->pc = 0x1F81B0u;
            return;
        }
    }
    ctx->pc = 0x1F81F0u;
}
