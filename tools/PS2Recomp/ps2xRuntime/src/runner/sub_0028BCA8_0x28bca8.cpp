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

// Function: sub_0028BCA8
// Address: 0x28bca8 - 0x28bcd0
void sub_0028BCA8_0x28bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BCA8_0x28bca8");
#endif

    switch (ctx->pc) {
        case 0x28bcc0u: goto label_28bcc0;
        default: break;
    }

    ctx->pc = 0x28bca8u;

    // 0x28bca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28bcac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x28bcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bcb4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28bcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bcb8: 0xc0a263e  jal         func_2898F8
    ctx->pc = 0x28BCB8u;
    SET_GPR_U32(ctx, 31, 0x28BCC0u);
    ctx->pc = 0x28BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCB8u;
    // 0x28bcbc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2898F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2898F8u, 0x28BCB8u, 0x28BCC0u)) {
        return;
    }
    ctx->pc = 0x28BCC0u;
label_28bcc0:
    // 0x28bcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCC4u;
        // 0x28bcc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BCCCu;
    // 0x28bccc: 0x0  nop
    ctx->pc = 0x28bcccu;
    // NOP
    ctx->pc = 0x28bcd0u;
}
