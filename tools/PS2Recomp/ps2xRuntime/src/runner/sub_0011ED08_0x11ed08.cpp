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

// Function: sub_0011ED08
// Address: 0x11ed08 - 0x11ed20
void sub_0011ED08_0x11ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED08_0x11ed08");
#endif

    ctx->pc = 0x11ed08u;

    // 0x11ed08: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x11ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ed0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x11ed0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x11ed10: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x11ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED14u;
        // 0x11ed18: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ED1Cu;
    // 0x11ed1c: 0x0  nop
    ctx->pc = 0x11ed1cu;
    // NOP
    ctx->pc = 0x11ed20u;
}
