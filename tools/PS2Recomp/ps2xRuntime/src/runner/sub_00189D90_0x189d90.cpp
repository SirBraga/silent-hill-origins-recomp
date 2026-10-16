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

// Function: sub_00189D90
// Address: 0x189d90 - 0x189db8
void sub_00189D90_0x189d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189D90_0x189d90");
#endif

    ctx->pc = 0x189d90u;

    // 0x189d90: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x189d94: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x189d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x189d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189D98u;
    {
        const bool branch_taken_0x189d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D98u;
        // 0x189d9c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d98) {
            ctx->pc = 0x189DA8u;
            goto label_189da8;
        }
    }
    ctx->pc = 0x189DA0u;
    // 0x189da0: 0x3e00008  jr          $ra
    ctx->pc = 0x189DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DA0u;
        // 0x189da4: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189DA8u;
label_189da8:
    // 0x189da8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x189da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189dac: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x189dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189db0: 0x3e00008  jr          $ra
    ctx->pc = 0x189DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DB0u;
        // 0x189db4: 0x8c6200c0  lw          $v0, 0xC0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189DB8u;
}
