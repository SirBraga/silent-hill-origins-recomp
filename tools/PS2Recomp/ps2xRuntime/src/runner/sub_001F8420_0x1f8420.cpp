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

// Function: sub_001F8420
// Address: 0x1f8420 - 0x1f8430
void sub_001F8420_0x1f8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8420_0x1f8420");
#endif

    ctx->pc = 0x1f8420u;

    // 0x1f8420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8428: 0xc0c53aa  jal         func_314EA8
    ctx->pc = 0x1F8428u;
    SET_GPR_U32(ctx, 31, 0x1F8430u);
    ctx->pc = 0x314EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EA8u, 0x1F8428u, 0x1F8430u)) {
        return;
    }
    ctx->pc = 0x1F8430u;
}
