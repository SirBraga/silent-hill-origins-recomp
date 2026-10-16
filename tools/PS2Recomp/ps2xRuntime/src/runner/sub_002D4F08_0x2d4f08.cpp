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

// Function: sub_002D4F08
// Address: 0x2d4f08 - 0x2d4f20
void sub_002D4F08_0x2d4f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4F08_0x2d4f08");
#endif

    ctx->pc = 0x2d4f08u;

    // 0x2d4f08: 0x4a0062f8  vcallms     0xC58
    ctx->pc = 0x2d4f08u;
    {     ctx->vu0_tpc = 0xC58;     runtime->executeVU0Microprogram(rdram, ctx, 0xC58); }
    // 0x2d4f0c: 0x4a0002ff  vnop
    ctx->pc = 0x2d4f0cu;
    // NOP operation, no action needed for VU0
    // 0x2d4f10: 0xf88d0000  sqc2        $vf13, 0x0($a0)
    ctx->pc = 0x2d4f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2d4f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F14u;
        // 0x2d4f18: 0xf8ac0000  sqc2        $vf12, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4F1Cu;
    // 0x2d4f1c: 0x0  nop
    ctx->pc = 0x2d4f1cu;
    // NOP
    ctx->pc = 0x2d4f20u;
}
