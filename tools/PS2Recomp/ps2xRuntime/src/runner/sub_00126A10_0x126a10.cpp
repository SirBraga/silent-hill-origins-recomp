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

// Function: sub_00126A10
// Address: 0x126a10 - 0x126a18
void sub_00126A10_0x126a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A10_0x126a10");
#endif

    ctx->pc = 0x126a10u;

    // 0x126a10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x126a14: 0xaca20f58  sw          $v0, 0xF58($a1)
    ctx->pc = 0x126a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3928), GPR_U32(ctx, 2));
    ctx->pc = 0x126a18u;
}
