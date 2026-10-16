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

// Function: sub_001F9390
// Address: 0x1f9390 - 0x1f93f0
void sub_001F9390_0x1f9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9390_0x1f9390");
#endif

    ctx->pc = 0x1f9390u;

    // 0x1f9390: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x1f9390u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1f9394: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x1f9394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1f9398: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1f9398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f939c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1f939cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1f93a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1f93a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1f93a4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1f93a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1f93a8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f93a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f93ac: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x1f93acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f93b0: 0x850019  multu       $a0, $a1
    ctx->pc = 0x1f93b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f93b4: 0x2012  mflo        $a0
    ctx->pc = 0x1f93b4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1f93b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f93b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f93bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1f93bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f93c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f93c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f93c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f93c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f93c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f93cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1f93ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1f93d0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1f93d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f93d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f93d8: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x1f93d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1f93dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f93e0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1f93e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1f93e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f93e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f93e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F93E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93E8u;
        // 0x1f93ec: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F93E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F93F0u;
}
