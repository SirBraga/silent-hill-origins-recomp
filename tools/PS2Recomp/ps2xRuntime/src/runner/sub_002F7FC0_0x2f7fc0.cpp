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

// Function: sub_002F7FC0
// Address: 0x2f7fc0 - 0x2f7ff0
void sub_002F7FC0_0x2f7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7FC0_0x2f7fc0");
#endif

    ctx->pc = 0x2f7fc0u;

    // 0x2f7fc0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7fc4: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7fc8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2f7fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f7fcc: 0x246514c8  addiu       $a1, $v1, 0x14C8
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7fd0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2f7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f7fd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7fd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7FD8u;
    {
        const bool branch_taken_0x2f7fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FD8u;
        // 0x2f7fdc: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fd8) {
            ctx->pc = 0x2F7FE8u;
            goto label_2f7fe8;
        }
    }
    ctx->pc = 0x2F7FE0u;
    // 0x2f7fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FE0u;
        // 0x2f7fe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7FE8u;
label_2f7fe8:
    // 0x2f7fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FE8u;
        // 0x2f7fec: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7FF0u;
}
