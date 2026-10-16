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

// Function: sub_002E0B40
// Address: 0x2e0b40 - 0x2e0c00
void sub_002E0B40_0x2e0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B40_0x2e0b40");
#endif

    switch (ctx->pc) {
        case 0x2e0b80u: goto label_2e0b80;
        case 0x2e0b9cu: goto label_2e0b9c;
        case 0x2e0bd4u: goto label_2e0bd4;
        case 0x2e0be4u: goto label_2e0be4;
        default: break;
    }

    ctx->pc = 0x2e0b40u;

    // 0x2e0b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0b44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e0b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e0b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0b54: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2e0b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e0b58: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2e0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e0b5c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e0b60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e0b64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e0b68: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e0b6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e0b70: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2e0b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0b74: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0B74u;
    {
        const bool branch_taken_0x2e0b74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e0b74) {
            ctx->pc = 0x2E0B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0B74u;
            // 0x2e0b78: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0BACu;
            goto label_2e0bac;
        }
    }
    ctx->pc = 0x2E0B7Cu;
    // 0x2e0b7c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e0b80:
    // 0x2e0b80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e0b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b84: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2e0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0b88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e0b8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e0b90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e0b94: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E0B94u;
    SET_GPR_U32(ctx, 31, 0x2E0B9Cu);
    ctx->pc = 0x2E0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B94u;
    // 0x2e0b98: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E0B94u, 0x2E0B9Cu)) {
        return;
    }
    ctx->pc = 0x2E0B9Cu;
label_2e0b9c:
    // 0x2e0b9c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2e0b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e0ba0: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E0BA0u;
    {
        const bool branch_taken_0x2e0ba0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e0ba0) {
            ctx->pc = 0x2E0BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BA0u;
            // 0x2e0ba4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0b80;
        }
    }
    ctx->pc = 0x2E0BA8u;
    // 0x2e0ba8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2e0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2e0bac:
    // 0x2e0bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0bb0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0BB0u;
    {
        const bool branch_taken_0x2e0bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bb0) {
            ctx->pc = 0x2E0BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0BB0u;
            // 0x2e0bb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0BE8u;
            goto label_2e0be8;
        }
    }
    ctx->pc = 0x2E0BB8u;
    // 0x2e0bb8: 0x8f848c30  lw          $a0, -0x73D0($gp)
    ctx->pc = 0x2e0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
    // 0x2e0bbc: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0BBCu;
    {
        const bool branch_taken_0x2e0bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e0bbc) {
            ctx->pc = 0x2E0BCCu;
            goto label_2e0bcc;
        }
    }
    ctx->pc = 0x2E0BC4u;
    // 0x2e0bc4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0BC4u;
    {
        const bool branch_taken_0x2e0bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bc4) {
            ctx->pc = 0x2E0BDCu;
            goto label_2e0bdc;
        }
    }
    ctx->pc = 0x2E0BCCu;
label_2e0bcc:
    // 0x2e0bcc: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E0BCCu;
    SET_GPR_U32(ctx, 31, 0x2E0BD4u);
    ctx->pc = 0x2E0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BCCu;
    // 0x2e0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E0BCCu, 0x2E0BD4u)) {
        return;
    }
    ctx->pc = 0x2E0BD4u;
label_2e0bd4:
    // 0x2e0bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0BD4u;
    {
        const bool branch_taken_0x2e0bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BD4u;
        // 0x2e0bd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0bd4) {
            ctx->pc = 0x2E0BE8u;
            goto label_2e0be8;
        }
    }
    ctx->pc = 0x2E0BDCu;
label_2e0bdc:
    // 0x2e0bdc: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E0BDCu;
    SET_GPR_U32(ctx, 31, 0x2E0BE4u);
    ctx->pc = 0x2E0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0BDCu;
    // 0x2e0be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E0BDCu, 0x2E0BE4u)) {
        return;
    }
    ctx->pc = 0x2E0BE4u;
label_2e0be4:
    // 0x2e0be4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e0be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0be8:
    // 0x2e0be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0BF0u;
        // 0x2e0bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0BF8u;
    // 0x2e0bf8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e0bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0bfc: 0x0  nop
    ctx->pc = 0x2e0bfcu;
    // NOP
    ctx->pc = 0x2e0c00u;
}
