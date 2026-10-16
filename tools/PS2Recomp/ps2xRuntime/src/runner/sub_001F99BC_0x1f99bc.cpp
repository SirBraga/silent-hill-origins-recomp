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

// Function: sub_001F99BC
// Address: 0x1f99bc - 0x1f99c8
void sub_001F99BC_0x1f99bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99BC_0x1f99bc");
#endif

    ctx->pc = 0x1f99bcu;

    // 0x1f99bc: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
    // 0x1f99c0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F99C0u;
    {
        const bool branch_taken_0x1f99c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99C0u;
        // 0x1f99c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99c0) {
            ctx->pc = 0x1F9980u;
            return;
        }
    }
    ctx->pc = 0x1F99C8u;
}
