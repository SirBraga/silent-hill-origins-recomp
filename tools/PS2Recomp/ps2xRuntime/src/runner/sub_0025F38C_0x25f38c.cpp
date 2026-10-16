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

// Function: sub_0025F38C
// Address: 0x25f38c - 0x25f390
void sub_0025F38C_0x25f38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F38C_0x25f38c");
#endif

    ctx->pc = 0x25f38cu;

    // 0x25f38c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25f38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25f390u;
}
