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

// Function: sub_0029BF60
// Address: 0x29bf60 - 0x29bf88
void sub_0029BF60_0x29bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF60_0x29bf60");
#endif

    ctx->pc = 0x29bf60u;

    // 0x29bf60: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BF60u;
    {
        const bool branch_taken_0x29bf60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF60u;
        // 0x29bf64: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf60) {
            ctx->pc = 0x29BF74u;
            goto label_29bf74;
        }
    }
    ctx->pc = 0x29BF68u;
    // 0x29bf68: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x29bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x29bf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF6Cu;
        // 0x29bf70: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF74u;
label_29bf74:
    // 0x29bf74: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x29bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x29bf78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF7Cu;
        // 0x29bf80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF84u;
    // 0x29bf84: 0x0  nop
    ctx->pc = 0x29bf84u;
    // NOP
    ctx->pc = 0x29bf88u;
}
