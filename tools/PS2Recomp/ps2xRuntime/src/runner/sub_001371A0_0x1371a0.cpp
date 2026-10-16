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

// Function: sub_001371A0
// Address: 0x1371a0 - 0x1371c8
void sub_001371A0_0x1371a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001371A0_0x1371a0");
#endif

    switch (ctx->pc) {
        case 0x1371b4u: goto label_1371b4;
        default: break;
    }

    ctx->pc = 0x1371a0u;

    // 0x1371a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1371a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1371a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1371a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1371a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1371ac: 0xc0491ce  jal         func_124738
    ctx->pc = 0x1371ACu;
    SET_GPR_U32(ctx, 31, 0x1371B4u);
    ctx->pc = 0x1371B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371ACu;
    // 0x1371b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124738u, 0x1371ACu, 0x1371B4u)) {
        return;
    }
    ctx->pc = 0x1371B4u;
label_1371b4:
    // 0x1371b4: 0xae001964  sw          $zero, 0x1964($s0)
    ctx->pc = 0x1371b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6500), GPR_U32(ctx, 0));
    // 0x1371b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1371b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1371bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1371bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1371c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1371C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1371C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371C0u;
        // 0x1371c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1371C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1371C8u;
}
