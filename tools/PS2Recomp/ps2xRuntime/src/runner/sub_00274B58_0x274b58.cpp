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

// Function: sub_00274B58
// Address: 0x274b58 - 0x274bb0
void sub_00274B58_0x274b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274B58_0x274b58");
#endif

    ctx->pc = 0x274b58u;

    // 0x274b58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x274b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x274b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274b60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274B60u;
    {
        const bool branch_taken_0x274b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B60u;
        // 0x274b64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b60) {
            ctx->pc = 0x274B88u;
            goto label_274b88;
        }
    }
    ctx->pc = 0x274B68u;
    // 0x274b68: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x274B68u;
    {
        const bool branch_taken_0x274b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B68u;
        // 0x274b6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b68) {
            ctx->pc = 0x274B90u;
            goto label_274b90;
        }
    }
    ctx->pc = 0x274B70u;
    // 0x274b70: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274B70u;
    {
        const bool branch_taken_0x274b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B70u;
        // 0x274b74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b70) {
            ctx->pc = 0x274B98u;
            goto label_274b98;
        }
    }
    ctx->pc = 0x274B78u;
    // 0x274b78: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274B78u;
    {
        const bool branch_taken_0x274b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B78u;
        // 0x274b7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b78) {
            ctx->pc = 0x274BA4u;
            goto label_274ba4;
        }
    }
    ctx->pc = 0x274B80u;
    // 0x274b80: 0x3e00008  jr          $ra
    ctx->pc = 0x274B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0x3e00008  jr          $ra
    ctx->pc = 0x274B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B88u;
        // 0x274b8c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274B90u;
label_274b90:
    // 0x274b90: 0x3e00008  jr          $ra
    ctx->pc = 0x274B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B90u;
        // 0x274b94: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274B98u;
label_274b98:
    // 0x274b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x274b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x274b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x274B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B9Cu;
        // 0x274ba0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274BA4u;
label_274ba4:
    // 0x274ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x274BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BA4u;
        // 0x274ba8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274BACu;
    // 0x274bac: 0x0  nop
    ctx->pc = 0x274bacu;
    // NOP
    ctx->pc = 0x274bb0u;
}
