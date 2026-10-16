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

// Function: sub_002734D0
// Address: 0x2734d0 - 0x2734f0
void sub_002734D0_0x2734d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002734D0_0x2734d0");
#endif

    ctx->pc = 0x2734d0u;

    // 0x2734d0: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x2734d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2734d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2734d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2734d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2734d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2734dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2734DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2734E4u;
    // 0x2734e4: 0x0  nop
    ctx->pc = 0x2734e4u;
    // NOP
    // 0x2734e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2734ec: 0x0  nop
    ctx->pc = 0x2734ecu;
    // NOP
    ctx->pc = 0x2734f0u;
}
