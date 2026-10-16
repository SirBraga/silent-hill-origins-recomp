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

// Function: sub_001A05E8
// Address: 0x1a05e8 - 0x1a0610
void sub_001A05E8_0x1a05e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A05E8_0x1a05e8");
#endif

    ctx->pc = 0x1a05e8u;

    // 0x1a05e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a05ec: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A05ECu;
    {
        const bool branch_taken_0x1a05ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a05ec) {
            ctx->pc = 0x1A05F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A05ECu;
            // 0x1a05f0: 0x8c85080c  lw          $a1, 0x80C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A05F4u;
            goto label_1a05f4;
        }
    }
    ctx->pc = 0x1A05F4u;
label_1a05f4:
    // 0x1a05f4: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x1a05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a05f8: 0x8c840804  lw          $a0, 0x804($a0)
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a05fc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1a05fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0600: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a0604: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0604u;
        // 0x1a0608: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A060Cu;
    // 0x1a060c: 0x0  nop
    ctx->pc = 0x1a060cu;
    // NOP
    ctx->pc = 0x1a0610u;
}
