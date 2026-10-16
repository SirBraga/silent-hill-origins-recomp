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

// Function: sub_001390E8
// Address: 0x1390e8 - 0x139108
void sub_001390E8_0x1390e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001390E8_0x1390e8");
#endif

    ctx->pc = 0x1390e8u;

    // 0x1390e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1390e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1390ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1390f0: 0x2442e908  addiu       $v0, $v0, -0x16F8
    ctx->pc = 0x1390f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961416));
    // 0x1390f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1390f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1390f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1390f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1390fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1390FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390FCu;
        // 0x139100: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1390FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139104u;
    // 0x139104: 0x0  nop
    ctx->pc = 0x139104u;
    // NOP
    ctx->pc = 0x139108u;
}
