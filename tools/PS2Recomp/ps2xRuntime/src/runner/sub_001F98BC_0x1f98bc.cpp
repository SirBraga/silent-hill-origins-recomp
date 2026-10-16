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

// Function: sub_001F98BC
// Address: 0x1f98bc - 0x1f98c8
void sub_001F98BC_0x1f98bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98BC_0x1f98bc");
#endif

    switch (ctx->pc) {
        case 0x1f98c4u: goto label_1f98c4;
        default: break;
    }

    ctx->pc = 0x1f98bcu;

    // 0x1f98bc: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F98BCu;
    SET_GPR_U32(ctx, 31, 0x1F98C4u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F98BCu, 0x1F98C4u)) {
        return;
    }
    ctx->pc = 0x1F98C4u;
label_1f98c4:
    // 0x1f98c4: 0x0  nop
    ctx->pc = 0x1f98c4u;
    // NOP
    ctx->pc = 0x1f98c8u;
}
