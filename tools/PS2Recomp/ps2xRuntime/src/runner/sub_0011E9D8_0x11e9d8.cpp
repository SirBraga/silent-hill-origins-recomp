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

// Function: sub_0011E9D8
// Address: 0x11e9d8 - 0x11e9f8
void sub_0011E9D8_0x11e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E9D8_0x11e9d8");
#endif

    switch (ctx->pc) {
        case 0x11e9ecu: goto label_11e9ec;
        default: break;
    }

    ctx->pc = 0x11e9d8u;

    // 0x11e9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e9e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11E9E4u;
    SET_GPR_U32(ctx, 31, 0x11E9ECu);
    ctx->pc = 0x11E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E9E4u;
    // 0x11e9e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11E9E4u, 0x11E9ECu)) {
        return;
    }
    ctx->pc = 0x11E9ECu;
label_11e9ec:
    // 0x11e9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9F0u;
        // 0x11e9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9F8u;
}
