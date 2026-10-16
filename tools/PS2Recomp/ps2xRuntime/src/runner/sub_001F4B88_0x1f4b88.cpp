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

// Function: sub_001F4B88
// Address: 0x1f4b88 - 0x1f4bb8
void sub_001F4B88_0x1f4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B88_0x1f4b88");
#endif

    switch (ctx->pc) {
        case 0x1f4ba0u: goto label_1f4ba0;
        default: break;
    }

    ctx->pc = 0x1f4b88u;

    // 0x1f4b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b98: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4B98u;
    SET_GPR_U32(ctx, 31, 0x1F4BA0u);
    ctx->pc = 0x1F4B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B98u;
    // 0x1f4b9c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4B98u, 0x1F4BA0u)) {
        return;
    }
    ctx->pc = 0x1F4BA0u;
label_1f4ba0:
    // 0x1f4ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BA4u;
        // 0x1f4ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4BACu;
    // 0x1f4bac: 0x0  nop
    ctx->pc = 0x1f4bacu;
    // NOP
    // 0x1f4bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f4bb4: 0x0  nop
    ctx->pc = 0x1f4bb4u;
    // NOP
    ctx->pc = 0x1f4bb8u;
}
