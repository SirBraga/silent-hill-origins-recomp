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

// Function: sub_0025EE58
// Address: 0x25ee58 - 0x25ee88
void sub_0025EE58_0x25ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EE58_0x25ee58");
#endif

    ctx->pc = 0x25ee58u;

    // 0x25ee58: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25ee5c: 0x8ca54190  lw          $a1, 0x4190($a1)
    ctx->pc = 0x25ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25ee60: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE60u;
    {
        const bool branch_taken_0x25ee60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE60u;
        // 0x25ee64: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee60) {
            ctx->pc = 0x25EE74u;
            goto label_25ee74;
        }
    }
    ctx->pc = 0x25EE68u;
    // 0x25ee68: 0x24620fc8  addiu       $v0, $v1, 0xFC8
    ctx->pc = 0x25ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25ee6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ee70: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x25ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_25ee74:
    // 0x25ee74: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25ee78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25ee78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee7c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE80u;
        // 0x25ee84: 0xac64003c  sw          $a0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE88u;
}
