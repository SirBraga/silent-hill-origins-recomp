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

// Function: sub_002F6DB8
// Address: 0x2f6db8 - 0x2f6e00
void sub_002F6DB8_0x2f6db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6DB8_0x2f6db8");
#endif

    switch (ctx->pc) {
        case 0x2f6dd8u: goto label_2f6dd8;
        default: break;
    }

    ctx->pc = 0x2f6db8u;

    // 0x2f6db8: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2f6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f6dbc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f6dc0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f6dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f6dc4: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f6dc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f6dc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dcc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f6dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6dd0: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x2f6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2f6dd4: 0x0  nop
    ctx->pc = 0x2f6dd4u;
    // NOP
label_2f6dd8:
    // 0x2f6dd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6ddc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6DDCu;
    {
        const bool branch_taken_0x2f6ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DDCu;
        // 0x2f6de0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ddc) {
            ctx->pc = 0x2F6DECu;
            goto label_2f6dec;
        }
    }
    ctx->pc = 0x2F6DE4u;
    // 0x2f6de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DE4u;
        // 0x2f6de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6DECu;
label_2f6dec:
    // 0x2f6dec: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f6df0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F6DF0u;
    {
        const bool branch_taken_0x2f6df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DF0u;
        // 0x2f6df4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6df0) {
            ctx->pc = 0x2F6DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6dd8;
        }
    }
    ctx->pc = 0x2F6DF8u;
    // 0x2f6df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DF8u;
        // 0x2f6dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6E00u;
}
