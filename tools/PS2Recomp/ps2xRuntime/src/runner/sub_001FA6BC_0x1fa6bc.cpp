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

// Function: sub_001FA6BC
// Address: 0x1fa6bc - 0x1fa6c4
void sub_001FA6BC_0x1fa6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA6BC_0x1fa6bc");
#endif

    ctx->pc = 0x1fa6bcu;

    // 0x1fa6bc: 0xc0c53aa  jal         func_314EA8
    ctx->pc = 0x1FA6BCu;
    SET_GPR_U32(ctx, 31, 0x1FA6C4u);
    ctx->pc = 0x314EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EA8u, 0x1FA6BCu, 0x1FA6C4u)) {
        return;
    }
    ctx->pc = 0x1FA6C4u;
}
