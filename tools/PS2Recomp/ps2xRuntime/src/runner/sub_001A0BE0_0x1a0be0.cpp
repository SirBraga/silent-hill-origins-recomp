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

// Function: sub_001A0BE0
// Address: 0x1a0be0 - 0x1a0cb0
void sub_001A0BE0_0x1a0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BE0_0x1a0be0");
#endif

    ctx->pc = 0x1a0be0u;

    // 0x1a0be0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1a0be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0be4: 0x24023d3c  addiu       $v0, $zero, 0x3D3C
    ctx->pc = 0x1a0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15676));
    // 0x1a0be8: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A0BE8u;
    {
        const bool branch_taken_0x1a0be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BE8u;
        // 0x1a0bec: 0xa7102a  slt         $v0, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0be8) {
            ctx->pc = 0x1A0C84u;
            goto label_1a0c84;
        }
    }
    ctx->pc = 0x1A0BF0u;
    // 0x1a0bf0: 0x28623d3d  slti        $v0, $v1, 0x3D3D
    ctx->pc = 0x1a0bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15677) ? 1 : 0);
    // 0x1a0bf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0BF4u;
    {
        const bool branch_taken_0x1a0bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BF4u;
        // 0x1a0bf8: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bf4) {
            ctx->pc = 0x1A0C30u;
            goto label_1a0c30;
        }
    }
    ctx->pc = 0x1A0BFCu;
    // 0x1a0bfc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A0BFCu;
    {
        const bool branch_taken_0x1a0bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BFCu;
        // 0x1a0c00: 0x2862003f  slti        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bfc) {
            ctx->pc = 0x1A0C6Cu;
            goto label_1a0c6c;
        }
    }
    ctx->pc = 0x1A0C04u;
    // 0x1a0c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0C04u;
    {
        const bool branch_taken_0x1a0c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C04u;
        // 0x1a0c08: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c04) {
            ctx->pc = 0x1A0C1Cu;
            goto label_1a0c1c;
        }
    }
    ctx->pc = 0x1A0C0Cu;
    // 0x1a0c0c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A0C0Cu;
    {
        const bool branch_taken_0x1a0c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C0Cu;
        // 0x1a0c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c0c) {
            ctx->pc = 0x1A0C74u;
            goto label_1a0c74;
        }
    }
    ctx->pc = 0x1A0C14u;
    // 0x1a0c14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A0C14u;
    {
        const bool branch_taken_0x1a0c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c14) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0C1Cu;
label_1a0c1c:
    // 0x1a0c1c: 0x24023d21  addiu       $v0, $zero, 0x3D21
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15649));
    // 0x1a0c20: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0C20u;
    {
        const bool branch_taken_0x1a0c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C20u;
        // 0x1a0c24: 0xe51026  xor         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c20) {
            ctx->pc = 0x1A0C64u;
            goto label_1a0c64;
        }
    }
    ctx->pc = 0x1A0C28u;
    // 0x1a0c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C28u;
        // 0x1a0c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C30u;
label_1a0c30:
    // 0x1a0c30: 0x24023d3e  addiu       $v0, $zero, 0x3D3E
    ctx->pc = 0x1a0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15678));
    // 0x1a0c34: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0C34u;
    {
        const bool branch_taken_0x1a0c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C34u;
        // 0x1a0c38: 0xe5102a  slt         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c34) {
            ctx->pc = 0x1A0C7Cu;
            goto label_1a0c7c;
        }
    }
    ctx->pc = 0x1A0C3Cu;
    // 0x1a0c3c: 0x28623d3e  slti        $v0, $v1, 0x3D3E
    ctx->pc = 0x1a0c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15678) ? 1 : 0);
    // 0x1a0c40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0C40u;
    {
        const bool branch_taken_0x1a0c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C40u;
        // 0x1a0c44: 0xe51026  xor         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c40) {
            ctx->pc = 0x1A0C5Cu;
            goto label_1a0c5c;
        }
    }
    ctx->pc = 0x1A0C48u;
    // 0x1a0c48: 0x24023e3c  addiu       $v0, $zero, 0x3E3C
    ctx->pc = 0x1a0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15932));
    // 0x1a0c4c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A0C4Cu;
    {
        const bool branch_taken_0x1a0c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C4Cu;
        // 0x1a0c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c4c) {
            ctx->pc = 0x1A0C8Cu;
            goto label_1a0c8c;
        }
    }
    ctx->pc = 0x1A0C54u;
    // 0x1a0c54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0C54u;
    {
        const bool branch_taken_0x1a0c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c54) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0C5Cu;
label_1a0c5c:
    // 0x1a0c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C5Cu;
        // 0x1a0c60: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C64u;
label_1a0c64:
    // 0x1a0c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C64u;
        // 0x1a0c68: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C6Cu;
label_1a0c6c:
    // 0x1a0c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C6Cu;
        // 0x1a0c70: 0xa7102a  slt         $v0, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C74u;
label_1a0c74:
    // 0x1a0c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C74u;
        // 0x1a0c78: 0xe5102a  slt         $v0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C7Cu;
label_1a0c7c:
    // 0x1a0c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C7Cu;
        // 0x1a0c80: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C84u;
label_1a0c84:
    // 0x1a0c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C84u;
        // 0x1a0c88: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C8Cu;
label_1a0c8c:
    // 0x1a0c8c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a0c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0C90u;
    {
        const bool branch_taken_0x1a0c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C90u;
        // 0x1a0c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c90) {
            ctx->pc = 0x1A0CA0u;
            goto label_1a0ca0;
        }
    }
    ctx->pc = 0x1A0C98u;
    // 0x1a0c98: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1a0c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1a0c9c: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a0ca0:
    // 0x1a0ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA0u;
        // 0x1a0ca4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0CA8u;
label_1a0ca8:
    // 0x1a0ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0CB0u;
}
