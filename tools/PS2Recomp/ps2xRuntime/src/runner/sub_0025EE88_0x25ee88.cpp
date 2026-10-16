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

// Function: sub_0025EE88
// Address: 0x25ee88 - 0x25eeb8
void sub_0025EE88_0x25ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EE88_0x25ee88");
#endif

    ctx->pc = 0x25ee88u;

    // 0x25ee88: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25ee8c: 0x8ca54190  lw          $a1, 0x4190($a1)
    ctx->pc = 0x25ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25ee90: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE90u;
    {
        const bool branch_taken_0x25ee90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE90u;
        // 0x25ee94: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee90) {
            ctx->pc = 0x25EEA4u;
            goto label_25eea4;
        }
    }
    ctx->pc = 0x25EE98u;
    // 0x25ee98: 0x24620fc8  addiu       $v0, $v1, 0xFC8
    ctx->pc = 0x25ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25ee9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25eea0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x25eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_25eea4:
    // 0x25eea4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25eea8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25eea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eeac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEB0u;
        // 0x25eeb4: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EEB8u;
}
