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

// Function: sub_003023E0
// Address: 0x3023e0 - 0x3023f0
void sub_003023E0_0x3023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003023E0_0x3023e0");
#endif

    ctx->pc = 0x3023e0u;

    // 0x3023e0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3023e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3023e4: 0x80bf75c  j           func_2FDD70
    ctx->pc = 0x3023E4u;
    ctx->pc = 0x3023E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023E4u;
    // 0x3023e8: 0x24a50a50  addiu       $a1, $a1, 0xA50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    sub_002FDD70_0x2fdd70(rdram, ctx, runtime); return;
    ctx->pc = 0x3023ECu;
    // 0x3023ec: 0x0  nop
    ctx->pc = 0x3023ecu;
    // NOP
    ctx->pc = 0x3023f0u;
}
