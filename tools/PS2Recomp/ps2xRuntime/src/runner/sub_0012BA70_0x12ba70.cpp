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

// Function: sub_0012BA70
// Address: 0x12ba70 - 0x12ba90
void sub_0012BA70_0x12ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BA70_0x12ba70");
#endif

    switch (ctx->pc) {
        case 0x12ba80u: goto label_12ba80;
        default: break;
    }

    ctx->pc = 0x12ba70u;

    // 0x12ba70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ba74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ba78: 0xc048c0a  jal         func_123028
    ctx->pc = 0x12BA78u;
    SET_GPR_U32(ctx, 31, 0x12BA80u);
    ctx->pc = 0x12BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA78u;
    // 0x12ba7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123028u, 0x12BA78u, 0x12BA80u)) {
        return;
    }
    ctx->pc = 0x12BA80u;
label_12ba80:
    // 0x12ba80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ba80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba84: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BA84u;
        // 0x12ba88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA8Cu;
    // 0x12ba8c: 0x0  nop
    ctx->pc = 0x12ba8cu;
    // NOP
    ctx->pc = 0x12ba90u;
}
