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

// Function: sub_0011D998
// Address: 0x11d998 - 0x11d9b8
void sub_0011D998_0x11d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D998_0x11d998");
#endif

    switch (ctx->pc) {
        case 0x11d9acu: goto label_11d9ac;
        default: break;
    }

    ctx->pc = 0x11d998u;

    // 0x11d998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d9a4: 0xc0475d2  jal         func_11D748
    ctx->pc = 0x11D9A4u;
    SET_GPR_U32(ctx, 31, 0x11D9ACu);
    ctx->pc = 0x11D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9A4u;
    // 0x11d9a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11D748u, 0x11D9A4u, 0x11D9ACu)) {
        return;
    }
    ctx->pc = 0x11D9ACu;
label_11d9ac:
    // 0x11d9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9B0u;
        // 0x11d9b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D9B8u;
}
