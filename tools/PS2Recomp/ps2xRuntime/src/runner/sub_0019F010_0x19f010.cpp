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

// Function: sub_0019F010
// Address: 0x19f010 - 0x19f038
void sub_0019F010_0x19f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F010_0x19f010");
#endif

    switch (ctx->pc) {
        case 0x19f02cu: goto label_19f02c;
        default: break;
    }

    ctx->pc = 0x19f010u;

    // 0x19f010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f014: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19f018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f01c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f020: 0x2442a568  addiu       $v0, $v0, -0x5A98
    ctx->pc = 0x19f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944104));
    // 0x19f024: 0xc080596  jal         func_201658
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F024u;
    // 0x19f028: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19F024u, 0x19F02Cu)) {
        return;
    }
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f030: 0x3e00008  jr          $ra
    ctx->pc = 0x19F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F030u;
        // 0x19f034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F038u;
}
