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

// Function: sub_002870E0
// Address: 0x2870e0 - 0x287120
void sub_002870E0_0x2870e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002870E0_0x2870e0");
#endif

    ctx->pc = 0x2870e0u;

    // 0x2870e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2870e4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2870E4u;
    {
        const bool branch_taken_0x2870e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870E4u;
        // 0x2870e8: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870e4) {
            ctx->pc = 0x287110u;
            goto label_287110;
        }
    }
    ctx->pc = 0x2870ECu;
    // 0x2870ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2870ECu;
    {
        const bool branch_taken_0x2870ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870ECu;
        // 0x2870f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870ec) {
            ctx->pc = 0x287104u;
            goto label_287104;
        }
    }
    ctx->pc = 0x2870F4u;
    // 0x2870f4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2870F4u;
    {
        const bool branch_taken_0x2870f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870F4u;
        // 0x2870f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870f4) {
            ctx->pc = 0x287110u;
            goto label_287110;
        }
    }
    ctx->pc = 0x2870FCu;
    // 0x2870fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2870FCu;
    {
        const bool branch_taken_0x2870fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870fc) {
            ctx->pc = 0x287118u;
            goto label_287118;
        }
    }
    ctx->pc = 0x287104u;
label_287104:
    // 0x287104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x287104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287108: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287108u;
    {
        const bool branch_taken_0x287108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287108u;
        // 0x28710c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287108) {
            ctx->pc = 0x287118u;
            goto label_287118;
        }
    }
    ctx->pc = 0x287110u;
label_287110:
    // 0x287110: 0x3e00008  jr          $ra
    ctx->pc = 0x287110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287110u;
        // 0x287114: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287118u;
label_287118:
    // 0x287118: 0x3e00008  jr          $ra
    ctx->pc = 0x287118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287120u;
}
