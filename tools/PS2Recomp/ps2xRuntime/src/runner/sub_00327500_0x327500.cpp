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

// Function: sub_00327500
// Address: 0x327500 - 0x327510
void sub_00327500_0x327500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327500_0x327500");
#endif

    ctx->pc = 0x327500u;

    // 0x327500: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x327500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327504: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x327504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x327508: 0x80c9d20  j           func_327480
    ctx->pc = 0x327508u;
    ctx->pc = 0x32750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327508u;
    // 0x32750c: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327480u;
    entry_327480_0x3274f0(rdram, ctx, runtime); return;
    ctx->pc = 0x327510u;
}
