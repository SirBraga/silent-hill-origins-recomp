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

// Function: sub_00317700
// Address: 0x317700 - 0x317740
void sub_00317700_0x317700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317700_0x317700");
#endif

    switch (ctx->pc) {
        case 0x317710u: goto label_317710;
        default: break;
    }

    ctx->pc = 0x317700u;

    // 0x317700: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x317700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x317704: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x317704u;
    {
        const bool branch_taken_0x317704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317704u;
        // 0x317708: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317704) {
            ctx->pc = 0x317738u;
            goto label_317738;
        }
    }
    ctx->pc = 0x31770Cu;
    // 0x31770c: 0x0  nop
    ctx->pc = 0x31770cu;
    // NOP
label_317710:
    // 0x317710: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x317710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x317714: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x317714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x317718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317718u;
    {
        const bool branch_taken_0x317718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317718u;
        // 0x31771c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317718) {
            ctx->pc = 0x317728u;
            goto label_317728;
        }
    }
    ctx->pc = 0x317720u;
    // 0x317720: 0x3e00008  jr          $ra
    ctx->pc = 0x317720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317720u;
        // 0x317724: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317728u;
label_317728:
    // 0x317728: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x317728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x31772c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x31772cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x317730: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x317730u;
    {
        const bool branch_taken_0x317730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317730u;
        // 0x317734: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317730) {
            ctx->pc = 0x317710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317710;
        }
    }
    ctx->pc = 0x317738u;
label_317738:
    // 0x317738: 0x3e00008  jr          $ra
    ctx->pc = 0x317738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317738u;
        // 0x31773c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317740u;
}
