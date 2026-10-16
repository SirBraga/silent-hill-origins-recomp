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

// Function: sub_0022AEA8
// Address: 0x22aea8 - 0x22af48
void sub_0022AEA8_0x22aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AEA8_0x22aea8");
#endif

    switch (ctx->pc) {
        case 0x22aea8u: goto label_22aea8;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aeb0u: goto label_22aeb0;
        case 0x22aeb4u: goto label_22aeb4;
        case 0x22aeb8u: goto label_22aeb8;
        case 0x22aebcu: goto label_22aebc;
        case 0x22aec0u: goto label_22aec0;
        case 0x22aec4u: goto label_22aec4;
        case 0x22aec8u: goto label_22aec8;
        case 0x22aeccu: goto label_22aecc;
        case 0x22aed0u: goto label_22aed0;
        case 0x22aed4u: goto label_22aed4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aedcu: goto label_22aedc;
        case 0x22aee0u: goto label_22aee0;
        case 0x22aee4u: goto label_22aee4;
        case 0x22aee8u: goto label_22aee8;
        case 0x22aeecu: goto label_22aeec;
        case 0x22aef0u: goto label_22aef0;
        case 0x22aef4u: goto label_22aef4;
        case 0x22aef8u: goto label_22aef8;
        case 0x22aefcu: goto label_22aefc;
        case 0x22af00u: goto label_22af00;
        case 0x22af04u: goto label_22af04;
        case 0x22af08u: goto label_22af08;
        case 0x22af0cu: goto label_22af0c;
        case 0x22af10u: goto label_22af10;
        case 0x22af14u: goto label_22af14;
        case 0x22af18u: goto label_22af18;
        case 0x22af1cu: goto label_22af1c;
        case 0x22af20u: goto label_22af20;
        case 0x22af24u: goto label_22af24;
        case 0x22af28u: goto label_22af28;
        case 0x22af2cu: goto label_22af2c;
        case 0x22af30u: goto label_22af30;
        case 0x22af34u: goto label_22af34;
        case 0x22af38u: goto label_22af38;
        case 0x22af3cu: goto label_22af3c;
        case 0x22af40u: goto label_22af40;
        case 0x22af44u: goto label_22af44;
        default: break;
    }

    ctx->pc = 0x22aea8u;

label_22aea8:
    // 0x22aea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22aea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22aeac:
    // 0x22aeac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22aeb0:
    // 0x22aeb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22aeb4:
    // 0x22aeb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22aeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22aeb8:
    // 0x22aeb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22aeb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22aebc:
    // 0x22aebc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22aec0:
    // 0x22aec0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22aec4:
    // 0x22aec4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x22aec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_22aec8:
    // 0x22aec8: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x22aec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_22aecc:
    // 0x22aecc: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x22aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_22aed0:
    // 0x22aed0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_22aed4:
    // 0x22aed4: 0x40f809  jalr        $v0
label_22aed8:
    if (ctx->pc == 0x22AED8u) {
        ctx->pc = 0x22AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AED4u;
        // 0x22aed8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEDCu;
        goto label_22aedc;
    }
    ctx->pc = 0x22AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AEDCu);
        ctx->pc = 0x22AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AED4u;
        // 0x22aed8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AED4u, 0x22AEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AEDCu;
label_22aedc:
    // 0x22aedc: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_22aee0:
    // 0x22aee0: 0x40f809  jalr        $v0
label_22aee4:
    if (ctx->pc == 0x22AEE4u) {
        ctx->pc = 0x22AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE0u;
        // 0x22aee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEE8u;
        goto label_22aee8;
    }
    ctx->pc = 0x22AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AEE8u);
        ctx->pc = 0x22AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE0u;
        // 0x22aee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AEE0u, 0x22AEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AEE8u;
label_22aee8:
    // 0x22aee8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x22aee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_22aeec:
    // 0x22aeec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22aef0:
    if (ctx->pc == 0x22AEF0u) {
        ctx->pc = 0x22AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEECu;
        // 0x22aef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEF4u;
        goto label_22aef4;
    }
    ctx->pc = 0x22AEECu;
    {
        const bool branch_taken_0x22aeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEECu;
        // 0x22aef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aeec) {
            ctx->pc = 0x22AF28u;
            goto label_22af28;
        }
    }
    ctx->pc = 0x22AEF4u;
label_22aef4:
    // 0x22aef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22aef8:
    // 0x22aef8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22aefc:
    // 0x22aefc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22af00:
    // 0x22af00: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22af04:
    // 0x22af04: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x22af04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_22af08:
    // 0x22af08: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x22af08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_22af0c:
    // 0x22af0c: 0xc092848  jal         func_24A120
label_22af10:
    if (ctx->pc == 0x22AF10u) {
        ctx->pc = 0x22AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF0Cu;
        // 0x22af10: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF14u;
        goto label_22af14;
    }
    ctx->pc = 0x22AF0Cu;
    SET_GPR_U32(ctx, 31, 0x22AF14u);
    ctx->pc = 0x22AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF0Cu;
    // 0x22af10: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22AF0Cu, 0x22AF14u)) {
        return;
    }
    ctx->pc = 0x22AF14u;
label_22af14:
    // 0x22af14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22af18:
    // 0x22af18: 0xc09281a  jal         func_24A068
label_22af1c:
    if (ctx->pc == 0x22AF1Cu) {
        ctx->pc = 0x22AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF18u;
        // 0x22af1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF20u;
        goto label_22af20;
    }
    ctx->pc = 0x22AF18u;
    SET_GPR_U32(ctx, 31, 0x22AF20u);
    ctx->pc = 0x22AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF18u;
    // 0x22af1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22AF18u, 0x22AF20u)) {
        return;
    }
    ctx->pc = 0x22AF20u;
label_22af20:
    // 0x22af20: 0xa240004f  sb          $zero, 0x4F($s2)
    ctx->pc = 0x22af20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
label_22af24:
    // 0x22af24: 0x0  nop
    ctx->pc = 0x22af24u;
    // NOP
label_22af28:
    // 0x22af28: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22af28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22af2c:
    // 0x22af2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22af2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22af30:
    // 0x22af30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22af30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22af34:
    // 0x22af34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22af34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22af38:
    // 0x22af38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22af38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22af3c:
    // 0x22af3c: 0x3e00008  jr          $ra
label_22af40:
    if (ctx->pc == 0x22AF40u) {
        ctx->pc = 0x22AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF3Cu;
        // 0x22af40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF44u;
        goto label_22af44;
    }
    ctx->pc = 0x22AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF3Cu;
        // 0x22af40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AF44u;
label_22af44:
    // 0x22af44: 0x0  nop
    ctx->pc = 0x22af44u;
    // NOP
    ctx->pc = 0x22af48u;
}
