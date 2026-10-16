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

// Function: sub_00289644
// Address: 0x289644 - 0x289654
void sub_00289644_0x289644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289644_0x289644");
#endif

    switch (ctx->pc) {
        case 0x28964cu: goto label_28964c;
        default: break;
    }

    ctx->pc = 0x289644u;

    // 0x289644: 0xc0a439c  jal         func_290E70
    ctx->pc = 0x289644u;
    SET_GPR_U32(ctx, 31, 0x28964Cu);
    ctx->pc = 0x289648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289644u;
    // 0x289648: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290E70u, 0x289644u, 0x28964Cu)) {
        return;
    }
    ctx->pc = 0x28964Cu;
label_28964c:
    // 0x28964c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28964Cu;
    {
        const bool branch_taken_0x28964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28964Cu;
        // 0x289650: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28964c) {
            ctx->pc = 0x28965Cu;
            return;
        }
    }
    ctx->pc = 0x289654u;
}
