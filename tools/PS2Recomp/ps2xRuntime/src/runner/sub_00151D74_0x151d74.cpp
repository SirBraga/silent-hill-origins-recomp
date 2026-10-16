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

// Function: sub_00151D74
// Address: 0x151d74 - 0x151d7c
void sub_00151D74_0x151d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D74_0x151d74");
#endif

    ctx->pc = 0x151d74u;

    // 0x151d74: 0xc0548a0  jal         func_152280
    ctx->pc = 0x151D74u;
    SET_GPR_U32(ctx, 31, 0x151D7Cu);
    ctx->pc = 0x151D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D74u;
    // 0x151d78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152280u, 0x151D74u, 0x151D7Cu)) {
        return;
    }
    ctx->pc = 0x151D7Cu;
}
