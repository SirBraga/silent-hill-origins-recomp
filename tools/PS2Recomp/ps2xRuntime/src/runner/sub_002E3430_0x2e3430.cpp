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

// Function: sub_002E3430
// Address: 0x2e3430 - 0x2e3468
void sub_002E3430_0x2e3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3430_0x2e3430");
#endif

    switch (ctx->pc) {
        case 0x2e3454u: goto label_2e3454;
        default: break;
    }

    ctx->pc = 0x2e3430u;

    // 0x2e3430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e3434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e3438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e343c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e343cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3440: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2e3440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e3444: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e3444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e3448: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e3448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e344c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2E344Cu;
    SET_GPR_U32(ctx, 31, 0x2E3454u);
    ctx->pc = 0x2E3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E344Cu;
    // 0x2e3450: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E344Cu, 0x2E3454u)) {
        return;
    }
    ctx->pc = 0x2E3454u;
label_2e3454:
    // 0x2e3454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e345c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e345cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3460: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3460u;
        // 0x2e3464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3468u;
}
