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

// Function: sub_002E9B80
// Address: 0x2e9b80 - 0x2e9bb8
void sub_002E9B80_0x2e9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9B80_0x2e9b80");
#endif

    switch (ctx->pc) {
        case 0x2e9bacu: goto label_2e9bac;
        default: break;
    }

    ctx->pc = 0x2e9b80u;

    // 0x2e9b80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2e9b80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9b88: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2e9b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e9b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e9b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9b9c: 0x2444e400  addiu       $a0, $v0, -0x1C00
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960128));
    // 0x2e9ba0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2e9ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ba4: 0xc0b67f4  jal         func_2D9FD0
    ctx->pc = 0x2E9BA4u;
    SET_GPR_U32(ctx, 31, 0x2E9BACu);
    ctx->pc = 0x2E9BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9BA4u;
    // 0x2e9ba8: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9FD0u, 0x2E9BA4u, 0x2E9BACu)) {
        return;
    }
    ctx->pc = 0x2E9BACu;
label_2e9bac:
    // 0x2e9bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9BB0u;
        // 0x2e9bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9BB8u;
}
