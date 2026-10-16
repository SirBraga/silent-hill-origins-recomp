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

// Function: sub_001E2A40
// Address: 0x1e2a40 - 0x1e2ac8
void sub_001E2A40_0x1e2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2A40_0x1e2a40");
#endif

    switch (ctx->pc) {
        case 0x1e2a5cu: goto label_1e2a5c;
        default: break;
    }

    ctx->pc = 0x1e2a40u;

    // 0x1e2a40: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2A40u;
    {
        const bool branch_taken_0x1e2a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A40u;
        // 0x1e2a44: 0x24031101  addiu       $v1, $zero, 0x1101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a40) {
            ctx->pc = 0x1E2A9Cu;
            goto label_1e2a9c;
        }
    }
    ctx->pc = 0x1E2A48u;
    // 0x1e2a48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2a4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2a50: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2A50u;
    {
        const bool branch_taken_0x1e2a50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2a50) {
            ctx->pc = 0x1E2A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A50u;
            // 0x1e2a54: 0x24021102  addiu       $v0, $zero, 0x1102 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4354));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A68u;
            goto label_1e2a68;
        }
    }
    ctx->pc = 0x1E2A58u;
    // 0x1e2a58: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1e2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e2a5c:
    // 0x1e2a5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e2a60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A60u;
        // 0x1e2a64: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A68u;
label_1e2a68:
    // 0x1e2a68: 0x0  nop
    ctx->pc = 0x1e2a68u;
    // NOP
    // 0x1e2a6c: 0x50a2fffb  beql        $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E2A6Cu;
    {
        const bool branch_taken_0x1e2a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2a6c) {
            ctx->pc = 0x1E2A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A6Cu;
            // 0x1e2a70: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2a5c;
        }
    }
    ctx->pc = 0x1E2A74u;
    // 0x1e2a74: 0x24021103  addiu       $v0, $zero, 0x1103
    ctx->pc = 0x1e2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e2a78: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2A78u;
    {
        const bool branch_taken_0x1e2a78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2a78) {
            ctx->pc = 0x1E2A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A78u;
            // 0x1e2a7c: 0x24021104  addiu       $v0, $zero, 0x1104 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A94u;
            goto label_1e2a94;
        }
    }
    ctx->pc = 0x1E2A80u;
    // 0x1e2a80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e2a84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e2a88: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e2a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A8Cu;
        // 0x1e2a90: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A94u;
label_1e2a94:
    // 0x1e2a94: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2A94u;
    {
        const bool branch_taken_0x1e2a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2a94) {
            ctx->pc = 0x1E2A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A94u;
            // 0x1e2a98: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AA4u;
            goto label_1e2aa4;
        }
    }
    ctx->pc = 0x1E2A9Cu;
label_1e2a9c:
    // 0x1e2a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A9Cu;
        // 0x1e2aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2AA4u;
label_1e2aa4:
    // 0x1e2aa4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1e2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e2aa8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e2aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AACu;
        // 0x1e2ab0: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2AB4u;
    // 0x1e2ab4: 0x0  nop
    ctx->pc = 0x1e2ab4u;
    // NOP
    // 0x1e2ab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2abc: 0x0  nop
    ctx->pc = 0x1e2abcu;
    // NOP
    // 0x1e2ac0: 0x0  nop
    ctx->pc = 0x1e2ac0u;
    // NOP
    // 0x1e2ac4: 0x0  nop
    ctx->pc = 0x1e2ac4u;
    // NOP
    ctx->pc = 0x1e2ac8u;
}
