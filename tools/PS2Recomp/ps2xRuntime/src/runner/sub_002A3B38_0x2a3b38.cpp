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

// Function: sub_002A3B38
// Address: 0x2a3b38 - 0x2a3b58
void sub_002A3B38_0x2a3b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3B38_0x2a3b38");
#endif

    switch (ctx->pc) {
        case 0x2a3b48u: goto label_2a3b48;
        default: break;
    }

    ctx->pc = 0x2a3b38u;

    // 0x2a3b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3b40: 0xc0c4d8a  jal         func_313628
    ctx->pc = 0x2A3B40u;
    SET_GPR_U32(ctx, 31, 0x2A3B48u);
    ctx->pc = 0x2A3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B40u;
    // 0x2a3b44: 0x8c840058  lw          $a0, 0x58($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313628u, 0x2A3B40u, 0x2A3B48u)) {
        return;
    }
    ctx->pc = 0x2A3B48u;
label_2a3b48:
    // 0x2a3b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B4Cu;
        // 0x2a3b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3B54u;
    // 0x2a3b54: 0x0  nop
    ctx->pc = 0x2a3b54u;
    // NOP
    ctx->pc = 0x2a3b58u;
}
