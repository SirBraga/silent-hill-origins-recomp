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

// Function: sub_00181DE8
// Address: 0x181de8 - 0x181e18
void sub_00181DE8_0x181de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181DE8_0x181de8");
#endif

    ctx->pc = 0x181de8u;

    // 0x181de8: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x181de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x181dec: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x181decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181df0: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x181df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x181df4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181df8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x181df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x181dfc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x181dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x181e00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x181e00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x181e04: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x181e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x181e08: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x181e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x181e0c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x181e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x181e10: 0x3e00008  jr          $ra
    ctx->pc = 0x181E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E10u;
        // 0x181e14: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E18u;
}
