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

// Function: sub_00252F40
// Address: 0x252f40 - 0x252f60
void sub_00252F40_0x252f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F40_0x252f40");
#endif

    ctx->pc = 0x252f40u;

    // 0x252f40: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x252f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x252f44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x252f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x252f48: 0x8ca3561c  lw          $v1, 0x561C($a1)
    ctx->pc = 0x252f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252f4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x252f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x252f50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x252f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252f54: 0x3e00008  jr          $ra
    ctx->pc = 0x252F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F54u;
        // 0x252f58: 0x5100a  movz        $v0, $zero, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252F5Cu;
    // 0x252f5c: 0x0  nop
    ctx->pc = 0x252f5cu;
    // NOP
    ctx->pc = 0x252f60u;
}
