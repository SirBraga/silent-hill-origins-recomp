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

// Function: sub_00202A28
// Address: 0x202a28 - 0x202ab0
void sub_00202A28_0x202a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202A28_0x202a28");
#endif

    switch (ctx->pc) {
        case 0x202a38u: goto label_202a38;
        case 0x202a60u: goto label_202a60;
        case 0x202a90u: goto label_202a90;
        default: break;
    }

    ctx->pc = 0x202a28u;

    // 0x202a28: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x202a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x202a2c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202A2Cu;
    {
        const bool branch_taken_0x202a2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x202A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A2Cu;
        // 0x202a30: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a2c) {
            ctx->pc = 0x202A50u;
            goto label_202a50;
        }
    }
    ctx->pc = 0x202A34u;
    // 0x202a34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x202a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_202a38:
    // 0x202a38: 0x0  nop
    ctx->pc = 0x202a38u;
    // NOP
    // 0x202a3c: 0x0  nop
    ctx->pc = 0x202a3cu;
    // NOP
    // 0x202a40: 0x0  nop
    ctx->pc = 0x202a40u;
    // NOP
    // 0x202a44: 0x0  nop
    ctx->pc = 0x202a44u;
    // NOP
    // 0x202a48: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202A48u;
    {
        const bool branch_taken_0x202a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A48u;
        // 0x202a4c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a48) {
            ctx->pc = 0x202A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a38;
        }
    }
    ctx->pc = 0x202A50u;
label_202a50:
    // 0x202a50: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x202a54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202A54u;
    {
        const bool branch_taken_0x202a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A54u;
        // 0x202a58: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a54) {
            ctx->pc = 0x202A78u;
            goto label_202a78;
        }
    }
    ctx->pc = 0x202A5Cu;
    // 0x202a5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202a60:
    // 0x202a60: 0x0  nop
    ctx->pc = 0x202a60u;
    // NOP
    // 0x202a64: 0x0  nop
    ctx->pc = 0x202a64u;
    // NOP
    // 0x202a68: 0x0  nop
    ctx->pc = 0x202a68u;
    // NOP
    // 0x202a6c: 0x0  nop
    ctx->pc = 0x202a6cu;
    // NOP
    // 0x202a70: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202A70u;
    {
        const bool branch_taken_0x202a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a70) {
            ctx->pc = 0x202A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A70u;
            // 0x202a74: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a60;
        }
    }
    ctx->pc = 0x202A78u;
label_202a78:
    // 0x202a78: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x202A78u;
    {
        const bool branch_taken_0x202a78 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x202A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A78u;
        // 0x202a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a78) {
            ctx->pc = 0x202AA8u;
            goto label_202aa8;
        }
    }
    ctx->pc = 0x202A80u;
    // 0x202a80: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x202a84: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x202a88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202a8c: 0x0  nop
    ctx->pc = 0x202a8cu;
    // NOP
label_202a90:
    // 0x202a90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x202a94: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x202a98: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x202A98u;
    {
        const bool branch_taken_0x202a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x202a98) {
            ctx->pc = 0x202A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A98u;
            // 0x202a9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202AA0u;
            goto label_202aa0;
        }
    }
    ctx->pc = 0x202AA0u;
label_202aa0:
    // 0x202aa0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x202AA0u;
    {
        const bool branch_taken_0x202aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202aa0) {
            ctx->pc = 0x202AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AA0u;
            // 0x202aa4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a90;
        }
    }
    ctx->pc = 0x202AA8u;
label_202aa8:
    // 0x202aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x202AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202AB0u;
}
