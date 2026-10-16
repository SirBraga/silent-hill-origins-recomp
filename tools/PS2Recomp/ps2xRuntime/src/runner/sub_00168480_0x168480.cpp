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

// Function: sub_00168480
// Address: 0x168480 - 0x1684a0
void sub_00168480_0x168480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168480_0x168480");
#endif

    switch (ctx->pc) {
        case 0x168494u: goto label_168494;
        default: break;
    }

    ctx->pc = 0x168480u;

    // 0x168480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16848c: 0xc05a05c  jal         func_168170
    ctx->pc = 0x16848Cu;
    SET_GPR_U32(ctx, 31, 0x168494u);
    ctx->pc = 0x168490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16848Cu;
    // 0x168490: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168170u, 0x16848Cu, 0x168494u)) {
        return;
    }
    ctx->pc = 0x168494u;
label_168494:
    // 0x168494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168498: 0x3e00008  jr          $ra
    ctx->pc = 0x168498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168498u;
        // 0x16849c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1684A0u;
}
