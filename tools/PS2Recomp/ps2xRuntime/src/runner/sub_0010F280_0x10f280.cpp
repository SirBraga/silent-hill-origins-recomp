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

// Function: sub_0010F280
// Address: 0x10f280 - 0x10f2a8
void sub_0010F280_0x10f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F280_0x10f280");
#endif

    switch (ctx->pc) {
        case 0x10f29cu: goto label_10f29c;
        default: break;
    }

    ctx->pc = 0x10f280u;

    // 0x10f280: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10f280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f284: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10f288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f28c: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x10f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x10f290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f294: 0xc0432a4  jal         func_10CA90
    ctx->pc = 0x10F294u;
    SET_GPR_U32(ctx, 31, 0x10F29Cu);
    ctx->pc = 0x10CA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10CA90u, 0x10F294u, 0x10F29Cu)) {
        return;
    }
    ctx->pc = 0x10F29Cu;
label_10f29c:
    // 0x10f29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2A0u;
        // 0x10f2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2A8u;
}
