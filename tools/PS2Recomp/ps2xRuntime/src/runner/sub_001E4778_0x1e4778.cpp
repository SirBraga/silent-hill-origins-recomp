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

// Function: sub_001E4778
// Address: 0x1e4778 - 0x1e4788
void sub_001E4778_0x1e4778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4778_0x1e4778");
#endif

    ctx->pc = 0x1e4778u;

    // 0x1e4778: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e477c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E477Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E477Cu;
        // 0x1e4780: 0xe44ce708  swc1        $f12, -0x18F8($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E477Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4784u;
    // 0x1e4784: 0x0  nop
    ctx->pc = 0x1e4784u;
    // NOP
    ctx->pc = 0x1e4788u;
}
