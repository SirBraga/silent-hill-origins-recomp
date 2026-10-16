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

// Function: sub_002E1D30
// Address: 0x2e1d30 - 0x2e1d68
void sub_002E1D30_0x2e1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D30_0x2e1d30");
#endif

    switch (ctx->pc) {
        case 0x2e1d5cu: goto label_2e1d5c;
        default: break;
    }

    ctx->pc = 0x2e1d30u;

    // 0x2e1d30: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2e1d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1d38: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2e1d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d3c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e1d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e1d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d44: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e1d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1d4c: 0x244481d0  addiu       $a0, $v0, -0x7E30
    ctx->pc = 0x2e1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x2e1d50: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2e1d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d54: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2E1D54u;
    SET_GPR_U32(ctx, 31, 0x2E1D5Cu);
    ctx->pc = 0x2E1D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D54u;
    // 0x2e1d58: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2E1D54u, 0x2E1D5Cu)) {
        return;
    }
    ctx->pc = 0x2E1D5Cu;
label_2e1d5c:
    // 0x2e1d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1d60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D60u;
        // 0x2e1d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D68u;
}
