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

// Function: sub_0016DCA0
// Address: 0x16dca0 - 0x16dd98
void sub_0016DCA0_0x16dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DCA0_0x16dca0");
#endif

    switch (ctx->pc) {
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd6cu: goto label_16dd6c;
        default: break;
    }

    ctx->pc = 0x16dca0u;

    // 0x16dca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16dca4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16dca8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16dcac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16dcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16dcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16dcb8: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16DCB8u;
    SET_GPR_U32(ctx, 31, 0x16DCC0u);
    ctx->pc = 0x16DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCB8u;
    // 0x16dcbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16DCB8u, 0x16DCC0u)) {
        return;
    }
    ctx->pc = 0x16DCC0u;
label_16dcc0:
    // 0x16dcc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16dcc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16dcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcc8: 0x8c46f6d0  lw          $a2, -0x930($v0)
    ctx->pc = 0x16dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6D0u));
    // 0x16dccc: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16DCCCu;
    SET_GPR_U32(ctx, 31, 0x16DCD4u);
    ctx->pc = 0x16DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCCCu;
    // 0x16dcd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16DCCCu, 0x16DCD4u)) {
        return;
    }
    ctx->pc = 0x16DCD4u;
label_16dcd4:
    // 0x16dcd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dcd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dcdc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16DCDCu;
    {
        const bool branch_taken_0x16dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCDCu;
        // 0x16dce0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcdc) {
            ctx->pc = 0x16DD7Cu;
            goto label_16dd7c;
        }
    }
    ctx->pc = 0x16DCE4u;
    // 0x16dce4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dce8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dcec: 0x0  nop
    ctx->pc = 0x16dcecu;
    // NOP
label_16dcf0:
    // 0x16dcf0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16dcf4: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16DCF4u;
    {
        const bool branch_taken_0x16dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCF4u;
        // 0x16dcf8: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcf4) {
            ctx->pc = 0x16DD2Cu;
            goto label_16dd2c;
        }
    }
    ctx->pc = 0x16DCFCu;
    // 0x16dcfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DCFCu;
    {
        const bool branch_taken_0x16dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCFCu;
        // 0x16dd00: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcfc) {
            ctx->pc = 0x16DD14u;
            goto label_16dd14;
        }
    }
    ctx->pc = 0x16DD04u;
    // 0x16dd04: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x16DD04u;
    {
        const bool branch_taken_0x16dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD04u;
        // 0x16dd08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd04) {
            ctx->pc = 0x16DD40u;
            goto label_16dd40;
        }
    }
    ctx->pc = 0x16DD0Cu;
    // 0x16dd0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16DD0Cu;
    {
        const bool branch_taken_0x16dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD0Cu;
        // 0x16dd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd0c) {
            ctx->pc = 0x16DD58u;
            goto label_16dd58;
        }
    }
    ctx->pc = 0x16DD14u;
label_16dd14:
    // 0x16dd14: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16dd18: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16dd1c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16DD1Cu;
    SET_GPR_U32(ctx, 31, 0x16DD24u);
    ctx->pc = 0x16DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD1Cu;
    // 0x16dd20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16DD1Cu, 0x16DD24u)) {
        return;
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16DD24u;
    {
        const bool branch_taken_0x16dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD24u;
        // 0x16dd28: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd24) {
            ctx->pc = 0x16DD54u;
            goto label_16dd54;
        }
    }
    ctx->pc = 0x16DD2Cu;
label_16dd2c:
    // 0x16dd2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd30: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16DD30u;
    SET_GPR_U32(ctx, 31, 0x16DD38u);
    ctx->pc = 0x16DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD30u;
    // 0x16dd34: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16DD30u, 0x16DD38u)) {
        return;
    }
    ctx->pc = 0x16DD38u;
label_16dd38:
    // 0x16dd38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16DD54u;
            goto label_16dd54;
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16dd44: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16DD44u;
    SET_GPR_U32(ctx, 31, 0x16DD4Cu);
    ctx->pc = 0x16DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD44u;
    // 0x16dd48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16DD44u, 0x16DD4Cu)) {
        return;
    }
    ctx->pc = 0x16DD4Cu;
label_16dd4c:
    // 0x16dd4c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x16dd50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16dd54:
    // 0x16dd54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16dd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16dd58:
    // 0x16dd58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dd60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd64: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16DD64u;
    SET_GPR_U32(ctx, 31, 0x16DD6Cu);
    ctx->pc = 0x16DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD64u;
    // 0x16dd68: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16DD64u, 0x16DD6Cu)) {
        return;
    }
    ctx->pc = 0x16DD6Cu;
label_16dd6c:
    // 0x16dd6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dd70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dd74: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16DD74u;
    {
        const bool branch_taken_0x16dd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD74u;
        // 0x16dd78: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd74) {
            ctx->pc = 0x16DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dcf0;
        }
    }
    ctx->pc = 0x16DD7Cu;
label_16dd7c:
    // 0x16dd7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16dd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dd80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16dd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dd84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16dd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dd88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD8Cu;
        // 0x16dd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DD94u;
    // 0x16dd94: 0x0  nop
    ctx->pc = 0x16dd94u;
    // NOP
    ctx->pc = 0x16dd98u;
}
