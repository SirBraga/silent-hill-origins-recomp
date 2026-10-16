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

// Function: sub_0029C6D0
// Address: 0x29c6d0 - 0x29c708
void sub_0029C6D0_0x29c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C6D0_0x29c6d0");
#endif

    ctx->pc = 0x29c6d0u;

    // 0x29c6d0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x29c6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c6d4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x29c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x29c6d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c6dc: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x29c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x29c6e0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x29c6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29c6e4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x29c6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x29c6e8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29c6ec: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x29c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x29c6f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x29c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x29c6f4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x29c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x29c6f8: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x29c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x29c6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6FCu;
        // 0x29c700: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C704u;
    // 0x29c704: 0x0  nop
    ctx->pc = 0x29c704u;
    // NOP
    ctx->pc = 0x29c708u;
}
