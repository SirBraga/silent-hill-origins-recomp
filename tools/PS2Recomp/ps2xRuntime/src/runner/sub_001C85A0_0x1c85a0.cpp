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

// Function: sub_001C85A0
// Address: 0x1c85a0 - 0x1c85c0
void sub_001C85A0_0x1c85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C85A0_0x1c85a0");
#endif

    ctx->pc = 0x1c85a0u;

    // 0x1c85a0: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x1c85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x1c85a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c85a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c85ac: 0xc4609914  lwc1        $f0, -0x66EC($v1)
    ctx->pc = 0x1c85acu;
    { uint32_t bits = FAST_READ32(0x339914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c85b0: 0xac820274  sw          $v0, 0x274($a0)
    ctx->pc = 0x1c85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 2));
    // 0x1c85b4: 0xe4800288  swc1        $f0, 0x288($a0)
    ctx->pc = 0x1c85b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 648), bits); }
    // 0x1c85b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C85B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85B8u;
        // 0x1c85bc: 0xac820270  sw          $v0, 0x270($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C85B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C85C0u;
}
