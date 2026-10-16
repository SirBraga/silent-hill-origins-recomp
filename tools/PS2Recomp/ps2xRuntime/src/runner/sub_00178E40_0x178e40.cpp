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

// Function: sub_00178E40
// Address: 0x178e40 - 0x178e58
void sub_00178E40_0x178e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E40_0x178e40");
#endif

    ctx->pc = 0x178e40u;

    // 0x178e40: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x178e44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178e48: 0x3e00008  jr          $ra
    ctx->pc = 0x178E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E48u;
        // 0x178e4c: 0xac8200bc  sw          $v0, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E50u;
    // 0x178e50: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x178e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x178e54: 0x0  nop
    ctx->pc = 0x178e54u;
    // NOP
    ctx->pc = 0x178e58u;
}
