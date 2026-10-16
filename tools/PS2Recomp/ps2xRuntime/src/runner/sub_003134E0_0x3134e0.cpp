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

// Function: sub_003134E0
// Address: 0x3134e0 - 0x313510
void sub_003134E0_0x3134e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003134E0_0x3134e0");
#endif

    switch (ctx->pc) {
        case 0x3134f0u: goto label_3134f0;
        default: break;
    }

    ctx->pc = 0x3134e0u;

    // 0x3134e0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3134E0u;
    {
        const bool branch_taken_0x3134e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134E0u;
        // 0x3134e4: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134e0) {
            ctx->pc = 0x313508u;
            goto label_313508;
        }
    }
    ctx->pc = 0x3134E8u;
    // 0x3134e8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3134e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3134ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3134ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3134f0:
    // 0x3134f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3134f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3134f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3134f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3134f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3134f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3134fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3134fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x313500: 0x1466fffb  bne         $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x313500u;
    {
        const bool branch_taken_0x313500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x313504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313500u;
        // 0x313504: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313500) {
            ctx->pc = 0x3134F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3134f0;
        }
    }
    ctx->pc = 0x313508u;
label_313508:
    // 0x313508: 0x3e00008  jr          $ra
    ctx->pc = 0x313508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313510u;
}
