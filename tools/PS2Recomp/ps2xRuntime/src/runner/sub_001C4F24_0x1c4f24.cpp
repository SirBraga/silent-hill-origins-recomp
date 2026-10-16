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

// Function: sub_001C4F24
// Address: 0x1c4f24 - 0x1c4f34
void sub_001C4F24_0x1c4f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4F24_0x1c4f24");
#endif

    switch (ctx->pc) {
        case 0x1c4f2cu: goto label_1c4f2c;
        default: break;
    }

    ctx->pc = 0x1c4f24u;

    // 0x1c4f24: 0xc05fe10  jal         func_17F840
    ctx->pc = 0x1C4F24u;
    SET_GPR_U32(ctx, 31, 0x1C4F2Cu);
    ctx->pc = 0x1C4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F24u;
    // 0x1c4f28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F840u, 0x1C4F24u, 0x1C4F2Cu)) {
        return;
    }
    ctx->pc = 0x1C4F2Cu;
label_1c4f2c:
    // 0x1c4f2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F2Cu;
        // 0x1c4f30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F34u;
}
