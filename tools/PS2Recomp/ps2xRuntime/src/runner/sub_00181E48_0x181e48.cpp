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

// Function: sub_00181E48
// Address: 0x181e48 - 0x181e80
void sub_00181E48_0x181e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181E48_0x181e48");
#endif

    ctx->pc = 0x181e48u;

    // 0x181e48: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181e4c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x181e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x181e50: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x181e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x181e54: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x181e58: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x181e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x181e5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x181e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x181e60: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181e64: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x181e64u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x181e68: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x181e68u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x181e6c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x181e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x181e70: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x181e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x181e74: 0x3e00008  jr          $ra
    ctx->pc = 0x181E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E74u;
        // 0x181e78: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E7Cu;
    // 0x181e7c: 0x0  nop
    ctx->pc = 0x181e7cu;
    // NOP
    ctx->pc = 0x181e80u;
}
