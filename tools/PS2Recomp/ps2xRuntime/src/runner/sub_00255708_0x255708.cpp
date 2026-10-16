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

// Function: sub_00255708
// Address: 0x255708 - 0x255728
void sub_00255708_0x255708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255708_0x255708");
#endif

    ctx->pc = 0x255708u;

    // 0x255708: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255708u;
    {
        const bool branch_taken_0x255708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255708u;
        // 0x25570c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255708) {
            ctx->pc = 0x255718u;
            goto label_255718;
        }
    }
    ctx->pc = 0x255710u;
    // 0x255710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255710u;
    {
        const bool branch_taken_0x255710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255710u;
        // 0x255714: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255710) {
            ctx->pc = 0x255720u;
            goto label_255720;
        }
    }
    ctx->pc = 0x255718u;
label_255718:
    // 0x255718: 0x244248e0  addiu       $v0, $v0, 0x48E0
    ctx->pc = 0x255718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18656));
    // 0x25571c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x25571cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_255720:
    // 0x255720: 0x3e00008  jr          $ra
    ctx->pc = 0x255720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255720u;
        // 0x255724: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255728u;
}
