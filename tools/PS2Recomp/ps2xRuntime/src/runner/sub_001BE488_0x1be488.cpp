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

// Function: sub_001BE488
// Address: 0x1be488 - 0x1be498
void sub_001BE488_0x1be488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE488_0x1be488");
#endif

    switch (ctx->pc) {
        case 0x1be490u: goto label_1be490;
        default: break;
    }

    ctx->pc = 0x1be488u;

    // 0x1be488: 0xc06f02a  jal         func_1BC0A8
    ctx->pc = 0x1BE488u;
    SET_GPR_U32(ctx, 31, 0x1BE490u);
    ctx->pc = 0x1BE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE488u;
    // 0x1be48c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC0A8u, 0x1BE488u, 0x1BE490u)) {
        return;
    }
    ctx->pc = 0x1BE490u;
label_1be490:
    // 0x1be490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE490u;
    {
        const bool branch_taken_0x1be490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE490u;
        // 0x1be494: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be490) {
            ctx->pc = 0x1BE4A4u;
            return;
        }
    }
    ctx->pc = 0x1BE498u;
}
