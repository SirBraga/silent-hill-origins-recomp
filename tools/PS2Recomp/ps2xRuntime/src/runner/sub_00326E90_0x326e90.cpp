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

// Function: sub_00326E90
// Address: 0x326e90 - 0x326ee0
void sub_00326E90_0x326e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326E90_0x326e90");
#endif

    switch (ctx->pc) {
        case 0x326ea8u: goto label_326ea8;
        default: break;
    }

    ctx->pc = 0x326e90u;

    // 0x326e90: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x326e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x326e94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x326e98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x326e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x326e9c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x326E9Cu;
    {
        const bool branch_taken_0x326e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E9Cu;
        // 0x326ea0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e9c) {
            ctx->pc = 0x326ED4u;
            goto label_326ed4;
        }
    }
    ctx->pc = 0x326EA4u;
    // 0x326ea4: 0x0  nop
    ctx->pc = 0x326ea4u;
    // NOP
label_326ea8:
    // 0x326ea8: 0x42000039  di
    ctx->pc = 0x326ea8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x326eac: 0x40f  sync.p
    ctx->pc = 0x326eacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x326eb0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x326eb4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x326eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x326eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x326eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x326ebc: 0x0  nop
    ctx->pc = 0x326ebcu;
    // NOP
    // 0x326ec0: 0x0  nop
    ctx->pc = 0x326ec0u;
    // NOP
    // 0x326ec4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x326EC4u;
    {
        const bool branch_taken_0x326ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326ec4) {
            ctx->pc = 0x326EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326ea8;
        }
    }
    ctx->pc = 0x326ECCu;
    // 0x326ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x326ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ECCu;
        // 0x326ed0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326ED4u;
label_326ed4:
    // 0x326ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x326ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x326ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ED8u;
        // 0x326edc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326EE0u;
}
