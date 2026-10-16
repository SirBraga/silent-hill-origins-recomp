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

// Function: sub_001F0B90
// Address: 0x1f0b90 - 0x1f0bd0
void sub_001F0B90_0x1f0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B90_0x1f0b90");
#endif

    switch (ctx->pc) {
        case 0x1f0ba8u: goto label_1f0ba8;
        default: break;
    }

    ctx->pc = 0x1f0b90u;

    // 0x1f0b90: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f0b94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0b98: 0x8c44e850  lw          $a0, -0x17B0($v0)
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E850u));
    // 0x1f0b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0ba0: 0xc07c056  jal         func_1F0158
    ctx->pc = 0x1F0BA0u;
    SET_GPR_U32(ctx, 31, 0x1F0BA8u);
    ctx->pc = 0x1F0158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0158u, 0x1F0BA0u, 0x1F0BA8u)) {
        return;
    }
    ctx->pc = 0x1F0BA8u;
label_1f0ba8:
    // 0x1f0ba8: 0xf  sync
    ctx->pc = 0x1f0ba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f0bac: 0x42000038  ei
    ctx->pc = 0x1f0bacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1f0bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0bb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BB8u;
        // 0x1f0bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BC0u;
    // 0x1f0bc0: 0x0  nop
    ctx->pc = 0x1f0bc0u;
    // NOP
    // 0x1f0bc4: 0x0  nop
    ctx->pc = 0x1f0bc4u;
    // NOP
    // 0x1f0bc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0bcc: 0x0  nop
    ctx->pc = 0x1f0bccu;
    // NOP
    ctx->pc = 0x1f0bd0u;
}
