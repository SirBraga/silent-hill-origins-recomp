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

// Function: sub_00126B24
// Address: 0x126b24 - 0x126b2c
void sub_00126B24_0x126b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B24_0x126b24");
#endif

    ctx->pc = 0x126b24u;

    // 0x126b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126B24u;
    {
        const bool branch_taken_0x126b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B24u;
        // 0x126b28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b24) {
            ctx->pc = 0x126B30u;
            return;
        }
    }
    ctx->pc = 0x126B2Cu;
}
