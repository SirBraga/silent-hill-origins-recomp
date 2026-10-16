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

// Function: sub_001FC060
// Address: 0x1fc060 - 0x1fc080
void sub_001FC060_0x1fc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC060_0x1fc060");
#endif

    switch (ctx->pc) {
        case 0x1fc074u: goto label_1fc074;
        default: break;
    }

    ctx->pc = 0x1fc060u;

    // 0x1fc060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc064: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1fc064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1fc068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc06c: 0xc07fca6  jal         func_1FF298
    ctx->pc = 0x1FC06Cu;
    SET_GPR_U32(ctx, 31, 0x1FC074u);
    ctx->pc = 0x1FC070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC06Cu;
    // 0x1fc070: 0x24841a78  addiu       $a0, $a0, 0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF298u, 0x1FC06Cu, 0x1FC074u)) {
        return;
    }
    ctx->pc = 0x1FC074u;
label_1fc074:
    // 0x1fc074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc078: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC078u;
        // 0x1fc07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC080u;
}
