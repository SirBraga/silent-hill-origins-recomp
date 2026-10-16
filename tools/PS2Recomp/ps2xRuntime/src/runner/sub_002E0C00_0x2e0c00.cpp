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

// Function: sub_002E0C00
// Address: 0x2e0c00 - 0x2e0ca0
void sub_002E0C00_0x2e0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0C00_0x2e0c00");
#endif

    switch (ctx->pc) {
        case 0x2e0c28u: goto label_2e0c28;
        case 0x2e0c44u: goto label_2e0c44;
        case 0x2e0c7cu: goto label_2e0c7c;
        case 0x2e0c8cu: goto label_2e0c8c;
        default: break;
    }

    ctx->pc = 0x2e0c00u;

    // 0x2e0c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0c04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e0c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e0c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0c14: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2e0c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0c18: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2e0c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0c1c: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0C1Cu;
    {
        const bool branch_taken_0x2e0c1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e0c1c) {
            ctx->pc = 0x2E0C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C1Cu;
            // 0x2e0c20: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C54u;
            goto label_2e0c54;
        }
    }
    ctx->pc = 0x2E0C24u;
    // 0x2e0c24: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e0c28:
    // 0x2e0c28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e0c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c2c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2e0c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0c30: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e0c30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e0c34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0c38: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0c3c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0C44u);
    ctx->pc = 0x2E0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C3Cu;
    // 0x2e0c40: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E0C3Cu, 0x2E0C44u)) {
        return;
    }
    ctx->pc = 0x2E0C44u;
label_2e0c44:
    // 0x2e0c44: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2e0c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0c48: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E0C48u;
    {
        const bool branch_taken_0x2e0c48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e0c48) {
            ctx->pc = 0x2E0C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C48u;
            // 0x2e0c4c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0c28;
        }
    }
    ctx->pc = 0x2E0C50u;
    // 0x2e0c50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e0c54:
    // 0x2e0c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0c58: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0C58u;
    {
        const bool branch_taken_0x2e0c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c58) {
            ctx->pc = 0x2E0C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0C58u;
            // 0x2e0c5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0C90u;
            goto label_2e0c90;
        }
    }
    ctx->pc = 0x2E0C60u;
    // 0x2e0c60: 0x8f848c30  lw          $a0, -0x73D0($gp)
    ctx->pc = 0x2e0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
    // 0x2e0c64: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0C64u;
    {
        const bool branch_taken_0x2e0c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e0c64) {
            ctx->pc = 0x2E0C74u;
            goto label_2e0c74;
        }
    }
    ctx->pc = 0x2E0C6Cu;
    // 0x2e0c6c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0C6Cu;
    {
        const bool branch_taken_0x2e0c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c6c) {
            ctx->pc = 0x2E0C84u;
            goto label_2e0c84;
        }
    }
    ctx->pc = 0x2E0C74u;
label_2e0c74:
    // 0x2e0c74: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E0C74u;
    SET_GPR_U32(ctx, 31, 0x2E0C7Cu);
    ctx->pc = 0x2E0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C74u;
    // 0x2e0c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E0C74u, 0x2E0C7Cu)) {
        return;
    }
    ctx->pc = 0x2E0C7Cu;
label_2e0c7c:
    // 0x2e0c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0C7Cu;
    {
        const bool branch_taken_0x2e0c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C7Cu;
        // 0x2e0c80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0c7c) {
            ctx->pc = 0x2E0C90u;
            goto label_2e0c90;
        }
    }
    ctx->pc = 0x2E0C84u;
label_2e0c84:
    // 0x2e0c84: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E0C84u;
    SET_GPR_U32(ctx, 31, 0x2E0C8Cu);
    ctx->pc = 0x2E0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0C84u;
    // 0x2e0c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E0C84u, 0x2E0C8Cu)) {
        return;
    }
    ctx->pc = 0x2E0C8Cu;
label_2e0c8c:
    // 0x2e0c8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e0c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0c90:
    // 0x2e0c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C98u;
        // 0x2e0c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0CA0u;
}
