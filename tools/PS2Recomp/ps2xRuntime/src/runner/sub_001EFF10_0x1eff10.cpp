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

// Function: sub_001EFF10
// Address: 0x1eff10 - 0x1eff68
void sub_001EFF10_0x1eff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFF10_0x1eff10");
#endif

    switch (ctx->pc) {
        case 0x1eff10u: goto label_1eff10;
        case 0x1eff14u: goto label_1eff14;
        case 0x1eff18u: goto label_1eff18;
        case 0x1eff1cu: goto label_1eff1c;
        case 0x1eff20u: goto label_1eff20;
        case 0x1eff24u: goto label_1eff24;
        case 0x1eff28u: goto label_1eff28;
        case 0x1eff2cu: goto label_1eff2c;
        case 0x1eff30u: goto label_1eff30;
        case 0x1eff34u: goto label_1eff34;
        case 0x1eff38u: goto label_1eff38;
        case 0x1eff3cu: goto label_1eff3c;
        case 0x1eff40u: goto label_1eff40;
        case 0x1eff44u: goto label_1eff44;
        case 0x1eff48u: goto label_1eff48;
        case 0x1eff4cu: goto label_1eff4c;
        case 0x1eff50u: goto label_1eff50;
        case 0x1eff54u: goto label_1eff54;
        case 0x1eff58u: goto label_1eff58;
        case 0x1eff5cu: goto label_1eff5c;
        case 0x1eff60u: goto label_1eff60;
        case 0x1eff64u: goto label_1eff64;
        default: break;
    }

    ctx->pc = 0x1eff10u;

label_1eff10:
    // 0x1eff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eff14:
    // 0x1eff14: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1eff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1eff18:
    // 0x1eff18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1eff1c:
    // 0x1eff1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eff20:
    // 0x1eff20: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1eff20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1eff24:
    // 0x1eff24: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1eff24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1eff28:
    // 0x1eff28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1eff2c:
    // 0x1eff2c: 0x40f809  jalr        $v0
label_1eff30:
    if (ctx->pc == 0x1EFF30u) {
        ctx->pc = 0x1EFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF2Cu;
        // 0x1eff30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF34u;
        goto label_1eff34;
    }
    ctx->pc = 0x1EFF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFF34u);
        ctx->pc = 0x1EFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF2Cu;
        // 0x1eff30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF2Cu, 0x1EFF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFF34u;
label_1eff34:
    // 0x1eff34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1eff38:
    // 0x1eff38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1eff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eff3c:
    // 0x1eff3c: 0x40f809  jalr        $v0
label_1eff40:
    if (ctx->pc == 0x1EFF40u) {
        ctx->pc = 0x1EFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF3Cu;
        // 0x1eff40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF44u;
        goto label_1eff44;
    }
    ctx->pc = 0x1EFF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFF44u);
        ctx->pc = 0x1EFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF3Cu;
        // 0x1eff40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF3Cu, 0x1EFF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFF44u;
label_1eff44:
    // 0x1eff44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1eff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1eff48:
    // 0x1eff48: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1eff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eff4c:
    // 0x1eff4c: 0x40f809  jalr        $v0
label_1eff50:
    if (ctx->pc == 0x1EFF50u) {
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF54u;
        goto label_1eff54;
    }
    ctx->pc = 0x1EFF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFF54u);
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF4Cu, 0x1EFF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFF54u;
label_1eff54:
    // 0x1eff54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eff54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eff58:
    // 0x1eff58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eff5c:
    // 0x1eff5c: 0x3e00008  jr          $ra
label_1eff60:
    if (ctx->pc == 0x1EFF60u) {
        ctx->pc = 0x1EFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF5Cu;
        // 0x1eff60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF64u;
        goto label_1eff64;
    }
    ctx->pc = 0x1EFF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF5Cu;
        // 0x1eff60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF64u;
label_1eff64:
    // 0x1eff64: 0x0  nop
    ctx->pc = 0x1eff64u;
    // NOP
    ctx->pc = 0x1eff68u;
}
