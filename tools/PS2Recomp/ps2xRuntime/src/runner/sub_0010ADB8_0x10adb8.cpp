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

// Function: sub_0010ADB8
// Address: 0x10adb8 - 0x10adc8
void sub_0010ADB8_0x10adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADB8_0x10adb8");
#endif

    ctx->pc = 0x10adb8u;

    // 0x10adb8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10adbc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADBCu;
        // 0x10adc0: 0xac448288  sw          $a0, -0x7D78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADC4u;
    // 0x10adc4: 0x0  nop
    ctx->pc = 0x10adc4u;
    // NOP
    ctx->pc = 0x10adc8u;
}
