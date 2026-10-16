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

// Function: sub_00151E18
// Address: 0x151e18 - 0x151e28
void sub_00151E18_0x151e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151E18_0x151e18");
#endif

    switch (ctx->pc) {
        case 0x151e1cu: goto label_151e1c;
        default: break;
    }

    ctx->pc = 0x151e18u;

    // 0x151e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151e1c:
    // 0x151e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x151E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E1Cu;
        // 0x151e20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E24u;
    // 0x151e24: 0x0  nop
    ctx->pc = 0x151e24u;
    // NOP
    ctx->pc = 0x151e28u;
}
