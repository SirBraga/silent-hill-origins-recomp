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

// Function: sub_001F8388
// Address: 0x1f8388 - 0x1f8390
void sub_001F8388_0x1f8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8388_0x1f8388");
#endif

    ctx->pc = 0x1f8388u;

    // 0x1f8388: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1F8388u;
    {
        const bool branch_taken_0x1f8388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8388) {
            ctx->pc = 0x1F8350u;
            return;
        }
    }
    ctx->pc = 0x1F8390u;
}
