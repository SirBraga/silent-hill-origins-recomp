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

// Function: sub_0025E7D8
// Address: 0x25e7d8 - 0x25e7f8
void sub_0025E7D8_0x25e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E7D8_0x25e7d8");
#endif

    ctx->pc = 0x25e7d8u;

    // 0x25e7d8: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x25e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x25e7dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7E0u;
        // 0x25e7e4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E7E8u;
    // 0x25e7e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25e7ec: 0x0  nop
    ctx->pc = 0x25e7ecu;
    // NOP
    // 0x25e7f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25e7f4: 0x0  nop
    ctx->pc = 0x25e7f4u;
    // NOP
    ctx->pc = 0x25e7f8u;
}
