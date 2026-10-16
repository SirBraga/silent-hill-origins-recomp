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

// Function: sub_001F7AD8
// Address: 0x1f7ad8 - 0x1f7bf0
void sub_001F7AD8_0x1f7ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7AD8_0x1f7ad8");
#endif

    switch (ctx->pc) {
        case 0x1f7b20u: goto label_1f7b20;
        case 0x1f7b90u: goto label_1f7b90;
        case 0x1f7bbcu: goto label_1f7bbc;
        default: break;
    }

    ctx->pc = 0x1f7ad8u;

    // 0x1f7ad8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7adc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1f7adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7ae0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7AE0u;
    {
        const bool branch_taken_0x1f7ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ae0) {
            ctx->pc = 0x1F7AF8u;
            goto label_1f7af8;
        }
    }
    ctx->pc = 0x1F7AE8u;
    // 0x1f7ae8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f7aec: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f7aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7AF0u;
    {
        const bool branch_taken_0x1f7af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AF0u;
        // 0x1f7af4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7af0) {
            ctx->pc = 0x1F7B00u;
            goto label_1f7b00;
        }
    }
    ctx->pc = 0x1F7AF8u;
label_1f7af8:
    // 0x1f7af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AF8u;
        // 0x1f7afc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B00u;
label_1f7b00:
    // 0x1f7b00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7B00u;
    {
        const bool branch_taken_0x1f7b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B00u;
        // 0x1f7b04: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b00) {
            ctx->pc = 0x1F7B30u;
            goto label_1f7b30;
        }
    }
    ctx->pc = 0x1F7B08u;
    // 0x1f7b08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7B08u;
    {
        const bool branch_taken_0x1f7b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b08) {
            ctx->pc = 0x1F7B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B08u;
            // 0x1f7b0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B20u;
            goto label_1f7b20;
        }
    }
    ctx->pc = 0x1F7B10u;
    // 0x1f7b10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7b14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f7b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B18u;
        // 0x1f7b1c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B20u;
label_1f7b20:
    // 0x1f7b20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B28u;
        // 0x1f7b2c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B30u;
label_1f7b30:
    // 0x1f7b30: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7B30u;
    {
        const bool branch_taken_0x1f7b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b30) {
            ctx->pc = 0x1F7B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B30u;
            // 0x1f7b34: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B4Cu;
            goto label_1f7b4c;
        }
    }
    ctx->pc = 0x1F7B38u;
    // 0x1f7b38: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7b3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B44u;
        // 0x1f7b48: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B4Cu;
label_1f7b4c:
    // 0x1f7b4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7B4Cu;
    {
        const bool branch_taken_0x1f7b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B4Cu;
        // 0x1f7b50: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b4c) {
            ctx->pc = 0x1F7B74u;
            goto label_1f7b74;
        }
    }
    ctx->pc = 0x1F7B54u;
    // 0x1f7b54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7B54u;
    {
        const bool branch_taken_0x1f7b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b54) {
            ctx->pc = 0x1F7B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B54u;
            // 0x1f7b58: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B64u;
            goto label_1f7b64;
        }
    }
    ctx->pc = 0x1F7B5Cu;
    // 0x1f7b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B5Cu;
        // 0x1f7b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B64u;
label_1f7b64:
    // 0x1f7b64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7b68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B6Cu;
        // 0x1f7b70: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B74u;
label_1f7b74:
    // 0x1f7b74: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1F7B74u;
    {
        const bool branch_taken_0x1f7b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b74) {
            ctx->pc = 0x1F7B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B74u;
            // 0x1f7b78: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b20;
        }
    }
    ctx->pc = 0x1F7B7Cu;
    // 0x1f7b7c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1f7b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f7b80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7b84: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7B84u;
    {
        const bool branch_taken_0x1f7b84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7b84) {
            ctx->pc = 0x1F7B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B84u;
            // 0x1f7b88: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B9Cu;
            goto label_1f7b9c;
        }
    }
    ctx->pc = 0x1F7B8Cu;
    // 0x1f7b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b90:
    // 0x1f7b90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B94u;
        // 0x1f7b98: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B9Cu;
label_1f7b9c:
    // 0x1f7b9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f7ba0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1f7ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f7ba4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7BA4u;
    {
        const bool branch_taken_0x1f7ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ba4) {
            ctx->pc = 0x1F7BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7BA4u;
            // 0x1f7ba8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b90;
        }
    }
    ctx->pc = 0x1F7BACu;
    // 0x1f7bac: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1f7bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f7bb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7BB0u;
    {
        const bool branch_taken_0x1f7bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7bb0) {
            ctx->pc = 0x1F7BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7BB0u;
            // 0x1f7bb4: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7BC8u;
            goto label_1f7bc8;
        }
    }
    ctx->pc = 0x1F7BB8u;
    // 0x1f7bb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7bbc:
    // 0x1f7bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BC0u;
        // 0x1f7bc4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BC8u;
label_1f7bc8:
    // 0x1f7bc8: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f7bcc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1f7bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7bd0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F7BD0u;
    {
        const bool branch_taken_0x1f7bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7bd0) {
            ctx->pc = 0x1F7BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7BD0u;
            // 0x1f7bd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7b90;
        }
    }
    ctx->pc = 0x1F7BD8u;
    // 0x1f7bd8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1f7bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f7bdc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F7BDCu;
    {
        const bool branch_taken_0x1f7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BDCu;
        // 0x1f7be0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bdc) {
            ctx->pc = 0x1F7BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7bbc;
        }
    }
    ctx->pc = 0x1F7BE4u;
    // 0x1f7be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BE4u;
        // 0x1f7be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BECu;
    // 0x1f7bec: 0x0  nop
    ctx->pc = 0x1f7becu;
    // NOP
    ctx->pc = 0x1f7bf0u;
}
