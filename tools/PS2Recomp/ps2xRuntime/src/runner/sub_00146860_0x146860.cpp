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

// Function: sub_00146860
// Address: 0x146860 - 0x146878
void sub_00146860_0x146860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146860_0x146860");
#endif

    ctx->pc = 0x146860u;

    // 0x146860: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146864: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x146864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x146868: 0xac448474  sw          $a0, -0x7B8C($v0)
    ctx->pc = 0x146868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338474u, _value); } while (0);
    // 0x14686c: 0x3e00008  jr          $ra
    ctx->pc = 0x14686Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14686Cu;
        // 0x146870: 0xac658478  sw          $a1, -0x7B88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935672), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14686Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146874u;
    // 0x146874: 0x0  nop
    ctx->pc = 0x146874u;
    // NOP
    ctx->pc = 0x146878u;
}
