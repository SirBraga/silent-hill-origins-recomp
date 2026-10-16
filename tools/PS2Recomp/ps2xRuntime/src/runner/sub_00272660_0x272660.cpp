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

// Function: sub_00272660
// Address: 0x272660 - 0x272698
void sub_00272660_0x272660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272660_0x272660");
#endif

    ctx->pc = 0x272660u;

    // 0x272660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x272660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272664: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x272664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x272668: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x272668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27266c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x27266cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x272670: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x272674: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x272674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x272678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x272678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27267c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x27267cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x272680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272688: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x272688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x27268c: 0x3e00008  jr          $ra
    ctx->pc = 0x27268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27268Cu;
        // 0x272690: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27268Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272694u;
    // 0x272694: 0x0  nop
    ctx->pc = 0x272694u;
    // NOP
    ctx->pc = 0x272698u;
}
