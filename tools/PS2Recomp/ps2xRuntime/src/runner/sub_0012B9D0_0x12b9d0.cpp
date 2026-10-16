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

// Function: sub_0012B9D0
// Address: 0x12b9d0 - 0x12b9e0
void sub_0012B9D0_0x12b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B9D0_0x12b9d0");
#endif

    ctx->pc = 0x12b9d0u;

    // 0x12b9d0: 0x8c822aa8  lw          $v0, 0x2AA8($a0)
    ctx->pc = 0x12b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10920)));
    // 0x12b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9D4u;
        // 0x12b9d8: 0xc440004c  lwc1        $f0, 0x4C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B9DCu;
    // 0x12b9dc: 0x0  nop
    ctx->pc = 0x12b9dcu;
    // NOP
    ctx->pc = 0x12b9e0u;
}
