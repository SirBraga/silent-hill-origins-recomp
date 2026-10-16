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

// Function: sub_001F8400
// Address: 0x1f8400 - 0x1f8408
void sub_001F8400_0x1f8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8400_0x1f8400");
#endif

    ctx->pc = 0x1f8400u;

    // 0x1f8400: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8400u;
    {
        const bool branch_taken_0x1f8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8400) {
            ctx->pc = 0x1F83C0u;
            return;
        }
    }
    ctx->pc = 0x1F8408u;
}
