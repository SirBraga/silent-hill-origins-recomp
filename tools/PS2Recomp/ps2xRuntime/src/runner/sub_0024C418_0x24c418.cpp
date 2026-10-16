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

// Function: sub_0024C418
// Address: 0x24c418 - 0x24c458
void sub_0024C418_0x24c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C418_0x24c418");
#endif

    switch (ctx->pc) {
        case 0x24c440u: goto label_24c440;
        default: break;
    }

    ctx->pc = 0x24c418u;

    // 0x24c418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c41c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24c41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c424: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x24c424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24c428: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x24c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24c42c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x24c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x24c430: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x24c430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24c434: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x24c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24c438: 0xc0930d6  jal         func_24C358
    ctx->pc = 0x24C438u;
    SET_GPR_U32(ctx, 31, 0x24C440u);
    ctx->pc = 0x24C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C438u;
    // 0x24c43c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C358u, 0x24C438u, 0x24C440u)) {
        return;
    }
    ctx->pc = 0x24C440u;
label_24c440:
    // 0x24c440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c448: 0x3e00008  jr          $ra
    ctx->pc = 0x24C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C448u;
        // 0x24c44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C450u;
    // 0x24c450: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x24c450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x24c454: 0x0  nop
    ctx->pc = 0x24c454u;
    // NOP
    ctx->pc = 0x24c458u;
}
