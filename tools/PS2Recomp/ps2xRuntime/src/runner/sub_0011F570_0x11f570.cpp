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

// Function: sub_0011F570
// Address: 0x11f570 - 0x11f598
void sub_0011F570_0x11f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F570_0x11f570");
#endif

    switch (ctx->pc) {
        case 0x11f588u: goto label_11f588;
        default: break;
    }

    ctx->pc = 0x11f570u;

    // 0x11f570: 0x24a4ffc0  addiu       $a0, $a1, -0x40
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    // 0x11f574: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f578: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x11f578u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x11f57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f580: 0xc047d96  jal         func_11F658
    ctx->pc = 0x11F580u;
    SET_GPR_U32(ctx, 31, 0x11F588u);
    ctx->pc = 0x11F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F580u;
    // 0x11f584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F658u, 0x11F580u, 0x11F588u)) {
        return;
    }
    ctx->pc = 0x11F588u;
label_11f588:
    // 0x11f588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F58Cu;
        // 0x11f590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F594u;
    // 0x11f594: 0x0  nop
    ctx->pc = 0x11f594u;
    // NOP
    ctx->pc = 0x11f598u;
}
