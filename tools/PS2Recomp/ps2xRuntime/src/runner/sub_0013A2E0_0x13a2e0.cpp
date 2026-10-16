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

// Function: sub_0013A2E0
// Address: 0x13a2e0 - 0x13a328
void sub_0013A2E0_0x13a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A2E0_0x13a2e0");
#endif

    switch (ctx->pc) {
        case 0x13a2f8u: goto label_13a2f8;
        default: break;
    }

    ctx->pc = 0x13a2e0u;

    // 0x13a2e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x13a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x13a2e4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13A2E4u;
    {
        const bool branch_taken_0x13a2e4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x13A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2E4u;
        // 0x13a2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2e4) {
            ctx->pc = 0x13A31Cu;
            goto label_13a31c;
        }
    }
    ctx->pc = 0x13A2ECu;
    // 0x13a2ec: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x13a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x13a2f0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x13a2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13a2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a2f8:
    // 0x13a2f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a2fc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A2FCu;
    {
        const bool branch_taken_0x13a2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x13A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2FCu;
        // 0x13a300: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2fc) {
            ctx->pc = 0x13A30Cu;
            goto label_13a30c;
        }
    }
    ctx->pc = 0x13A304u;
    // 0x13a304: 0x3e00008  jr          $ra
    ctx->pc = 0x13A304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A304u;
        // 0x13a308: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A30Cu;
label_13a30c:
    // 0x13a30c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x13a310: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x13a310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x13a314: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13A314u;
    {
        const bool branch_taken_0x13a314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A314u;
        // 0x13a318: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a314) {
            ctx->pc = 0x13A2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a2f8;
        }
    }
    ctx->pc = 0x13A31Cu;
label_13a31c:
    // 0x13a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A31Cu;
        // 0x13a320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A324u;
    // 0x13a324: 0x0  nop
    ctx->pc = 0x13a324u;
    // NOP
    ctx->pc = 0x13a328u;
}
