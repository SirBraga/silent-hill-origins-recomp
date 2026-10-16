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

// Function: sub_00107DC0
// Address: 0x107dc0 - 0x107de0
void sub_00107DC0_0x107dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107DC0_0x107dc0");
#endif

    switch (ctx->pc) {
        case 0x107dd4u: goto label_107dd4;
        default: break;
    }

    ctx->pc = 0x107dc0u;

    // 0x107dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107dcc: 0xc041e78  jal         func_1079E0
    ctx->pc = 0x107DCCu;
    SET_GPR_U32(ctx, 31, 0x107DD4u);
    ctx->pc = 0x107DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107DCCu;
    // 0x107dd0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1079E0u, 0x107DCCu, 0x107DD4u)) {
        return;
    }
    ctx->pc = 0x107DD4u;
label_107dd4:
    // 0x107dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x107DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DD8u;
        // 0x107ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DE0u;
}
