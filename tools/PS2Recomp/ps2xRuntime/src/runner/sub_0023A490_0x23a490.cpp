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

// Function: sub_0023A490
// Address: 0x23a490 - 0x23a4a0
void sub_0023A490_0x23a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A490_0x23a490");
#endif

    ctx->pc = 0x23a490u;

    // 0x23a490: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23a494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A498u;
    {
        const bool branch_taken_0x23a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A498u;
        // 0x23a49c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a498) {
            ctx->pc = 0x23A4A4u;
            return;
        }
    }
    ctx->pc = 0x23A4A0u;
}
