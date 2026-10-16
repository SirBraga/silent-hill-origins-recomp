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

// Function: sub_0028995C
// Address: 0x28995c - 0x28996c
void sub_0028995C_0x28995c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028995C_0x28995c");
#endif

    switch (ctx->pc) {
        case 0x289964u: goto label_289964;
        default: break;
    }

    ctx->pc = 0x28995cu;

    // 0x28995c: 0xc0a432a  jal         func_290CA8
    ctx->pc = 0x28995Cu;
    SET_GPR_U32(ctx, 31, 0x289964u);
    ctx->pc = 0x289960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28995Cu;
    // 0x289960: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290CA8u, 0x28995Cu, 0x289964u)) {
        return;
    }
    ctx->pc = 0x289964u;
label_289964:
    // 0x289964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289964u;
    {
        const bool branch_taken_0x289964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289964u;
        // 0x289968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289964) {
            ctx->pc = 0x289974u;
            return;
        }
    }
    ctx->pc = 0x28996Cu;
}
