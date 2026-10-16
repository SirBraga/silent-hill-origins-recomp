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

// Function: sub_001D8300
// Address: 0x1d8300 - 0x1d8320
void sub_001D8300_0x1d8300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8300_0x1d8300");
#endif

    switch (ctx->pc) {
        case 0x1d8314u: goto label_1d8314;
        default: break;
    }

    ctx->pc = 0x1d8300u;

    // 0x1d8300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d8304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d830c: 0xc075fa6  jal         func_1D7E98
    ctx->pc = 0x1D830Cu;
    SET_GPR_U32(ctx, 31, 0x1D8314u);
    ctx->pc = 0x1D8310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D830Cu;
    // 0x1d8310: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7E98u, 0x1D830Cu, 0x1D8314u)) {
        return;
    }
    ctx->pc = 0x1D8314u;
label_1d8314:
    // 0x1d8314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8318: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8318u;
        // 0x1d831c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8320u;
}
