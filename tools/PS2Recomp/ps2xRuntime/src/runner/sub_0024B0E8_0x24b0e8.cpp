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

// Function: sub_0024B0E8
// Address: 0x24b0e8 - 0x24b108
void sub_0024B0E8_0x24b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B0E8_0x24b0e8");
#endif

    ctx->pc = 0x24b0e8u;

    // 0x24b0e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x24b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x24b0ec: 0x8ca53f60  lw          $a1, 0x3F60($a1)
    ctx->pc = 0x24b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b0f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x24b0f4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x24b0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24b100: 0x3e00008  jr          $ra
    ctx->pc = 0x24B100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B100u;
        // 0x24b104: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B108u;
}
