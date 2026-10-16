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

// Function: sub_0016AEE0
// Address: 0x16aee0 - 0x16af00
void sub_0016AEE0_0x16aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AEE0_0x16aee0");
#endif

    switch (ctx->pc) {
        case 0x16aef4u: goto label_16aef4;
        default: break;
    }

    ctx->pc = 0x16aee0u;

    // 0x16aee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16aee4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16aeec: 0xc05ab1a  jal         func_16AC68
    ctx->pc = 0x16AEECu;
    SET_GPR_U32(ctx, 31, 0x16AEF4u);
    ctx->pc = 0x16AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEECu;
    // 0x16aef0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16AC68u, 0x16AEECu, 0x16AEF4u)) {
        return;
    }
    ctx->pc = 0x16AEF4u;
label_16aef4:
    // 0x16aef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16aef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aef8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEF8u;
        // 0x16aefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF00u;
}
