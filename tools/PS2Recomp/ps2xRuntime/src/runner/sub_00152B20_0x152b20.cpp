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

// Function: sub_00152B20
// Address: 0x152b20 - 0x152b40
void sub_00152B20_0x152b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B20_0x152b20");
#endif

    switch (ctx->pc) {
        case 0x152b34u: goto label_152b34;
        default: break;
    }

    ctx->pc = 0x152b20u;

    // 0x152b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152b2c: 0xc054a4a  jal         func_152928
    ctx->pc = 0x152B2Cu;
    SET_GPR_U32(ctx, 31, 0x152B34u);
    ctx->pc = 0x152B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B2Cu;
    // 0x152b30: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x152928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152928u, 0x152B2Cu, 0x152B34u)) {
        return;
    }
    ctx->pc = 0x152B34u;
label_152b34:
    // 0x152b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152b38: 0x3e00008  jr          $ra
    ctx->pc = 0x152B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B38u;
        // 0x152b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B40u;
}
