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

// Function: sub_002872B8
// Address: 0x2872b8 - 0x2872e8
void sub_002872B8_0x2872b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002872B8_0x2872b8");
#endif

    switch (ctx->pc) {
        case 0x2872d4u: goto label_2872d4;
        default: break;
    }

    ctx->pc = 0x2872b8u;

    // 0x2872b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2872b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2872bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2872bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2872c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2872c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2872c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2872c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2872cc: 0xc0a19f0  jal         func_2867C0
    ctx->pc = 0x2872CCu;
    SET_GPR_U32(ctx, 31, 0x2872D4u);
    ctx->pc = 0x2872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2872CCu;
    // 0x2872d0: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2867C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2867C0u, 0x2872CCu, 0x2872D4u)) {
        return;
    }
    ctx->pc = 0x2872D4u;
label_2872d4:
    // 0x2872d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2872d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2872d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2872dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2872dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2872e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2872E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872E0u;
        // 0x2872e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2872E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2872E8u;
}
