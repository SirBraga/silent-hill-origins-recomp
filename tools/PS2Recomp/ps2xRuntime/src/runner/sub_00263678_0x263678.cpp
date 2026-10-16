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

// Function: sub_00263678
// Address: 0x263678 - 0x263698
void sub_00263678_0x263678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263678_0x263678");
#endif

    switch (ctx->pc) {
        case 0x263688u: goto label_263688;
        default: break;
    }

    ctx->pc = 0x263678u;

    // 0x263678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26367c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26367cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263680: 0xc097ba2  jal         func_25EE88
    ctx->pc = 0x263680u;
    SET_GPR_U32(ctx, 31, 0x263688u);
    ctx->pc = 0x263684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263680u;
    // 0x263684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EE88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EE88u, 0x263680u, 0x263688u)) {
        return;
    }
    ctx->pc = 0x263688u;
label_263688:
    // 0x263688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26368c: 0x3e00008  jr          $ra
    ctx->pc = 0x26368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26368Cu;
        // 0x263690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263694u;
    // 0x263694: 0x0  nop
    ctx->pc = 0x263694u;
    // NOP
    ctx->pc = 0x263698u;
}
