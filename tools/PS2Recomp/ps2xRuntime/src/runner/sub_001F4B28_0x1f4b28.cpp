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

// Function: sub_001F4B28
// Address: 0x1f4b28 - 0x1f4b88
void sub_001F4B28_0x1f4b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B28_0x1f4b28");
#endif

    switch (ctx->pc) {
        case 0x1f4b28u: goto label_1f4b28;
        case 0x1f4b2cu: goto label_1f4b2c;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b34u: goto label_1f4b34;
        case 0x1f4b38u: goto label_1f4b38;
        case 0x1f4b3cu: goto label_1f4b3c;
        case 0x1f4b40u: goto label_1f4b40;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b48u: goto label_1f4b48;
        case 0x1f4b4cu: goto label_1f4b4c;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b54u: goto label_1f4b54;
        case 0x1f4b58u: goto label_1f4b58;
        case 0x1f4b5cu: goto label_1f4b5c;
        case 0x1f4b60u: goto label_1f4b60;
        case 0x1f4b64u: goto label_1f4b64;
        case 0x1f4b68u: goto label_1f4b68;
        case 0x1f4b6cu: goto label_1f4b6c;
        case 0x1f4b70u: goto label_1f4b70;
        case 0x1f4b74u: goto label_1f4b74;
        case 0x1f4b78u: goto label_1f4b78;
        case 0x1f4b7cu: goto label_1f4b7c;
        case 0x1f4b80u: goto label_1f4b80;
        case 0x1f4b84u: goto label_1f4b84;
        default: break;
    }

    ctx->pc = 0x1f4b28u;

label_1f4b28:
    // 0x1f4b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f4b2c:
    // 0x1f4b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4b30:
    // 0x1f4b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f4b34:
    // 0x1f4b34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f4b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f4b38:
    // 0x1f4b38: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1f4b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f4b3c:
    // 0x1f4b3c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_1f4b40:
    if (ctx->pc == 0x1F4B40u) {
        ctx->pc = 0x1F4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B3Cu;
        // 0x1f4b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B44u;
        goto label_1f4b44;
    }
    ctx->pc = 0x1F4B3Cu;
    {
        const bool branch_taken_0x1f4b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b3c) {
            ctx->pc = 0x1F4B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4B3Cu;
            // 0x1f4b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B78u;
            goto label_1f4b78;
        }
    }
    ctx->pc = 0x1F4B44u;
label_1f4b44:
    // 0x1f4b44: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f4b48:
    // 0x1f4b48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4b4c:
    // 0x1f4b4c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1f4b50:
    if (ctx->pc == 0x1F4B50u) {
        ctx->pc = 0x1F4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B4Cu;
        // 0x1f4b50: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B54u;
        goto label_1f4b54;
    }
    ctx->pc = 0x1F4B4Cu;
    {
        const bool branch_taken_0x1f4b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B4Cu;
        // 0x1f4b50: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b4c) {
            ctx->pc = 0x1F4B6Cu;
            goto label_1f4b6c;
        }
    }
    ctx->pc = 0x1F4B54u;
label_1f4b54:
    // 0x1f4b54: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1f4b58:
    // 0x1f4b58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f4b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f4b5c:
    // 0x1f4b5c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f4b60:
    // 0x1f4b60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f4b64:
    // 0x1f4b64: 0x60f809  jalr        $v1
label_1f4b68:
    if (ctx->pc == 0x1F4B68u) {
        ctx->pc = 0x1F4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B64u;
        // 0x1f4b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B6Cu;
        goto label_1f4b6c;
    }
    ctx->pc = 0x1F4B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4B6Cu);
        ctx->pc = 0x1F4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B64u;
        // 0x1f4b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B64u, 0x1F4B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4B6Cu;
label_1f4b6c:
    // 0x1f4b6c: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_1f4b70:
    if (ctx->pc == 0x1F4B70u) {
        ctx->pc = 0x1F4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B6Cu;
        // 0x1f4b70: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B74u;
        goto label_1f4b74;
    }
    ctx->pc = 0x1F4B6Cu;
    {
        const bool branch_taken_0x1f4b6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b6c) {
            ctx->pc = 0x1F4B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4B6Cu;
            // 0x1f4b70: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4b48;
        }
    }
    ctx->pc = 0x1F4B74u;
label_1f4b74:
    // 0x1f4b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f4b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4b78:
    // 0x1f4b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4b7c:
    // 0x1f4b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4b80:
    // 0x1f4b80: 0x3e00008  jr          $ra
label_1f4b84:
    if (ctx->pc == 0x1F4B84u) {
        ctx->pc = 0x1F4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B80u;
        // 0x1f4b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B88u;
        goto label_fallthrough_0x1f4b80;
    }
    ctx->pc = 0x1F4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B80u;
        // 0x1f4b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f4b80:
    ctx->pc = 0x1F4B88u;
}
