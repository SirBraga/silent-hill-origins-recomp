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

// Function: sub_002D6BD0
// Address: 0x2d6bd0 - 0x2d6c00
void sub_002D6BD0_0x2d6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6BD0_0x2d6bd0");
#endif

    switch (ctx->pc) {
        case 0x2d6bf0u: goto label_2d6bf0;
        default: break;
    }

    ctx->pc = 0x2d6bd0u;

    // 0x2d6bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6bd4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d6bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6bdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6be0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2d6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d6be4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2d6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d6be8: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D6BE8u;
    SET_GPR_U32(ctx, 31, 0x2D6BF0u);
    ctx->pc = 0x2D6BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6BE8u;
    // 0x2d6bec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D6BE8u, 0x2D6BF0u)) {
        return;
    }
    ctx->pc = 0x2D6BF0u;
label_2d6bf0:
    // 0x2d6bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BF4u;
        // 0x2d6bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6BFCu;
    // 0x2d6bfc: 0x0  nop
    ctx->pc = 0x2d6bfcu;
    // NOP
    ctx->pc = 0x2d6c00u;
}
