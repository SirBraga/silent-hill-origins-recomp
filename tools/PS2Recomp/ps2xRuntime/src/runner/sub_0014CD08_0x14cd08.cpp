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

// Function: sub_0014CD08
// Address: 0x14cd08 - 0x14cd28
void sub_0014CD08_0x14cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CD08_0x14cd08");
#endif

    switch (ctx->pc) {
        case 0x14cd1cu: goto label_14cd1c;
        default: break;
    }

    ctx->pc = 0x14cd08u;

    // 0x14cd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cd14: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14CD14u;
    SET_GPR_U32(ctx, 31, 0x14CD1Cu);
    ctx->pc = 0x14CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD14u;
    // 0x14cd18: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14CD14u, 0x14CD1Cu)) {
        return;
    }
    ctx->pc = 0x14CD1Cu;
label_14cd1c:
    // 0x14cd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD20u;
        // 0x14cd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CD28u;
}
