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

// Function: sub_0016C140
// Address: 0x16c140 - 0x16c160
void sub_0016C140_0x16c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C140_0x16c140");
#endif

    switch (ctx->pc) {
        case 0x16c154u: goto label_16c154;
        default: break;
    }

    ctx->pc = 0x16c140u;

    // 0x16c140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c14c: 0xc05afe2  jal         func_16BF88
    ctx->pc = 0x16C14Cu;
    SET_GPR_U32(ctx, 31, 0x16C154u);
    ctx->pc = 0x16C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C14Cu;
    // 0x16c150: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16BF88u, 0x16C14Cu, 0x16C154u)) {
        return;
    }
    ctx->pc = 0x16C154u;
label_16c154:
    // 0x16c154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c158: 0x3e00008  jr          $ra
    ctx->pc = 0x16C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C160u;
}
