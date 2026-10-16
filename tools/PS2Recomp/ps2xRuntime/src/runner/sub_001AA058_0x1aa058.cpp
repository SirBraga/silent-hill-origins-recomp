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

// Function: sub_001AA058
// Address: 0x1aa058 - 0x1aa078
void sub_001AA058_0x1aa058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA058_0x1aa058");
#endif

    switch (ctx->pc) {
        case 0x1aa068u: goto label_1aa068;
        default: break;
    }

    ctx->pc = 0x1aa058u;

    // 0x1aa058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa060: 0xc06a5b6  jal         func_1A96D8
    ctx->pc = 0x1AA060u;
    SET_GPR_U32(ctx, 31, 0x1AA068u);
    ctx->pc = 0x1AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA060u;
    // 0x1aa064: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A96D8u, 0x1AA060u, 0x1AA068u)) {
        return;
    }
    ctx->pc = 0x1AA068u;
label_1aa068:
    // 0x1aa068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA06Cu;
        // 0x1aa070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA074u;
    // 0x1aa074: 0x0  nop
    ctx->pc = 0x1aa074u;
    // NOP
    ctx->pc = 0x1aa078u;
}
