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

// Function: sub_0018C978
// Address: 0x18c978 - 0x18c9a0
void sub_0018C978_0x18c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C978_0x18c978");
#endif

    switch (ctx->pc) {
        case 0x18c994u: goto label_18c994;
        default: break;
    }

    ctx->pc = 0x18c978u;

    // 0x18c978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c980: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x18c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x18c984: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C984u;
    {
        const bool branch_taken_0x18c984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C984u;
        // 0x18c988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c984) {
            ctx->pc = 0x18C994u;
            goto label_18c994;
        }
    }
    ctx->pc = 0x18C98Cu;
    // 0x18c98c: 0xc095596  jal         func_255658
    ctx->pc = 0x18C98Cu;
    SET_GPR_U32(ctx, 31, 0x18C994u);
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x18C98Cu, 0x18C994u)) {
        return;
    }
    ctx->pc = 0x18C994u;
label_18c994:
    // 0x18c994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c998: 0x3e00008  jr          $ra
    ctx->pc = 0x18C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C998u;
        // 0x18c99c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C9A0u;
}
