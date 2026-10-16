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

// Function: sub_003274F0
// Address: 0x3274f0 - 0x327500
void sub_003274F0_0x3274f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003274F0_0x3274f0");
#endif

    ctx->pc = 0x3274f0u;

    // 0x3274f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3274f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274f4: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x3274f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x3274f8: 0x80c9d20  j           func_327480
    ctx->pc = 0x3274F8u;
    ctx->pc = 0x3274FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274F8u;
    // 0x3274fc: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327480u;
    entry_327480_0x3274f0(rdram, ctx, runtime); return;
    ctx->pc = 0x327500u;
}
