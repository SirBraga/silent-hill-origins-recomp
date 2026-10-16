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

// Function: sub_001CCAF8
// Address: 0x1ccaf8 - 0x1ccba8
void sub_001CCAF8_0x1ccaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCAF8_0x1ccaf8");
#endif

    switch (ctx->pc) {
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccafcu: goto label_1ccafc;
        case 0x1ccb00u: goto label_1ccb00;
        case 0x1ccb04u: goto label_1ccb04;
        case 0x1ccb08u: goto label_1ccb08;
        case 0x1ccb0cu: goto label_1ccb0c;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb14u: goto label_1ccb14;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb1cu: goto label_1ccb1c;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb24u: goto label_1ccb24;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb2cu: goto label_1ccb2c;
        case 0x1ccb30u: goto label_1ccb30;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb38u: goto label_1ccb38;
        case 0x1ccb3cu: goto label_1ccb3c;
        case 0x1ccb40u: goto label_1ccb40;
        case 0x1ccb44u: goto label_1ccb44;
        case 0x1ccb48u: goto label_1ccb48;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccb50u: goto label_1ccb50;
        case 0x1ccb54u: goto label_1ccb54;
        case 0x1ccb58u: goto label_1ccb58;
        case 0x1ccb5cu: goto label_1ccb5c;
        case 0x1ccb60u: goto label_1ccb60;
        case 0x1ccb64u: goto label_1ccb64;
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb6cu: goto label_1ccb6c;
        case 0x1ccb70u: goto label_1ccb70;
        case 0x1ccb74u: goto label_1ccb74;
        case 0x1ccb78u: goto label_1ccb78;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb80u: goto label_1ccb80;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb88u: goto label_1ccb88;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccb98u: goto label_1ccb98;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba0u: goto label_1ccba0;
        case 0x1ccba4u: goto label_1ccba4;
        default: break;
    }

    ctx->pc = 0x1ccaf8u;

label_1ccaf8:
    // 0x1ccaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ccafc:
    // 0x1ccafc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ccb00:
    // 0x1ccb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ccb04:
    // 0x1ccb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb08:
    // 0x1ccb08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ccb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ccb0c:
    // 0x1ccb0c: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1ccb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_1ccb10:
    // 0x1ccb10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ccb14:
    if (ctx->pc == 0x1CCB14u) {
        ctx->pc = 0x1CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB10u;
        // 0x1ccb14: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB18u;
        goto label_1ccb18;
    }
    ctx->pc = 0x1CCB10u;
    {
        const bool branch_taken_0x1ccb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB10u;
        // 0x1ccb14: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb10) {
            ctx->pc = 0x1CCB34u;
            goto label_1ccb34;
        }
    }
    ctx->pc = 0x1CCB18u;
label_1ccb18:
    // 0x1ccb18: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1ccb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1ccb1c:
    // 0x1ccb1c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ccb20:
    // 0x1ccb20: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ccb24:
    // 0x1ccb24: 0x60f809  jalr        $v1
label_1ccb28:
    if (ctx->pc == 0x1CCB28u) {
        ctx->pc = 0x1CCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB24u;
        // 0x1ccb28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB2Cu;
        goto label_1ccb2c;
    }
    ctx->pc = 0x1CCB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCB2Cu);
        ctx->pc = 0x1CCB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB24u;
        // 0x1ccb28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB24u, 0x1CCB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCB2Cu;
label_1ccb2c:
    // 0x1ccb2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ccb30:
    if (ctx->pc == 0x1CCB30u) {
        ctx->pc = 0x1CCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB2Cu;
        // 0x1ccb30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB34u;
        goto label_1ccb34;
    }
    ctx->pc = 0x1CCB2Cu;
    {
        const bool branch_taken_0x1ccb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB2Cu;
        // 0x1ccb30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb2c) {
            ctx->pc = 0x1CCB4Cu;
            goto label_1ccb4c;
        }
    }
    ctx->pc = 0x1CCB34u;
label_1ccb34:
    // 0x1ccb34: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1ccb38:
    // 0x1ccb38: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1ccb3c:
    // 0x1ccb3c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1ccb40:
    // 0x1ccb40: 0x60f809  jalr        $v1
label_1ccb44:
    if (ctx->pc == 0x1CCB44u) {
        ctx->pc = 0x1CCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB40u;
        // 0x1ccb44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB48u;
        goto label_1ccb48;
    }
    ctx->pc = 0x1CCB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCB48u);
        ctx->pc = 0x1CCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB40u;
        // 0x1ccb44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB40u, 0x1CCB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCB48u;
label_1ccb48:
    // 0x1ccb48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ccb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ccb4c:
    // 0x1ccb4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccb50:
    // 0x1ccb50: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ccb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb54:
    // 0x1ccb54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ccb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ccb58:
    // 0x1ccb58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ccb5c:
    // 0x1ccb5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ccb60:
    // 0x1ccb60: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1ccb60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1ccb64:
    // 0x1ccb64: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1ccb68:
    if (ctx->pc == 0x1CCB68u) {
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB6Cu;
        goto label_1ccb6c;
    }
    ctx->pc = 0x1CCB64u;
    {
        const bool branch_taken_0x1ccb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb64) {
            ctx->pc = 0x1CCB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccb50;
        }
    }
    ctx->pc = 0x1CCB6Cu;
label_1ccb6c:
    // 0x1ccb6c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb70:
    // 0x1ccb70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccb74:
    // 0x1ccb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccb78:
    // 0x1ccb78: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1ccb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1ccb7c:
    // 0x1ccb7c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb80:
    // 0x1ccb80: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1ccb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1ccb84:
    // 0x1ccb84: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb88:
    // 0x1ccb88: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1ccb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1ccb8c:
    // 0x1ccb8c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb90:
    // 0x1ccb90: 0xac4401ec  sw          $a0, 0x1EC($v0)
    ctx->pc = 0x1ccb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 4));
label_1ccb94:
    // 0x1ccb94: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ccb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ccb98:
    // 0x1ccb98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccb9c:
    // 0x1ccb9c: 0xac6401e8  sw          $a0, 0x1E8($v1)
    ctx->pc = 0x1ccb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 4));
label_1ccba0:
    // 0x1ccba0: 0x3e00008  jr          $ra
label_1ccba4:
    if (ctx->pc == 0x1CCBA4u) {
        ctx->pc = 0x1CCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA0u;
        // 0x1ccba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBA8u;
        goto label_fallthrough_0x1ccba0;
    }
    ctx->pc = 0x1CCBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA0u;
        // 0x1ccba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccba0:
    ctx->pc = 0x1CCBA8u;
}
