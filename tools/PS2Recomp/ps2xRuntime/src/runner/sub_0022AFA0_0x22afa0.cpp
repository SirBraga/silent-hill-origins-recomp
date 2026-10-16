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

// Function: sub_0022AFA0
// Address: 0x22afa0 - 0x22afd8
void sub_0022AFA0_0x22afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AFA0_0x22afa0");
#endif

    ctx->pc = 0x22afa0u;

    // 0x22afa0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22afa4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x22afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22afa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22AFA8u;
    {
        const bool branch_taken_0x22afa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afa8) {
            ctx->pc = 0x22AFCCu;
            goto label_22afcc;
        }
    }
    ctx->pc = 0x22AFB0u;
    // 0x22afb0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x22afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22afb4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x22afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22afb8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x22afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x22afbc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22afc0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x22afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22afc4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x22afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22afc8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_22afcc:
    // 0x22afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFCCu;
        // 0x22afd0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AFD4u;
    // 0x22afd4: 0x0  nop
    ctx->pc = 0x22afd4u;
    // NOP
    ctx->pc = 0x22afd8u;
}
