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

// Function: sub_002961F8
// Address: 0x2961f8 - 0x296218
void sub_002961F8_0x2961f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002961F8_0x2961f8");
#endif

    switch (ctx->pc) {
        case 0x296208u: goto label_296208;
        default: break;
    }

    ctx->pc = 0x2961f8u;

    // 0x2961f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2961f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2961fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2961fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296200: 0xc0a57be  jal         func_295EF8
    ctx->pc = 0x296200u;
    SET_GPR_U32(ctx, 31, 0x296208u);
    ctx->pc = 0x296204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296200u;
    // 0x296204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295EF8u, 0x296200u, 0x296208u)) {
        return;
    }
    ctx->pc = 0x296208u;
label_296208:
    // 0x296208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29620c: 0x3e00008  jr          $ra
    ctx->pc = 0x29620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29620Cu;
        // 0x296210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29620Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296214u;
    // 0x296214: 0x0  nop
    ctx->pc = 0x296214u;
    // NOP
    ctx->pc = 0x296218u;
}
