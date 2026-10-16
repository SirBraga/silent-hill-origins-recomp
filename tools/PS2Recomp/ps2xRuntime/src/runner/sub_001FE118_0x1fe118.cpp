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

// Function: sub_001FE118
// Address: 0x1fe118 - 0x1fe140
void sub_001FE118_0x1fe118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE118_0x1fe118");
#endif

    switch (ctx->pc) {
        case 0x1fe128u: goto label_1fe128;
        case 0x1fe130u: goto label_1fe130;
        default: break;
    }

    ctx->pc = 0x1fe118u;

    // 0x1fe118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe11c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe120: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x1FE120u;
    SET_GPR_U32(ctx, 31, 0x1FE128u);
    ctx->pc = 0x1FD040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD040u, 0x1FE120u, 0x1FE128u)) {
        return;
    }
    ctx->pc = 0x1FE128u;
label_1fe128:
    // 0x1fe128: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x1FE128u;
    SET_GPR_U32(ctx, 31, 0x1FE130u);
    ctx->pc = 0x1FE12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE128u;
    // 0x1fe12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE170u, 0x1FE128u, 0x1FE130u)) {
        return;
    }
    ctx->pc = 0x1FE130u;
label_1fe130:
    // 0x1fe130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe134: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE13Cu;
    // 0x1fe13c: 0x0  nop
    ctx->pc = 0x1fe13cu;
    // NOP
    ctx->pc = 0x1fe140u;
}
