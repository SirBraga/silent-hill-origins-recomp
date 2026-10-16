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

// Function: sub_001F8390
// Address: 0x1f8390 - 0x1f83a8
void sub_001F8390_0x1f8390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8390_0x1f8390");
#endif

    switch (ctx->pc) {
        case 0x1f8398u: goto label_1f8398;
        case 0x1f839cu: goto label_1f839c;
        default: break;
    }

    ctx->pc = 0x1f8390u;

    // 0x1f8390: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F8390u;
    SET_GPR_U32(ctx, 31, 0x1F8398u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F8390u, 0x1F8398u)) {
        return;
    }
    ctx->pc = 0x1F8398u;
label_1f8398:
    // 0x1f8398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f839c:
    // 0x1f839c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f839cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f83a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F83A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83A0u;
        // 0x1f83a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F83A8u;
}
