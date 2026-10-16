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

// Function: sub_003070A0
// Address: 0x3070a0 - 0x307100
void sub_003070A0_0x3070a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003070A0_0x3070a0");
#endif

    switch (ctx->pc) {
        case 0x3070b4u: goto label_3070b4;
        default: break;
    }

    ctx->pc = 0x3070a0u;

    // 0x3070a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3070A0u;
    {
        const bool branch_taken_0x3070a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070a0) {
            ctx->pc = 0x3070B4u;
            goto label_3070b4;
        }
    }
    ctx->pc = 0x3070A8u;
    // 0x3070a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3070ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3070ACu;
    {
        const bool branch_taken_0x3070ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3070B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070ACu;
        // 0x3070b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070ac) {
            ctx->pc = 0x3070BCu;
            goto label_3070bc;
        }
    }
    ctx->pc = 0x3070B4u;
label_3070b4:
    // 0x3070b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3070B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3070B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070B4u;
        // 0x3070b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3070BCu;
label_3070bc:
    // 0x3070bc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3070BCu;
    {
        const bool branch_taken_0x3070bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3070C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070BCu;
        // 0x3070c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070bc) {
            ctx->pc = 0x3070D4u;
            goto label_3070d4;
        }
    }
    ctx->pc = 0x3070C4u;
    // 0x3070c4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3070C4u;
    {
        const bool branch_taken_0x3070c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3070C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C4u;
        // 0x3070c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070c4) {
            ctx->pc = 0x3070E4u;
            goto label_3070e4;
        }
    }
    ctx->pc = 0x3070CCu;
    // 0x3070cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3070CCu;
    {
        const bool branch_taken_0x3070cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070cc) {
            ctx->pc = 0x3070F0u;
            goto label_3070f0;
        }
    }
    ctx->pc = 0x3070D4u;
label_3070d4:
    // 0x3070d4: 0x10c0fff7  beqz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3070D4u;
    {
        const bool branch_taken_0x3070d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3070D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070D4u;
        // 0x3070d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3070d4) {
            ctx->pc = 0x3070B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3070b4;
        }
    }
    ctx->pc = 0x3070DCu;
    // 0x3070dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3070DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3070E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070DCu;
        // 0x3070e0: 0xac660010  sw          $a2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3070E4u;
label_3070e4:
    // 0x3070e4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x3070e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x3070e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3070E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3070ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070E8u;
        // 0x3070ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3070F0u;
label_3070f0:
    // 0x3070f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3070F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3070F8u;
    // 0x3070f8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3070f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3070fc: 0x0  nop
    ctx->pc = 0x3070fcu;
    // NOP
    ctx->pc = 0x307100u;
}
