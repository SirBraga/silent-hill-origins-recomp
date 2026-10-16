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

// Function: sub_001F9408
// Address: 0x1f9408 - 0x1f9418
void sub_001F9408_0x1f9408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9408_0x1f9408");
#endif

    ctx->pc = 0x1f9408u;

    // 0x1f9408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f940c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9410: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F9410u;
    SET_GPR_U32(ctx, 31, 0x1F9418u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F9410u, 0x1F9418u)) {
        return;
    }
    ctx->pc = 0x1F9418u;
}
