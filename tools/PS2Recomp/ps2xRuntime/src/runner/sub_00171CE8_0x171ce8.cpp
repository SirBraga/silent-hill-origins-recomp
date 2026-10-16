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

// Function: sub_00171CE8
// Address: 0x171ce8 - 0x171d18
void sub_00171CE8_0x171ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CE8_0x171ce8");
#endif

    switch (ctx->pc) {
        case 0x171d0cu: goto label_171d0c;
        default: break;
    }

    ctx->pc = 0x171ce8u;

    // 0x171ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171cec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171cf4: 0x24425830  addiu       $v0, $v0, 0x5830
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22576));
    // 0x171cf8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x171cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x171cfc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x171CFCu;
    {
        const bool branch_taken_0x171cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CFCu;
        // 0x171d00: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cfc) {
            ctx->pc = 0x171D0Cu;
            goto label_171d0c;
        }
    }
    ctx->pc = 0x171D04u;
    // 0x171d04: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x171D04u;
    SET_GPR_U32(ctx, 31, 0x171D0Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x171D04u, 0x171D0Cu)) {
        return;
    }
    ctx->pc = 0x171D0Cu;
label_171d0c:
    // 0x171d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d10: 0x3e00008  jr          $ra
    ctx->pc = 0x171D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D10u;
        // 0x171d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D18u;
}
