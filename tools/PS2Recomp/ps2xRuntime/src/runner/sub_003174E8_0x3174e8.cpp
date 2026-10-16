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

// Function: sub_003174E8
// Address: 0x3174e8 - 0x317510
void sub_003174E8_0x3174e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003174E8_0x3174e8");
#endif

    switch (ctx->pc) {
        case 0x317500u: goto label_317500;
        default: break;
    }

    ctx->pc = 0x3174e8u;

    // 0x3174e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3174e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3174ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3174ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3174f0: 0x8c466ccc  lw          $a2, 0x6CCC($v0)
    ctx->pc = 0x3174f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x686CCCu));
    // 0x3174f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3174f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3174f8: 0xc0c5d44  jal         func_317510
    ctx->pc = 0x3174F8u;
    SET_GPR_U32(ctx, 31, 0x317500u);
    ctx->pc = 0x3174FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3174F8u;
    // 0x3174fc: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317510u, 0x3174F8u, 0x317500u)) {
        return;
    }
    ctx->pc = 0x317500u;
label_317500:
    // 0x317500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317504: 0x3e00008  jr          $ra
    ctx->pc = 0x317504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317504u;
        // 0x317508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31750Cu;
    // 0x31750c: 0x0  nop
    ctx->pc = 0x31750cu;
    // NOP
    ctx->pc = 0x317510u;
}
