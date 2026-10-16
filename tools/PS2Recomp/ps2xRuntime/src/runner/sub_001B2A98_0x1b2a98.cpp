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

// Function: sub_001B2A98
// Address: 0x1b2a98 - 0x1b2ab8
void sub_001B2A98_0x1b2a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2A98_0x1b2a98");
#endif

    ctx->pc = 0x1b2a98u;

    // 0x1b2a98: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1b2a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1b2a9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b2a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b2aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2aa4: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x1b2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    // 0x1b2aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AA8u;
        // 0x1b2aac: 0xe4800230  swc1        $f0, 0x230($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2AB0u;
    // 0x1b2ab0: 0xe4800230  swc1        $f0, 0x230($a0)
    ctx->pc = 0x1b2ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x1b2ab4: 0x0  nop
    ctx->pc = 0x1b2ab4u;
    // NOP
    ctx->pc = 0x1b2ab8u;
}
