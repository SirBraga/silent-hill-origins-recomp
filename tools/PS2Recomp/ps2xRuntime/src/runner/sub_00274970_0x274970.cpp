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

// Function: sub_00274970
// Address: 0x274970 - 0x274990
void sub_00274970_0x274970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274970_0x274970");
#endif

    switch (ctx->pc) {
        case 0x274980u: goto label_274980;
        default: break;
    }

    ctx->pc = 0x274970u;

    // 0x274970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274978: 0xc09d3f4  jal         func_274FD0
    ctx->pc = 0x274978u;
    SET_GPR_U32(ctx, 31, 0x274980u);
    ctx->pc = 0x274FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x274FD0u, 0x274978u, 0x274980u)) {
        return;
    }
    ctx->pc = 0x274980u;
label_274980:
    // 0x274980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274984: 0x3e00008  jr          $ra
    ctx->pc = 0x274984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274984u;
        // 0x274988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27498Cu;
    // 0x27498c: 0x0  nop
    ctx->pc = 0x27498cu;
    // NOP
    ctx->pc = 0x274990u;
}
