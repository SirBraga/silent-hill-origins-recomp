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

// Function: sub_0019FEB8
// Address: 0x19feb8 - 0x19ff10
void sub_0019FEB8_0x19feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FEB8_0x19feb8");
#endif

    ctx->pc = 0x19feb8u;

    // 0x19feb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19febc: 0xac800838  sw          $zero, 0x838($a0)
    ctx->pc = 0x19febcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2104), GPR_U32(ctx, 0));
    // 0x19fec0: 0xac820830  sw          $v0, 0x830($a0)
    ctx->pc = 0x19fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2096), GPR_U32(ctx, 2));
    // 0x19fec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19fec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fec8: 0xac80080c  sw          $zero, 0x80C($a0)
    ctx->pc = 0x19fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2060), GPR_U32(ctx, 0));
    // 0x19fecc: 0xac800810  sw          $zero, 0x810($a0)
    ctx->pc = 0x19feccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2064), GPR_U32(ctx, 0));
    // 0x19fed0: 0xac800814  sw          $zero, 0x814($a0)
    ctx->pc = 0x19fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2068), GPR_U32(ctx, 0));
    // 0x19fed4: 0xac800818  sw          $zero, 0x818($a0)
    ctx->pc = 0x19fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 0));
    // 0x19fed8: 0xac800820  sw          $zero, 0x820($a0)
    ctx->pc = 0x19fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 0));
    // 0x19fedc: 0xac800824  sw          $zero, 0x824($a0)
    ctx->pc = 0x19fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2084), GPR_U32(ctx, 0));
    // 0x19fee0: 0xac800828  sw          $zero, 0x828($a0)
    ctx->pc = 0x19fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 0));
    // 0x19fee4: 0xac80082c  sw          $zero, 0x82C($a0)
    ctx->pc = 0x19fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2092), GPR_U32(ctx, 0));
    // 0x19fee8: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x19fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x19feec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19fef0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19fef4: 0xac830838  sw          $v1, 0x838($a0)
    ctx->pc = 0x19fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2104), GPR_U32(ctx, 3));
    // 0x19fef8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19fefc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19ff00: 0xac860834  sw          $a2, 0x834($a0)
    ctx->pc = 0x19ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2100), GPR_U32(ctx, 6));
    // 0x19ff04: 0x3e00008  jr          $ra
    ctx->pc = 0x19FF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF04u;
        // 0x19ff08: 0xac83083c  sw          $v1, 0x83C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF0Cu;
    // 0x19ff0c: 0x0  nop
    ctx->pc = 0x19ff0cu;
    // NOP
    ctx->pc = 0x19ff10u;
}
