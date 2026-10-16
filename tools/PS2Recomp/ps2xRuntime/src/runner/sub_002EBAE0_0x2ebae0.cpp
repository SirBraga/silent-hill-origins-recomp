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

// Function: sub_002EBAE0
// Address: 0x2ebae0 - 0x2ebbe8
void sub_002EBAE0_0x2ebae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBAE0_0x2ebae0");
#endif

    switch (ctx->pc) {
        case 0x2ebb0cu: goto label_2ebb0c;
        case 0x2ebb34u: goto label_2ebb34;
        case 0x2ebb40u: goto label_2ebb40;
        case 0x2ebb48u: goto label_2ebb48;
        case 0x2ebb68u: goto label_2ebb68;
        case 0x2ebb80u: goto label_2ebb80;
        case 0x2ebb88u: goto label_2ebb88;
        case 0x2ebb9cu: goto label_2ebb9c;
        case 0x2ebbc0u: goto label_2ebbc0;
        case 0x2ebbc8u: goto label_2ebbc8;
        case 0x2ebbd0u: goto label_2ebbd0;
        default: break;
    }

    ctx->pc = 0x2ebae0u;

    // 0x2ebae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebae4: 0xaf808c88  sw          $zero, -0x7378($gp)
    ctx->pc = 0x2ebae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 0));
    // 0x2ebae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ebae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ebaec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ebaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ebaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ebaf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ebaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ebafc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ebafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ebb00: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ebb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ebb04: 0xc0bae06  jal         func_2EB818
    ctx->pc = 0x2EBB04u;
    SET_GPR_U32(ctx, 31, 0x2EBB0Cu);
    ctx->pc = 0x2EBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB04u;
    // 0x2ebb08: 0xaf808c84  sw          $zero, -0x737C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB818u, 0x2EBB04u, 0x2EBB0Cu)) {
        return;
    }
    ctx->pc = 0x2EBB0Cu;
label_2ebb0c:
    // 0x2ebb0c: 0xae001418  sw          $zero, 0x1418($s0)
    ctx->pc = 0x2ebb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5144), GPR_U32(ctx, 0));
    // 0x2ebb10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb1c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2ebb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ebb20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebb24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ebb28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb2c: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EBB2Cu;
    SET_GPR_U32(ctx, 31, 0x2EBB34u);
    ctx->pc = 0x2EBB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB2Cu;
    // 0x2ebb30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EBB2Cu, 0x2EBB34u)) {
        return;
    }
    ctx->pc = 0x2EBB34u;
label_2ebb34:
    // 0x2ebb34: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x2ebb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x2ebb38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB38u;
    {
        const bool branch_taken_0x2ebb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB38u;
        // 0x2ebb3c: 0x8f829088  lw          $v0, -0x6F78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb38) {
            ctx->pc = 0x2EBB54u;
            goto label_2ebb54;
        }
    }
    ctx->pc = 0x2EBB40u;
label_2ebb40:
    // 0x2ebb40: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2EBB40u;
    SET_GPR_U32(ctx, 31, 0x2EBB48u);
    ctx->pc = 0x2EBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB40u;
    // 0x2ebb44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2EBB40u, 0x2EBB48u)) {
        return;
    }
    ctx->pc = 0x2EBB48u;
label_2ebb48:
    // 0x2ebb48: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x2ebb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x2ebb4c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2EBB4Cu;
    {
        const bool branch_taken_0x2ebb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB4Cu;
        // 0x2ebb50: 0x8f829088  lw          $v0, -0x6F78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb4c) {
            ctx->pc = 0x2EBB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebb40;
        }
    }
    ctx->pc = 0x2EBB54u;
