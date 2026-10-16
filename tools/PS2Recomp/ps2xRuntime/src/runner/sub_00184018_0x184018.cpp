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

// Function: sub_00184018
// Address: 0x184018 - 0x184038
void sub_00184018_0x184018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184018_0x184018");
#endif

    switch (ctx->pc) {
        case 0x18402cu: goto label_18402c;
        default: break;
    }

    ctx->pc = 0x184018u;

    // 0x184018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18401c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184024: 0xc060ee2  jal         func_183B88
    ctx->pc = 0x184024u;
    SET_GPR_U32(ctx, 31, 0x18402Cu);
    ctx->pc = 0x184028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184024u;
    // 0x184028: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183B88u, 0x184024u, 0x18402Cu)) {
        return;
    }
    ctx->pc = 0x18402Cu;
label_18402c:
    // 0x18402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184030: 0x3e00008  jr          $ra
    ctx->pc = 0x184030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184030u;
        // 0x184034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184038u;
}
