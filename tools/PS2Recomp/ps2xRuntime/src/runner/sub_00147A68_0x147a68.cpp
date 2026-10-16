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

// Function: sub_00147A68
// Address: 0x147a68 - 0x147a88
void sub_00147A68_0x147a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147A68_0x147a68");
#endif

    switch (ctx->pc) {
        case 0x147a7cu: goto label_147a7c;
        default: break;
    }

    ctx->pc = 0x147a68u;

    // 0x147a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147a74: 0xc051e48  jal         func_147920
    ctx->pc = 0x147A74u;
    SET_GPR_U32(ctx, 31, 0x147A7Cu);
    ctx->pc = 0x147A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A74u;
    // 0x147a78: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147920u, 0x147A74u, 0x147A7Cu)) {
        return;
    }
    ctx->pc = 0x147A7Cu;
label_147a7c:
    // 0x147a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147a80: 0x3e00008  jr          $ra
    ctx->pc = 0x147A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A80u;
        // 0x147a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147A88u;
}
