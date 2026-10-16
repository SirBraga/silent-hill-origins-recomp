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

// Function: sub_00151D64
// Address: 0x151d64 - 0x151d74
void sub_00151D64_0x151d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D64_0x151d64");
#endif

    switch (ctx->pc) {
        case 0x151d6cu: goto label_151d6c;
        default: break;
    }

    ctx->pc = 0x151d64u;

    // 0x151d64: 0xc054886  jal         func_152218
    ctx->pc = 0x151D64u;
    SET_GPR_U32(ctx, 31, 0x151D6Cu);
    ctx->pc = 0x151D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D64u;
    // 0x151d68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152218u, 0x151D64u, 0x151D6Cu)) {
        return;
    }
    ctx->pc = 0x151D6Cu;
label_151d6c:
    // 0x151d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151D6Cu;
    {
        const bool branch_taken_0x151d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D6Cu;
        // 0x151d70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d6c) {
            ctx->pc = 0x151D80u;
            return;
        }
    }
    ctx->pc = 0x151D74u;
}
