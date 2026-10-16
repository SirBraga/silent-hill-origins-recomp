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

// Function: sub_00151E00
// Address: 0x151e00 - 0x151e10
void sub_00151E00_0x151e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E00_0x151e00");
#endif

    switch (ctx->pc) {
        case 0x151e08u: goto label_151e08;
        default: break;
    }

    ctx->pc = 0x151e00u;

    // 0x151e00: 0xc054884  jal         func_152210
    ctx->pc = 0x151E00u;
    SET_GPR_U32(ctx, 31, 0x151E08u);
    ctx->pc = 0x151E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E00u;
    // 0x151e04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152210u, 0x151E00u, 0x151E08u)) {
        return;
    }
    ctx->pc = 0x151E08u;
label_151e08:
    // 0x151e08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151E08u;
    {
        const bool branch_taken_0x151e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E08u;
        // 0x151e0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e08) {
            ctx->pc = 0x151E1Cu;
            return;
        }
    }
    ctx->pc = 0x151E10u;
}
