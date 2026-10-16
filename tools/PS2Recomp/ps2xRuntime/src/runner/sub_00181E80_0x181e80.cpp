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

// Function: sub_00181E80
// Address: 0x181e80 - 0x181ea8
void sub_00181E80_0x181e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181E80_0x181e80");
#endif

    ctx->pc = 0x181e80u;

    // 0x181e80: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181e84: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x181e88: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x181e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x181e8c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x181e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x181e90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181e94: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x181e94u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x181e98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x181e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x181e9c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x181e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x181ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x181EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EA0u;
        // 0x181ea4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181EA8u;
}
