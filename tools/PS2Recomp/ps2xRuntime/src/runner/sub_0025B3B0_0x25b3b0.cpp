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

// Function: sub_0025B3B0
// Address: 0x25b3b0 - 0x25b3d8
void sub_0025B3B0_0x25b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B3B0_0x25b3b0");
#endif

    ctx->pc = 0x25b3b0u;

    // 0x25b3b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B3B0u;
    {
        const bool branch_taken_0x25b3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3B0u;
        // 0x25b3b4: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3b0) {
            ctx->pc = 0x25B3C0u;
            goto label_25b3c0;
        }
    }
    ctx->pc = 0x25B3B8u;
    // 0x25b3b8: 0x8c431278  lw          $v1, 0x1278($v0)
    ctx->pc = 0x25b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x25b3bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_25b3c0:
    // 0x25b3c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B3C0u;
    {
        const bool branch_taken_0x25b3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3C0u;
        // 0x25b3c4: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3c0) {
            ctx->pc = 0x25B3D0u;
            goto label_25b3d0;
        }
    }
    ctx->pc = 0x25B3C8u;
    // 0x25b3c8: 0x8c43127c  lw          $v1, 0x127C($v0)
    ctx->pc = 0x25b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x25b3cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_25b3d0:
    // 0x25b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3D0u;
        // 0x25b3d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B3D8u;
}
