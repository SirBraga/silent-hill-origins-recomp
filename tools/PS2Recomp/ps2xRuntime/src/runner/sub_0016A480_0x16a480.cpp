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

// Function: sub_0016A480
// Address: 0x16a480 - 0x16a4a0
void sub_0016A480_0x16a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A480_0x16a480");
#endif

    switch (ctx->pc) {
        case 0x16a494u: goto label_16a494;
        default: break;
    }

    ctx->pc = 0x16a480u;

    // 0x16a480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a48c: 0xc05a87a  jal         func_16A1E8
    ctx->pc = 0x16A48Cu;
    SET_GPR_U32(ctx, 31, 0x16A494u);
    ctx->pc = 0x16A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A48Cu;
    // 0x16a490: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A1E8u, 0x16A48Cu, 0x16A494u)) {
        return;
    }
    ctx->pc = 0x16A494u;
label_16a494:
    // 0x16a494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a498: 0x3e00008  jr          $ra
    ctx->pc = 0x16A498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A498u;
        // 0x16a49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A4A0u;
}
