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

// Function: sub_002E0330
// Address: 0x2e0330 - 0x2e0370
void sub_002E0330_0x2e0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0330_0x2e0330");
#endif

    switch (ctx->pc) {
        case 0x2e035cu: goto label_2e035c;
        default: break;
    }

    ctx->pc = 0x2e0330u;

    // 0x2e0330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0334: 0x27849030  addiu       $a0, $gp, -0x6FD0
    ctx->pc = 0x2e0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x2e0338: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x2e0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
    // 0x2e033c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0344: 0xaf838c08  sw          $v1, -0x73F8($gp)
    ctx->pc = 0x2e0344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 3));
    // 0x2e0348: 0xaf849034  sw          $a0, -0x6FCC($gp)
    ctx->pc = 0x2e0348u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938676), GPR_U32(ctx, 4));
    // 0x2e034c: 0xaf849030  sw          $a0, -0x6FD0($gp)
    ctx->pc = 0x2e034cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938672), GPR_U32(ctx, 4));
    // 0x2e0350: 0xaf82902c  sw          $v0, -0x6FD4($gp)
    ctx->pc = 0x2e0350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938668), GPR_U32(ctx, 2));
    // 0x2e0354: 0xc0b876a  jal         func_2E1DA8
    ctx->pc = 0x2E0354u;
    SET_GPR_U32(ctx, 31, 0x2E035Cu);
    ctx->pc = 0x2E0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0354u;
    // 0x2e0358: 0xaf829028  sw          $v0, -0x6FD8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1DA8u, 0x2E0354u, 0x2E035Cu)) {
        return;
    }
    ctx->pc = 0x2E035Cu;
label_2e035c:
    // 0x2e035c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0364: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0364u;
        // 0x2e0368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E036Cu;
    // 0x2e036c: 0x0  nop
    ctx->pc = 0x2e036cu;
    // NOP
    ctx->pc = 0x2e0370u;
}
