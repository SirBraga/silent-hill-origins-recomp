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

// Function: sub_001F8314
// Address: 0x1f8314 - 0x1f8330
void sub_001F8314_0x1f8314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8314_0x1f8314");
#endif

    switch (ctx->pc) {
        case 0x1f831cu: goto label_1f831c;
        case 0x1f8320u: goto label_1f8320;
        default: break;
    }

    ctx->pc = 0x1f8314u;

    // 0x1f8314: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F8314u;
    SET_GPR_U32(ctx, 31, 0x1F831Cu);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F8314u, 0x1F831Cu)) {
        return;
    }
    ctx->pc = 0x1F831Cu;
label_1f831c:
    // 0x1f831c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f831cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8320:
    // 0x1f8320: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1f8320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8324: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f8324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8328: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8328u;
        // 0x1f832c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8330u;
}
