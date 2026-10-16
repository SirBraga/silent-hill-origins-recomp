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

// Function: sub_0016DB28
// Address: 0x16db28 - 0x16db48
void sub_0016DB28_0x16db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB28_0x16db28");
#endif

    switch (ctx->pc) {
        case 0x16db3cu: goto label_16db3c;
        default: break;
    }

    ctx->pc = 0x16db28u;

    // 0x16db28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db34: 0xc05b654  jal         func_16D950
    ctx->pc = 0x16DB34u;
    SET_GPR_U32(ctx, 31, 0x16DB3Cu);
    ctx->pc = 0x16DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB34u;
    // 0x16db38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D950u, 0x16DB34u, 0x16DB3Cu)) {
        return;
    }
    ctx->pc = 0x16DB3Cu;
label_16db3c:
    // 0x16db3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db40: 0x3e00008  jr          $ra
    ctx->pc = 0x16DB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB40u;
        // 0x16db44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DB48u;
}
