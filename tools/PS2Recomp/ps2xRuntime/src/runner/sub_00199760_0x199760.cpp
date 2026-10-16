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

// Function: sub_00199760
// Address: 0x199760 - 0x199780
void sub_00199760_0x199760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199760_0x199760");
#endif

    switch (ctx->pc) {
        case 0x199774u: goto label_199774;
        default: break;
    }

    ctx->pc = 0x199760u;

    // 0x199760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19976c: 0xc066462  jal         func_199188
    ctx->pc = 0x19976Cu;
    SET_GPR_U32(ctx, 31, 0x199774u);
    ctx->pc = 0x199770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19976Cu;
    // 0x199770: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x199188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199188u, 0x19976Cu, 0x199774u)) {
        return;
    }
    ctx->pc = 0x199774u;
label_199774:
    // 0x199774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199778: 0x3e00008  jr          $ra
    ctx->pc = 0x199778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199778u;
        // 0x19977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199780u;
}
