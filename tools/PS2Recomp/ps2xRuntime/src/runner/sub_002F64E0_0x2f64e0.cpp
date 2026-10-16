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

// Function: sub_002F64E0
// Address: 0x2f64e0 - 0x2f6518
void sub_002F64E0_0x2f64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F64E0_0x2f64e0");
#endif

    switch (ctx->pc) {
        case 0x2f64f0u: goto label_2f64f0;
        default: break;
    }

    ctx->pc = 0x2f64e0u;

    // 0x2f64e0: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f64e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f64e8: 0x2443cc80  addiu       $v1, $v0, -0x3380
    ctx->pc = 0x2f64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x2f64ec: 0x24644020  addiu       $a0, $v1, 0x4020
    ctx->pc = 0x2f64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16416));
label_2f64f0:
    // 0x2f64f0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2f64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2f64f4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2f64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2f64f8: 0x24632010  addiu       $v1, $v1, 0x2010
    ctx->pc = 0x2f64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8208));
    // 0x2f64fc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f64fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f6500: 0x0  nop
    ctx->pc = 0x2f6500u;
    // NOP
    // 0x2f6504: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F64F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f64f0;
        }
    }
    ctx->pc = 0x2F650Cu;
    // 0x2f650c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F650Cu;
        // 0x2f6510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6514u;
    // 0x2f6514: 0x0  nop
    ctx->pc = 0x2f6514u;
    // NOP
    ctx->pc = 0x2f6518u;
}
