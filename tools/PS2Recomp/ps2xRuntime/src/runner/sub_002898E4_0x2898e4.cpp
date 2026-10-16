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

// Function: sub_002898E4
// Address: 0x2898e4 - 0x2898f8
void sub_002898E4_0x2898e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002898E4_0x2898e4");
#endif

    switch (ctx->pc) {
        case 0x2898ecu: goto label_2898ec;
        default: break;
    }

    ctx->pc = 0x2898e4u;

    // 0x2898e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2898e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2898e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2898e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2898ec:
    // 0x2898ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2898ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898ECu;
        // 0x2898f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2898ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2898F4u;
    // 0x2898f4: 0x0  nop
    ctx->pc = 0x2898f4u;
    // NOP
    ctx->pc = 0x2898f8u;
}
