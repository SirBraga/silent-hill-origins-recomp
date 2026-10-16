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

// Function: sub_0022AE08
// Address: 0x22ae08 - 0x22aea8
void sub_0022AE08_0x22ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE08_0x22ae08");
#endif

    switch (ctx->pc) {
        case 0x22ae08u: goto label_22ae08;
        case 0x22ae0cu: goto label_22ae0c;
        case 0x22ae10u: goto label_22ae10;
        case 0x22ae14u: goto label_22ae14;
        case 0x22ae18u: goto label_22ae18;
        case 0x22ae1cu: goto label_22ae1c;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae24u: goto label_22ae24;
        case 0x22ae28u: goto label_22ae28;
        case 0x22ae2cu: goto label_22ae2c;
        case 0x22ae30u: goto label_22ae30;
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae38u: goto label_22ae38;
        case 0x22ae3cu: goto label_22ae3c;
        case 0x22ae40u: goto label_22ae40;
        case 0x22ae44u: goto label_22ae44;
        case 0x22ae48u: goto label_22ae48;
        case 0x22ae4cu: goto label_22ae4c;
        case 0x22ae50u: goto label_22ae50;
        case 0x22ae54u: goto label_22ae54;
        case 0x22ae58u: goto label_22ae58;
        case 0x22ae5cu: goto label_22ae5c;
        case 0x22ae60u: goto label_22ae60;
        case 0x22ae64u: goto label_22ae64;
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae6cu: goto label_22ae6c;
        case 0x22ae70u: goto label_22ae70;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae78u: goto label_22ae78;
        case 0x22ae7cu: goto label_22ae7c;
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae84u: goto label_22ae84;
        case 0x22ae88u: goto label_22ae88;
        case 0x22ae8cu: goto label_22ae8c;
        case 0x22ae90u: goto label_22ae90;
        case 0x22ae94u: goto label_22ae94;
        case 0x22ae98u: goto label_22ae98;
        case 0x22ae9cu: goto label_22ae9c;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aea4u: goto label_22aea4;
        default: break;
    }

    ctx->pc = 0x22ae08u;

label_22ae08:
    // 0x22ae08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22ae0c:
    // 0x22ae0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22ae10:
    // 0x22ae10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22ae14:
    // 0x22ae14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22ae14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ae18:
    // 0x22ae18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22ae18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ae1c:
    // 0x22ae1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22ae20:
    // 0x22ae20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22ae24:
    // 0x22ae24: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_22ae28:
    // 0x22ae28: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x22ae28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_22ae2c:
    // 0x22ae2c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x22ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_22ae30:
    // 0x22ae30: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_22ae34:
    // 0x22ae34: 0x40f809  jalr        $v0
label_22ae38:
    if (ctx->pc == 0x22AE38u) {
        ctx->pc = 0x22AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE34u;
        // 0x22ae38: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE3Cu;
        goto label_22ae3c;
    }
    ctx->pc = 0x22AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AE3Cu);
        ctx->pc = 0x22AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE34u;
        // 0x22ae38: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE34u, 0x22AE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AE3Cu;
label_22ae3c:
    // 0x22ae3c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x22ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_22ae40:
    // 0x22ae40: 0x40f809  jalr        $v0
label_22ae44:
    if (ctx->pc == 0x22AE44u) {
        ctx->pc = 0x22AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE40u;
        // 0x22ae44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE48u;
        goto label_22ae48;
    }
    ctx->pc = 0x22AE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AE48u);
        ctx->pc = 0x22AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE40u;
        // 0x22ae44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE40u, 0x22AE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AE48u;
label_22ae48:
    // 0x22ae48: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x22ae48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_22ae4c:
    // 0x22ae4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22ae50:
    if (ctx->pc == 0x22AE50u) {
        ctx->pc = 0x22AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE4Cu;
        // 0x22ae50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE54u;
        goto label_22ae54;
    }
    ctx->pc = 0x22AE4Cu;
    {
        const bool branch_taken_0x22ae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE4Cu;
        // 0x22ae50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae4c) {
            ctx->pc = 0x22AE88u;
            goto label_22ae88;
        }
    }
    ctx->pc = 0x22AE54u;
label_22ae54:
    // 0x22ae54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ae58:
    // 0x22ae58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22ae5c:
    // 0x22ae5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22ae60:
    // 0x22ae60: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22ae64:
    // 0x22ae64: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_22ae68:
    // 0x22ae68: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_22ae6c:
    // 0x22ae6c: 0xc092848  jal         func_24A120
label_22ae70:
    if (ctx->pc == 0x22AE70u) {
        ctx->pc = 0x22AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE6Cu;
        // 0x22ae70: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE74u;
        goto label_22ae74;
    }
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x22AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE6Cu;
    // 0x22ae70: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22AE6Cu, 0x22AE74u)) {
        return;
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22ae78:
    // 0x22ae78: 0xc09281a  jal         func_24A068
label_22ae7c:
    if (ctx->pc == 0x22AE7Cu) {
        ctx->pc = 0x22AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE78u;
        // 0x22ae7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE80u;
        goto label_22ae80;
    }
    ctx->pc = 0x22AE78u;
    SET_GPR_U32(ctx, 31, 0x22AE80u);
    ctx->pc = 0x22AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE78u;
    // 0x22ae7c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22AE78u, 0x22AE80u)) {
        return;
    }
    ctx->pc = 0x22AE80u;
label_22ae80:
    // 0x22ae80: 0xa240002f  sb          $zero, 0x2F($s2)
    ctx->pc = 0x22ae80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 0));
label_22ae84:
    // 0x22ae84: 0x0  nop
    ctx->pc = 0x22ae84u;
    // NOP
label_22ae88:
    // 0x22ae88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22ae88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ae8c:
    // 0x22ae8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22ae8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22ae90:
    // 0x22ae90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22ae90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22ae94:
    // 0x22ae94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ae94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ae98:
    // 0x22ae98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ae9c:
    // 0x22ae9c: 0x3e00008  jr          $ra
label_22aea0:
    if (ctx->pc == 0x22AEA0u) {
        ctx->pc = 0x22AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE9Cu;
        // 0x22aea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEA4u;
        goto label_22aea4;
    }
    ctx->pc = 0x22AE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE9Cu;
        // 0x22aea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AEA4u;
label_22aea4:
    // 0x22aea4: 0x0  nop
    ctx->pc = 0x22aea4u;
    // NOP
    ctx->pc = 0x22aea8u;
}
