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

// Function: sub_00314CB0
// Address: 0x314cb0 - 0x314da0
void sub_00314CB0_0x314cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314CB0_0x314cb0");
#endif

    switch (ctx->pc) {
        case 0x314ce0u: goto label_314ce0;
        case 0x314d00u: goto label_314d00;
        case 0x314d10u: goto label_314d10;
        case 0x314d14u: goto label_314d14;
        case 0x314d1cu: goto label_314d1c;
        case 0x314d78u: goto label_314d78;
        default: break;
    }

    ctx->pc = 0x314cb0u;

    // 0x314cb0: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x314cb0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314cb4: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x314cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x314cb8: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314CB8u;
    {
        const bool branch_taken_0x314cb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x314CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CB8u;
        // 0x314cbc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cb8) {
            ctx->pc = 0x314CD0u;
            goto label_314cd0;
        }
    }
    ctx->pc = 0x314CC0u;
    // 0x314cc0: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x314cc0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314cc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x314cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x314CC8u;
    {
        const bool branch_taken_0x314cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CC8u;
        // 0x314ccc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cc8) {
            ctx->pc = 0x314CD4u;
            goto label_314cd4;
        }
    }
    ctx->pc = 0x314CD0u;
label_314cd0:
    // 0x314cd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x314cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314cd4:
    // 0x314cd4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x314cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314cd8: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x314cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x314cdc: 0x0  nop
    ctx->pc = 0x314cdcu;
    // NOP
label_314ce0:
    // 0x314ce0: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x314ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x314ce4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x314ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x314ce8: 0x0  nop
    ctx->pc = 0x314ce8u;
    // NOP
    // 0x314cec: 0x0  nop
    ctx->pc = 0x314cecu;
    // NOP
    // 0x314cf0: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314CF0u;
    {
        const bool branch_taken_0x314cf0 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x314CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CF0u;
        // 0x314cf4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cf0) {
            ctx->pc = 0x314CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ce0;
        }
    }
    ctx->pc = 0x314CF8u;
    // 0x314cf8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x314CF8u;
    {
        const bool branch_taken_0x314cf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x314CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CF8u;
        // 0x314cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cf8) {
            ctx->pc = 0x314D08u;
            goto label_314d08;
        }
    }
    ctx->pc = 0x314D00u;
label_314d00:
    // 0x314d00: 0x3e00008  jr          $ra
    ctx->pc = 0x314D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D00u;
        // 0x314d04: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D08u;
label_314d08:
    // 0x314d08: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x314d08u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x314d0c: 0x0  nop
    ctx->pc = 0x314d0cu;
    // NOP
label_314d10:
    // 0x314d10: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_314d14:
    // 0x314d14: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x314d14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x314d18: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x314d18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_314d1c:
    // 0x314d1c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x314d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x314d20: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x314D20u;
    {
        const bool branch_taken_0x314d20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x314D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D20u;
        // 0x314d24: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d20) {
            ctx->pc = 0x314D54u;
            goto label_314d54;
        }
    }
    ctx->pc = 0x314D28u;
    // 0x314d28: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x314d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x314d2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314D2Cu;
    {
        const bool branch_taken_0x314d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D2Cu;
        // 0x314d30: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d2c) {
            ctx->pc = 0x314D44u;
            goto label_314d44;
        }
    }
    ctx->pc = 0x314D34u;
    // 0x314d34: 0x10e0fff2  beqz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x314D34u;
    {
        const bool branch_taken_0x314d34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D34u;
        // 0x314d38: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d34) {
            ctx->pc = 0x314D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d00;
        }
    }
    ctx->pc = 0x314D3Cu;
    // 0x314d3c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x314D3Cu;
    {
        const bool branch_taken_0x314d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D3Cu;
        // 0x314d40: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d3c) {
            ctx->pc = 0x314D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d14;
        }
    }
    ctx->pc = 0x314D44u;
label_314d44:
    // 0x314d44: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x314D44u;
    {
        const bool branch_taken_0x314d44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x314D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D44u;
        // 0x314d48: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d44) {
            ctx->pc = 0x314D98u;
            goto label_314d98;
        }
    }
    ctx->pc = 0x314D4Cu;
    // 0x314d4c: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x314D4Cu;
    {
        const bool branch_taken_0x314d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D4Cu;
        // 0x314d50: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d4c) {
            ctx->pc = 0x314D14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d14;
        }
    }
    ctx->pc = 0x314D54u;
label_314d54:
    // 0x314d54: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x314d54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314d58: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x314d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x314d5c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314D5Cu;
    {
        const bool branch_taken_0x314d5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x314D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D5Cu;
        // 0x314d60: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d5c) {
            ctx->pc = 0x314D6Cu;
            goto label_314d6c;
        }
    }
    ctx->pc = 0x314D64u;
    // 0x314d64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x314D64u;
    {
        const bool branch_taken_0x314d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d64) {
            ctx->pc = 0x314D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314D64u;
            // 0x314d68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314D78u;
            goto label_314d78;
        }
    }
    ctx->pc = 0x314D6Cu;
label_314d6c:
    // 0x314d6c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x314D6Cu;
    {
        const bool branch_taken_0x314d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D6Cu;
        // 0x314d70: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d6c) {
            ctx->pc = 0x314D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d10;
        }
    }
    ctx->pc = 0x314D74u;
    // 0x314d74: 0x0  nop
    ctx->pc = 0x314d74u;
    // NOP
label_314d78:
    // 0x314d78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x314d7c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x314d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x314d80: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x314d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x314d84: 0x0  nop
    ctx->pc = 0x314d84u;
    // NOP
    // 0x314d88: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314D88u;
    {
        const bool branch_taken_0x314d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D88u;
        // 0x314d8c: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d88) {
            ctx->pc = 0x314D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d78;
        }
    }
    ctx->pc = 0x314D90u;
    // 0x314d90: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x314D90u;
    {
        const bool branch_taken_0x314d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D90u;
        // 0x314d94: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d90) {
            ctx->pc = 0x314D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314d1c;
        }
    }
    ctx->pc = 0x314D98u;
label_314d98:
    // 0x314d98: 0x3e00008  jr          $ra
    ctx->pc = 0x314D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D98u;
        // 0x314d9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314DA0u;
}
