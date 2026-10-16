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

// Function: sub_0029A9A0
// Address: 0x29a9a0 - 0x29a9c0
void sub_0029A9A0_0x29a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A9A0_0x29a9a0");
#endif

    switch (ctx->pc) {
        case 0x29a9b4u: goto label_29a9b4;
        default: break;
    }

    ctx->pc = 0x29a9a0u;

    // 0x29a9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a9a4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29a9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a9ac: 0xc0a6272  jal         func_2989C8
    ctx->pc = 0x29A9ACu;
    SET_GPR_U32(ctx, 31, 0x29A9B4u);
    ctx->pc = 0x29A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9ACu;
    // 0x29a9b0: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2989C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2989C8u, 0x29A9ACu, 0x29A9B4u)) {
        return;
    }
    ctx->pc = 0x29A9B4u;
label_29a9b4:
    // 0x29a9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9B8u;
        // 0x29a9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A9C0u;
}
