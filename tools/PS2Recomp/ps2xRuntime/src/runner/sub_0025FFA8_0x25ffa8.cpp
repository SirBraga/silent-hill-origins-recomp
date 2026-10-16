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

// Function: sub_0025FFA8
// Address: 0x25ffa8 - 0x25ffc8
void sub_0025FFA8_0x25ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FFA8_0x25ffa8");
#endif

    ctx->pc = 0x25ffa8u;

    // 0x25ffa8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x25ffac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x25ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x25ffb0: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x25ffb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ffb4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x25ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x25ffb8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x25ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x25ffbc: 0x3e00008  jr          $ra
    ctx->pc = 0x25FFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFBCu;
        // 0x25ffc0: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FFC4u;
    // 0x25ffc4: 0x0  nop
    ctx->pc = 0x25ffc4u;
    // NOP
    ctx->pc = 0x25ffc8u;
}
