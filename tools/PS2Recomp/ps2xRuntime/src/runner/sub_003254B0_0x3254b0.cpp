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

// Function: sub_003254B0
// Address: 0x3254b0 - 0x3254c0
void sub_003254B0_0x3254b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003254B0_0x3254b0");
#endif

    ctx->pc = 0x3254b0u;

    // 0x3254b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3254b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3254b4: 0x80c84d0  j           func_321340
    ctx->pc = 0x3254B4u;
    ctx->pc = 0x3254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3254B4u;
    // 0x3254b8: 0x8c4475e4  lw          $a0, 0x75E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    sub_00321340_0x321340(rdram, ctx, runtime); return;
    ctx->pc = 0x3254BCu;
    // 0x3254bc: 0x0  nop
    ctx->pc = 0x3254bcu;
    // NOP
    ctx->pc = 0x3254c0u;
}
