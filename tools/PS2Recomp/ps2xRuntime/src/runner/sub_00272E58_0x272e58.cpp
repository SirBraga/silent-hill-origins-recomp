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

// Function: sub_00272E58
// Address: 0x272e58 - 0x272ea0
void sub_00272E58_0x272e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272E58_0x272e58");
#endif

    ctx->pc = 0x272e58u;

    // 0x272e58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x272e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x272e5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x272e60: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x272e60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x272e64: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x272e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e68: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x272e6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x272e70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x272e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x272e74: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x272e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x272e78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272e7c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x272e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x272e80: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x272e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x272e84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x272e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x272e88: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x272e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x272e8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x272e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272e90: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x272e94: 0x3e00008  jr          $ra
    ctx->pc = 0x272E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E94u;
        // 0x272e98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272E9Cu;
    // 0x272e9c: 0x0  nop
    ctx->pc = 0x272e9cu;
    // NOP
    ctx->pc = 0x272ea0u;
}
