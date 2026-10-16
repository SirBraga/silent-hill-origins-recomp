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

// Function: sub_001420F0
// Address: 0x1420f0 - 0x142110
void sub_001420F0_0x1420f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001420F0_0x1420f0");
#endif

    switch (ctx->pc) {
        case 0x142104u: goto label_142104;
        default: break;
    }

    ctx->pc = 0x1420f0u;

    // 0x1420f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1420f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1420f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1420f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1420f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1420fc: 0xc050710  jal         func_141C40
    ctx->pc = 0x1420FCu;
    SET_GPR_U32(ctx, 31, 0x142104u);
    ctx->pc = 0x142100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420FCu;
    // 0x142100: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x141C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141C40u, 0x1420FCu, 0x142104u)) {
        return;
    }
    ctx->pc = 0x142104u;
label_142104:
    // 0x142104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142108: 0x3e00008  jr          $ra
    ctx->pc = 0x142108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142108u;
        // 0x14210c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142110u;
}
