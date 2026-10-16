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

// Function: sub_00171B18
// Address: 0x171b18 - 0x171b48
void sub_00171B18_0x171b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B18_0x171b18");
#endif

    switch (ctx->pc) {
        case 0x171b3cu: goto label_171b3c;
        default: break;
    }

    ctx->pc = 0x171b18u;

    // 0x171b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171b20: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x171b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171b28: 0x244256e0  addiu       $v0, $v0, 0x56E0
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22240));
    // 0x171b2c: 0x24635700  addiu       $v1, $v1, 0x5700
    ctx->pc = 0x171b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22272));
    // 0x171b30: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x171b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x171b34: 0xc05c2d0  jal         func_170B40
    ctx->pc = 0x171B34u;
    SET_GPR_U32(ctx, 31, 0x171B3Cu);
    ctx->pc = 0x171B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B34u;
    // 0x171b38: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x170B40u, 0x171B34u, 0x171B3Cu)) {
        return;
    }
    ctx->pc = 0x171B3Cu;
label_171b3c:
    // 0x171b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b40: 0x3e00008  jr          $ra
    ctx->pc = 0x171B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B40u;
        // 0x171b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B48u;
}
