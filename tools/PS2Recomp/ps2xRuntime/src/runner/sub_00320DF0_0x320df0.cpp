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

// Function: sub_00320DF0
// Address: 0x320df0 - 0x320ea8
void sub_00320DF0_0x320df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320DF0_0x320df0");
#endif

    switch (ctx->pc) {
        case 0x320e10u: goto label_320e10;
        case 0x320e80u: goto label_320e80;
        default: break;
    }

    ctx->pc = 0x320df0u;

    // 0x320df0: 0x24cbfffc  addiu       $t3, $a2, -0x4
    ctx->pc = 0x320df0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x320df4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x320df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x320df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x320df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320dfc: 0x248a0006  addiu       $t2, $a0, 0x6
    ctx->pc = 0x320dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x320e00: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x320e04: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x320e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x320e08: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x320e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e0c: 0x0  nop
    ctx->pc = 0x320e0cu;
    // NOP
label_320e10:
    // 0x320e10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x320e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320e14: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320E14u;
    {
        const bool branch_taken_0x320e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x320e14) {
            ctx->pc = 0x320E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320E14u;
            // 0x320e18: 0x94620002  lhu         $v0, 0x2($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320E24u;
            goto label_320e24;
        }
    }
    ctx->pc = 0x320E1Cu;
    // 0x320e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x320E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E1Cu;
        // 0x320e20: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E24u;
label_320e24:
    // 0x320e24: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320E24u;
    {
        const bool branch_taken_0x320e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x320e24) {
            ctx->pc = 0x320E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320E24u;
            // 0x320e28: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320E34u;
            goto label_320e34;
        }
    }
    ctx->pc = 0x320E2Cu;
    // 0x320e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x320E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E2Cu;
        // 0x320e30: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E34u;
label_320e34:
    // 0x320e34: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320E34u;
    {
        const bool branch_taken_0x320e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x320e34) {
            ctx->pc = 0x320E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320E34u;
            // 0x320e38: 0x94620006  lhu         $v0, 0x6($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320E44u;
            goto label_320e44;
        }
    }
    ctx->pc = 0x320E3Cu;
    // 0x320e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x320E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E3Cu;
        // 0x320e40: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E44u;
label_320e44:
    // 0x320e44: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320E44u;
    {
        const bool branch_taken_0x320e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x320E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E44u;
        // 0x320e48: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e44) {
            ctx->pc = 0x320E54u;
            goto label_320e54;
        }
    }
    ctx->pc = 0x320E4Cu;
    // 0x320e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x320E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E4Cu;
        // 0x320e50: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E54u;
label_320e54:
    // 0x320e54: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x320e54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x320e58: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x320e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x320e5c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x320e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x320e60: 0x167102b  sltu        $v0, $t3, $a3
    ctx->pc = 0x320e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x320e64: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x320E64u;
    {
        const bool branch_taken_0x320e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E64u;
        // 0x320e68: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e64) {
            ctx->pc = 0x320E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320e10;
        }
    }
    ctx->pc = 0x320E6Cu;
    // 0x320e6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x320e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x320e70: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x320e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x320e74: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x320E74u;
    {
        const bool branch_taken_0x320e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E74u;
        // 0x320e78: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e74) {
            ctx->pc = 0x320EA0u;
            goto label_320ea0;
        }
    }
    ctx->pc = 0x320E7Cu;
    // 0x320e7c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x320e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_320e80:
    // 0x320e80: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x320e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320e84: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x320E84u;
    {
        const bool branch_taken_0x320e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x320E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E84u;
        // 0x320e88: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e84) {
            ctx->pc = 0x320E94u;
            goto label_320e94;
        }
    }
    ctx->pc = 0x320E8Cu;
    // 0x320e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x320E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E8Cu;
        // 0x320e90: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E94u;
label_320e94:
    // 0x320e94: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x320e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x320e98: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x320E98u;
    {
        const bool branch_taken_0x320e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E98u;
        // 0x320e9c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e98) {
            ctx->pc = 0x320E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320e80;
        }
    }
    ctx->pc = 0x320EA0u;
label_320ea0:
    // 0x320ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x320EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EA0u;
        // 0x320ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EA8u;
}
