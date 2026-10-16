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

// Function: sub_0015D688
// Address: 0x15d688 - 0x15d6c0
void sub_0015D688_0x15d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D688_0x15d688");
#endif

    switch (ctx->pc) {
        case 0x15d698u: goto label_15d698;
        default: break;
    }

    ctx->pc = 0x15d688u;

    // 0x15d688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d690: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x15D690u;
    SET_GPR_U32(ctx, 31, 0x15D698u);
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x15D690u, 0x15D698u)) {
        return;
    }
    ctx->pc = 0x15D698u;
label_15d698:
    // 0x15d698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d69c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D69Cu;
        // 0x15d6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D6A4u;
    // 0x15d6a4: 0x0  nop
    ctx->pc = 0x15d6a4u;
    // NOP
    // 0x15d6a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d6ac: 0x0  nop
    ctx->pc = 0x15d6acu;
    // NOP
    // 0x15d6b0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15d6b4: 0x0  nop
    ctx->pc = 0x15d6b4u;
    // NOP
    // 0x15d6b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15d6bc: 0x0  nop
    ctx->pc = 0x15d6bcu;
    // NOP
    ctx->pc = 0x15d6c0u;
}
