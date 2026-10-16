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

// Function: sub_001087C8
// Address: 0x1087c8 - 0x108850
void sub_001087C8_0x1087c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001087C8_0x1087c8");
#endif

    ctx->pc = 0x1087c8u;

    // 0x1087c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1087c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1087cc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1087CCu;
    {
        const bool branch_taken_0x1087cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1087cc) {
            ctx->pc = 0x1087D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1087CCu;
            // 0x1087d0: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108808u;
            goto label_108808;
        }
    }
    ctx->pc = 0x1087D4u;
    // 0x1087d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1087d8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1087D8u;
    {
        const bool branch_taken_0x1087d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1087DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087D8u;
        // 0x1087dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1087d8) {
            ctx->pc = 0x1087F4u;
            goto label_1087f4;
        }
    }
    ctx->pc = 0x1087E0u;
    // 0x1087e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1087e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1087e4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1087e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1087e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1087e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1087ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1087ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087ECu;
        // 0x1087f0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087F4u;
label_1087f4:
    // 0x1087f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1087f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1087f8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1087f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1087fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1087fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x108800: 0x3e00008  jr          $ra
    ctx->pc = 0x108800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108800u;
        // 0x108804: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108808u;
label_108808:
    // 0x108808: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108808u;
    {
        const bool branch_taken_0x108808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108808) {
            ctx->pc = 0x108848u;
            goto label_108848;
        }
    }
    ctx->pc = 0x108810u;
    // 0x108810: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108814: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108814u;
    {
        const bool branch_taken_0x108814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108814) {
            ctx->pc = 0x108848u;
            goto label_108848;
        }
    }
    ctx->pc = 0x10881Cu;
    // 0x10881c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108820: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108820u;
    {
        const bool branch_taken_0x108820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108820) {
            ctx->pc = 0x108848u;
            goto label_108848;
        }
    }
    ctx->pc = 0x108828u;
    // 0x108828: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x108828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10882c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10882Cu;
    {
        const bool branch_taken_0x10882c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x108830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10882Cu;
        // 0x108830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10882c) {
            ctx->pc = 0x108840u;
            goto label_108840;
        }
    }
    ctx->pc = 0x108834u;
    // 0x108834: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x108834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x108838: 0x3e00008  jr          $ra
    ctx->pc = 0x108838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108838u;
        // 0x10883c: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108840u;
label_108840:
    // 0x108840: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x108840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x108844: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x108844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_108848:
    // 0x108848: 0x3e00008  jr          $ra
    ctx->pc = 0x108848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108850u;
}
