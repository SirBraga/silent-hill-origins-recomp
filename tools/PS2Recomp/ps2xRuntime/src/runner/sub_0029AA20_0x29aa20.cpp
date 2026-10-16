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

// Function: sub_0029AA20
// Address: 0x29aa20 - 0x29aa40
void sub_0029AA20_0x29aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA20_0x29aa20");
#endif

    switch (ctx->pc) {
        case 0x29aa30u: goto label_29aa30;
        default: break;
    }

    ctx->pc = 0x29aa20u;

    // 0x29aa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29aa24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29aa28: 0xc0a662a  jal         func_2998A8
    ctx->pc = 0x29AA28u;
    SET_GPR_U32(ctx, 31, 0x29AA30u);
    ctx->pc = 0x2998A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2998A8u, 0x29AA28u, 0x29AA30u)) {
        return;
    }
    ctx->pc = 0x29AA30u;
label_29aa30:
    // 0x29aa30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29aa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa34: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA34u;
        // 0x29aa38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA3Cu;
    // 0x29aa3c: 0x0  nop
    ctx->pc = 0x29aa3cu;
    // NOP
    ctx->pc = 0x29aa40u;
}
