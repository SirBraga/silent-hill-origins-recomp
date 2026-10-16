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

// Function: sub_002E2D00
// Address: 0x2e2d00 - 0x2e2d38
void sub_002E2D00_0x2e2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D00_0x2e2d00");
#endif

    switch (ctx->pc) {
        case 0x2e2d2cu: goto label_2e2d2c;
        default: break;
    }

    ctx->pc = 0x2e2d00u;

    // 0x2e2d00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e2d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2d08: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2e2d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d0c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e2d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d10: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e2d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e2d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2d18: 0x24848248  addiu       $a0, $a0, -0x7DB8
    ctx->pc = 0x2e2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935112));
    // 0x2e2d1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e2d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d24: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2E2D24u;
    SET_GPR_U32(ctx, 31, 0x2E2D2Cu);
    ctx->pc = 0x2E2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D24u;
    // 0x2e2d28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2E2D24u, 0x2E2D2Cu)) {
        return;
    }
    ctx->pc = 0x2E2D2Cu;
label_2e2d2c:
    // 0x2e2d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D30u;
        // 0x2e2d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D38u;
}
