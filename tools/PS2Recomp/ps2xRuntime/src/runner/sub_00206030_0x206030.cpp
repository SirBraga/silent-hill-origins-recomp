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

// Function: sub_00206030
// Address: 0x206030 - 0x206058
void sub_00206030_0x206030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206030_0x206030");
#endif

    switch (ctx->pc) {
        case 0x206040u: goto label_206040;
        default: break;
    }

    ctx->pc = 0x206030u;

    // 0x206030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206038: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x206038u;
    SET_GPR_U32(ctx, 31, 0x206040u);
    ctx->pc = 0x20603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206038u;
    // 0x20603c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x206038u, 0x206040u)) {
        return;
    }
    ctx->pc = 0x206040u;
label_206040:
    // 0x206040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206044: 0x3e00008  jr          $ra
    ctx->pc = 0x206044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206044u;
        // 0x206048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20604Cu;
    // 0x20604c: 0x0  nop
    ctx->pc = 0x20604cu;
    // NOP
    // 0x206050: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206054: 0x0  nop
    ctx->pc = 0x206054u;
    // NOP
    ctx->pc = 0x206058u;
}
