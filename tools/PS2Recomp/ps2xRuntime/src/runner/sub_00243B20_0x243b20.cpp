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

// Function: sub_00243B20
// Address: 0x243b20 - 0x243b90
void sub_00243B20_0x243b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243B20_0x243b20");
#endif

    switch (ctx->pc) {
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        default: break;
    }

    ctx->pc = 0x243b20u;

label_243b20:
    // 0x243b20: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x243b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_243b24:
    // 0x243b24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_243b28:
    // 0x243b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_243b2c:
    // 0x243b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_243b30:
    // 0x243b30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_243b34:
    if (ctx->pc == 0x243B34u) {
        ctx->pc = 0x243B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B30u;
        // 0x243b34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B38u;
        goto label_243b38;
    }
    ctx->pc = 0x243B30u;
    {
        const bool branch_taken_0x243b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B30u;
        // 0x243b34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b30) {
            ctx->pc = 0x243B44u;
            goto label_243b44;
        }
    }
    ctx->pc = 0x243B38u;
label_243b38:
    // 0x243b38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_243b3c:
    // 0x243b3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_243b40:
    if (ctx->pc == 0x243B40u) {
        ctx->pc = 0x243B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B3Cu;
        // 0x243b40: 0x2446b5a0  addiu       $a2, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B44u;
        goto label_243b44;
    }
    ctx->pc = 0x243B3Cu;
    {
        const bool branch_taken_0x243b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B3Cu;
        // 0x243b40: 0x2446b5a0  addiu       $a2, $v0, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b3c) {
            ctx->pc = 0x243B4Cu;
            goto label_243b4c;
        }
    }
    ctx->pc = 0x243B44u;
label_243b44:
    // 0x243b44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x243b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_243b48:
    // 0x243b48: 0x2446b590  addiu       $a2, $v0, -0x4A70
    ctx->pc = 0x243b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_243b4c:
    // 0x243b4c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x243b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_243b50:
    // 0x243b50: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x243b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_243b54:
    // 0x243b54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_243b58:
    if (ctx->pc == 0x243B58u) {
        ctx->pc = 0x243B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B54u;
        // 0x243b58: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B5Cu;
        goto label_243b5c;
    }
    ctx->pc = 0x243B54u;
    {
        const bool branch_taken_0x243b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B54u;
        // 0x243b58: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b54) {
            ctx->pc = 0x243B80u;
            goto label_243b80;
        }
    }
    ctx->pc = 0x243B5Cu;
label_243b5c:
    // 0x243b5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x243b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_243b60:
    // 0x243b60: 0x24421130  addiu       $v0, $v0, 0x1130
    ctx->pc = 0x243b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4400));
label_243b64:
    // 0x243b64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x243b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243b68:
    // 0x243b68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243b6c:
    // 0x243b6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x243b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243b70:
    // 0x243b70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243b74:
    // 0x243b74: 0x40f809  jalr        $v0
label_243b78:
    if (ctx->pc == 0x243B78u) {
        ctx->pc = 0x243B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B74u;
        // 0x243b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B7Cu;
        goto label_243b7c;
    }
    ctx->pc = 0x243B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243B7Cu);
        ctx->pc = 0x243B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B74u;
        // 0x243b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B74u, 0x243B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243B7Cu;
label_243b7c:
    // 0x243b7c: 0x0  nop
    ctx->pc = 0x243b7cu;
    // NOP
label_243b80:
    // 0x243b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243b84:
    // 0x243b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243b88:
    // 0x243b88: 0x3e00008  jr          $ra
label_243b8c:
    if (ctx->pc == 0x243B8Cu) {
        ctx->pc = 0x243B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B88u;
        // 0x243b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B90u;
        goto label_fallthrough_0x243b88;
    }
    ctx->pc = 0x243B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B88u;
        // 0x243b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243b88:
    ctx->pc = 0x243B90u;
}
