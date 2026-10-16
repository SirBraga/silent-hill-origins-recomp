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

// Function: sub_0013C2F0
// Address: 0x13c2f0 - 0x13c308
void sub_0013C2F0_0x13c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C2F0_0x13c2f0");
#endif

    ctx->pc = 0x13c2f0u;

    // 0x13c2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2F8u;
    // 0x13c2f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13c2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13c2fc: 0x0  nop
    ctx->pc = 0x13c2fcu;
    // NOP
    // 0x13c300: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x13c300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x13c304: 0x0  nop
    ctx->pc = 0x13c304u;
    // NOP
    ctx->pc = 0x13c308u;
}
