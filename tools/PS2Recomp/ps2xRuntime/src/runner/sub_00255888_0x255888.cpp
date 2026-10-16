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

// Function: sub_00255888
// Address: 0x255888 - 0x2558b8
void sub_00255888_0x255888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255888_0x255888");
#endif

    ctx->pc = 0x255888u;

    // 0x255888: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25588c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x255890: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x255890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x255894: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x255894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x255898: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x255898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x25589c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25589cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2558a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2558a4: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x2558a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x2558a8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2558a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2558ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2558ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2558B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558ACu;
        // 0x2558b0: 0xaca4003c  sw          $a0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2558B4u;
    // 0x2558b4: 0x0  nop
    ctx->pc = 0x2558b4u;
    // NOP
    ctx->pc = 0x2558b8u;
}
