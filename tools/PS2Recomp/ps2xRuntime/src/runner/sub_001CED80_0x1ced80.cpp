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

// Function: sub_001CED80
// Address: 0x1ced80 - 0x1cedb0
void sub_001CED80_0x1ced80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED80_0x1ced80");
#endif

    ctx->pc = 0x1ced80u;

    // 0x1ced80: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ced84: 0x2484026c  addiu       $a0, $a0, 0x26C
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
    // 0x1ced88: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ced88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ced8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ced8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ced90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ced90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ced94: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CED94u;
    {
        const bool branch_taken_0x1ced94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED94u;
        // 0x1ced98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced94) {
            ctx->pc = 0x1CEDA4u;
            goto label_1ceda4;
        }
    }
    ctx->pc = 0x1CED9Cu;
    // 0x1ced9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CED9Cu;
    {
        const bool branch_taken_0x1ced9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED9Cu;
        // 0x1ceda0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced9c) {
            ctx->pc = 0x1CEDA8u;
            goto label_1ceda8;
        }
    }
    ctx->pc = 0x1CEDA4u;
label_1ceda4:
    // 0x1ceda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ceda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ceda8:
    // 0x1ceda8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA8u;
        // 0x1cedac: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEDB0u;
}
