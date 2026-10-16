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

// Function: sub_00263720
// Address: 0x263720 - 0x263740
void sub_00263720_0x263720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263720_0x263720");
#endif

    switch (ctx->pc) {
        case 0x263730u: goto label_263730;
        default: break;
    }

    ctx->pc = 0x263720u;

    // 0x263720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263728: 0xc097b8a  jal         func_25EE28
    ctx->pc = 0x263728u;
    SET_GPR_U32(ctx, 31, 0x263730u);
    ctx->pc = 0x26372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263728u;
    // 0x26372c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EE28u, 0x263728u, 0x263730u)) {
        return;
    }
    ctx->pc = 0x263730u;
label_263730:
    // 0x263730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263734: 0x3e00008  jr          $ra
    ctx->pc = 0x263734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263734u;
        // 0x263738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26373Cu;
    // 0x26373c: 0x0  nop
    ctx->pc = 0x26373cu;
    // NOP
    ctx->pc = 0x263740u;
}
