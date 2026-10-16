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

// Function: sub_0011CA68
// Address: 0x11ca68 - 0x11ca88
void sub_0011CA68_0x11ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CA68_0x11ca68");
#endif

    ctx->pc = 0x11ca68u;

    // 0x11ca68: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11ca6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ca6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ca70: 0x0  nop
    ctx->pc = 0x11ca70u;
    // NOP
    // 0x11ca74: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x11ca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x11ca78: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x11ca7c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x11ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ca80: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA80u;
        // 0x11ca84: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA88u;
}