label_2ebb54:
    // 0x2ebb54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ebb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ebb58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBB58u;
    {
        const bool branch_taken_0x2ebb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB58u;
        // 0x2ebb5c: 0x3c04001c  lui         $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb58) {
            ctx->pc = 0x2EBB68u;
            goto label_2ebb68;
        }
    }
    ctx->pc = 0x2EBB60u;
    // 0x2ebb60: 0xc0bb620  jal         func_2ED880
    ctx->pc = 0x2EBB60u;
    SET_GPR_U32(ctx, 31, 0x2EBB68u);
    ctx->pc = 0x2EBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB60u;
    // 0x2ebb64: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED880u, 0x2EBB60u, 0x2EBB68u)) {
        return;
    }
    ctx->pc = 0x2EBB68u;
label_2ebb68:
    // 0x2ebb68: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x2ebb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x2ebb6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ebb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ebb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBB70u;
    {
        const bool branch_taken_0x2ebb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB70u;
        // 0x2ebb74: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb70) {
            ctx->pc = 0x2EBB80u;
            goto label_2ebb80;
        }
    }
    ctx->pc = 0x2EBB78u;
    // 0x2ebb78: 0xc0bb620  jal         func_2ED880
    ctx->pc = 0x2EBB78u;
    SET_GPR_U32(ctx, 31, 0x2EBB80u);
    ctx->pc = 0x2EBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB78u;
    // 0x2ebb7c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED880u, 0x2EBB78u, 0x2EBB80u)) {
        return;
    }
    ctx->pc = 0x2EBB80u;
label_2ebb80:
    // 0x2ebb80: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EBB80u;
    SET_GPR_U32(ctx, 31, 0x2EBB88u);
    ctx->pc = 0x2ED908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED908u, 0x2EBB80u, 0x2EBB88u)) {
        return;
    }
    ctx->pc = 0x2EBB88u;
label_2ebb88:
    // 0x2ebb88: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x2ebb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x2ebb8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EBB8Cu;
    {
        const bool branch_taken_0x2ebb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb8c) {
            ctx->pc = 0x2EBBC8u;
            goto label_2ebbc8;
        }
    }
    ctx->pc = 0x2EBB94u;
    // 0x2ebb94: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2EBB94u;
    SET_GPR_U32(ctx, 31, 0x2EBB9Cu);
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2EBB94u, 0x2EBB9Cu)) {
        return;
    }
    ctx->pc = 0x2EBB9Cu;
label_2ebb9c:
    // 0x2ebb9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ebb9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbac: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2ebbb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ebbb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbb4: 0x278a8ca8  addiu       $t2, $gp, -0x7358
    ctx->pc = 0x2ebbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937768));
    // 0x2ebbb8: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2EBBB8u;
    SET_GPR_U32(ctx, 31, 0x2EBBC0u);
    ctx->pc = 0x2EBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBB8u;
    // 0x2ebbbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2EBBB8u, 0x2EBBC0u)) {
        return;
    }
    ctx->pc = 0x2EBBC0u;
label_2ebbc0:
    // 0x2ebbc0: 0xc0c8490  jal         func_321240
    ctx->pc = 0x2EBBC0u;
    SET_GPR_U32(ctx, 31, 0x2EBBC8u);
    ctx->pc = 0x321240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321240u, 0x2EBBC0u, 0x2EBBC8u)) {
        return;
    }
    ctx->pc = 0x2EBBC8u;
label_2ebbc8:
    // 0x2ebbc8: 0xc0ba444  jal         func_2E9110
    ctx->pc = 0x2EBBC8u;
    SET_GPR_U32(ctx, 31, 0x2EBBD0u);
    ctx->pc = 0x2E9110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9110u, 0x2EBBC8u, 0x2EBBD0u)) {
        return;
    }
    ctx->pc = 0x2EBBD0u;
label_2ebbd0:
    // 0x2ebbd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ebbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ebbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebbd8: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x2ebbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
    // 0x2ebbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBDCu;
        // 0x2ebbe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBE4u;
    // 0x2ebbe4: 0x0  nop
    ctx->pc = 0x2ebbe4u;
    // NOP
    ctx->pc = 0x2ebbe8u;
}
