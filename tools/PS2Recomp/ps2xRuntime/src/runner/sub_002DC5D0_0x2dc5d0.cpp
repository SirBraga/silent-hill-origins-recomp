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

// Function: sub_002DC5D0
// Address: 0x2dc5d0 - 0x2dc608
void sub_002DC5D0_0x2dc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC5D0_0x2dc5d0");
#endif

    switch (ctx->pc) {
        case 0x2dc5e0u: goto label_2dc5e0;
        case 0x2dc5ecu: goto label_2dc5ec;
        default: break;
    }

    ctx->pc = 0x2dc5d0u;

    // 0x2dc5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc5d8: 0xc0b6a96  jal         func_2DAA58
    ctx->pc = 0x2DC5D8u;
    SET_GPR_U32(ctx, 31, 0x2DC5E0u);
    ctx->pc = 0x2DAA58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAA58u, 0x2DC5D8u, 0x2DC5E0u)) {
        return;
    }
    ctx->pc = 0x2DC5E0u;
label_2dc5e0:
    // 0x2dc5e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5e4: 0xc0b6a70  jal         func_2DA9C0
    ctx->pc = 0x2DC5E4u;
    SET_GPR_U32(ctx, 31, 0x2DC5ECu);
    ctx->pc = 0x2DC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5E4u;
    // 0x2dc5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA9C0u, 0x2DC5E4u, 0x2DC5ECu)) {
        return;
    }
    ctx->pc = 0x2DC5ECu;
label_2dc5ec:
    // 0x2dc5ec: 0x8f838bc0  lw          $v1, -0x7440($gp)
    ctx->pc = 0x2dc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
    // 0x2dc5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc5f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dc5f8: 0xaf808bc4  sw          $zero, -0x743C($gp)
    ctx->pc = 0x2dc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937540), GPR_U32(ctx, 0));
    // 0x2dc5fc: 0xaf838bc0  sw          $v1, -0x7440($gp)
    ctx->pc = 0x2dc5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 3));
    // 0x2dc600: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC600u;
        // 0x2dc604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC608u;
}
