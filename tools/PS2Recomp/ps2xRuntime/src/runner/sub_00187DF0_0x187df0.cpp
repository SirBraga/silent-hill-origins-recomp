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

// Function: sub_00187DF0
// Address: 0x187df0 - 0x187e10
void sub_00187DF0_0x187df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187DF0_0x187df0");
#endif

    switch (ctx->pc) {
        case 0x187e04u: goto label_187e04;
        default: break;
    }

    ctx->pc = 0x187df0u;

    // 0x187df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187df4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187dfc: 0xc061ef4  jal         func_187BD0
    ctx->pc = 0x187DFCu;
    SET_GPR_U32(ctx, 31, 0x187E04u);
    ctx->pc = 0x187E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DFCu;
    // 0x187e00: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x187BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187BD0u, 0x187DFCu, 0x187E04u)) {
        return;
    }
    ctx->pc = 0x187E04u;
label_187e04:
    // 0x187e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e08: 0x3e00008  jr          $ra
    ctx->pc = 0x187E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E08u;
        // 0x187e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187E10u;
}
