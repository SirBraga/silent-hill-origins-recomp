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

// Function: sub_0021AFA8
// Address: 0x21afa8 - 0x21afd8
void sub_0021AFA8_0x21afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AFA8_0x21afa8");
#endif

    ctx->pc = 0x21afa8u;

    // 0x21afa8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21AFA8u;
    {
        const bool branch_taken_0x21afa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFA8u;
        // 0x21afac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afa8) {
            ctx->pc = 0x21AFCCu;
            goto label_21afcc;
        }
    }
    ctx->pc = 0x21AFB0u;
    // 0x21afb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21afb4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x21afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x21afb8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x21afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x21afbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21afc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21afc4: 0x3e00008  jr          $ra
    ctx->pc = 0x21AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFC4u;
        // 0x21afc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AFCCu;
label_21afcc:
    // 0x21afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x21AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFCCu;
        // 0x21afd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AFD4u;
    // 0x21afd4: 0x0  nop
    ctx->pc = 0x21afd4u;
    // NOP
    ctx->pc = 0x21afd8u;
}
