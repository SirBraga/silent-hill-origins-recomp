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

// Function: sub_001F830C
// Address: 0x1f830c - 0x1f8314
void sub_001F830C_0x1f830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F830C_0x1f830c");
#endif

    ctx->pc = 0x1f830cu;

    // 0x1f830c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F830Cu;
    {
        const bool branch_taken_0x1f830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f830c) {
            ctx->pc = 0x1F82C0u;
            return;
        }
    }
    ctx->pc = 0x1F8314u;
}
