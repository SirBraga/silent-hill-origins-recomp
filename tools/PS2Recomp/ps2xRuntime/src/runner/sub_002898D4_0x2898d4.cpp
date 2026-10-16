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

// Function: sub_002898D4
// Address: 0x2898d4 - 0x2898e4
void sub_002898D4_0x2898d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002898D4_0x2898d4");
#endif

    switch (ctx->pc) {
        case 0x2898dcu: goto label_2898dc;
        default: break;
    }

    ctx->pc = 0x2898d4u;

    // 0x2898d4: 0xc0a43b4  jal         func_290ED0
    ctx->pc = 0x2898D4u;
    SET_GPR_U32(ctx, 31, 0x2898DCu);
    ctx->pc = 0x2898D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898D4u;
    // 0x2898d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290ED0u, 0x2898D4u, 0x2898DCu)) {
        return;
    }
    ctx->pc = 0x2898DCu;
label_2898dc:
    // 0x2898dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2898DCu;
    {
        const bool branch_taken_0x2898dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898DCu;
        // 0x2898e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898dc) {
            ctx->pc = 0x2898ECu;
            return;
        }
    }
    ctx->pc = 0x2898E4u;
}
