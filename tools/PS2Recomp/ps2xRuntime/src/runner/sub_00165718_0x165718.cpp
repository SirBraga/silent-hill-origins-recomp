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

// Function: sub_00165718
// Address: 0x165718 - 0x165730
void sub_00165718_0x165718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165718_0x165718");
#endif

    ctx->pc = 0x165718u;

    // 0x165718: 0x90a20028  lbu         $v0, 0x28($a1)
    ctx->pc = 0x165718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x16571c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x16571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x165720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165728: 0x3e00008  jr          $ra
    ctx->pc = 0x165728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165728u;
        // 0x16572c: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165730u;
}
