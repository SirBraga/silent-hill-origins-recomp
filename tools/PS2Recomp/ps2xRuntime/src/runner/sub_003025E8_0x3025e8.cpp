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

// Function: sub_003025E8
// Address: 0x3025e8 - 0x3025f8
void sub_003025E8_0x3025e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003025E8_0x3025e8");
#endif

    ctx->pc = 0x3025e8u;

    // 0x3025e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3025ec: 0x80bf75c  j           func_2FDD70
    ctx->pc = 0x3025ECu;
    ctx->pc = 0x3025F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025ECu;
    // 0x3025f0: 0x24a50aa0  addiu       $a1, $a1, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    sub_002FDD70_0x2fdd70(rdram, ctx, runtime); return;
    ctx->pc = 0x3025F4u;
    // 0x3025f4: 0x0  nop
    ctx->pc = 0x3025f4u;
    // NOP
    ctx->pc = 0x3025f8u;
}
