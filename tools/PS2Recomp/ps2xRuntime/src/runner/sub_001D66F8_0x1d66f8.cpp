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

// Function: sub_001D66F8
// Address: 0x1d66f8 - 0x1d6718
void sub_001D66F8_0x1d66f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D66F8_0x1d66f8");
#endif

    ctx->pc = 0x1d66f8u;

    // 0x1d66f8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1d66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d66fc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d6700: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1d6700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d6704: 0x8c628834  lw          $v0, -0x77CC($v1)
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936628)));
    // 0x1d6708: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d670c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D670Cu;
        // 0x1d6710: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6714u;
    // 0x1d6714: 0x0  nop
    ctx->pc = 0x1d6714u;
    // NOP
    ctx->pc = 0x1d6718u;
}
