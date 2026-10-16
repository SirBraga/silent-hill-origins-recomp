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

// Function: sub_001F63A0
// Address: 0x1f63a0 - 0x1f63a8
void sub_001F63A0_0x1f63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F63A0_0x1f63a0");
#endif

    ctx->pc = 0x1f63a0u;

    // 0x1f63a0: 0x80c9cc4  j           func_327310
    ctx->pc = 0x1F63A0u;
    ctx->pc = 0x1F63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63A0u;
    // 0x1f63a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327310u;
    sub_00327310_0x327310(rdram, ctx, runtime); return;
    ctx->pc = 0x1F63A8u;
}
