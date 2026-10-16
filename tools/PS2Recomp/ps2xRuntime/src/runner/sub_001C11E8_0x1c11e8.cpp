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

// Function: sub_001C11E8
// Address: 0x1c11e8 - 0x1c1208
void sub_001C11E8_0x1c11e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C11E8_0x1c11e8");
#endif

    switch (ctx->pc) {
        case 0x1c11f8u: goto label_1c11f8;
        default: break;
    }

    ctx->pc = 0x1c11e8u;

    // 0x1c11e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11f0: 0xc06fc56  jal         func_1BF158
    ctx->pc = 0x1C11F0u;
    SET_GPR_U32(ctx, 31, 0x1C11F8u);
    ctx->pc = 0x1C11F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11F0u;
    // 0x1c11f4: 0x8c8602c8  lw          $a2, 0x2C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BF158u, 0x1C11F0u, 0x1C11F8u)) {
        return;
    }
    ctx->pc = 0x1C11F8u;
label_1c11f8:
    // 0x1c11f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11FCu;
        // 0x1c1200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1204u;
    // 0x1c1204: 0x0  nop
    ctx->pc = 0x1c1204u;
    // NOP
    ctx->pc = 0x1c1208u;
}
