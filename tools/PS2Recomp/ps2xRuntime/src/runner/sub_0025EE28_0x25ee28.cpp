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

// Function: sub_0025EE28
// Address: 0x25ee28 - 0x25ee58
void sub_0025EE28_0x25ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EE28_0x25ee28");
#endif

    ctx->pc = 0x25ee28u;

    // 0x25ee28: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25ee2c: 0x8ca54190  lw          $a1, 0x4190($a1)
    ctx->pc = 0x25ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25ee30: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EE30u;
    {
        const bool branch_taken_0x25ee30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE30u;
        // 0x25ee34: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ee30) {
            ctx->pc = 0x25EE44u;
            goto label_25ee44;
        }
    }
    ctx->pc = 0x25EE38u;
    // 0x25ee38: 0x24620fc8  addiu       $v0, $v1, 0xFC8
    ctx->pc = 0x25ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25ee3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ee40: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x25ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_25ee44:
    // 0x25ee44: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25ee48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25ee48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25ee50: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE50u;
        // 0x25ee54: 0xac640040  sw          $a0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE58u;
}
