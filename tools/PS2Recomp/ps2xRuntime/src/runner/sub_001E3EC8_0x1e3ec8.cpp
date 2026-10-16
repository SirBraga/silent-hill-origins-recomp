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

// Function: sub_001E3EC8
// Address: 0x1e3ec8 - 0x1e3ee0
void sub_001E3EC8_0x1e3ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3EC8_0x1e3ec8");
#endif

    ctx->pc = 0x1e3ec8u;

    // 0x1e3ec8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1e3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3ecc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e3eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1e3ed0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1e3ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ED4u;
        // 0x1e3ed8: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3EDCu;
    // 0x1e3edc: 0x0  nop
    ctx->pc = 0x1e3edcu;
    // NOP
    ctx->pc = 0x1e3ee0u;
}
