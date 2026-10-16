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

// Function: sub_002E9DA0
// Address: 0x2e9da0 - 0x2e9dd0
void sub_002E9DA0_0x2e9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9DA0_0x2e9da0");
#endif

    ctx->pc = 0x2e9da0u;

    // 0x2e9da0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e9da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9da4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e9da8: 0x24a31080  addiu       $v1, $a1, 0x1080
    ctx->pc = 0x2e9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x2e9dac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e9dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e9db0: 0x8c640280  lw          $a0, 0x280($v1)
    ctx->pc = 0x2e9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x2e9db4: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2e9db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2e9db8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9DB8u;
    {
        const bool branch_taken_0x2e9db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DB8u;
        // 0x2e9dbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9db8) {
            ctx->pc = 0x2E9DC4u;
            goto label_2e9dc4;
        }
    }
    ctx->pc = 0x2E9DC0u;
    // 0x2e9dc0: 0x8ca20f40  lw          $v0, 0xF40($a1)
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3904)));
label_2e9dc4:
    // 0x2e9dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9DCCu;
    // 0x2e9dcc: 0x0  nop
    ctx->pc = 0x2e9dccu;
    // NOP
    ctx->pc = 0x2e9dd0u;
}
