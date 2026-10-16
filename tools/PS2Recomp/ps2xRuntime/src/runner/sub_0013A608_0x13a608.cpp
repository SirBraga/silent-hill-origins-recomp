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

// Function: sub_0013A608
// Address: 0x13a608 - 0x13a628
void sub_0013A608_0x13a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A608_0x13a608");
#endif

    switch (ctx->pc) {
        case 0x13a61cu: goto label_13a61c;
        default: break;
    }

    ctx->pc = 0x13a608u;

    // 0x13a608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a60c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a614: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x13A614u;
    SET_GPR_U32(ctx, 31, 0x13A61Cu);
    ctx->pc = 0x13A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A614u;
    // 0x13a618: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139FF0u, 0x13A614u, 0x13A61Cu)) {
        return;
    }
    ctx->pc = 0x13A61Cu;
label_13a61c:
    // 0x13a61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a620: 0x3e00008  jr          $ra
    ctx->pc = 0x13A620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A620u;
        // 0x13a624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A628u;
}
