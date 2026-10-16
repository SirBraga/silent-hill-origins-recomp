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

// Function: sub_00267A30
// Address: 0x267a30 - 0x267a68
void sub_00267A30_0x267a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267A30_0x267a30");
#endif

    switch (ctx->pc) {
        case 0x267a40u: goto label_267a40;
        default: break;
    }

    ctx->pc = 0x267a30u;

    // 0x267a30: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x267a34: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x267A34u;
    {
        const bool branch_taken_0x267a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A34u;
        // 0x267a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a34) {
            ctx->pc = 0x267A60u;
            goto label_267a60;
        }
    }
    ctx->pc = 0x267A3Cu;
    // 0x267a3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x267a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_267a40:
    // 0x267a40: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x267a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x267a44: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267A44u;
    {
        const bool branch_taken_0x267a44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x267A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A44u;
        // 0x267a48: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a44) {
            ctx->pc = 0x267A54u;
            goto label_267a54;
        }
    }
    ctx->pc = 0x267A4Cu;
    // 0x267a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x267A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A4Cu;
        // 0x267a50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A54u;
label_267a54:
    // 0x267a54: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x267a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x267a58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x267A58u;
    {
        const bool branch_taken_0x267a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A58u;
        // 0x267a5c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a58) {
            ctx->pc = 0x267A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267a40;
        }
    }
    ctx->pc = 0x267A60u;
label_267a60:
    // 0x267a60: 0x3e00008  jr          $ra
    ctx->pc = 0x267A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A60u;
        // 0x267a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A68u;
}
