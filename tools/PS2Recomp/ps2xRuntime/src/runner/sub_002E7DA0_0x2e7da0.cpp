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

// Function: sub_002E7DA0
// Address: 0x2e7da0 - 0x2e7dd0
void sub_002E7DA0_0x2e7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DA0_0x2e7da0");
#endif

    switch (ctx->pc) {
        case 0x2e7dbcu: goto label_2e7dbc;
        default: break;
    }

    ctx->pc = 0x2e7da0u;

    // 0x2e7da0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2e7da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7da4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7da8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e7da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7dac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7db0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e7db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7db4: 0xc0b9226  jal         func_2E4898
    ctx->pc = 0x2E7DB4u;
    SET_GPR_U32(ctx, 31, 0x2E7DBCu);
    ctx->pc = 0x2E7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DB4u;
    // 0x2e7db8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4898u, 0x2E7DB4u, 0x2E7DBCu)) {
        return;
    }
    ctx->pc = 0x2E7DBCu;
label_2e7dbc:
    // 0x2e7dbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC4u;
        // 0x2e7dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7DCCu;
    // 0x2e7dcc: 0x0  nop
    ctx->pc = 0x2e7dccu;
    // NOP
    ctx->pc = 0x2e7dd0u;
}
