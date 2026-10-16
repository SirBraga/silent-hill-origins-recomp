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

// Function: sub_001262A0
// Address: 0x1262a0 - 0x1262d8
void sub_001262A0_0x1262a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001262A0_0x1262a0");
#endif

    switch (ctx->pc) {
        case 0x1262b0u: goto label_1262b0;
        default: break;
    }

    ctx->pc = 0x1262a0u;

    // 0x1262a0: 0x8c860ea8  lw          $a2, 0xEA8($a0)
    ctx->pc = 0x1262a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3752)));
    // 0x1262a4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1262A4u;
    {
        const bool branch_taken_0x1262a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A4u;
        // 0x1262a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a4) {
            ctx->pc = 0x1262D0u;
            goto label_1262d0;
        }
    }
    ctx->pc = 0x1262ACu;
    // 0x1262ac: 0x24840e88  addiu       $a0, $a0, 0xE88
    ctx->pc = 0x1262acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3720));
label_1262b0:
    // 0x1262b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1262b4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1262B4u;
    {
        const bool branch_taken_0x1262b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1262B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262B4u;
        // 0x1262b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262b4) {
            ctx->pc = 0x1262C4u;
            goto label_1262c4;
        }
    }
    ctx->pc = 0x1262BCu;
    // 0x1262bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1262BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262BCu;
        // 0x1262c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262C4u;
label_1262c4:
    // 0x1262c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1262c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1262c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1262C8u;
    {
        const bool branch_taken_0x1262c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1262CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C8u;
        // 0x1262cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262c8) {
            ctx->pc = 0x1262B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1262b0;
        }
    }
    ctx->pc = 0x1262D0u;
label_1262d0:
    // 0x1262d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1262D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262D0u;
        // 0x1262d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262D8u;
}
