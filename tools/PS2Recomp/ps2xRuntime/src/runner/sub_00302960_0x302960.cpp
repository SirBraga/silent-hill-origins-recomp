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

// Function: sub_00302960
// Address: 0x302960 - 0x302968
void sub_00302960_0x302960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302960_0x302960");
#endif

    ctx->pc = 0x302960u;

    // 0x302960: 0x80c0a00  j           func_302800
    ctx->pc = 0x302960u;
    ctx->pc = 0x302964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302960u;
    // 0x302964: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    sub_00302800_0x302800(rdram, ctx, runtime); return;
    ctx->pc = 0x302968u;
}
