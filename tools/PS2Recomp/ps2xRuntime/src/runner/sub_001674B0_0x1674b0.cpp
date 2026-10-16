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

// Function: sub_001674B0
// Address: 0x1674b0 - 0x1674e0
void sub_001674B0_0x1674b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001674B0_0x1674b0");
#endif

    switch (ctx->pc) {
        case 0x1674c8u: goto label_1674c8;
        default: break;
    }

    ctx->pc = 0x1674b0u;

    // 0x1674b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1674b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1674b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1674b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1674b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1674bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1674bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1674c0: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x1674C0u;
    SET_GPR_U32(ctx, 31, 0x1674C8u);
    ctx->pc = 0x1674C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674C0u;
    // 0x1674c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x1674C0u, 0x1674C8u)) {
        return;
    }
    ctx->pc = 0x1674C8u;
label_1674c8:
    // 0x1674c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1674ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1674d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1674d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1674d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1674D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1674D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674D4u;
        // 0x1674d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1674D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1674DCu;
    // 0x1674dc: 0x0  nop
    ctx->pc = 0x1674dcu;
    // NOP
    ctx->pc = 0x1674e0u;
}
