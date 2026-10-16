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

// Function: sub_001F4C80
// Address: 0x1f4c80 - 0x1f4ca8
void sub_001F4C80_0x1f4c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C80_0x1f4c80");
#endif

    switch (ctx->pc) {
        case 0x1f4c98u: goto label_1f4c98;
        default: break;
    }

    ctx->pc = 0x1f4c80u;

    // 0x1f4c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4c84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4c8c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4c90: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4C90u;
    SET_GPR_U32(ctx, 31, 0x1F4C98u);
    ctx->pc = 0x1F4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C90u;
    // 0x1f4c94: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4C90u, 0x1F4C98u)) {
        return;
    }
    ctx->pc = 0x1F4C98u;
label_1f4c98:
    // 0x1f4c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C9Cu;
        // 0x1f4ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4CA4u;
    // 0x1f4ca4: 0x0  nop
    ctx->pc = 0x1f4ca4u;
    // NOP
    ctx->pc = 0x1f4ca8u;
}
