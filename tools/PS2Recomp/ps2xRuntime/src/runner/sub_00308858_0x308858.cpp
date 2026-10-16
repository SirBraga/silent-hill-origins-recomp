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

// Function: sub_00308858
// Address: 0x308858 - 0x308888
void sub_00308858_0x308858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308858_0x308858");
#endif

    ctx->pc = 0x308858u;

    // 0x308858: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x308858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30885c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30885Cu;
    {
        const bool branch_taken_0x30885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30885c) {
            ctx->pc = 0x308860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30885Cu;
            // 0x308860: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30886Cu;
            goto label_30886c;
        }
    }
    ctx->pc = 0x308864u;
    // 0x308864: 0x3e00008  jr          $ra
    ctx->pc = 0x308864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308864u;
        // 0x308868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30886Cu;
label_30886c:
    // 0x30886c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30886Cu;
    {
        const bool branch_taken_0x30886c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30886c) {
            ctx->pc = 0x30887Cu;
            goto label_30887c;
        }
    }
    ctx->pc = 0x308874u;
    // 0x308874: 0x3e00008  jr          $ra
    ctx->pc = 0x308874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308874u;
        // 0x308878: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30887Cu;
label_30887c:
    // 0x30887c: 0x3e00008  jr          $ra
    ctx->pc = 0x30887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30887Cu;
        // 0x308880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30887Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308884u;
    // 0x308884: 0x0  nop
    ctx->pc = 0x308884u;
    // NOP
    ctx->pc = 0x308888u;
}
