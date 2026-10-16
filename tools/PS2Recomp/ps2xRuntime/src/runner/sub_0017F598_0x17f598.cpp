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

// Function: sub_0017F598
// Address: 0x17f598 - 0x17f5c0
void sub_0017F598_0x17f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F598_0x17f598");
#endif

    switch (ctx->pc) {
        case 0x17f5b0u: goto label_17f5b0;
        default: break;
    }

    ctx->pc = 0x17f598u;

    // 0x17f598: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f59c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f5a0: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17f5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f5a8: 0xc043a42  jal         func_10E908
    ctx->pc = 0x17F5A8u;
    SET_GPR_U32(ctx, 31, 0x17F5B0u);
    ctx->pc = 0x10E908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E908u, 0x17F5A8u, 0x17F5B0u)) {
        return;
    }
    ctx->pc = 0x17F5B0u;
label_17f5b0:
    // 0x17f5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5B4u;
        // 0x17f5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F5BCu;
    // 0x17f5bc: 0x0  nop
    ctx->pc = 0x17f5bcu;
    // NOP
    ctx->pc = 0x17f5c0u;
}
