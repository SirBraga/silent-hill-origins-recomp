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

// Function: sub_00137A98
// Address: 0x137a98 - 0x137ac8
void sub_00137A98_0x137a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137A98_0x137a98");
#endif

    ctx->pc = 0x137a98u;

    // 0x137a98: 0x8c8314c0  lw          $v1, 0x14C0($a0)
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5312)));
    // 0x137a9c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x137a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x137aa0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x137aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x137aa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137AA4u;
    {
        const bool branch_taken_0x137aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AA4u;
        // 0x137aa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aa4) {
            ctx->pc = 0x137AB8u;
            goto label_137ab8;
        }
    }
    ctx->pc = 0x137AACu;
    // 0x137aac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x137aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x137ab0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137AB0u;
    {
        const bool branch_taken_0x137ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137ab0) {
            ctx->pc = 0x137ABCu;
            goto label_137abc;
        }
    }
    ctx->pc = 0x137AB8u;
label_137ab8:
    // 0x137ab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137abc:
    // 0x137abc: 0x3e00008  jr          $ra
    ctx->pc = 0x137ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ABCu;
        // 0x137ac0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137AC4u;
    // 0x137ac4: 0x0  nop
    ctx->pc = 0x137ac4u;
    // NOP
    ctx->pc = 0x137ac8u;
}
