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

// Function: sub_0010ADC8
// Address: 0x10adc8 - 0x10adf8
void sub_0010ADC8_0x10adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADC8_0x10adc8");
#endif

    ctx->pc = 0x10adc8u;

    // 0x10adc8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10adcc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10add0: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x10add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
    // 0x10add4: 0x248442b0  addiu       $a0, $a0, 0x42B0
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17072));
    // 0x10add8: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x10add8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B42A8u));
    // 0x10addc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x10addcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B42ACu));
    // 0x10ade0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B42C8u));
    // 0x10ade4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x10ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B42CCu));
    // 0x10ade8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x10ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10adec: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x10adecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10adf0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADF0u;
        // 0x10adf4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADF8u;
}
