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

// Function: sub_002A91F0
// Address: 0x2a91f0 - 0x2a9208
void sub_002A91F0_0x2a91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A91F0_0x2a91f0");
#endif

    ctx->pc = 0x2a91f0u;

    // 0x2a91f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a91f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a91f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a91f8: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2a91f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2a91fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A91FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91FCu;
        // 0x2a9200: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A91FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9204u;
    // 0x2a9204: 0x0  nop
    ctx->pc = 0x2a9204u;
    // NOP
    ctx->pc = 0x2a9208u;
}
