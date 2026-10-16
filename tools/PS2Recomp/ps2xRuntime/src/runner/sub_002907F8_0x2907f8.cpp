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

// Function: sub_002907F8
// Address: 0x2907f8 - 0x290800
void sub_002907F8_0x2907f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002907F8_0x2907f8");
#endif

    ctx->pc = 0x2907f8u;

    // 0x2907f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2907f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2907fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2907fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x290800u;
}
