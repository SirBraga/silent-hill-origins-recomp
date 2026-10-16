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

// Function: sub_00147838
// Address: 0x147838 - 0x147858
void sub_00147838_0x147838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147838_0x147838");
#endif

    switch (ctx->pc) {
        case 0x14784cu: goto label_14784c;
        default: break;
    }

    ctx->pc = 0x147838u;

    // 0x147838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14783c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147844: 0xc051d92  jal         func_147648
    ctx->pc = 0x147844u;
    SET_GPR_U32(ctx, 31, 0x14784Cu);
    ctx->pc = 0x147848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147844u;
    // 0x147848: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147648u, 0x147844u, 0x14784Cu)) {
        return;
    }
    ctx->pc = 0x14784Cu;
label_14784c:
    // 0x14784c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147850: 0x3e00008  jr          $ra
    ctx->pc = 0x147850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147850u;
        // 0x147854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147858u;
}
