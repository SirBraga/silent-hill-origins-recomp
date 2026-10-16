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

// Function: sub_002660D0
// Address: 0x2660d0 - 0x2660f8
void sub_002660D0_0x2660d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002660D0_0x2660d0");
#endif

    switch (ctx->pc) {
        case 0x2660e8u: goto label_2660e8;
        default: break;
    }

    ctx->pc = 0x2660d0u;

    // 0x2660d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2660d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2660d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2660d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2660d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2660dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2660dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2660e0: 0xc099738  jal         func_265CE0
    ctx->pc = 0x2660E0u;
    SET_GPR_U32(ctx, 31, 0x2660E8u);
    ctx->pc = 0x2660E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660E0u;
    // 0x2660e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265CE0u, 0x2660E0u, 0x2660E8u)) {
        return;
    }
    ctx->pc = 0x2660E8u;
label_2660e8:
    // 0x2660e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2660e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2660ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2660ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660ECu;
        // 0x2660f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2660ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2660F4u;
    // 0x2660f4: 0x0  nop
    ctx->pc = 0x2660f4u;
    // NOP
    ctx->pc = 0x2660f8u;
}
