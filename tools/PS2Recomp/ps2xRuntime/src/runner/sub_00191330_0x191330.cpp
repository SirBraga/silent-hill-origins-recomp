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

// Function: sub_00191330
// Address: 0x191330 - 0x191370
void sub_00191330_0x191330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191330_0x191330");
#endif

    ctx->pc = 0x191330u;

    // 0x191330: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x191334: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191334u;
    {
        const bool branch_taken_0x191334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191334) {
            ctx->pc = 0x19135Cu;
            goto label_19135c;
        }
    }
    ctx->pc = 0x19133Cu;
    // 0x19133c: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x19133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x191340: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191340u;
    {
        const bool branch_taken_0x191340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191340u;
        // 0x191344: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191340) {
            ctx->pc = 0x191354u;
            goto label_191354;
        }
    }
    ctx->pc = 0x191348u;
    // 0x191348: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x19134c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19134Cu;
    {
        const bool branch_taken_0x19134c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19134Cu;
        // 0x191350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19134c) {
            ctx->pc = 0x191364u;
            goto label_191364;
        }
    }
    ctx->pc = 0x191354u;
label_191354:
    // 0x191354: 0x3e00008  jr          $ra
    ctx->pc = 0x191354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191354u;
        // 0x191358: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19135Cu;
label_19135c:
    // 0x19135c: 0x3e00008  jr          $ra
    ctx->pc = 0x19135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19135Cu;
        // 0x191360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191364u;
label_191364:
    // 0x191364: 0x3e00008  jr          $ra
    ctx->pc = 0x191364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19136Cu;
    // 0x19136c: 0x0  nop
    ctx->pc = 0x19136cu;
    // NOP
    ctx->pc = 0x191370u;
}
