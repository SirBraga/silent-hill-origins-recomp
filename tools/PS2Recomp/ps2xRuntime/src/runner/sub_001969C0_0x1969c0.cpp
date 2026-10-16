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

// Function: sub_001969C0
// Address: 0x1969c0 - 0x1969e8
void sub_001969C0_0x1969c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969C0_0x1969c0");
#endif

    switch (ctx->pc) {
        case 0x1969d8u: goto label_1969d8;
        default: break;
    }

    ctx->pc = 0x1969c0u;

    // 0x1969c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1969c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1969c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1969c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1969C8u;
    {
        const bool branch_taken_0x1969c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969C8u;
        // 0x1969cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969c8) {
            ctx->pc = 0x1969D8u;
            goto label_1969d8;
        }
    }
    ctx->pc = 0x1969D0u;
    // 0x1969d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1969D0u;
    SET_GPR_U32(ctx, 31, 0x1969D8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1969D0u, 0x1969D8u)) {
        return;
    }
    ctx->pc = 0x1969D8u;
label_1969d8:
    // 0x1969d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1969d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1969dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1969DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1969E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969DCu;
        // 0x1969e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1969E4u;
    // 0x1969e4: 0x0  nop
    ctx->pc = 0x1969e4u;
    // NOP
    ctx->pc = 0x1969e8u;
}
