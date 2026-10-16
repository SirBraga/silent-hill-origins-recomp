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

// Function: sub_00265558
// Address: 0x265558 - 0x265580
void sub_00265558_0x265558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265558_0x265558");
#endif

    switch (ctx->pc) {
        case 0x265570u: goto label_265570;
        default: break;
    }

    ctx->pc = 0x265558u;

    // 0x265558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26555c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26555cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265564: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x265564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x265568: 0xc099468  jal         func_2651A0
    ctx->pc = 0x265568u;
    SET_GPR_U32(ctx, 31, 0x265570u);
    ctx->pc = 0x26556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265568u;
    // 0x26556c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2651A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2651A0u, 0x265568u, 0x265570u)) {
        return;
    }
    ctx->pc = 0x265570u;
label_265570:
    // 0x265570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265574: 0x3e00008  jr          $ra
    ctx->pc = 0x265574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265574u;
        // 0x265578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26557Cu;
    // 0x26557c: 0x0  nop
    ctx->pc = 0x26557cu;
    // NOP
    ctx->pc = 0x265580u;
}
