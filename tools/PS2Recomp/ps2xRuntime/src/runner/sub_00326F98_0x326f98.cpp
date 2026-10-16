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

// Function: sub_00326F98
// Address: 0x326f98 - 0x326fd8
void sub_00326F98_0x326f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F98_0x326f98");
#endif

    switch (ctx->pc) {
        case 0x326fb0u: goto label_326fb0;
        default: break;
    }

    ctx->pc = 0x326f98u;

    // 0x326f98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326f9c: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x326F9Cu;
    {
        const bool branch_taken_0x326f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x326FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F9Cu;
        // 0x326fa0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f9c) {
            ctx->pc = 0x326FCCu;
            goto label_326fcc;
        }
    }
    ctx->pc = 0x326FA4u;
    // 0x326fa4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x326FA4u;
    {
        const bool branch_taken_0x326fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326fa4) {
            ctx->pc = 0x326FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326FA4u;
            // 0x326fa8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326FD0u;
            goto label_326fd0;
        }
    }
    ctx->pc = 0x326FACu;
    // 0x326fac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x326facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_326fb0:
    // 0x326fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x326fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326fb4: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x326FB4u;
    {
        const bool branch_taken_0x326fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x326FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB4u;
        // 0x326fb8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fb4) {
            ctx->pc = 0x326FCCu;
            goto label_326fcc;
        }
    }
    ctx->pc = 0x326FBCu;
    // 0x326fbc: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x326FBCu;
    {
        const bool branch_taken_0x326fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326fbc) {
            ctx->pc = 0x326FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326FBCu;
            // 0x326fc0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326fb0;
        }
    }
    ctx->pc = 0x326FC4u;
    // 0x326fc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x326FC4u;
    {
        const bool branch_taken_0x326fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FC4u;
        // 0x326fc8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fc4) {
            ctx->pc = 0x326FD0u;
            goto label_326fd0;
        }
    }
    ctx->pc = 0x326FCCu;
label_326fcc:
    // 0x326fcc: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x326fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_326fd0:
    // 0x326fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x326FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD0u;
        // 0x326fd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FD8u;
}
