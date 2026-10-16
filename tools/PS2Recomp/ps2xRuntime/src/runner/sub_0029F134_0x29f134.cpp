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

// Function: sub_0029F134
// Address: 0x29f134 - 0x29f158
void sub_0029F134_0x29f134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F134_0x29f134");
#endif

    switch (ctx->pc) {
        case 0x29f13cu: goto label_29f13c;
        default: break;
    }

    ctx->pc = 0x29f134u;

    // 0x29f134: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x29F134u;
    SET_GPR_U32(ctx, 31, 0x29F13Cu);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x29F134u, 0x29F13Cu)) {
        return;
    }
    ctx->pc = 0x29F13Cu;
label_29f13c:
    // 0x29f13c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29f13cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29f140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f144: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29f144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F14Cu;
        // 0x29f150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F154u;
    // 0x29f154: 0x0  nop
    ctx->pc = 0x29f154u;
    // NOP
    ctx->pc = 0x29f158u;
}
