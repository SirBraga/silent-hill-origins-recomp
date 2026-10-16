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

// Function: sub_002ABA38
// Address: 0x2aba38 - 0x2aba90
void sub_002ABA38_0x2aba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA38_0x2aba38");
#endif

    ctx->pc = 0x2aba38u;

    // 0x2aba38: 0x8f8389d4  lw          $v1, -0x762C($gp)
    ctx->pc = 0x2aba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x2aba3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aba40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABA40u;
    {
        const bool branch_taken_0x2aba40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA40u;
        // 0x2aba44: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba40) {
            ctx->pc = 0x2ABA50u;
            goto label_2aba50;
        }
    }
    ctx->pc = 0x2ABA48u;
    // 0x2aba48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA48u;
        // 0x2aba4c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA50u;
label_2aba50:
    // 0x2aba50: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA50u;
        // 0x2aba54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA58u;
    // 0x2aba58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aba5c: 0x0  nop
    ctx->pc = 0x2aba5cu;
    // NOP
    // 0x2aba60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aba64: 0x0  nop
    ctx->pc = 0x2aba64u;
    // NOP
    // 0x2aba68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aba6c: 0x0  nop
    ctx->pc = 0x2aba6cu;
    // NOP
    // 0x2aba70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2aba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2aba74: 0x0  nop
    ctx->pc = 0x2aba74u;
    // NOP
    // 0x2aba78: 0x0  nop
    ctx->pc = 0x2aba78u;
    // NOP
    // 0x2aba7c: 0x0  nop
    ctx->pc = 0x2aba7cu;
    // NOP
    // 0x2aba80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aba84: 0x0  nop
    ctx->pc = 0x2aba84u;
    // NOP
    // 0x2aba88: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2aba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2aba8c: 0x0  nop
    ctx->pc = 0x2aba8cu;
    // NOP
    ctx->pc = 0x2aba90u;
}
