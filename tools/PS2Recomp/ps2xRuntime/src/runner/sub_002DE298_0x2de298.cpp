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

// Function: sub_002DE298
// Address: 0x2de298 - 0x2de2e0
void sub_002DE298_0x2de298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE298_0x2de298");
#endif

    switch (ctx->pc) {
        case 0x2de2bcu: goto label_2de2bc;
        case 0x2de2c8u: goto label_2de2c8;
        default: break;
    }

    ctx->pc = 0x2de298u;

    // 0x2de298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de29c: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2de29cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2de2a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de2a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2de2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2a8: 0x24c6e3a0  addiu       $a2, $a2, -0x1C60
    ctx->pc = 0x2de2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960032));
    // 0x2de2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2de2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2b4: 0xc0b9006  jal         func_2E4018
    ctx->pc = 0x2DE2B4u;
    SET_GPR_U32(ctx, 31, 0x2DE2BCu);
    ctx->pc = 0x2DE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2B4u;
    // 0x2de2b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4018u, 0x2DE2B4u, 0x2DE2BCu)) {
        return;
    }
    ctx->pc = 0x2DE2BCu;
label_2de2bc:
    // 0x2de2bc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2de2c0: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DE2C0u;
    SET_GPR_U32(ctx, 31, 0x2DE2C8u);
    ctx->pc = 0x2DE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2C0u;
    // 0x2de2c4: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DE2C0u, 0x2DE2C8u)) {
        return;
    }
    ctx->pc = 0x2DE2C8u;
label_2de2c8:
    // 0x2de2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de2cc: 0xaf808bec  sw          $zero, -0x7414($gp)
    ctx->pc = 0x2de2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
    // 0x2de2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2D0u;
        // 0x2de2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE2D8u;
    // 0x2de2d8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2de2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2de2dc: 0x0  nop
    ctx->pc = 0x2de2dcu;
    // NOP
    ctx->pc = 0x2de2e0u;
}
