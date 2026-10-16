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

// Function: sub_00276460
// Address: 0x276460 - 0x276498
void sub_00276460_0x276460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276460_0x276460");
#endif

    switch (ctx->pc) {
        case 0x276488u: goto label_276488;
        default: break;
    }

    ctx->pc = 0x276460u;

    // 0x276460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276464: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x276464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27646c: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x27646cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x276470: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x276470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x276474: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x276474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x276478: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x276478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x27647c: 0x3012  mflo        $a2
    ctx->pc = 0x27647cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x276480: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x276480u;
    SET_GPR_U32(ctx, 31, 0x276488u);
    ctx->pc = 0x276484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276480u;
    // 0x276484: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x276480u, 0x276488u)) {
        return;
    }
    ctx->pc = 0x276488u;
label_276488:
    // 0x276488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27648c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276490: 0x3e00008  jr          $ra
    ctx->pc = 0x276490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276490u;
        // 0x276494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276498u;
}
