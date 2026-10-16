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

// Function: sub_00171CA8
// Address: 0x171ca8 - 0x171cd0
void sub_00171CA8_0x171ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CA8_0x171ca8");
#endif

    switch (ctx->pc) {
        case 0x171cc4u: goto label_171cc4;
        default: break;
    }

    ctx->pc = 0x171ca8u;

    // 0x171ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171cac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171cb4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x171cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171cb8: 0x244257a0  addiu       $v0, $v0, 0x57A0
    ctx->pc = 0x171cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22432));
    // 0x171cbc: 0xc05c73a  jal         func_171CE8
    ctx->pc = 0x171CBCu;
    SET_GPR_U32(ctx, 31, 0x171CC4u);
    ctx->pc = 0x171CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CBCu;
    // 0x171cc0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171CE8u, 0x171CBCu, 0x171CC4u)) {
        return;
    }
    ctx->pc = 0x171CC4u;
label_171cc4:
    // 0x171cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x171CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CC8u;
        // 0x171ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171CD0u;
}
