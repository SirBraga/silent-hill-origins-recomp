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

// Function: sub_00248A78
// Address: 0x248a78 - 0x248aa0
void sub_00248A78_0x248a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A78_0x248a78");
#endif

    switch (ctx->pc) {
        case 0x248a8cu: goto label_248a8c;
        default: break;
    }

    ctx->pc = 0x248a78u;

    // 0x248a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248a7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x248a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248a84: 0xc0922ac  jal         func_248AB0
    ctx->pc = 0x248A84u;
    SET_GPR_U32(ctx, 31, 0x248A8Cu);
    ctx->pc = 0x248A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A84u;
    // 0x248a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248AB0u, 0x248A84u, 0x248A8Cu)) {
        return;
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x248a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248a94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x248a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248a98: 0x3e00008  jr          $ra
    ctx->pc = 0x248A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A98u;
        // 0x248a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248AA0u;
}
