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

// Function: sub_001B4E80
// Address: 0x1b4e80 - 0x1b4ea0
void sub_001B4E80_0x1b4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4E80_0x1b4e80");
#endif

    switch (ctx->pc) {
        case 0x1b4e94u: goto label_1b4e94;
        default: break;
    }

    ctx->pc = 0x1b4e80u;

    // 0x1b4e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4e84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4e8c: 0xc06d2de  jal         func_1B4B78
    ctx->pc = 0x1B4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E94u);
    ctx->pc = 0x1B4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E8Cu;
    // 0x1b4e90: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4B78u, 0x1B4E8Cu, 0x1B4E94u)) {
        return;
    }
    ctx->pc = 0x1B4E94u;
label_1b4e94:
    // 0x1b4e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E98u;
        // 0x1b4e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4EA0u;
}
