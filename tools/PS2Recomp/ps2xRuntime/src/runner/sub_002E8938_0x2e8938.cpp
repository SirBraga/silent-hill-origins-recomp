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

// Function: sub_002E8938
// Address: 0x2e8938 - 0x2e8958
void sub_002E8938_0x2e8938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8938_0x2e8938");
#endif

    switch (ctx->pc) {
        case 0x2e894cu: goto label_2e894c;
        default: break;
    }

    ctx->pc = 0x2e8938u;

    // 0x2e8938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e893c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e893cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e8940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8944: 0xc0b6c8c  jal         func_2DB230
    ctx->pc = 0x2E8944u;
    SET_GPR_U32(ctx, 31, 0x2E894Cu);
    ctx->pc = 0x2E8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8944u;
    // 0x2e8948: 0x24848568  addiu       $a0, $a0, -0x7A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB230u, 0x2E8944u, 0x2E894Cu)) {
        return;
    }
    ctx->pc = 0x2E894Cu;
label_2e894c:
    // 0x2e894c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e894cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8950: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8950u;
        // 0x2e8954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8958u;
}
