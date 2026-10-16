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

// Function: sub_00102598
// Address: 0x102598 - 0x1025b8
void sub_00102598_0x102598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102598_0x102598");
#endif

    switch (ctx->pc) {
        case 0x1025a8u: goto label_1025a8;
        default: break;
    }

    ctx->pc = 0x102598u;

    // 0x102598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10259c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1025a0: 0xc09d64c  jal         func_275930
    ctx->pc = 0x1025A0u;
    SET_GPR_U32(ctx, 31, 0x1025A8u);
    ctx->pc = 0x1025A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1025A0u;
    // 0x1025a4: 0x8c840198  lw          $a0, 0x198($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275930u, 0x1025A0u, 0x1025A8u)) {
        return;
    }
    ctx->pc = 0x1025A8u;
label_1025a8:
    // 0x1025a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1025a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1025ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1025B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025ACu;
        // 0x1025b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1025ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1025B4u;
    // 0x1025b4: 0x0  nop
    ctx->pc = 0x1025b4u;
    // NOP
    ctx->pc = 0x1025b8u;
}
