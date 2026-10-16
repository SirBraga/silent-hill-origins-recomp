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

// Function: sub_001DD078
// Address: 0x1dd078 - 0x1dd0a0
void sub_001DD078_0x1dd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD078_0x1dd078");
#endif

    switch (ctx->pc) {
        case 0x1dd090u: goto label_1dd090;
        default: break;
    }

    ctx->pc = 0x1dd078u;

    // 0x1dd078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd07c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1dd080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd088: 0xc08c530  jal         func_2314C0
    ctx->pc = 0x1DD088u;
    SET_GPR_U32(ctx, 31, 0x1DD090u);
    ctx->pc = 0x1DD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD088u;
    // 0x1dd08c: 0x24a5e67c  addiu       $a1, $a1, -0x1984 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2314C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2314C0u, 0x1DD088u, 0x1DD090u)) {
        return;
    }
    ctx->pc = 0x1DD090u;
label_1dd090:
    // 0x1dd090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd094: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD094u;
        // 0x1dd098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD09Cu;
    // 0x1dd09c: 0x0  nop
    ctx->pc = 0x1dd09cu;
    // NOP
    ctx->pc = 0x1dd0a0u;
}
