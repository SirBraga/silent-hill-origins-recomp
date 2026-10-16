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

// Function: sub_00151E10
// Address: 0x151e10 - 0x151e18
void sub_00151E10_0x151e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E10_0x151e10");
#endif

    ctx->pc = 0x151e10u;

    // 0x151e10: 0xc05489e  jal         func_152278
    ctx->pc = 0x151E10u;
    SET_GPR_U32(ctx, 31, 0x151E18u);
    ctx->pc = 0x151E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E10u;
    // 0x151e14: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152278u, 0x151E10u, 0x151E18u)) {
        return;
    }
    ctx->pc = 0x151E18u;
}
