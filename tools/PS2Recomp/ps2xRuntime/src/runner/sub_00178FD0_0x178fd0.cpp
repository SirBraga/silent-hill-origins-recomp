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

// Function: sub_00178FD0
// Address: 0x178fd0 - 0x178ff0
void sub_00178FD0_0x178fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178FD0_0x178fd0");
#endif

    switch (ctx->pc) {
        case 0x178fe4u: goto label_178fe4;
        default: break;
    }

    ctx->pc = 0x178fd0u;

    // 0x178fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178fd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178fdc: 0xc05e1a8  jal         func_1786A0
    ctx->pc = 0x178FDCu;
    SET_GPR_U32(ctx, 31, 0x178FE4u);
    ctx->pc = 0x178FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178FDCu;
    // 0x178fe0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1786A0u, 0x178FDCu, 0x178FE4u)) {
        return;
    }
    ctx->pc = 0x178FE4u;
label_178fe4:
    // 0x178fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x178FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178FF0u;
}
