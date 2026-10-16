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

// Function: sub_0011CAA8
// Address: 0x11caa8 - 0x11cac8
void sub_0011CAA8_0x11caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CAA8_0x11caa8");
#endif

    switch (ctx->pc) {
        case 0x11cabcu: goto label_11cabc;
        default: break;
    }

    ctx->pc = 0x11caa8u;

    // 0x11caa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11caac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cab4: 0xc0471f6  jal         func_11C7D8
    ctx->pc = 0x11CAB4u;
    SET_GPR_U32(ctx, 31, 0x11CABCu);
    ctx->pc = 0x11CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAB4u;
    // 0x11cab8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11C7D8u, 0x11CAB4u, 0x11CABCu)) {
        return;
    }
    ctx->pc = 0x11CABCu;
label_11cabc:
    // 0x11cabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cac0: 0x3e00008  jr          $ra
    ctx->pc = 0x11CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAC0u;
        // 0x11cac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CAC8u;
}
