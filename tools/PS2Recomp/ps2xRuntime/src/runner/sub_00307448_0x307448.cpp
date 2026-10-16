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

// Function: sub_00307448
// Address: 0x307448 - 0x307470
void sub_00307448_0x307448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307448_0x307448");
#endif

    switch (ctx->pc) {
        case 0x30745cu: goto label_30745c;
        default: break;
    }

    ctx->pc = 0x307448u;

    // 0x307448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30744c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x307450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307454: 0xc0c1ca0  jal         func_307280
    ctx->pc = 0x307454u;
    SET_GPR_U32(ctx, 31, 0x30745Cu);
    ctx->pc = 0x307458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307454u;
    // 0x307458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307280u, 0x307454u, 0x30745Cu)) {
        return;
    }
    ctx->pc = 0x30745Cu;
label_30745c:
    // 0x30745c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307468: 0x3e00008  jr          $ra
    ctx->pc = 0x307468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307468u;
        // 0x30746c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307470u;
}
