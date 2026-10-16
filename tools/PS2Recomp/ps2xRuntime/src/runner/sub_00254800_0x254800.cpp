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

// Function: sub_00254800
// Address: 0x254800 - 0x254820
void sub_00254800_0x254800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254800_0x254800");
#endif

    ctx->pc = 0x254800u;

    // 0x254800: 0x8f8385b8  lw          $v1, -0x7A48($gp)
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935992)));
    // 0x254804: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x254804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254808: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x254808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25480c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x25480cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x254810: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x254810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x254814: 0x3e00008  jr          $ra
    ctx->pc = 0x254814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254814u;
        // 0x254818: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25481Cu;
    // 0x25481c: 0x0  nop
    ctx->pc = 0x25481cu;
    // NOP
    ctx->pc = 0x254820u;
}
