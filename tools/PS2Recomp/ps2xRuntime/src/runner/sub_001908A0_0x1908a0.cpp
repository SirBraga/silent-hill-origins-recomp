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

// Function: sub_001908A0
// Address: 0x1908a0 - 0x1908b0
void sub_001908A0_0x1908a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001908A0_0x1908a0");
#endif

    switch (ctx->pc) {
        case 0x1908a8u: goto label_1908a8;
        default: break;
    }

    ctx->pc = 0x1908a0u;

    // 0x1908a0: 0xc064314  jal         func_190C50
    ctx->pc = 0x1908A0u;
    SET_GPR_U32(ctx, 31, 0x1908A8u);
    ctx->pc = 0x1908A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908A0u;
    // 0x1908a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190C50u, 0x1908A0u, 0x1908A8u)) {
        return;
    }
    ctx->pc = 0x1908A8u;
label_1908a8:
    // 0x1908a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1908A8u;
    {
        const bool branch_taken_0x1908a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908A8u;
        // 0x1908ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908a8) {
            ctx->pc = 0x1908BCu;
            return;
        }
    }
    ctx->pc = 0x1908B0u;
}
