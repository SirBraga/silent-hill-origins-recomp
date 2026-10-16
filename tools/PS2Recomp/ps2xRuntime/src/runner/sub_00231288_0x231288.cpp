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

// Function: sub_00231288
// Address: 0x231288 - 0x2312a8
void sub_00231288_0x231288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231288_0x231288");
#endif

    switch (ctx->pc) {
        case 0x231290u: goto label_231290;
        case 0x231294u: goto label_231294;
        case 0x231298u: goto label_231298;
        default: break;
    }

    ctx->pc = 0x231288u;

    // 0x231288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231288u;
    {
        const bool branch_taken_0x231288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231288u;
        // 0x23128c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231288) {
            ctx->pc = 0x231294u;
            goto label_231294;
        }
    }
    ctx->pc = 0x231290u;
label_231290:
    // 0x231290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231294:
    // 0x231294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231298:
    // 0x231298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23129c: 0x3e00008  jr          $ra
    ctx->pc = 0x23129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23129Cu;
        // 0x2312a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23129Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312A4u;
    // 0x2312a4: 0x0  nop
    ctx->pc = 0x2312a4u;
    // NOP
    ctx->pc = 0x2312a8u;
}
