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

// Function: sub_00206058
// Address: 0x206058 - 0x206068
void sub_00206058_0x206058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206058_0x206058");
#endif

    ctx->pc = 0x206058u;

    // 0x206058: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x206058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x20605c: 0x3e00008  jr          $ra
    ctx->pc = 0x20605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20605Cu;
        // 0x206060: 0x8c620290  lw          $v0, 0x290($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206064u;
    // 0x206064: 0x0  nop
    ctx->pc = 0x206064u;
    // NOP
    ctx->pc = 0x206068u;
}
