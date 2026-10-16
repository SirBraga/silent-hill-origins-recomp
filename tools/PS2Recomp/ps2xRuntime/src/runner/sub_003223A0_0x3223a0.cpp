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

// Function: sub_003223A0
// Address: 0x3223a0 - 0x3223c8
void sub_003223A0_0x3223a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003223A0_0x3223a0");
#endif

    switch (ctx->pc) {
        case 0x3223b0u: goto label_3223b0;
        default: break;
    }

    ctx->pc = 0x3223a0u;

    // 0x3223a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3223a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3223a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3223a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3223a8: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x3223A8u;
    SET_GPR_U32(ctx, 31, 0x3223B0u);
    ctx->pc = 0x3223ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223A8u;
    // 0x3223ac: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x3223A8u, 0x3223B0u)) {
        return;
    }
    ctx->pc = 0x3223B0u;
label_3223b0:
    // 0x3223b0: 0xf  sync
    ctx->pc = 0x3223b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3223b4: 0x42000038  ei
    ctx->pc = 0x3223b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3223b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3223b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3223bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3223bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3223C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3223C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223C0u;
        // 0x3223c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3223C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3223C8u;
}
