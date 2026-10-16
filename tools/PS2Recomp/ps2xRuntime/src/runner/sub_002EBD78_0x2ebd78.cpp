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

// Function: sub_002EBD78
// Address: 0x2ebd78 - 0x2ebd98
void sub_002EBD78_0x2ebd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBD78_0x2ebd78");
#endif

    switch (ctx->pc) {
        case 0x2ebd88u: goto label_2ebd88;
        default: break;
    }

    ctx->pc = 0x2ebd78u;

    // 0x2ebd78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ebd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ebd80: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD80u;
        // 0x2ebd84: 0xac4306a4  sw          $v1, 0x6A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD88u;
label_2ebd88:
    // 0x2ebd88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd8c: 0x8c4306a4  lw          $v1, 0x6A4($v0)
    ctx->pc = 0x2ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
    // 0x2ebd90: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD90u;
        // 0x2ebd94: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD98u;
}
