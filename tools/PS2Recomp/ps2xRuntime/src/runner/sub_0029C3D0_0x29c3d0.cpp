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

// Function: sub_0029C3D0
// Address: 0x29c3d0 - 0x29c3e0
void sub_0029C3D0_0x29c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C3D0_0x29c3d0");
#endif

    ctx->pc = 0x29c3d0u;

    // 0x29c3d0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29c3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29c3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3D4u;
        // 0x29c3d8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C3DCu;
    // 0x29c3dc: 0x0  nop
    ctx->pc = 0x29c3dcu;
    // NOP
    ctx->pc = 0x29c3e0u;
}
