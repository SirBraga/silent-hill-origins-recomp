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

// Function: sub_002F7F78
// Address: 0x2f7f78 - 0x2f7fc0
void sub_002F7F78_0x2f7f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F78_0x2f7f78");
#endif

    switch (ctx->pc) {
        case 0x2f7f88u: goto label_2f7f88;
        default: break;
    }

    ctx->pc = 0x2f7f78u;

    // 0x2f7f78: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7f7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f7f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f80: 0x244514c8  addiu       $a1, $v0, 0x14C8
    ctx->pc = 0x2f7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7f84: 0x0  nop
    ctx->pc = 0x2f7f84u;
    // NOP
label_2f7f88:
    // 0x2f7f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7f8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7F8Cu;
    {
        const bool branch_taken_0x2f7f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7f8c) {
            ctx->pc = 0x2F7F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7F8Cu;
            // 0x2f7f90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FA8u;
            goto label_2f7fa8;
        }
    }
    ctx->pc = 0x2F7F94u;
    // 0x2f7f94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f7f98: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7F98u;
    {
        const bool branch_taken_0x2f7f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f7f98) {
            ctx->pc = 0x2F7F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7F98u;
            // 0x2f7f9c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FA8u;
            goto label_2f7fa8;
        }
    }
    ctx->pc = 0x2F7FA0u;
    // 0x2f7fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FA0u;
        // 0x2f7fa4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7FA8u;
label_2f7fa8:
    // 0x2f7fa8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2f7fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7fac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F7FACu;
    {
        const bool branch_taken_0x2f7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FACu;
        // 0x2f7fb0: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fac) {
            ctx->pc = 0x2F7F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7f88;
        }
    }
    ctx->pc = 0x2F7FB4u;
    // 0x2f7fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7FB4u;
        // 0x2f7fb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7FBCu;
    // 0x2f7fbc: 0x0  nop
    ctx->pc = 0x2f7fbcu;
    // NOP
    ctx->pc = 0x2f7fc0u;
}
