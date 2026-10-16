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

// Function: sub_001DCC58
// Address: 0x1dcc58 - 0x1dcca8
void sub_001DCC58_0x1dcc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC58_0x1dcc58");
#endif

    switch (ctx->pc) {
        case 0x1dcc80u: goto label_1dcc80;
        default: break;
    }

    ctx->pc = 0x1dcc58u;

    // 0x1dcc58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCC58u;
    {
        const bool branch_taken_0x1dcc58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC58u;
        // 0x1dcc5c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc58) {
            ctx->pc = 0x1DCC68u;
            goto label_1dcc68;
        }
    }
    ctx->pc = 0x1DCC60u;
    // 0x1dcc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC60u;
        // 0x1dcc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC68u;
label_1dcc68:
    // 0x1dcc68: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dcc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
    // 0x1dcc6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcc70: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dcc74: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC74u;
        // 0x1dcc78: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC7Cu;
    // 0x1dcc7c: 0x0  nop
    ctx->pc = 0x1dcc7cu;
    // NOP
label_1dcc80:
    // 0x1dcc80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dcc84: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dcc84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1dcc88: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dcc8c: 0x8cc5e668  lw          $a1, -0x1998($a2)
    ctx->pc = 0x1dcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33E668u));
    // 0x1dcc90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dcc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcc98: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1dcc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1dcc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC9Cu;
        // 0x1dcca0: 0xacc4e668  sw          $a0, -0x1998($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294960744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCCA4u;
    // 0x1dcca4: 0x0  nop
    ctx->pc = 0x1dcca4u;
    // NOP
    ctx->pc = 0x1dcca8u;
}
