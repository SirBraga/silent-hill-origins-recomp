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

// Function: sub_0013D970
// Address: 0x13d970 - 0x13d990
void sub_0013D970_0x13d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D970_0x13d970");
#endif

    switch (ctx->pc) {
        case 0x13d984u: goto label_13d984;
        default: break;
    }

    ctx->pc = 0x13d970u;

    // 0x13d970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d97c: 0xc04f5d0  jal         func_13D740
    ctx->pc = 0x13D97Cu;
    SET_GPR_U32(ctx, 31, 0x13D984u);
    ctx->pc = 0x13D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D97Cu;
    // 0x13d980: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D740u, 0x13D97Cu, 0x13D984u)) {
        return;
    }
    ctx->pc = 0x13D984u;
label_13d984:
    // 0x13d984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d988: 0x3e00008  jr          $ra
    ctx->pc = 0x13D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D988u;
        // 0x13d98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D990u;
}
