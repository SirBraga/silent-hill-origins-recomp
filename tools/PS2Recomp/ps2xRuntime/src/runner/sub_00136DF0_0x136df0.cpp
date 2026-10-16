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

// Function: sub_00136DF0
// Address: 0x136df0 - 0x136e08
void sub_00136DF0_0x136df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136DF0_0x136df0");
#endif

    ctx->pc = 0x136df0u;

    // 0x136df0: 0x3e00008  jr          $ra
    ctx->pc = 0x136DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DF0u;
        // 0x136df4: 0xc4801b7c  lwc1        $f0, 0x1B7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136DF8u;
    // 0x136df8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136dfc: 0x0  nop
    ctx->pc = 0x136dfcu;
    // NOP
    // 0x136e00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x136e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x136e04: 0x0  nop
    ctx->pc = 0x136e04u;
    // NOP
    ctx->pc = 0x136e08u;
}
