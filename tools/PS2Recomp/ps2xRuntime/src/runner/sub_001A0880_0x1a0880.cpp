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

// Function: sub_001A0880
// Address: 0x1a0880 - 0x1a08a0
void sub_001A0880_0x1a0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0880_0x1a0880");
#endif

    ctx->pc = 0x1a0880u;

    // 0x1a0880: 0x8c82080c  lw          $v0, 0x80C($a0)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a0884: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1a0884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0888: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x1a0888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a088c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1a088cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0890: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a0890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0898: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0898u;
        // 0x1a089c: 0xc4400054  lwc1        $f0, 0x54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A08A0u;
}
