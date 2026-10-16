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

// Function: sub_00206628
// Address: 0x206628 - 0x206648
void sub_00206628_0x206628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206628_0x206628");
#endif

    switch (ctx->pc) {
        case 0x206638u: goto label_206638;
        default: break;
    }

    ctx->pc = 0x206628u;

    // 0x206628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20662c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206630: 0xc08098c  jal         func_202630
    ctx->pc = 0x206630u;
    SET_GPR_U32(ctx, 31, 0x206638u);
    ctx->pc = 0x206634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206630u;
    // 0x206634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202630u, 0x206630u, 0x206638u)) {
        return;
    }
    ctx->pc = 0x206638u;
label_206638:
    // 0x206638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20663c: 0x3e00008  jr          $ra
    ctx->pc = 0x20663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20663Cu;
        // 0x206640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206644u;
    // 0x206644: 0x0  nop
    ctx->pc = 0x206644u;
    // NOP
    ctx->pc = 0x206648u;
}
