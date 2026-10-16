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

// Function: sub_002D6060
// Address: 0x2d6060 - 0x2d6080
void sub_002D6060_0x2d6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6060_0x2d6060");
#endif

    switch (ctx->pc) {
        case 0x2d6070u: goto label_2d6070;
        default: break;
    }

    ctx->pc = 0x2d6060u;

    // 0x2d6060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6068: 0xc0b5a3a  jal         func_2D68E8
    ctx->pc = 0x2D6068u;
    SET_GPR_U32(ctx, 31, 0x2D6070u);
    ctx->pc = 0x2D606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6068u;
    // 0x2d606c: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D68E8u, 0x2D6068u, 0x2D6070u)) {
        return;
    }
    ctx->pc = 0x2D6070u;
label_2d6070:
    // 0x2d6070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6078: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6078u;
        // 0x2d607c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6080u;
}
