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

// Function: sub_001E3B98
// Address: 0x1e3b98 - 0x1e3bd0
void sub_001E3B98_0x1e3b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3B98_0x1e3b98");
#endif

    ctx->pc = 0x1e3b98u;

    // 0x1e3b98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e3b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b9c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1E3B9Cu;
    {
        const bool branch_taken_0x1e3b9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B9Cu;
        // 0x1e3ba0: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b9c) {
            ctx->pc = 0x1E3BC8u;
            goto label_1e3bc8;
        }
    }
    ctx->pc = 0x1E3BA4u;
    // 0x1e3ba4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e3ba8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3bac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1e3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e3bb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e3bb4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e3bb8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3bbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1e3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e3bc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3bc4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e3bc8:
    // 0x1e3bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3BD0u;
}
