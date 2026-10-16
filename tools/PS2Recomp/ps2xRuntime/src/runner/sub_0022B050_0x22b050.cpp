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

// Function: sub_0022B050
// Address: 0x22b050 - 0x22b070
void sub_0022B050_0x22b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B050_0x22b050");
#endif

    ctx->pc = 0x22b050u;

    // 0x22b050: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22b054: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b054u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA0u));
    // 0x22b058: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22b058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22b05c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x22b060: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22b064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b068: 0x3e00008  jr          $ra
    ctx->pc = 0x22B068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B068u;
        // 0x22b06c: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B070u;
}
