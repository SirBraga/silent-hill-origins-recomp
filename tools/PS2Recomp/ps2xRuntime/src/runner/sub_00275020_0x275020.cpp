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

// Function: sub_00275020
// Address: 0x275020 - 0x275050
void sub_00275020_0x275020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275020_0x275020");
#endif

    ctx->pc = 0x275020u;

    // 0x275020: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x275020u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x275024: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x275024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275028: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275028u;
    {
        const bool branch_taken_0x275028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275028) {
            ctx->pc = 0x275040u;
            goto label_275040;
        }
    }
    ctx->pc = 0x275030u;
    // 0x275030: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x275030u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275034: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x275034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x275038: 0x3e00008  jr          $ra
    ctx->pc = 0x275038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275038u;
        // 0x27503c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275040u;
label_275040:
    // 0x275040: 0x3e00008  jr          $ra
    ctx->pc = 0x275040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275040u;
        // 0x275044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275048u;
    // 0x275048: 0x0  nop
    ctx->pc = 0x275048u;
    // NOP
    // 0x27504c: 0x0  nop
    ctx->pc = 0x27504cu;
    // NOP
    ctx->pc = 0x275050u;
}
