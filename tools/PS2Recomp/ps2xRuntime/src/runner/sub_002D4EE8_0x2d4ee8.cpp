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

// Function: sub_002D4EE8
// Address: 0x2d4ee8 - 0x2d4f08
void sub_002D4EE8_0x2d4ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4EE8_0x2d4ee8");
#endif

    ctx->pc = 0x2d4ee8u;

    // 0x2d4ee8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2d4ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4eec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x2d4eecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4ef0: 0x4a000038  vcallms     0x0
    ctx->pc = 0x2d4ef0u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x2d4ef4: 0x4a0002ff  vnop
    ctx->pc = 0x2d4ef4u;
    // NOP operation, no action needed for VU0
    // 0x2d4ef8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2d4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d4efc: 0x48421000  cfc2.ni     $v0, $vi2
    ctx->pc = 0x2d4efcu;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[2]));
    // 0x2d4f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4F08u;
}
