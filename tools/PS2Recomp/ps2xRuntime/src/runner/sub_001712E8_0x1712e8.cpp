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

// Function: sub_001712E8
// Address: 0x1712e8 - 0x171308
void sub_001712E8_0x1712e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001712E8_0x1712e8");
#endif

    switch (ctx->pc) {
        case 0x1712fcu: goto label_1712fc;
        default: break;
    }

    ctx->pc = 0x1712e8u;

    // 0x1712e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1712ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1712ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1712f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1712f4: 0xc05c40c  jal         func_171030
    ctx->pc = 0x1712F4u;
    SET_GPR_U32(ctx, 31, 0x1712FCu);
    ctx->pc = 0x1712F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712F4u;
    // 0x1712f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x171030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171030u, 0x1712F4u, 0x1712FCu)) {
        return;
    }
    ctx->pc = 0x1712FCu;
label_1712fc:
    // 0x1712fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1712fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171300: 0x3e00008  jr          $ra
    ctx->pc = 0x171300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171300u;
        // 0x171304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171308u;
}
