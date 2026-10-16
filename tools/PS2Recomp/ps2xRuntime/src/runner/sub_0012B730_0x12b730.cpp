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

// Function: sub_0012B730
// Address: 0x12b730 - 0x12b748
void sub_0012B730_0x12b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B730_0x12b730");
#endif

    ctx->pc = 0x12b730u;

    // 0x12b730: 0xc4802d6c  lwc1        $f0, 0x2D6C($a0)
    ctx->pc = 0x12b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b734: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x12b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12b738: 0xc4812d70  lwc1        $f1, 0x2D70($a0)
    ctx->pc = 0x12b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b73c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B73Cu;
        // 0x12b740: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B744u;
    // 0x12b744: 0x0  nop
    ctx->pc = 0x12b744u;
    // NOP
    ctx->pc = 0x12b748u;
}
