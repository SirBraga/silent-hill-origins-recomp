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

// Function: sub_0029A690
// Address: 0x29a690 - 0x29a6b0
void sub_0029A690_0x29a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A690_0x29a690");
#endif

    switch (ctx->pc) {
        case 0x29a6a4u: goto label_29a6a4;
        default: break;
    }

    ctx->pc = 0x29a690u;

    // 0x29a690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a694: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x29a694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x29a698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a69c: 0xc0a6b9e  jal         func_29AE78
    ctx->pc = 0x29A69Cu;
    SET_GPR_U32(ctx, 31, 0x29A6A4u);
    ctx->pc = 0x29A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A69Cu;
    // 0x29a6a0: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AE78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29AE78u, 0x29A69Cu, 0x29A6A4u)) {
        return;
    }
    ctx->pc = 0x29A6A4u;
label_29a6a4:
    // 0x29a6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6A8u;
        // 0x29a6ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A6B0u;
}
