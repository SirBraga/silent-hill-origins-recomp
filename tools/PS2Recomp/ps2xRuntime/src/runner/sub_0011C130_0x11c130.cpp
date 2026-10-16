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

// Function: sub_0011C130
// Address: 0x11c130 - 0x11c150
void sub_0011C130_0x11c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C130_0x11c130");
#endif

    switch (ctx->pc) {
        case 0x11c144u: goto label_11c144;
        default: break;
    }

    ctx->pc = 0x11c130u;

    // 0x11c130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c13c: 0xc046ff8  jal         func_11BFE0
    ctx->pc = 0x11C13Cu;
    SET_GPR_U32(ctx, 31, 0x11C144u);
    ctx->pc = 0x11C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C13Cu;
    // 0x11c140: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11BFE0u, 0x11C13Cu, 0x11C144u)) {
        return;
    }
    ctx->pc = 0x11C144u;
label_11c144:
    // 0x11c144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c148: 0x3e00008  jr          $ra
    ctx->pc = 0x11C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C148u;
        // 0x11c14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C150u;
}
