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

// Function: sub_0019C628
// Address: 0x19c628 - 0x19c648
void sub_0019C628_0x19c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C628_0x19c628");
#endif

    switch (ctx->pc) {
        case 0x19c63cu: goto label_19c63c;
        default: break;
    }

    ctx->pc = 0x19c628u;

    // 0x19c628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c62c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c634: 0xc06709e  jal         func_19C278
    ctx->pc = 0x19C634u;
    SET_GPR_U32(ctx, 31, 0x19C63Cu);
    ctx->pc = 0x19C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C634u;
    // 0x19c638: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C278u, 0x19C634u, 0x19C63Cu)) {
        return;
    }
    ctx->pc = 0x19C63Cu;
label_19c63c:
    // 0x19c63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c640: 0x3e00008  jr          $ra
    ctx->pc = 0x19C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C640u;
        // 0x19c644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C648u;
}
