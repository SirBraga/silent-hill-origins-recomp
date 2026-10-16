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

// Function: sub_002558B8
// Address: 0x2558b8 - 0x2558e0
void sub_002558B8_0x2558b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002558B8_0x2558b8");
#endif

    ctx->pc = 0x2558b8u;

    // 0x2558b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2558b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558bc: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2558c0: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2558c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2558c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2558c8: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x2558c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2558cc: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2558d0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2558d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2558d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2558D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2558D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558D4u;
        // 0x2558d8: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2558DCu;
    // 0x2558dc: 0x0  nop
    ctx->pc = 0x2558dcu;
    // NOP
    ctx->pc = 0x2558e0u;
}
