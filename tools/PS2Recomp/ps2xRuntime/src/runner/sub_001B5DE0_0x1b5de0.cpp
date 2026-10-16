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

// Function: sub_001B5DE0
// Address: 0x1b5de0 - 0x1b5e48
void sub_001B5DE0_0x1b5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5DE0_0x1b5de0");
#endif

    switch (ctx->pc) {
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5df4u: goto label_1b5df4;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5dfcu: goto label_1b5dfc;
        case 0x1b5e00u: goto label_1b5e00;
        case 0x1b5e04u: goto label_1b5e04;
        case 0x1b5e08u: goto label_1b5e08;
        case 0x1b5e0cu: goto label_1b5e0c;
        case 0x1b5e10u: goto label_1b5e10;
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5e1cu: goto label_1b5e1c;
        case 0x1b5e20u: goto label_1b5e20;
        case 0x1b5e24u: goto label_1b5e24;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e2cu: goto label_1b5e2c;
        case 0x1b5e30u: goto label_1b5e30;
        case 0x1b5e34u: goto label_1b5e34;
        case 0x1b5e38u: goto label_1b5e38;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e40u: goto label_1b5e40;
        case 0x1b5e44u: goto label_1b5e44;
        default: break;
    }

    ctx->pc = 0x1b5de0u;

label_1b5de0:
    // 0x1b5de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5de4:
    // 0x1b5de4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b5de8:
    // 0x1b5de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5dec:
    // 0x1b5dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5df0:
    // 0x1b5df0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1b5df4:
    // 0x1b5df4: 0x8e0602c8  lw          $a2, 0x2C8($s0)
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1b5df8:
    // 0x1b5df8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5dfc:
    if (ctx->pc == 0x1B5DFCu) {
        ctx->pc = 0x1B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF8u;
        // 0x1b5dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E00u;
        goto label_1b5e00;
    }
    ctx->pc = 0x1B5DF8u;
    {
        const bool branch_taken_0x1b5df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF8u;
        // 0x1b5dfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5df8) {
            ctx->pc = 0x1B5E14u;
            goto label_1b5e14;
        }
    }
    ctx->pc = 0x1B5E00u;
label_1b5e00:
    // 0x1b5e00: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5e04:
    // 0x1b5e04: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5e08:
    // 0x1b5e08: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5e0c:
    // 0x1b5e0c: 0x60f809  jalr        $v1
label_1b5e10:
    if (ctx->pc == 0x1B5E10u) {
        ctx->pc = 0x1B5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E0Cu;
        // 0x1b5e10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E14u;
        goto label_1b5e14;
    }
    ctx->pc = 0x1B5E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5E14u);
        ctx->pc = 0x1B5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E0Cu;
        // 0x1b5e10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E0Cu, 0x1B5E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x8e0602cc  lw          $a2, 0x2CC($s0)
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1b5e18:
    // 0x1b5e18: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b5e1c:
    if (ctx->pc == 0x1B5E1Cu) {
        ctx->pc = 0x1B5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E18u;
        // 0x1b5e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E20u;
        goto label_1b5e20;
    }
    ctx->pc = 0x1B5E18u;
    {
        const bool branch_taken_0x1b5e18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E18u;
        // 0x1b5e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e18) {
            ctx->pc = 0x1B5E34u;
            goto label_1b5e34;
        }
    }
    ctx->pc = 0x1B5E20u;
label_1b5e20:
    // 0x1b5e20: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b5e24:
    // 0x1b5e24: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b5e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b5e28:
    // 0x1b5e28: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b5e2c:
    // 0x1b5e2c: 0x60f809  jalr        $v1
label_1b5e30:
    if (ctx->pc == 0x1B5E30u) {
        ctx->pc = 0x1B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E2Cu;
        // 0x1b5e30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E34u;
        goto label_1b5e34;
    }
    ctx->pc = 0x1B5E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5E34u);
        ctx->pc = 0x1B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E2Cu;
        // 0x1b5e30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E2Cu, 0x1B5E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5E34u;
label_1b5e34:
    // 0x1b5e34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5e38:
    // 0x1b5e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5e3c:
    // 0x1b5e3c: 0x3e00008  jr          $ra
label_1b5e40:
    if (ctx->pc == 0x1B5E40u) {
        ctx->pc = 0x1B5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E3Cu;
        // 0x1b5e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E44u;
        goto label_1b5e44;
    }
    ctx->pc = 0x1B5E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E3Cu;
        // 0x1b5e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E44u;
label_1b5e44:
    // 0x1b5e44: 0x0  nop
    ctx->pc = 0x1b5e44u;
    // NOP
    ctx->pc = 0x1b5e48u;
}
