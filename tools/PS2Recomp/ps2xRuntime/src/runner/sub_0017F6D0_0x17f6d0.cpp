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

// Function: sub_0017F6D0
// Address: 0x17f6d0 - 0x17f6f8
void sub_0017F6D0_0x17f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F6D0_0x17f6d0");
#endif

    switch (ctx->pc) {
        case 0x17f6e8u: goto label_17f6e8;
        default: break;
    }

    ctx->pc = 0x17f6d0u;

    // 0x17f6d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f6d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f6d8: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17f6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f6e0: 0xc043a80  jal         func_10EA00
    ctx->pc = 0x17F6E0u;
    SET_GPR_U32(ctx, 31, 0x17F6E8u);
    ctx->pc = 0x10EA00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EA00u, 0x17F6E0u, 0x17F6E8u)) {
        return;
    }
    ctx->pc = 0x17F6E8u;
label_17f6e8:
    // 0x17f6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17F6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6ECu;
        // 0x17f6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6F4u;
    // 0x17f6f4: 0x0  nop
    ctx->pc = 0x17f6f4u;
    // NOP
    ctx->pc = 0x17f6f8u;
}
