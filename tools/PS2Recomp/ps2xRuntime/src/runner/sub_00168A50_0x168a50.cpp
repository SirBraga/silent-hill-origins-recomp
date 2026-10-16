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

// Function: sub_00168A50
// Address: 0x168a50 - 0x168a90
void sub_00168A50_0x168a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168A50_0x168a50");
#endif

    switch (ctx->pc) {
        case 0x168a68u: goto label_168a68;
        default: break;
    }

    ctx->pc = 0x168a50u;

    // 0x168a50: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x168a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x168a54: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x168a58: 0x8c4486ac  lw          $a0, -0x7954($v0)
    ctx->pc = 0x168a58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3386ACu));
    // 0x168a5c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168A5Cu;
    {
        const bool branch_taken_0x168a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A5Cu;
        // 0x168a60: 0x8c6586b4  lw          $a1, -0x794C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a5c) {
            ctx->pc = 0x168A80u;
            goto label_168a80;
        }
    }
    ctx->pc = 0x168A64u;
    // 0x168a64: 0x0  nop
    ctx->pc = 0x168a64u;
    // NOP
label_168a68:
    // 0x168a68: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x168a6c: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x168a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x168a70: 0x0  nop
    ctx->pc = 0x168a70u;
    // NOP
    // 0x168a74: 0x0  nop
    ctx->pc = 0x168a74u;
    // NOP
    // 0x168a78: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168A78u;
    {
        const bool branch_taken_0x168a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A78u;
        // 0x168a7c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a78) {
            ctx->pc = 0x168A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168a68;
        }
    }
    ctx->pc = 0x168A80u;
label_168a80:
    // 0x168a80: 0x28a30400  slti        $v1, $a1, 0x400
    ctx->pc = 0x168a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x168a84: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x168a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x168a88: 0x3e00008  jr          $ra
    ctx->pc = 0x168A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A88u;
        // 0x168a8c: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168A90u;
}
