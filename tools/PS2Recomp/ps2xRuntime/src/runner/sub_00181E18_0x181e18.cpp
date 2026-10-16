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

// Function: sub_00181E18
// Address: 0x181e18 - 0x181e48
void sub_00181E18_0x181e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181E18_0x181e18");
#endif

    ctx->pc = 0x181e18u;

    // 0x181e18: 0x52efc  dsll32      $a1, $a1, 27
    ctx->pc = 0x181e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 27));
    // 0x181e1c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x181e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x181e20: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x181e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x181e24: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x181e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x181e28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x181e2c: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x181e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x181e30: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x181e30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x181e34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x181e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x181e38: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x181e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x181e3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x181e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x181e40: 0x3e00008  jr          $ra
    ctx->pc = 0x181E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E40u;
        // 0x181e44: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E48u;
}
