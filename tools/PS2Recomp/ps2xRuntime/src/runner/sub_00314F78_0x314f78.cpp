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

// Function: sub_00314F78
// Address: 0x314f78 - 0x314fa0
void sub_00314F78_0x314f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314F78_0x314f78");
#endif

    switch (ctx->pc) {
        case 0x314f8cu: goto label_314f8c;
        default: break;
    }

    ctx->pc = 0x314f78u;

    // 0x314f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314f84: 0xc0c79ac  jal         func_31E6B0
    ctx->pc = 0x314F84u;
    SET_GPR_U32(ctx, 31, 0x314F8Cu);
    ctx->pc = 0x314F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F84u;
    // 0x314f88: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6B0u, 0x314F84u, 0x314F8Cu)) {
        return;
    }
    ctx->pc = 0x314F8Cu;
label_314f8c:
    // 0x314f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314f90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314f94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x314f94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x314f98: 0x3e00008  jr          $ra
    ctx->pc = 0x314F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F98u;
        // 0x314f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314FA0u;
}
