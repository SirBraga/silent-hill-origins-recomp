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

// Function: sub_00106AD8
// Address: 0x106ad8 - 0x106af8
void sub_00106AD8_0x106ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106AD8_0x106ad8");
#endif

    ctx->pc = 0x106ad8u;

    // 0x106ad8: 0x8c8204b8  lw          $v0, 0x4B8($a0)
    ctx->pc = 0x106ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1208)));
    // 0x106adc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106ae0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x106ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x106ae4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106AE4u;
    {
        const bool branch_taken_0x106ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AE4u;
        // 0x106ae8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae4) {
            ctx->pc = 0x106AF0u;
            goto label_106af0;
        }
    }
    ctx->pc = 0x106AECu;
    // 0x106aec: 0xac8204b8  sw          $v0, 0x4B8($a0)
    ctx->pc = 0x106aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 2));
label_106af0:
    // 0x106af0: 0x3e00008  jr          $ra
    ctx->pc = 0x106AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106AF8u;
}
