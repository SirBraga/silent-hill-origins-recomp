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

// Function: sub_00126B2C
// Address: 0x126b2c - 0x126b34
void sub_00126B2C_0x126b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B2C_0x126b2c");
#endif

    switch (ctx->pc) {
        case 0x126b30u: goto label_126b30;
        default: break;
    }

    ctx->pc = 0x126b2cu;

    // 0x126b2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126b30:
    // 0x126b30: 0xae020f58  sw          $v0, 0xF58($s0)
    ctx->pc = 0x126b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3928), GPR_U32(ctx, 2));
    ctx->pc = 0x126b34u;
}
