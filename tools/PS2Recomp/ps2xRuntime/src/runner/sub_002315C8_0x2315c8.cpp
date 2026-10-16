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

// Function: sub_002315C8
// Address: 0x2315c8 - 0x2315d8
void sub_002315C8_0x2315c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002315C8_0x2315c8");
#endif

    ctx->pc = 0x2315c8u;

    // 0x2315c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2315cc: 0xac243560  sw          $a0, 0x3560($at)
    ctx->pc = 0x2315ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B3560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3560u, _value); } while (0);
    // 0x2315d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2315D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315D0u;
        // 0x2315d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315D8u;
}
