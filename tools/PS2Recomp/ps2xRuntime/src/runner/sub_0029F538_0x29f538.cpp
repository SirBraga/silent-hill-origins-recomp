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

// Function: sub_0029F538
// Address: 0x29f538 - 0x29f558
void sub_0029F538_0x29f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F538_0x29f538");
#endif

    switch (ctx->pc) {
        case 0x29f548u: goto label_29f548;
        default: break;
    }

    ctx->pc = 0x29f538u;

    // 0x29f538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f53c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f540: 0xc0a6d54  jal         func_29B550
    ctx->pc = 0x29F540u;
    SET_GPR_U32(ctx, 31, 0x29F548u);
    ctx->pc = 0x29B550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B550u, 0x29F540u, 0x29F548u)) {
        return;
    }
    ctx->pc = 0x29F548u;
label_29f548:
    // 0x29f548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F54Cu;
        // 0x29f550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F554u;
    // 0x29f554: 0x0  nop
    ctx->pc = 0x29f554u;
    // NOP
    ctx->pc = 0x29f558u;
}
