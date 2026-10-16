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

// Function: sub_001908B0
// Address: 0x1908b0 - 0x1908c8
void sub_001908B0_0x1908b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001908B0_0x1908b0");
#endif

    switch (ctx->pc) {
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        default: break;
    }

    ctx->pc = 0x1908b0u;

    // 0x1908b0: 0xc064348  jal         func_190D20
    ctx->pc = 0x1908B0u;
    SET_GPR_U32(ctx, 31, 0x1908B8u);
    ctx->pc = 0x1908B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1908B0u;
    // 0x1908b4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190D20u, 0x1908B0u, 0x1908B8u)) {
        return;
    }
    ctx->pc = 0x1908B8u;
label_1908b8:
    // 0x1908b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1908b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1908bc:
    // 0x1908bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1908BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1908C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908BCu;
        // 0x1908c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1908BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1908C4u;
    // 0x1908c4: 0x0  nop
    ctx->pc = 0x1908c4u;
    // NOP
    ctx->pc = 0x1908c8u;
}
