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

// Function: sub_0029A1F8
// Address: 0x29a1f8 - 0x29a218
void sub_0029A1F8_0x29a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A1F8_0x29a1f8");
#endif

    switch (ctx->pc) {
        case 0x29a208u: goto label_29a208;
        default: break;
    }

    ctx->pc = 0x29a1f8u;

    // 0x29a1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a200: 0xc0a5fe4  jal         func_297F90
    ctx->pc = 0x29A200u;
    SET_GPR_U32(ctx, 31, 0x29A208u);
    ctx->pc = 0x297F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297F90u, 0x29A200u, 0x29A208u)) {
        return;
    }
    ctx->pc = 0x29A208u;
label_29a208:
    // 0x29a208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A20Cu;
        // 0x29a210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A214u;
    // 0x29a214: 0x0  nop
    ctx->pc = 0x29a214u;
    // NOP
    ctx->pc = 0x29a218u;
}
