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

// Function: sub_00203710
// Address: 0x203710 - 0x203758
void sub_00203710_0x203710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203710_0x203710");
#endif

    switch (ctx->pc) {
        case 0x203730u: goto label_203730;
        default: break;
    }

    ctx->pc = 0x203710u;

    // 0x203710: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203710u;
    {
        const bool branch_taken_0x203710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x203714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203710u;
        // 0x203714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203710) {
            ctx->pc = 0x203720u;
            goto label_203720;
        }
    }
    ctx->pc = 0x203718u;
    // 0x203718: 0x3e00008  jr          $ra
    ctx->pc = 0x203718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203718u;
        // 0x20371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203720u;
label_203720:
    // 0x203720: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x203720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203724: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203728: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203728u;
    {
        const bool branch_taken_0x203728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203728u;
        // 0x20372c: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203728) {
            ctx->pc = 0x203750u;
            goto label_203750;
        }
    }
    ctx->pc = 0x203730u;
label_203730:
    // 0x203730: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x203730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x203734: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x203734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203738: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x203738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20373c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x20373cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x203740: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203744: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x203748: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x203748u;
    {
        const bool branch_taken_0x203748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203748u;
        // 0x20374c: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203748) {
            ctx->pc = 0x203730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203730;
        }
    }
    ctx->pc = 0x203750u;
label_203750:
    // 0x203750: 0x3e00008  jr          $ra
    ctx->pc = 0x203750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203750u;
        // 0x203754: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203758u;
}
